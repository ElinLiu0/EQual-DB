import os
import dask.dataframe as dd
import pandas as pd
import pickle
class DataFrameRecover:
    def __init__(self,targetDataBase,targetDataFrame) -> None:
        self.targetDataBase = targetDataBase
        self.targetDataFrame = targetDataFrame
    def Recovering(self):
        with open(f"../../Data/{self.targetDataBase}/{self.targetDataFrame}.rc","w") as RecoverReader:
            read_data = pickle.load(RecoverReader).split("\n","")
            RecoverData = read_data[1]
        df = pd.DataFrame(RecoverData)
        dask_processed = dd.from_pandas(df)
        dask_processed.to_json(f"../../Data/{self.targetDataBase}/{self.targetDataFrame}.df")
        rollBackData = read_data[0][read_data.index(":") : ].replace(" ","")
        print(f"{self.targetDataFrame} were fall back to the time version : {rollBackData}!Operation Process Done!")