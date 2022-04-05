import pandas as pd
import os
from datetime import datetime
from stat import *
import pickle
class SaveCache:
    def __init__(self,Base,FrameName,CacheData) -> None:
        """
        The __init__ function is called when an instance of a class is created
        
        :param Base: The base class of the frame
        :param FrameName: The name of the frame to be created
        :param CacheData: A dictionary of the data that will be cached
        """
        self.Base = Base
        self.FrameName = FrameName
        self.CacheData = CacheData
    def Save(self):
        """
        This function is used to save the dataframe to a pickle file.
            The function will also create a recovery file to be used in case of a crash.
            The recovery file will contain the dataframe and the date and time of the crash.
            The recovery file will be read by the load function.
            The recovery file will be read only by the load function.
            The recovery file
        :return: A dataframe
        """
        df = self.CacheData
        df.to_pickle(f"Data/{self.Base}/{self.FrameName}.df")
        with open(f"Data/{self.Base}/{self.Frame}.rc","wb") as RecoverWritter:
            pickle.dump(f"Recover Chekup create at : {datetime.now()}\n{df.to_json()}",RecoverWritter)
        RecoverWritter.close()
        if os.path.exists(f"Data/{self.Base}/{self.Frame}.rc"):
            os.chmod(f"Data/{self.Base}/{self.Frame}.rc",S_IREAD)
        return df