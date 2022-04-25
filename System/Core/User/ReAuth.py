import os
import json
class ReAuth:
    def __init__(self,ua,sysua) -> None:
        """
        Paramas:
            ua : The user authority that given from user login check.
            sysua : The user authority that check from system itself
        """
        self.ua = ua
        self.sysua = sysua
    def ReAuth(self,targetUser):
        """
        A function that can change the authority of the user.
        
        :param targetUser: The user you want to change the authority
        :return: The return value is the result of the re authorization.
        """
        if self.sysua != "root" and self.ua == "Admin":
            raise PermissionError("Not root and Admin both,Operation Refused!")
        else:
            for root,path,file in os.walk("./User/Admin"):
                adminList = file
                if targetUser+".ua" in adminList:
                    newua = input(f"Please set the new authority of user {targetUser} : ")
                    if newua == "Admin":
                        return f"User {targetUser} is already one of Adminer."
                    else:
                        with open(f"./User/Admin/{targetUser}.ua","w+") as ReAuth:
                            userJson = json.loads(ReAuth.read())
                            userJson['authority'] = "Normal"
                            ReAuth.write(str(userJson))
                        message = {
                            "execCode":"OK",
                            "message":f"User {targetUser} is changed into normaluser."
                        }
                        return json.dumps(message)
            for root,path,file in os.walk("./User/Normal"):
                nonAdminList = file
                if targetUser+".ua" in nonAdminList:
                    newua = input(f"Please set the new authority of user {targetUser} : ")
                    if newua == "Normal":
                        return f"User {targetUser} is already one of normal."
                    else:
                        with open(f"./User/Normal/{targetUser}.ua","w+") as ReAuth:
                            userJson = json.loads(ReAuth.read())
                            userJson['authority'] = "Admin"
                            ReAuth.write(str(userJson))
                        message = {
                            "execCode":"OK",
                            "message":f"User {targetUser} is changed into Adminer."
                        }
                        return json.dumps(message)
