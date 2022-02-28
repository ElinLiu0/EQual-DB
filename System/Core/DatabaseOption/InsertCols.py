import pandas as pd
import pickle
from datetime import datetime
import os
from stat import *
class InsertColumns:
    def __init__(self,Base:str,Frame:str,colName:str,colData:list) -> None:
        self.Base = Base
        self.Frame = Frame
        self.colName = colName
        self.colData = colData
        if type(self.colData) != list:
            raise TypeError("ERR : Uncorrect datatype to insert!")
    def Insert(self):
        df = pd.read_pickle(f"Data/{self.Base}/{self.Frame}.df")
        # Allow user to do a lambda or mathmetic expression
        exec("self.data="+self.data)
        df[self.colName] = self.data
        df.to_pickle(f"Data/{self.Base}/{self.Frame}.df")
        with open(f"Data/{self.Base}/{self.Frame}.rc","wb") as RecoverWritter:
            pickle.dump(f"Recover Chekup create at : {datetime.now()}\n{df.to_json()}",RecoverWritter)
        RecoverWritter.close()
        if os.path.exists(f"Data/{self.Base}/{self.Frame}.rc"):
            os.chmod(f"Data/{self.Base}/{self.Frame}.rc",S_IREAD)
        return df