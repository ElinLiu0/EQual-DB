from ast import Pass
from email import message
from hashlib import sha256
from stat import S_IREAD
from getpass import getpass
import os
from datetime import datetime
class UserRegister:
    def __init__(self,UserName,Password,Authority) -> None:
        """
        This function is used to create a new user
        
        :param UserName: The username of the user
        :param Password: The password of the user
        :param Authority: The authority of the user. This is a string that can be either "admin" or "user"
        """
        self.UserName = UserName
        self.Password = Password
        self.Authority = Authority
    def DoRegiest(self):
        """
        This function is used to create a new user in the system.
            The function will create a new user in the specified group.
            The function will also create a new user's password in the specified group.
            The function will also create a new user's authority in the specified group.
            The function will also create a new user's password in the specified group.
        :return: A string that contains the information of the operation.
        """
        user = self.UserName
        password = self.Password
        authority = self.Authority
        if authority == "Adminer":
            with open(f"./Users/Admin/{user}.ua","w") as UAWritter:
                json_build = {"name":self.UserName,"authority":"Admin","password":sha256(password.encode('utf-8')).hexdigest()}
                UAWritter.write(str(json_build))
            UAWritter.close()
            if os.path.exists(f"./Users/Admin/{user}.ua"):
                os.chmod(f"./Users/Admin/{user}.ua",S_IREAD)  
                print(f"User {self.UserName} has successfully created in {authority} group!Operation Done at : {datetime.now()}")
                message = f"User {self.UserName} has successfully created in {authority} group!Operation Done at : {datetime.now()}"
                return message         
        else:
            with open(f"./Users/Normal/{user}.ua","w") as UAWritter:
                json_build = {"name":self.UserName,"authority":"user","password":sha256(password.encode('utf-8')).hexdigest()}
                UAWritter.write(str(json_build))
            UAWritter.close()
            if os.path.exists(f"./Users/Normal/{user}.ua"):
                os.chmod(f"./Users/Normal/{user}.ua",S_IREAD)
                print(f"User {self.UserName} has successfully created in {authority} group!Operation Done at : {datetime.now()}")
                message = f"User {self.UserName} has successfully created in {authority} group!Operation Done at : {datetime.now()}"
                return message
