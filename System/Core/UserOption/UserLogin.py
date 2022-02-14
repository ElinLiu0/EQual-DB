from hashlib import sha256
import json
import os
from datetime import datetime
class UserLogin:
    def __init__(self,gotUserName,gotPassword) -> None:
        self.gotUserName = gotUserName
        self.gotPassword = gotPassword
    def userCheck(self):
        ua_admin_list = []
        ua_normal_list = []
        for root,path,files in os.walk("../../Users/Admin"):
            ua_admin_list = files
        for root,path,file in os.walk("../../Users/Normal"):
            ua_normal_list = file
        if f"{self.gotUserName}.ua" in ua_admin_list:
            with open(f"../../Users/Admin/{self.gotUserName}.ua","r") as json_certificator:
                userInfo_ua = json_certificator.read().replace("'",'"')
            userInfo_Json = json.loads(userInfo_ua)
            return userInfo_Json
        elif f"{self.gotPassword}.ua" in ua_admin_list:
            with open(f"../../Users/Normal/{self.gotUserName}.ua","r") as json_certificator:
                userInfo_ua = json_certificator.read().replace("'",'"')
            userInfo_Json = json.loads(userInfo_ua)
            return userInfo_Json
        else:
            print("Invalid username certification,Not Exist user!")
    def login(self):
        userInfo_Json = self.userCheck()
        if sha256(self.gotPassword.encode('utf-8')).hexdigest() == userInfo_Json['password']:
            print(f"As user {self.gotUserName} login sucess!Last login at {datetime.now()}")
            return userInfo_Json
        elif self.gotPassword == None:
            print("Invalid password input,Login Denied!")
        else:
            print("Uncorrect password certification,Login Denied!")
        