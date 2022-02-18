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
            return True
        else:
            return False