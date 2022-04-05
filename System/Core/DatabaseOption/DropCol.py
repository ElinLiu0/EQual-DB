from email import message
import pandas as pd
import pickle
from datetime import datetime
import os
from stat import *
# Drop a column from a frame.
class DropColumns:
    # By Default,this method will only can be used when select a frame from database
    def __init__(self,Base:str,Frame:str,colName) -> None:
        self.Base = Base
        self.Frame = Frame
        self.colName = colName
    def Drop(self):
        """
        Drop a column from a dataframe
        :return: a dataframe and a message.
        """
        df = pd.read_pickle(f"Data/{self.Base}/{self.Frame}.df")
        df = df.drop(columns=self.colName)
        df.to_pickle(f"Data/{self.Base}/{self.Frame}.df")
        with open(f"Data/{self.Base}/{self.Frame}.rc","wb") as RecoverWritter:
            pickle.dump(f"Recover Chekup create at : {datetime.now()}\n{df.to_json()}",RecoverWritter)
        RecoverWritter.close()
        if os.path.exists(f"Data/{self.Base}/{self.Frame}.rc"):
            os.chmod(f"Data/{self.Base}/{self.Frame}.rc",S_IREAD)
        message = f"col {self.colName} has been droped from {self.Base}.{self.Frame}"
        return df,message
