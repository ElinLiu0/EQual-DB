from email import message
import cudf as cf
import pickle
from datetime import datetime
import os
from stat import *
import json
class InsertColumns:
    def __init__(self,Base:str,Frame:str,colName:str,colData:list) -> None:
        """
        This function is used to create a new column in the dataframe
        
        :param Base: The name of the base in which you want to insert the data
        :type Base: str
        :param Frame: The name of the frame to insert the data into
        :type Frame: str
        :param colName: The name of the column you want to insert into
        :type colName: str
        :param colData: The data to be inserted into the column
        :type colData: list
        """
        self.Base = Base
        self.Frame = Frame
        self.colName = colName
        self.colData = colData
        if type(self.colData) != list:
            raise TypeError("ERR : Uncorrect datatype to insert!")
    def Insert(self):
        """
        Parmas
            None
        :return: The dataframe and a message
        """
        df = cf.read_feather(f"Data/{self.Base}/{self.Frame}.df")
        # Allow user to do a lambda or mathmetic expression
        exec("self.data="+self.data)
        df[self.colName] = self.data
        df.to_pickle(f"Data/{self.Base}/{self.Frame}.df")
        with open(f"Data/{self.Base}/{self.Frame}.rc","wb") as RecoverWritter:
            pickle.dump(f"Recover Chekup create at : {datetime.now()}\n{df.to_json()}",RecoverWritter)
        RecoverWritter.close()
        if os.path.exists(f"Data/{self.Base}/{self.Frame}.rc"):
            os.chmod(f"Data/{self.Base}/{self.Frame}.rc",S_IREAD)
        message = {
            "execCode":"OK",
            "message":f"Successfully insert {self.colName} "
        }
        return df,json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True)