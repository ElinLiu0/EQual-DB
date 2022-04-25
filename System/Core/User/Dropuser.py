import json
import os
class DropUser:
    def __init__(self,ua):
        """
        Params:
            ua : the authority which were given from login check
        """
        self.authority = ua
    def DropUser(self,targetUser):
        """
        It removes a user from the system.
        
        :param targetUser: The user you want to remove
        :return: The return statement is returning the string "Sucessfully remove user xxxx"
        """
        if self.authority == "Admin":
            for root,path,files in "./Users/Admin":
                adminList = files
                if targetUser+".ua" in adminList:
                    osAuth = os.popen("whoami").read().replace("\n")
                    if osAuth == "root":
                        decide = input(f"Sure you wanna remove adminer {targetUser}?(Y/N)")
                        if decide == "Y":
                            os.remove(f"./User/Admin/{targetUser}.ua")
                            message = {
                                "execCode":"OK",
                                "message":f"Sucessfully remove adminer {targetUser}"
                            }
                            return json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True)
                        elif decide == "N":
                            pass
            for root,path,files in "./Users/Normal":
                nonAdminList = files
                if targetUser+".ua" in nonAdminList:
                    decide = input(f"Sure you wanna remove user {targetUser}?(Y/N)")
                    if decide == "Y":
                        os.remove(f"./User/Normal/{targetUser}.ua")
                        message = {
                            "execCode":"OK",
                            "message":f"Sucessfully remove user {targetUser}"
                        }
                        return json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True)
                    elif decide == "N":
                        pass
