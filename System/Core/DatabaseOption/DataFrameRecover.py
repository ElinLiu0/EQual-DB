import os
import dask.dataframe as dd
import pandas as pd
class DataFrameRecover:
    def __init__(self,targetDataBase,targetDataFrame) -> None:
        self.targetDataBase = targetDataBase
        self.targetDataFrame = targetDataFrame
    def Recovering(self):
        RecoverData = []
        with open(f"../../Data/{self.targetDataBase}/{self.targetDataFrame}.rc","w") as RecoverReader:
            RecoveringRead = RecoverReader.readlines()[1:]
            for i in RecoveringRead:
                RecoverData.append(i.replace("\n",""))
        df = pd.DataFrame(RecoverData)
        dask_processed = dd.from_pandas(df)
        dask_processed.to_json(f"../../Data/{self.targetDataBase}/{self.targetDataFrame}.df")
        rollBackData = RecoveringRead[0][RecoveringRead.index(":") : ]
        print(f"{self.targetDataFrame} were fall back to the time version : {rollBackData}!Operation Process Done!")