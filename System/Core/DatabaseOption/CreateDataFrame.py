# Update : Give up to using Dask API For compatbility
from email import message
import os
from datetime import datetime
import pandas as pd
import pickle
from stat import *
class CreateDataFrame:
    def __init__(self,database,frameName,data):
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
    def Create(self):
        '''Create a Dataframe and save it in a pickle file
        
        Returns
        -------
            The message is being returned.
        
        '''
        exec("self.data="+self.data)
        df = pd.DataFrame(self.data)
        data = df.to_json(orient="split")
        df.to_pickle(f"./Data/{self.database}/{self.frameName}.df")
        with open(f"./Data/{self.database}/{self.frameName}.rc","wb") as recover_writter:
            pickle.dump(f"Recover Chekup create at : {datetime.now()}\n{data}",recover_writter)
        recover_writter.close()
        if os.path.exists(f"./Data/{self.database}/{self.frameName}.rc"):
            os.chmod(f"./Data/{self.database}/{self.frameName}.rc",S_IREAD)
        message = f"Successfully Create Dataframe {self.database}.{self.frameName}"
        return message