import os
from datetime import datetime
import shutil
class DropDataBase:
    def __init__(self,targetBase,userAuthority) -> None:
        self.targetBase = targetBase
        self.userAuthority = userAuthority
    def Drop(self):
        database_list = []
        for root,base,frame in os.walk("./Data"):
            for i in base:
                database_list.append(i)
        if self.userAuthority == "Admin":
            if self.targetBase in database_list:
                print(f"Database {self.targetBase} has been successfully delete!Operation Done at {datetime.now()}")
                shutil.rmtree(f'./Data/{self.targetBase}')
            else:
                print("Invalid Exists Database name,Drop Failed!")