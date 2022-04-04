from email import message
import os
class UseDataBase:
    def __init__(self,targetBase) -> None:
        self.targetBase = targetBase
    def useBase(self):
        DataBaseList = []
        for root,path,files in os.walk(f"./Data"):
            for i in path:
                DataBaseList.append(i)
        if self.targetBase in DataBaseList:
            message = f"database {self.targetBase} has been used!"
            return True,message
        else:
            return False