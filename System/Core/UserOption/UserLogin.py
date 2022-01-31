from hashlib import sha256
import json
from getpass import getpass
import os
from datetime import datetime
from ..InterFace import Shell
class UserLogin:
    def __init__(self,gotUserName,gotPassword) -> None:
        self.gotUserName = gotUserName
        self.gotPassword = gotPassword
    def userCheck(self):
        ua_admin_list = None
        ua_normal_list = None
        for root,path,files in os.walk("../../../Users/Admin"):
            ua_admin_list = files
        for root,path,files in os.walk("../../../Users/Normal"):
            ua_normal_list = files
        if f"{self.gotUserName}.ua" in ua_admin_list:
            with open(f"../../../Users/Admin/{self.gotUserName}.ua","r") as json_certificator:
                userInfo_ua = json_certificator.read().replace("'",'"')
            userInfo_Json = json.loads(userInfo_ua)
            return userInfo_Json
        elif f"{self.gotPassword}.ua" in ua_admin_list:
            with open(f"../../../Users/Normal/{self.gotUserName}.ua","r") as json_certificator:
                userInfo_ua = json_certificator.read().replace("'",'"')
            userInfo_Json = json.loads(userInfo_ua)
            return userInfo_Json
        else:
            print("Invalid username certification,Not Exist user!")
    def login(self):
        userInfo_Json = self.userCheck()
        if sha256(self.gotPassword.encode('utf-8')).hexdigest() == userInfo_Json['password']:
            print(f"As user {self.gotUserName} login sucess!Last login at {datetime.now()}")
            Shell.userShell.Shell()
        elif self.gotPassword == None:
            print("Invalid password input,Login Denied!")
        else:
            print("Uncorrect password certification,Login Denied!")
def loginShell():
    gotUserName = input("Type user name here : ")
    gotPassword = getpass("Type password here : ")
    userLogin = UserLogin(gotUserName=gotUserName,gotPassword=gotPassword)
    userLogin.login()
loginShell()