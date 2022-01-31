import os
class CreateDataBase:
    def __init__(self,BaseName) -> None:
        self.BaseName = BaseName
    def Make(self):
        user_authority = os.popen("whoami").read().replace("\n","")
        if user_authority == "root":
            os.mkdir(f"../../Data/{self.BaseName}")
        else:
            print("ERR:Detect you are not a Adminer.Please Contact you DataBase Adminer to create.\nCreate Option Denied!")   
