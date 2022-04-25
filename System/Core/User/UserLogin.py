from hashlib import sha256
import json
import os
from datetime import datetime
class UserLogin:
    def __init__(self,gotUserName,gotPassword) -> None:
        """
        The __init__ function is called when an instance of the class is created
        
        :param gotUserName: The username of the user that is trying to login
        :param gotPassword: The password that the user entered
        """
        self.gotUserName = gotUserName
        self.gotPassword = gotPassword
    def userCheck(self):
        """
        This function is used to check the user's username and password.
            If the user's username and password are correct, it will return the user's information.
            If the user's username and password are not correct, it will return a message "Invalid username
        certification,Not Exist user!"
        :return: A dictionary of the user's information.
        """
        ua_admin_list = []
        ua_normal_list = []
        for root,path,files in os.walk("./Users/Admin"):
            ua_admin_list = files
        for root,path,file in os.walk("./Users/Normal"):
            ua_normal_list = file
        if f"{self.gotUserName}.ua" in ua_admin_list:
            with open(f"./Users/Admin/{self.gotUserName}.ua","r") as json_certificator:
                userInfo_ua = json_certificator.read().replace("'",'"')
            userInfo_Json = json.loads(userInfo_ua)
            return userInfo_Json
        elif f"{self.gotPassword}.ua" in ua_admin_list:
            with open(f"./Users/Normal/{self.gotUserName}.ua","r") as json_certificator:
                userInfo_ua = json_certificator.read().replace("'",'"')
            userInfo_Json = json.loads(userInfo_ua)
            return userInfo_Json
        else:
            print("Invalid username certification,Not Exist user!")
    def login(self):
        """
        If the user input the correct password, the function will return the user's information in json
        format.
            If the user input the wrong password, the function will return None.
            If the user input None, the function will return None.
        :return: A dictionary of user information.
        """
        userInfo_Json = self.userCheck()
        if sha256(self.gotPassword.encode('utf-8')).hexdigest() == userInfo_Json['password']:
            message = {
                "isLogin":True,
                "indentityName":userInfo_Json['name'],
                "indentifiedTime":str(datetime.now())
            }
            print(json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True))
            return userInfo_Json
        elif self.gotPassword == None:
            message = {
                "isLogin":False,
                "indentityName":userInfo_Json['name'],
                "indentifiedTime":str(datetime.now()),
                "failedReason":"Invalid password input,Login Denied!"
            }
            print(json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True))
        else:
            message = {
                "isLogin":False,
                "indentityName":userInfo_Json['name'],
                "indentifiedTime":str(datetime.now()),
                "failedReason":"Uncorrect password certification,Login Denied!"
            }
            print(json.dumps(message))