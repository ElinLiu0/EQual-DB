from System.Core.Database.CreateDataBase import CreateDataBase
from System.Core.DataFrame.CreateDataFrame import CreateDataFrame
from System.Core.Database.CurrentVersion import CurrentVersion
from System.Core.Database.DropDataBase import DropDataBase
from System.Core.DataFrame.DropDataFrame import DropDataFrame
from System.Core.Database.ImportData import ImportData
from System.Core.Database.ShowDataBases import ShowDataBases
from System.Core.Database.ShowDataFrame import ShowDataFrames
from System.Core.User.UserAssign import UserRegister
from System.Core.Database.DiskUsage import ShowUsage
from System.Core.DataFrame.DataFrameRecover import DataFrameRecover
from System.Core.Database.UseDataBase import UseDataBase
from System.Core.DataFrame.ShowSelect import ShowSelect
from System.Core.User.UserLogin import UserLogin
from System.Core.Database.ExportCache import ExportCache
from System.Core.DataFrame.AppendData import AppendData
from System.Core.DataFrame.DropCol import DropColumns
from System.Core.DataFrame.DropRow import DropRow
from System.Core.DataFrame.InsertCols import InsertColumns
from utils.logs.config import *
import logging
from utils.Test.Speedtest import SpeedTest
from System.Core.User.Dropuser import DropUser
from System.Core.User.ReAuth import ReAuth
import re
import os
import time
from getpass import getpass
def Shell():
    logdir = "logs"
    logging.basicConfig(filename=DEFAULT_LOG_NAME,format=DEFAULT_FORMAT,level=DEFAULT_LEVEL)
    # This Variable were prepared for use function and select function yet
    userNameGot = input("Enter the login username : ")
    userPasswordGot = getpass("Enter the password : ")
    try:
        boot = UserLogin(userNameGot,userPasswordGot)
        Userinfo= boot.login()
        logging.info(f"user {userNameGot} has login to server.")
    except Exception as e:
        logging.info(f"user {userNameGot} has trying login to server,but failed.")
    assert Userinfo != None
    global caching_Database
    caching_Database = None
    global caching_datastream
    caching_datastream = None
    global caching_frame_name
    caching_frame_name = None
    logging.info("Successfully initialize caching database and dataframe.")
    while True:
        start_time = time.time()
        try:
            recieve = input("DB Shell >>> : ")
            if recieve in ["quit","quit()","QUIT"]:
                print('Good Bye!')
                break
            # This CLI Command Should Like : CREATE Database 'Database_name',
            # and system will automatically makeing.
            elif re.match("create db",recieve) != None:
                try:
                    boot = CreateDataBase(BaseName=recieve[16:],userAuthority=Userinfo['authority'],username=Userinfo['name'])
                    message = boot.Make()
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            # This method is should Create a blank dataframe for the Database which specified as keyword
            elif re.match("create dataframe",recieve) != None:
                startIndex = recieve.index("dataframe")+len("dataframe")
                IndexFor = recieve.index("for")+len("for")
                IndexWith = recieve.index("with")
                IndexWithStart = recieve.index("with")+len("with")
                # so the full CLI command should be : CREATE DATAFRAME 'dataframe_name' FOR 'Database_name' \
                # with [{data(should wrote the data like JSON froamt)}]
                try:
                    dataFrame = recieve[startIndex : IndexFor-3].replace(" ","")
                    Database = recieve[IndexFor : IndexWith].replace(" ","")
                    data = recieve[IndexWithStart : ]
                    boot = CreateDataFrame(Database=Database,frameName=dataFrame,data=data)
                    message = boot.Create()
                    logging.info(message=message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif recieve == "version":
                CurrentVersion()
            # The Full CLI Command Should Like : IMPORT DATA FROM 'sourcePath' TO 'Database'.'dataframe WITH 'encoder'
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
                    # This usallly need to a Database create before
                    # for example : IMPORT DATA FROM {url_path} TO test.test WITH UTF-8
                    # thats need you exist Database test before importing data.
                    boot = ImportData(sourcePath=sourcePath,targetDatabase=targetBase,frameName=targetFrame,
                        encoder=encoder,userAuthority=Userinfo['authority'],user=Userinfo['name'])
                    message = boot.Processing()
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif recieve == "show dbs":
                try:
                    response = ShowDataBases().showInfo(user=Userinfo['name'])
                    logging.info(response)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif recieve == "show dfs":
                try:
                    boot = ShowDataFrames(targetBase=caching_Database)
                    message = boot.showInfo(user=Userinfo['name'])
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
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
                        message = boot.DoRegiest()
                        logging.info(message)
                    except Exception as e:
                        print(e)
                        file = e.__traceback__.tb_frame.f_globals["__file__"]
                        line = e.__traceback__.tb_lineno
                        logging.error(str(e)+'in file'+file+'at'+str(line))
                else:
                    print("ERR : Can not make resgisteration of user under none root login!")
            elif recieve == "usage":
                try:
                    boot = ShowUsage()
                    boot.showUsage()
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            # The CLI Command Line should like : RECOVER 'targetDatabase.targetDataFrame'
            elif re.match("recover",recieve) != None:
                dotIndex = recieve.index(".")
                targetBase = recieve[:dotIndex].replace("recover ","")
                targetFrame = recieve[dotIndex + 1 : ]
                try:
                    boot = DataFrameRecover(targetDatabase=targetBase,targetDataFrame=targetFrame)
                    message = boot.Recovering()
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))

            elif re.match("drop Database",recieve) != None:
                try:
                    boot = DropDataBase(targetBase=caching_Database,userAuthority=Userinfo['authority'])
                    message = boot.Drop()
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            # The Drop DataFrame CLI Should Like : DROP DATAFRAME 'Database'.'dataframe'
            elif re.match("drop dataframe",recieve) != None:
                dotIndex = recieve.index(".")
                targetFrame = recieve[dotIndex :].replace(" ","")
                targetBase = recieve[:dotIndex].replace("drop dataframe ","")
                try:
                    boot = DropDataFrame(targetBase=targetBase,targetFrame=targetFrame)
                    message = boot.Drop()
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif re.match("use database",recieve) != None:
                DatabaseUsed = recieve[recieve.index('database') + len('database'):].replace(" ","")
                try:
                    boot = UseDataBase(targetBase=DatabaseUsed)
                    status,message = boot.useBase()
                    if status == True:
                        caching_Database = DatabaseUsed
                        print(f"Database {DatabaseUsed} is now caching.")
                        logging
                    elif status == False:
                        print(f"Invalid Specified Database name :{DatabaseUsed},please check that is really exist?")
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif recieve == "test speed":
                try:
                    boot = SpeedTest()
                    boot.test()
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif re.match("select",recieve) != None:
                try:
                    frame = recieve[recieve.index("from")+4 :].replace(" ","")
                    colRange = recieve[recieve.index("*")+1 : recieve.index("from")].replace(" ","")
                    if "limit" in recieve:
                        limit = float(recieve[recieve.index("limit") + 5:].replace(" ",""))
                    else:
                        limit = None
                    boot = ShowSelect(targetBase=caching_Database,targetFrame=frame,colRange=colRange,limation=limit)
                    message = boot.shown()
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif recieve == "cashed base":
                # This command could tell the user that which Database now caching in memory
                # To activate the caching_Database variable,need to use "USE Database" func first
                print(f"Currently caching with Database : {caching_Database}")
            # Example : EXPORT CACHE AS (export_file_name) IN (export_file_format)
            elif re.match("export cache as ",recieve) != None:
                save_name = recieve[recieve.index('as') + len('as') : recieve.index('in')].replace("")
                save_format =  recieve[recieve.index('in') + len('in') : ].replace(" ","")
                try:
                    boot = ExportCache(data=caching_dataframe,name=save_name,format=save_format)
                    message = boot.Export()
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif re.match("append data to",recieve) != None:
                # By Default,this method will only can be used when select a frame from Database
                # It not only can be insert a row datastream,you can even use this method to
                # merging two same cols dataframe
                try:
                    boot = AppendData(Base=caching_Database,Frame=caching_dataframe,Data=data)
                    caching_dataframe,message = boot.Append()
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif re.match("drop cols",recieve) != None:
                # This method allows user to given a paramiter as list type to drop multiple cols
                colName = recieve[recieve.index("cols")]
                try:
                    boot = DropColumns(Base=caching_Database,Frame=caching_dataframe,colName=colName)
                    caching_dataframe,message = boot.Drop()
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif re.match("drpw rows",recieve) != None:
                # This method allows user to given a paramiter as list type to drop multiple cols
                RowIndex = recieve[recieve.index("rows")]
                try:
                    boot = DropRow(Base=caching_Database,Frame=caching_dataframe,RowIndex=RowIndex)
                    caching_dataframe,message = boot.Drop()
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif re.match("insert cols",recieve) != None:
                withIndex = recieve[recieve.index("WITH")]
                colIndex = recieve[recieve.index("COLS")]
                colName = recieve[colIndex + len("COLS") : withIndex].replace(" ","")
                data = recieve[withIndex :].replace(" ","")
                try:
                    boot = InsertColumns(Base=caching_Database,Frame=caching_frame_name,colName=colName,colData=data)
                    caching_dataframe,message = boot.Insert()
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif re.match("drop user",recieve) != None:
                targetUser = recieve[recieve.index("user")+4 : ].replace(" ","")
                try:
                    boot = DropUser(ua=Userinfo['authority'])
                    message = boot.DropUser(targetUser=targetUser)
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            elif re.match("reauth user",recieve) != None:
                targetUser = recieve[recieve.index("user")+4 : ].replace(" ","")
                try:
                    boot = ReAuth(ua=Userinfo['authority'],sysua=os.popen("whoami").read().replace("\n",""))
                    message = boot.ReAuth(targetUser=targetUser)
                    logging.info(message)
                except Exception as e:
                    print(e)
                    file = e.__traceback__.tb_frame.f_globals["__file__"]
                    line = e.__traceback__.tb_lineno
                    logging.error(str(e)+'in file'+file+'at'+str(line))
            else:
                print("ERR : Unsupported shell command input!Operation refused!")
            end_time = time.time()
            print(f"Query Done!Processing with {round(end_time - start_time,2)} ms")
        except Exception as e:
            print(e)
            file = e.__traceback__.tb_frame.f_globals["__file__"]
            line = e.__traceback__.tb_lineno
            logging.error(str(e)+'in file'+file+'at'+str(line))
if __name__ == "__main__":
    Shell()