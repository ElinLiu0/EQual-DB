import os
import json
class UseDataBase:
    def __init__(self,targetBase) -> None:
        """
        The __init__ function is called when an instance of a class is created
        
        :param targetBase: The base directory where the target files are located
        """
        self.targetBase = targetBase
    def useBase(self):
        """
        If the database has been used, return True and a message.
            If the database has not been used, return False and a message
        :return: A tuple of two elements. The first element is a boolean value, which indicates whether the
        database has been used. The second element is a string, which is a message to indicate whether the
        database has been used.
        """
        DataBaseList = []
        for root,path,files in os.walk(f"./Data"):
            for i in path:
                DataBaseList.append(i)
        if self.targetBase in DataBaseList:
            message = {
                'execCode':'OK',
                'usedDB':self.targetBase
            }
            print(json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True))
            message = f"database {self.targetBase} has been used!"
            return True,message
        else:
            message = {
                'execCode':'Failed',
                'reason':'Database not found in source.'
            }
            return False