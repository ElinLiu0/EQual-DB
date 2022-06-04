# Update : Give up to using Dask API For compatbility
import json
import os
from datetime import datetime
import cudf as cf
import pickle
from stat import *
class CreateDataFrame:
    def __init__(self,database,frameName,data,user):
        '''Create a new frame with the given name and data
        
        Parameters
        ----------
        database
            The name of the database to connect to.
        frameName
            The name of the frame being created.
        data
            The data to be inserted into the table.
        
        '''
        self.frameName = frameName
        self.database = database
        self.data = data
        self.user = user
    def Create(self):
        '''Create a Dataframe and save it in a pickle file
        
        Returns
        -------
            The message is being returned.
        
        '''
        exec("self.data="+self.data)
        df = cf.DataFrame(self.data)
        data = df.to_json(orient="split")
        df.to_feather(f"./Data/{self.database}/{self.frameName}.df")
        with open(f"./Data/{self.database}/{self.frameName}.rc","wb") as recover_writter:
            pickle.dump(f"Recover Chekup create at : {datetime.now()}\n{data}",recover_writter)
        recover_writter.close()
        if os.path.exists(f"./Data/{self.database}/{self.frameName}.rc"):
            os.chmod(f"./Data/{self.database}/{self.frameName}.rc",S_IREAD)
        message = {
            "execCode":"OK",
            "message":f"Successfully Create Dataframe {self.database}.{self.frameName}",
            "dataSize":f"{df.shape[0]} by {df.shape[1]}"
        }
        print(json.dumps(message,indent=True,ensure_ascii=True,sort_keys=True))
        logMessage = f"{self.user} has create a new dataframe {self.database}.{self.frameName}"
        return logMessage