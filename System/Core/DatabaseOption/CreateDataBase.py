import os
class CreateDataBase:
    def __init__(self,BaseName,userAuthority) -> None:
        self.BaseName = BaseName
        self.userAuthority = userAuthority
    def Make(self):
        if self.userAuthority == "Admin":
            os.mkdir(f"./Data/{self.BaseName}")
            message = f"Successfully create database {self.BaseName}"
            return message