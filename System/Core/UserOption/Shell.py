from DatabaseOption import CreateDataBase
from DatabaseOption import CreateDataFrame
from DatabaseOption import CurrentVersion
from DatabaseOption import DropDataBase
from DatabaseOption import DropDataFrame
from DatabaseOption import ImportData
from DatabaseOption import ShowDataBases
from UserAssign import UserRegister
from getpass import getpass
import re
import os
class userShell:
    def __init__(self) -> None:
        pass
    def Shell():
        while True:
            recieve = input("DB Shell >>> : ")
            if recieve in ["quit","quit()"]:
                print('Good Bye!')
                break
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
                dataFrame = recieve[startIndex : IndexFor].replace(" ","")
                dataBase = recieve[IndexFor : IndexWith].replace(" ","")
                data = recieve[IndexWithStart : ]
                boot = CreateDataFrame.CreateDataFrame(database=dataBase,frameName=dataFrame,data=data)
                boot.Create()
            if recieve in ['--v','--version','-version','-v','-V','--V']:
                CurrentVersion.CurrentVesion()
            if re.match("IMPORT DATA FROM",recieve).span() != None:
                start = recieve.index("FROM")
                end = recieve.index("TO")
                sourcePath = recieve[start + 4:end]
                targetBase = recieve[end + 3 :].replace(" ", "")[0:1]
                targetFrame = recieve[end + 3 :].replace(" ", "")[1:]
                encoder = recieve[31:]
                ImportData.ImportData(sourcePath=sourcePath,targetDataBase=targetBase,frameName=targetFrame,encoder=encoder)
            if recieve == "SHOW DATABASES":
                ShowDataBases.ShowDataBases().showInfo()
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


