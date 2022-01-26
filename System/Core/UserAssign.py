from ast import Pass
from hashlib import sha256
from stat import S_IREAD
from getpass import getpass
import os
class UserRegister:
    def __init__(self,UserName,Password,Authority) -> None:
        self.UserName = UserName
        self.Password = Password
        self.Authority = Authority
    def DoRegiest(self):
        user = self.UserName
        password = self.Password
        authority = self.Authority
        if authority == "Adminer":
            with open(f"../../Users/Admin/{user}.ua","w") as UAWritter:
                json_build = {"name":self.UserName,"authority":"Admin","password":sha256(password.encode('utf-8')).hexdigest()}
                UAWritter.write(str(json_build))
                os.chmod(f"../../Users/Admin/{user}.ua",S_IREAD)
            UAWritter.close()
        else:
            with open(f"../../Users/Normal/{user}.ua","w") as UAWritter:
                json_build = {"name":self.UserName,"authority":"user","password":sha256(password.encode('utf-8')).hexdigest()}
                UAWritter.write(str(json_build))
                os.chmod(f"../../Users/Normal/{user}.ua",S_IREAD)
            UAWritter.close()
def CLI():
    print("Welcome To Use JessieDB and Here is a prompt Shell for user registeration.")
    print("----------------------------------------")
    userInputName = input("Please Specify The UserName First : ")
    userInputPassword = getpass("Then is the Password : ")
    if os.popen("whoami").read().replace("\n","") == "root":
        userInputAuthority = input(f"Detect that you are The root\nThen you can specify the Authority of {userInputName} : ")
        Register = UserRegister(UserName=userInputName,Password=userInputPassword,Authority=userInputAuthority)
        Register.DoRegiest()
        print(f"User {userInputName} has been Created!")
    else:
        print("You are not the system Adminer,Permission Denied!")

CLI()