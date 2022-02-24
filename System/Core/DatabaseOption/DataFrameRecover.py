import os
import pandas as pd
import pickle
class DataFrameRecover:
    def __init__(self,targetDataBase,targetDataFrame,authority) -> None:
        self.targetDataBase = targetDataBase
        self.targetDataFrame = targetDataFrame
        self.authority = authority
    def Recovering(self):
        if self.authority == "Admin" & os.popen("whoami").read().replace("\n","") == "root":
            with open(f"./Data/{self.targetDataBase}/{self.targetDataFrame}.rc","w") as RecoverReader:
                read_data = pickle.load(RecoverReader).split("\n","")
                RecoverData = read_data[1]
            df = pd.DataFrame(RecoverData)
            df.to_pickle(f"./Data/{self.targetDataBase}/{self.targetDataFrame}.df")
            rollBackData = read_data[0][read_data.index(":") : ].replace(" ","")
            print(f"{self.targetDataFrame} were fall back to the time version : {rollBackData}!Operation Process Done!")
        else:
            print(f"ERR : Not Admin,Operation Refused!")