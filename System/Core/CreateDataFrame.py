import dask.dataframe as dd
import os
class CreateDataFrame:
    def __init__(self,frameName,columns):
        self.frameName = frameName
        self.columns = columns
    def Create(self):
        df = dd.DataFrame()
        df.columns == self.columns
        df.to_json(f"{self.frameName}.df",index=False)
    