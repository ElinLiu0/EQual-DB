import dask.dataframe as dd
import os
from datetime import datetime
from stat import S_IREAD
class CreateDataFrame:
    def __init__(self,database,frameName,data):
        self.frameName = frameName
        self.database = database
        self.data = data
    def Create(self):
        df = dd.DataFrame(self.data)
        df.to_json(f"../../Data/{self.database}/{self.frameName}.df",index=False)
        wrote_time = datetime.now()
        with open(f"../../Data/{self.database}/{self.frameName}.rc","w") as recover:
            recover.write(f"Recover Chekup create at : {datetime.now()}\n")
            recover.write(str(df.to_json))
    