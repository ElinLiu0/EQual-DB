import os
from datetime import datetime
class DropDataBase:
    def __init__(self,targetBase) -> None:
        self.targetBase = targetBase
    def Drop(self):
        for root,base,frame in os.walk("../../../Data/"):
            if self.targetBase in base:
                print(f"Database {self.targetBase} has been successfully delete!Operation Done at {datetime.now()}")
                os.removedirs(f'../../../Data/{self.targetBase}')
            else:
                print("Invalid Exists Database name,Drop Failed!")