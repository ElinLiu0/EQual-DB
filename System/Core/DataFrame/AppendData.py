from datetime import datetime
from stat import S_IREAD
import cudf as cf
import pickle
import json
import os
class AppendData:
    # By Default,this method will only can be used when select a frame from database
    def __init__(self,Base,Frame,Data) -> None:
        '''The __init__ method is the most important method in a class. 
        This is called when an instance (object) of the class is created, using the class name as a
        function
        
        Parameters
        ----------
        Base
            The database of dataframe that you want to append to.
        Frame
            The dataframe that you want to append the data to.
        Data
            The data that you want to append to the dataframe.
        
        '''
        # Recive a Pandas Dataframe
        self.Base = Base
        self.Frame = Frame
        if type(self.Frame) != cf.DataFrame:
            raise TypeError("ERR : Not Receving a dataframe like data!")
        # The appending data should like : [data]
        self.Data = Data
    def Append(self):
        '''Append data to a dataframe and create a recovery checkup file
        
        Returns
        -------
            The dataframe and a message
        
        '''
        df = cf.read_feather(f"Data/{self.Base}/{self.Frame}.df")
        df = df.append(self.Data)
        df.to_feather(f"Data/{self.Base}/{self.Frame}.df")
        with open(f"Data/{self.Base}/{self.Frame}.rc","wb") as RecoverWritter:
            pickle.dump(f"Recover Chekup create at : {datetime.now()}\n{df.to_json()}",RecoverWritter)
        RecoverWritter.close()
        if os.path.exists(f"Data/{self.Base}/{self.Frame}.rc"):
            os.chmod(f"Data/{self.Base}/{self.Frame}.rc",S_IREAD)
        message = {"execCode":"OK","message":f"Successfully append data to {self.Base}.{self.Frame}"}
        return df,json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True)
