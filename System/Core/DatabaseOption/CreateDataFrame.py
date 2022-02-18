# Update : Give up to using Dask API For compatbility
import os
from datetime import datetime
import pandas as pd
import pickle
class CreateDataFrame:
    def __init__(self,database,frameName,data):
        self.frameName = frameName
        self.database = database
        self.data = data
    def Create(self):
        exec("self.data="+self.data)
        df = pd.DataFrame(self.data)
        data = df.to_json(orient="split")
        with open(f"./Data/{self.database}/{self.frameName}.df","wb") as db_writer:
            pickle.dump(data,db_writer)
        db_writer.close()
        with open(f"./Data/{self.database}/{self.frameName}.rc","wb") as recover_writter:
            pickle.dump(f"Recover Chekup create at : {datetime.now()}\n{data}",recover_writter)
            # pickle.dump(data,recover_writter)
        recover_writter.close()