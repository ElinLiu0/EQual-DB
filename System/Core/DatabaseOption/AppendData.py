from datetime import datetime
from stat import S_IREAD
import pandas as pd
import pickle
import os
class AppendData:
    # By Default,this method will only can be used when select a frame from database
    def __init__(self,Base,Frame,Data) -> None:
        # Recive a Pandas Dataframe
        self.Base = Base
        self.Frame = Frame
        if type(self.Frame) != pd.DataFrame:
            raise TypeError("ERR : Not Receving a dataframe like data!")
        # The appending data should like : [data]
        self.Data = Data
    def Append(self):
        df = pd.read_pickle(f"Data/{self.Base}/{self.Frame}.df")
        df = df.append(self.Data)
        df.to_pickle(f"Data/{self.Base}/{self.Frame}.df")
        with open(f"Data/{self.Base}/{self.Frame}.rc","wb") as RecoverWritter:
            pickle.dump(f"Recover Chekup create at : {datetime.now()}\n{df.to_json()}",RecoverWritter)
        RecoverWritter.close()
        if os.path.exists(f"Data/{self.Base}/{self.Frame}.rc"):
            os.chmod(f"Data/{self.Base}/{self.Frame}.rc",S_IREAD)
        return df
