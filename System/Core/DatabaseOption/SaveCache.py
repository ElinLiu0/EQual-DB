import pandas as pd
import os
from datetime import datetime
from stat import *
import pickle
class SaveCache:
    def __init__(self,Base,FrameName,CacheData) -> None:
        self.Base = Base
        self.FrameName = FrameName
        self.CacheData = CacheData
    def Save(self):
        df = self.CacheData
        df.to_pickle(f"Data/{self.Base}/{self.FrameName}.df")
        with open(f"Data/{self.Base}/{self.Frame}.rc","wb") as RecoverWritter:
            pickle.dump(f"Recover Chekup create at : {datetime.now()}\n{df.to_json()}",RecoverWritter)
        RecoverWritter.close()
        if os.path.exists(f"Data/{self.Base}/{self.Frame}.rc"):
            os.chmod(f"Data/{self.Base}/{self.Frame}.rc",S_IREAD)
        return df