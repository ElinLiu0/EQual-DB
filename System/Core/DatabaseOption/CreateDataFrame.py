import dask.dataframe as dd
import os
class CreateDataFrame:
    def __init__(self,database,frameName,data):
        self.frameName = frameName
        self.database = database
        self.data = data
    def Create(self):
        df = dd.DataFrame(self.data)
        df.to_json(f"../../Data/{self.database}/{self.frameName}.df",index=False)
    