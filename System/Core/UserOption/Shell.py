from DatabaseOption import CreateDataBase
from DatabaseOption import CreateDataFrame
from DatabaseOption import CurrentVersion
from DatabaseOption import DropDataBase
from DatabaseOption import DropDataFrame
from DatabaseOption import ImportData
from DatabaseOption import ShowDataBases
from UserAssign import UserRegister
from DatabaseOption import DiskUsage
from DatabaseOption import DataFrameRecover
from getpass import getpass
import re
import os
class userShell:
    def __init__(self) -> None:
        pass
    def Shell():
        frameList = None
        while True:
            recieve = input("DB Shell >>> : ")
            if recieve in ["quit","quit()"]:
                print('Good Bye!')
                break
            # This CLI Command Should Like : CREATE DATABASE 'database_name',
            # and system will automatically makeing.
            if re.match("CREATE DATABASE",recieve).span() != None:
                try:
                    boot = CreateDataBase.CreateDataBase(BaseName=recieve[16:])
                    boot.Make()
                except Exception as Error:
                    print(f"ERR : Couldnt build a database,cause by error below : \n{str(Error)}")
            # This method is should Create a blank dataframe for the database which specified as keyword
            if re.match("CREATE DATAFRAME FOR",recieve).span() != None:
                startIndex = recieve.index("DATAFRAME")+len("DATAFRAME")
                IndexFor = recieve.index("FOR")+len("FOR")
                IndexWith = recieve.index("WITH")
                IndexWithStart = recieve.index("WITH")+len("WITH")
                # so the full CLI command should be : CREATE DATAFRAME 'dataframe_name' FOR 'database_name' \
                # with {data(should wrote the data like JSON froamt)}
                dataFrame = recieve[startIndex : IndexFor].replace(" ","")
                dataBase = recieve[IndexFor : IndexWith].replace(" ","")
                data = recieve[IndexWithStart : ]
                boot = CreateDataFrame.CreateDataFrame(database=dataBase,frameName=dataFrame,data=data)
                boot.Create()
            if recieve == "TEMP VERSION":
                CurrentVersion.CurrentVesion()
            # The Full CLI Command Should Like : IMPORT DATA FROM 'sourcePath' TO 'database'.'dataframe WITH 'encoder'
            if re.match("IMPORT DATA FROM",recieve).span() != None:
                try:
                    fromIndex = recieve.index("FROM")
                    ToIndex = recieve.index("TO")
                    WithIndex = recieve.index("WITH")
                    baseAndFrame = recieve[ToIndex + 2 : WithIndex].replace(" ","")
                    sourcePath = recieve[fromIndex + 4:ToIndex]
                    targetBase = baseAndFrame[:baseAndFrame.index(".")]
                    targetFrame = baseAndFrame[baseAndFrame.index(".") + 1 : ]
                    encoder = recieve[WithIndex : ]
                    ImportData.ImportData(sourcePath=sourcePath,targetDataBase=targetBase,frameName=targetFrame,encoder=encoder)
                except Exception as Error:
                    print(f"ERR : During importing data from sourcepath : {sourcePath},there was error occured cause by below:\n{str(Error)}")
            if recieve == "SHOW DATABASES":
                ShowDataBases.ShowDataBases().showInfo()
            # The CLI Command Line Should be like : ADD USER 'user_name' TO 'user_group(admin or nonadmin)'
            if re.match("ADD USER",recieve).span() != None:
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
            if recieve == "SHOW DISK USAGE":
                DiskUsage.showUsage()
            if recieve == "SHOW DATABASES":
                ShowDataBases.ShowDataBases()
            # The CLI Command Line should like : RECOVER 'targetDataBase.targetDataFrame'
            if re.match("RECOVER",recieve).span() != None:
                dotIndex = recieve.index(".")
                targetBase = recieve[:dotIndex].replace("RECOVER ","")
                targetFrame = recieve[dotIndex + 1 : ]
                try:
                    DataFrameRecover.DataFrameRecover(targetDataBase=targetBase,targetDataFrame=targetFrame)
                except Exception as Error:
                    print(f"ERR : Cant roll back the dataframe to before vesion caused by : {str(Error)}")
            if re.match("DROP DATABASE",recieve).span() != None:
                targetDataBase = recieve[recieve.index('DATABASE') : ]
                DropDataBase.DropDataBase(targetBase=targetDataBase)
            if re.match("DROP DATAFRAME",recieve).span() != None:
                dotIndex = recieve.index(".")
                targetFrame = recieve[dotIndex :].replace(" ","")
                targetBase = recieve[:dotIndex].replace("DROP DATAFRAME ","")
                DropDataFrame.DropDataFrame(targetBase=targetBase,targetFrame=targetFrame)

