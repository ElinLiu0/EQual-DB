print("Initalizing Moudles ...")
try:
    from DatabaseOption.CreateDataBase import CreateDataBase
    from DatabaseOption.CreateDataFrame import CreateDataFrame
    from DatabaseOption.CurrentVersion import CurrentVersion
    from DatabaseOption.DropDataBase import DropDataBase
    from DatabaseOption.DropDataFrame import DropDataFrame
    from DatabaseOption.ImportData import ImportData
    from DatabaseOption.ShowDataBases import ShowDataBases
    from DatabaseOption.ShowDataFrame import ShowDataFrames
    from UserOption.UserAssign import UserRegister
    from DatabaseOption.DiskUsage import ShowUsage
    from DatabaseOption.DataFrameRecover import DataFrameRecover
    from DatabaseOption.UseDataBase import UseDataBase
    from Test.Speedtest import SpeedTest
    from getpass import getpass
    import re
    import os
    import time
except Exception as Error:
    print(f"During Initalizing moudles,there was an error occured by : {str(Error)}")
def Shell():
    # This Variable were prepared for use function and select function yet
    caching_database = None
    while True:
        start_time = time.time()
        try:
            recieve = input("DB Shell >>> : ")
            if recieve in ["quit","quit()","QUIT"]:
                print('Good Bye!')
                break
            # This CLI Command Should Like : CREATE DATABASE 'database_name',
            # and system will automatically makeing.
            elif re.match("CREATE DATABASE",recieve) != None:
                try:
                    boot = CreateDataBase(BaseName=recieve[16:])
                    boot.Make()
                    
                except Exception as Error:
                    print(f"ERR : Couldnt build a database,cause by error below : \n{str(Error)}")
            # This method is should Create a blank dataframe for the database which specified as keyword
            elif re.match("CREATE DATAFRAME",recieve) != None:
                startIndex = recieve.index("DATAFRAME")+len("DATAFRAME")
                IndexFor = recieve.index("FOR")+len("FOR")
                IndexWith = recieve.index("WITH")
                IndexWithStart = recieve.index("WITH")+len("WITH")
                # so the full CLI command should be : CREATE DATAFRAME 'dataframe_name' FOR 'database_name' \
                # with [{data(should wrote the data like JSON froamt)}]
                dataFrame = recieve[startIndex : IndexFor-3].replace(" ","")
                dataBase = recieve[IndexFor : IndexWith].replace(" ","")
                data = recieve[IndexWithStart : ]
                boot = CreateDataFrame(database=dataBase,frameName=dataFrame,data=data)
                boot.Create()            
            elif recieve == "TEMP VERSION":
                CurrentVersion()               
            # The Full CLI Command Should Like : IMPORT DATA FROM 'sourcePath' TO 'database'.'dataframe WITH 'encoder'
            elif re.match("IMPORT DATA FROM",recieve) != None:
                try:
                    fromIndex = recieve.index("FROM")
                    ToIndex = recieve.index("TO")
                    WithIndex = recieve.index("WITH")
                    baseAndFrame = recieve[ToIndex + 2 : WithIndex].replace(" ","")
                    sourcePath = recieve[fromIndex + 4:ToIndex]
                    targetBase = baseAndFrame[:baseAndFrame.index(".")]
                    targetFrame = baseAndFrame[baseAndFrame.index(".") + 1 : ]
                    encoder = recieve[WithIndex : ]
                    ImportData(sourcePath=sourcePath,targetDataBase=targetBase,frameName=targetFrame,encoder=encoder)                   
                except Exception as Error:
                    print(f"ERR : During importing data from sourcepath : {sourcePath},there was error occured cause by below:\n{str(Error)}")
            elif recieve == "SHOW DATABASES":
                try:
                    boot = ShowDataBases()
                    boot.showInfo()
                    
                except Exception as Error:
                    print(f"ERR : Could not load the databases folder because : {str(Error)}")
            elif recieve == "SHOW DATAFRAMES":
                try:
                    boot = ShowDataFrames()
                    boot.showInfo()    
                except Exception as Error:
                    print(F"ERR : Colud not show dataframe trees because :\n{str(Error)}")
            # The CLI Command Line Should be like : ADD USER 'user_name' TO 'user_group(admin or nonadmin)'
            elif re.match("ADD USER",recieve) != None:
                if os.popen("whoami").read().replace("\n","") == "root":
                    startIndex = recieve.index("USER")
                    endIndex = recieve.index("TO")
                    addUserName = recieve[startIndex + 4 : endIndex].replace(" ","")
                    addUserAuthority = recieve[endIndex + 2:].replace(" ","")
                    addUserPasswd = getpass(f"Specify the password of {addUserName} to continue : ")
                    try:
                        boot = UserRegister(UserName=addUserName,Password=addUserPasswd,Authority=addUserAuthority)
                        boot.DoRegiest()                       
                    except Exception as Error:
                        print(f"ERR : During creating user {addUserName},there was an error caused by : {Error}")                       
                else:
                    print("ERR : Can not make resgisteration of user under none root login!")            
            elif recieve == "SHOW DISK USAGE":
                try:
                    boot = ShowUsage()
                    boot.showUsage()
                    
                except Exception as Error:
                    print(f"ERR : During checkout the disk partition usage,there was error caused by :\n{str(Error)}")                 
            # The CLI Command Line should like : RECOVER 'targetDataBase.targetDataFrame'
            elif re.match("RECOVER",recieve) != None:
                dotIndex = recieve.index(".")
                targetBase = recieve[:dotIndex].replace("RECOVER ","")
                targetFrame = recieve[dotIndex + 1 : ]
                try:
                    DataFrameRecover(targetDataBase=targetBase,targetDataFrame=targetFrame)
                    
                except Exception as Error:
                    print(f"ERR : Cant roll back the dataframe to before vesion caused by : {str(Error)}")
                    
            elif re.match("DROP DATABASE",recieve) != None:
                try:
                    boot = DropDataBase(targetBase=caching_database)    
                    boot.Drop()                
                except Exception as Error:
                    print(f"ERR : During Dropping database : {caching_database},there was error occured by : {str(Error)}")    
            # The Drop DataFrame CLI Should Like : DROP DATAFRAME 'database'.'dataframe'
            elif re.match("DROP DATAFRAME",recieve) != None:
                dotIndex = recieve.index(".")
                targetFrame = recieve[dotIndex :].replace(" ","")
                targetBase = recieve[:dotIndex].replace("DROP DATAFRAME ","")
                try:
                    boot = DropDataFrame(targetBase=targetBase,targetFrame=targetFrame)
                    boot.Drop()
                except Exception as Error:
                    print(f"ERR : During Drooping dataframe {targetBase}.{targetFrame},there was an error caused by : {str(Error)}")
            elif re.match("USE DATABASE",recieve) != None:
                dataBaseUsed = recieve[recieve.index('DATABASE') + len('DATABASE'):].replace(" ","")
                boot = UseDataBase(targetBase=dataBaseUsed)
                if boot.useBase() == True:
                    caching_database = dataBaseUsed
                    print(f"Database {dataBaseUsed} is now caching.")
                elif boot.useBase() == False:
                    print(f"Invalid Specified Database name :{dataBaseUsed},please check that is really exist?")
            elif recieve == "SPEEDTEST":
                boot = SpeedTest()
                boot.test()               
            else:
                print("ERR : Unsupported shell command input!Operation refused!")   
            end_time = time.time()
            print(f"Query Done!Processing with {round(end_time - start_time,2)} ms")           
        except Exception as Error:
            print(f"ERR : Shell prompt has occured error : {str(Error)}")
