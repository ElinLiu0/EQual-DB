# Update : Give up to using Dask API For compatbility
import os
from datetime import datetime
from stat import *
import pandas as pd
class CreateDataFrame:
    def __init__(self,database,frameName,data):
        self.frameName = frameName
        self.database = database
        self.data = data
    def Create(self):
        exec("self.data="+self.data)
        df = pd.DataFrame(self.data)
        df.to_json(f"../../Data/{self.database}/{self.frameName}.df",orient="split")
        with open(f"../../Data/{self.database}/{self.frameName}.rc","w") as recover:
            recover.write(f"Recover Chekup create at : {datetime.now()}\n")
            recover.write(df.to_json(orient="split"))
        if os.path.exists(f"../../../Data/{self.database}/{self.frameName}.rc"):
            os.chmod(f"../../../Data/{self.database}/{self.frameName}.rc",mode=S_IREAD)
        if os.path.exists(f"../../../Data/{self.database}/{self.frameName}.rc"):
            os.chmod(f"../../../Data/{self.database}/{self.frameName}.rc",mode=S_IREAD)