print("Initalizing Moudles ...")
from System.Core.DatabaseOption.CreateDataBase import CreateDataBase
from System.Core.DatabaseOption.CreateDataFrame import CreateDataFrame
from System.Core.DatabaseOption.CurrentVersion import CurrentVersion
from System.Core.DatabaseOption.DropDataBase import DropDataBase
from System.Core.DatabaseOption.DropDataFrame import DropDataFrame
from System.Core.DatabaseOption.ImportData import ImportData
from System.Core.DatabaseOption.ShowDataBases import ShowDataBases
from System.Core.DatabaseOption.ShowDataFrame import ShowDataFrames
from System.Core.UserOption.UserAssign import UserRegister
from System.Core.DatabaseOption.DiskUsage import ShowUsage
from System.Core.DatabaseOption.DataFrameRecover import DataFrameRecover
from System.Core.DatabaseOption.UseDataBase import UseDataBase
from System.Core.DatabaseOption.ShowSelect import ShowSelect
from System.Core.UserOption.UserLogin import UserLogin
from System.Core.DatabaseOption.ExportCache import ExportCache
from System.Core.DatabaseOption.AppendData import AppendData
from System.Core.DatabaseOption.DropCol import DropColumns
from System.Core.DatabaseOption.DropRow import DropRow
from System.Core.DatabaseOption.InsertCols import InsertColumns
from utils.logs.logs import LogsInit
from utils.Test.Speedtest import SpeedTest
import re
import os
import time
from getpass import getpass
def Shell():
    logdir = "logs"
    LogInit = LogsInit(logdir=logdir)
    logName = LogInit.InitLog()
    # This Variable were prepared for use function and select function yet
    userNameGot = input("Enter the login username : ")
    userPasswordGot = getpass("Enter the password : ")
    try:
        boot = UserLogin(userNameGot,userPasswordGot)
        UserInfo= boot.login()
        message = LogInit.LoginSuccess(user=UserInfo['name']) 
    except Exception as e:
        message = LogInit.LoginFailed()
        print(message)
        logName = LogInit.InitLog()
        LogInit.writeLog(logName,message=message)
    if UserInfo != None:
        global caching_database
        caching_database = None
        global caching_datastream
        caching_datastream = None
        global caching_frame_name
        caching_frame_name = None
        LogInit.writeLog(logName,message=message)
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
                        message = LogInit.Sucess(boot.Make())
                        LogInit.writeLog(logName,message=message)                
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                # This method is should Create a blank dataframe for the database which specified as keyword
                elif re.match("CREATE DATAFRAME",recieve) != None:
                    startIndex = recieve.index("DATAFRAME")+len("DATAFRAME")
                    IndexFor = recieve.index("FOR")+len("FOR")
                    IndexWith = recieve.index("WITH")
                    IndexWithStart = recieve.index("WITH")+len("WITH")
                    # so the full CLI command should be : CREATE DATAFRAME 'dataframe_name' FOR 'database_name' \
                    # with [{data(should wrote the data like JSON froamt)}]
                    try:
                        dataFrame = recieve[startIndex : IndexFor-3].replace(" ","")
                        dataBase = recieve[IndexFor : IndexWith].replace(" ","")
                        data = recieve[IndexWithStart : ]
                        boot = CreateDataFrame(database=dataBase,frameName=dataFrame,data=data)
                        message = LogInit.Sucess(boot.Create())
                        LogInit.writeLog(logName,message=message)
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)        
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
                        boot = ImportData(sourcePath=sourcePath,targetDataBase=targetBase,frameName=targetFrame,
                            encoder=encoder,userAuthority=UserInfo['authority'],user=UserInfo['name'])
                        message = LogInit.Sucess(boot.Processing())
                        LogInit.writeLog(logName,message=message)
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif recieve == "SHOW DATABASES":
                    try:
                        boot = ShowDataBases()
                        message = LogInit.Sucess(boot.showInfo(user=UserInfo['name']))
                        LogInit.writeLog(message=message)              
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif recieve == "SHOW DATAFRAMES":
                    try:
                        boot = ShowDataFrames(targetBase=caching_database)
                        message = LogInit.Sucess(boot.showInfo())
                        LogInit.writeLog(message=message) 
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
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
                            message = LogInit.Sucess(boot.DoRegiest())
                            LogInit.writeLog(message=message)                       
                        except Exception as e:
                            file = e.__traceback__.tb_frame.f_globals["__file__"]
                            line = e.__traceback__.tb_lineno
                            message = LogInit.Error(file,line)
                            print(message)
                            LogInit.writeLog(logName,message=message)                
                    else:
                        print("ERR : Can not make resgisteration of user under none root login!")            
                elif recieve == "SHOW DISK USAGE":
                    try:
                        boot = ShowUsage()
                        boot.showUsage()                 
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)             
                # The CLI Command Line should like : RECOVER 'targetDataBase.targetDataFrame'
                elif re.match("RECOVER",recieve) != None:
                    dotIndex = recieve.index(".")
                    targetBase = recieve[:dotIndex].replace("RECOVER ","")
                    targetFrame = recieve[dotIndex + 1 : ]
                    try:
                        boot = DataFrameRecover(targetDataBase=targetBase,targetDataFrame=targetFrame)
                        message = LogInit.Sucess(boot.Recovering())
                        LogInit.writeLog(logName,message=message)                   
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                        
                elif re.match("DROP DATABASE",recieve) != None:
                    try:
                        boot = DropDataBase(targetBase=caching_database,userAuthority=UserInfo['authority'])    
                        message = LogInit.Sucess(boot.Drop())
                        LogInit.writeLog(message=message)              
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                # The Drop DataFrame CLI Should Like : DROP DATAFRAME 'database'.'dataframe'
                elif re.match("DROP DATAFRAME",recieve) != None:
                    dotIndex = recieve.index(".")
                    targetFrame = recieve[dotIndex :].replace(" ","")
                    targetBase = recieve[:dotIndex].replace("DROP DATAFRAME ","")
                    try:
                        boot = DropDataFrame(targetBase=targetBase,targetFrame=targetFrame)
                        message = LogInit.Sucess(boot.Drop())
                        LogInit.writeLog(message=message)
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif re.match("USE DATABASE",recieve) != None:
                    dataBaseUsed = recieve[recieve.index('DATABASE') + len('DATABASE'):].replace(" ","")
                    try:
                        boot = UseDataBase(targetBase=dataBaseUsed)
                        status,message = boot.useBase()
                        if status == True:
                            caching_database = dataBaseUsed
                            print(f"Database {dataBaseUsed} is now caching.")
                            message = LogInit.Sucess(message=message)
                            LogInit.writeLog(message=message)
                        elif status == False:
                            print(f"Invalid Specified Database name :{dataBaseUsed},please check that is really exist?")
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif recieve == "SPEEDTEST":
                    try:
                        boot = SpeedTest()
                        boot.test()
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)   
                elif re.match("SELECT",recieve) != None:
                    # Defaultly CLI command should like a normal sql like command 
                    # Example : SELECT * FROM {frame_name}
                    fromIndex = recieve.index('FROM')
                    extract =  recieve[recieve.index('SELECT') + len('SELECT') : fromIndex] 
                    usingFrame = recieve[fromIndex + 4:]
                    caching_frame_name = usingFrame
                    # With limitation example should like 
                    # Example : SELECT * FROM {frame_name} LIMIT {an integer limitation,
                    # default 5000,can over it if need!}
                    global limitation
                    limitation = None
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
                                boot = ShowSelect(targetBase=caching_database,targetFrame=usingFrame,colRange=extract,limation=np.inf)
                        # Do mathmetic checking
                        # This method allows user do multiple complex mathmetic functions
                        # But the coloumns should default with 'df' on it or API wouldnt do the process
                        # such as : SELECT df['a']+df['b'] FROM {frame_name}
                        math_symblos = ["*","^","-","+","/","%","//"]
                        for i in extract:
                            # if mathmetic symbols in extract command areas
                            if i in math_symblos:
                                # Then do mathShown() methods
                                caching_dataframe = boot.mathShown()
                                print(f"INFO : Switching frame {usingFrame}")
                        # Do lambda checking
                        # This method allows user wrote a full lambda expression to use
                        # Just like the normal way you do on Pandas
                        # such as : SELECT df['tf'] = df['yn'].apply(lambda x:True if x == 'yes' else False) FROM {frame_name}
                        if "lambda" in extract:
                            caching_dataframe = boot.lambdaShown()
                            print(f"INFO : Switching frame {usingFrame}")
                        else:
                            caching_dataframe = boot.shown()
                            print(f"INFO : Switching frame {usingFrame}")
                    except Exception as e:
                            file = e.__traceback__.tb_frame.f_globals["__file__"]
                            line = e.__traceback__.tb_lineno
                            message = LogInit.Error(file,line)
                            print(message)
                            LogInit.writeLog(logName,message=message)
                elif recieve == "WHICH BASE":
                    # This command could tell the user that which database now caching in memory
                    # To activate the caching_database variable,need to use "USE DATABASE" func first
                    print(f"Currently caching with database : {caching_database}")   
                # Example : EXPORT CACHE AS (export_file_name) IN (export_file_format)
                elif re.match("EXPORT CACHE AS",recieve) != None:
                    save_name = recieve[recieve.index('AS') + len('AS') : recieve.index('IN')].replace("")
                    save_format =  recieve[recieve.index('IN') + len('IN') : ].replace(" ","")
                    try:
                        boot = ExportCache(data=caching_dataframe,name=save_name,format=save_format)
                        boot.Export()
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif re.match("APPEND DATA TO",recieve) != None:
                    # By Default,this method will only can be used when select a frame from database
                    # It not only can be insert a row datastream,you can even use this method to 
                    # merging two same cols dataframe
                    try:
                        boot = AppendData(Base=caching_database,Frame=caching_dataframe,Data=data)
                        caching_dataframe,message = boot.Append()
                        message = LogInit.Sucess(message=message)
                        LogInit.writeLog(message=message)
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif re.match("DROP COLS",recieve) != None:
                    # This method allows user to given a paramiter as list type to drop multiple cols
                    colName = recieve[recieve.index("COLS")]
                    try:
                        boot = DropColumns(Base=caching_database,Frame=caching_dataframe,colName=colName)
                        caching_dataframe,message = boot.Drop()
                        message = LogInit.Sucess(message=message)
                        LogInit.writeLog(message=message)
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif re.match("DROP ROWS",recieve) != None:
                    # This method allows user to given a paramiter as list type to drop multiple cols
                    RowIndex = recieve[recieve.index("ROWS")]
                    try:
                        boot = DropRow(Base=caching_database,Frame=caching_dataframe,RowIndex=RowIndex)
                        caching_dataframe,message = boot.Drop()
                        message = LogInit.Sucess(message=message)
                        LogInit.Sucess(message=message)
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif re.match("INSERT COLS",recieve) != None:
                    withIndex = recieve[recieve.index("WITH")]
                    colIndex = recieve[recieve.index("COLS")]
                    colName = recieve[colIndex + len("COLS") : withIndex].replace(" ","")
                    data = recieve[withIndex :].replace(" ","")
                    try:
                        boot = InsertColumns(Base=caching_database,Frame=caching_frame_name,colName=colName,colData=data)
                        caching_dataframe,message = boot.Insert()
                        message = LogInit.Sucess(message=message)
                        LogInit.writeLog(logName,message=message)
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                else:
                    print("ERR : Unsupported shell command input!Operation refused!")   
                end_time = time.time()
                print(f"Query Done!Processing with {round(end_time - start_time,2)} ms")           
            except Exception as e:
                file = e.__traceback__.tb_frame.f_globals["__file__"]
                line = e.__traceback__.tb_lineno
                message = LogInit.Error(file,line)
                print(message)
                LogInit.writeLog(logName,message=message)
if __name__ == "__main__":
    Shell()
