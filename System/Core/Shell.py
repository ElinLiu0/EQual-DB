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
    from DatabaseOption.ShowSelect import ShowSelect
    from Test.Speedtest import SpeedTest
    from getpass import getpass
    from UserOption.UserLogin import UserLogin
    import re
    import os
    import time
    from getpass import getpass
except Exception as Error:
    print(f"During Initalizing moudles,there was an error occured by : {str(Error)}")
def Shell():
    # This Variable were prepared for use function and select function yet
    userNameGot = input("Enter the login username : ")
    userPasswordGot = getpass("Enter the password : ")
    try:
        boot = UserLogin(userNameGot,userPasswordGot)
        UserInfo= boot.login()
    except Exception as Error:
        print(f"ERR : During use {userNameGot} to login,there was error occured below:\n{str(Error)}")
    if UserInfo != None:
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
                        boot = CreateDataBase(BaseName=recieve[16:],userAuthority=UserInfo['authority'])
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
                        sourcePath = recieve[fromIndex + 4:ToIndex].replace(" ","")
                        targetBase = baseAndFrame[:baseAndFrame.index(".")]
                        targetFrame = baseAndFrame[baseAndFrame.index(".") + 1 : ]
                        encoder = recieve[WithIndex + len('WITH') : ]
                        # This usallly need to a database create before
                        # for example : IMPORT DATA FROM {url_path} TO test.test WITH UTF-8
                        # thats need you exist database test before importing data.
                        boot = ImportData(sourcePath=sourcePath,targetDataBase=targetBase,frameName=targetFrame,encoder=encoder)
                        boot.Processing()
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
                        boot = DropDataBase(targetBase=caching_database,userAuthority=UserInfo['authority'])    
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
                elif re.match("SELECT",recieve) != None:
                    # Defaultly CLI command should like a normal sql like command 
                    # Example : SELECT * FROM {frame_name}
                    fromIndex = recieve.index('FROM')
                    extract =  recieve[recieve.index('SELECT') + len('SELECT') : fromIndex] 
                    usingFrame = recieve[fromIndex + 4:]
                    # With limitation example should like 
                    # Example : SELECT * FROM {frame_name} LIMIT {an integer limitation,
                    # default 5000,can over it if need!}
                    if "LIMIT" in recieve:
                        limitIndex = recieve.index("LIMIT")
                        limitation = int(recieve[limitIndex + len('LIMIT') :])
                    else:
                        pass
                    try:
                        if limitation != None:
                            if caching_database != None:
                                boot = ShowSelect(targetBase=caching_database,targetFrame=usingFrame,colRange=extract,limation=limitation)
                        else:
                            if caching_database != None:
                                boot = ShowSelect(targetBase=caching_database,targetFrame=usingFrame,colRange=extract)
                        # Do mathmetic checking
                        # This method allows user do multiple complex mathmetic functions
                        # But the coloumns should default with 'df' on it or API wouldnt do the process
                        # such as : SELECT df['a']+df['b'] FROM {frame_name}
                        math_symblos = ["*","^","-","+","/","%","//"]
                        for i in extract:
                            # if mathmetic symbols in extract command areas
                            if i in math_symblos:
                                # Then do mathShown() methods
                                boot.mathShown()
                        # Do lambda checking
                        # This method allows user wrote a full lambda expression to use
                        # Just like the normal way you do on Pandas
                        # such as : SELECT df['tf'] = df['yn'].apply(lambda x:True if x == 'yes' else False) FROM {frame_name}
                        if "lambda" in extract:
                            boot.lambdaShown()
                    except Exception as Error:
                        print(f"ERR : During doing selection on {usingFrame},there was an error caused by below : \n{str(Error)}")
                elif recieve == "WHICH BASE":
                    # This command could tell the user that which database now caching in memory
                    # To activate the caching_database variable,need to use "USE DATABASE" func first
                    print(f"Currently caching with database : {caching_database}")       
                else:
                    print("ERR : Unsupported shell command input!Operation refused!")   
                end_time = time.time()
                print(f"Query Done!Processing with {round(end_time - start_time,2)} ms")           
            except Exception as Error:
                print(f"ERR : Shell prompt has occured error : {str(Error)}")
if __name__ == "__main__":
    Shell()
