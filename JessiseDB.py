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
from System.Core.UserOption.Dropuser import DropUser
from System.Core.UserOption.ReAuth import ReAuth
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
                elif re.match("create database",recieve) != None:
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
                elif re.match("create dataframe",recieve) != None:
                    startIndex = recieve.index("dataframe")+len("dataframe")
                    IndexFor = recieve.index("for")+len("for")
                    IndexWith = recieve.index("with")
                    IndexWithStart = recieve.index("with")+len("with")
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
                elif recieve == "version":
                    CurrentVersion()               
                # The Full CLI Command Should Like : IMPORT DATA FROM 'sourcePath' TO 'database'.'dataframe WITH 'encoder'
                elif re.match("import data from",recieve) != None:
                    try:
                        fromIndex = recieve.index("from")
                        ToIndex = recieve.index("to")
                        WithIndex = recieve.index("with")
                        baseAndFrame = recieve[ToIndex + 2 : WithIndex].replace(" ","")
                        sourcePath = recieve[fromIndex + 4:ToIndex].replace(" ","")
                        targetBase = baseAndFrame[:baseAndFrame.index(".")]
                        targetFrame = baseAndFrame[baseAndFrame.index(".") + 1 : ]
                        encoder = recieve[WithIndex + len('with') : ]
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
                elif recieve == "show databases":
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
                elif recieve == "show dataframes":
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
                elif re.match("add user",recieve) != None:
                    if os.popen("whoami").read().replace("\n","") == "root":
                        startIndex = recieve.index("user")
                        endIndex = recieve.index("to")
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
                elif recieve == "usage":
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
                elif re.match("recover",recieve) != None:
                    dotIndex = recieve.index(".")
                    targetBase = recieve[:dotIndex].replace("recover ","")
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
                        
                elif re.match("drop database",recieve) != None:
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
                elif re.match("drop dataframe",recieve) != None:
                    dotIndex = recieve.index(".")
                    targetFrame = recieve[dotIndex :].replace(" ","")
                    targetBase = recieve[:dotIndex].replace("drop dataframe ","")
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
                elif re.match("use database",recieve) != None:
                    dataBaseUsed = recieve[recieve.index('database') + len('database'):].replace(" ","")
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
                elif recieve == "test speed":
                    try:
                        boot = SpeedTest()
                        boot.test()
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)   
                elif re.match("select",recieve) != None:
                    try:
                        frame = recieve[recieve.index("from")+4 :].replace(" ","")
                        colRange = recieve[recieve.index("*")+1 : recieve.index("from")].replace(" ","")
                        if "limit" in recieve:
                            limit = float(recieve[recieve.index("limit") + 5:].replace(" ",""))
                        else:
                            limit = None
                        boot = ShowSelect(targetBase=caching_database,targetFrame=frame,colRange=colRange,limation=limit)
                        message = LogInit.Sucess(boot.shown())
                        LogInit.writeLog(message=message)
                    except Exception as e:
                            file = e.__traceback__.tb_frame.f_globals["__file__"]
                            line = e.__traceback__.tb_lineno
                            message = LogInit.Error(file,line)
                            print(message)
                            LogInit.writeLog(logName,message=message)
                elif recieve == "cashed base":
                    # This command could tell the user that which database now caching in memory
                    # To activate the caching_database variable,need to use "USE DATABASE" func first
                    print(f"Currently caching with database : {caching_database}")   
                # Example : EXPORT CACHE AS (export_file_name) IN (export_file_format)
                elif re.match("export cache as ",recieve) != None:
                    save_name = recieve[recieve.index('as') + len('as') : recieve.index('in')].replace("")
                    save_format =  recieve[recieve.index('in') + len('in') : ].replace(" ","")
                    try:
                        boot = ExportCache(data=caching_dataframe,name=save_name,format=save_format)
                        message = LogInit.Sucess(boot.Export())
                        LogInit.writeLog(message=message)
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif re.match("append data to",recieve) != None:
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
                elif re.match("drop cols",recieve) != None:
                    # This method allows user to given a paramiter as list type to drop multiple cols
                    colName = recieve[recieve.index("cols")]
                    try:
                        boot = DropColumns(Base=caching_database,Frame=caching_dataframe,colName=colName)
                        caching_dataframe,message = boot.Drop()
                        message = LogInit.Sucess(message=message)
                        LogInit.writeLog(logName,message=message)
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif re.match("drpw rows",recieve) != None:
                    # This method allows user to given a paramiter as list type to drop multiple cols
                    RowIndex = recieve[recieve.index("rows")]
                    try:
                        boot = DropRow(Base=caching_database,Frame=caching_dataframe,RowIndex=RowIndex)
                        caching_dataframe,message = boot.Drop()
                        message = LogInit.Sucess(message=message)
                        LogInit.writeLog(logName,message=message)
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif re.match("insert cols",recieve) != None:
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
                elif re.match("drop user",recieve) != None:
                    targetUser = recieve[recieve.index("user")+4 : ].replace(" ","")
                    try:
                        boot = DropUser(ua=UserInfo['authority'])
                        message = LogInit.Sucess(boot.DropUser(targetUser=targetUser))
                        LogInit.writeLog(logName,message=message)
                    except Exception as e:
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        message = LogInit.Error(file,line)
                        print(message)
                        LogInit.writeLog(logName,message=message)
                elif re.match("reauth user",recieve) != None:
                    targetUser = recieve[recieve.index("user")+4 : ].replace(" ","")
                    try:
                        boot = ReAuth(ua=UserInfo['authority'],sysua=os.popen("whoami").read().replace("\n",""))
                        message = LogInit.Sucess(boot.ReAuth(targetUser=targetUser))
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