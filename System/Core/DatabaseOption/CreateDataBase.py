import os
class CreateDataBase:
    def __init__(self,BaseName,userAuthority) -> None:
        self.BaseName = BaseName
        self.userAuthority = userAuthority
    def Make(self):
        if self.userAuthority == "Admin":
            os.mkdir(f"./Data/{self.BaseName}")
        else:
            print("ERR:Detect you are not a Adminer.Please Contact you DataBase Adminer to create.\nCreate Option Denied!")   
