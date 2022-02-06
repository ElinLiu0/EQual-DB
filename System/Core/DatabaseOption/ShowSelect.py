import dask.dataframe as dd
from tabulate import tabulate
import pandas as pd
class ShowSelect:
    def __init__(self,targetBase,targetFrame,colRange,limation=1000) -> None:
        self.targetBase = targetFrame
        self.targetFrame = targetFrame
        self.targetLimitation = limation
        self.colRange = colRange
        self.headers = 'keys'
        self.tablefmt = "psql"
        self.showIndex = True
    def read_data(self):
        global df
        df = pd.read_json(f"../../{self.targetBase}/{self.targetFrame}.df")       
    def shown(self):
        dask_proc = dd.from_pandas(df)
        if self.colRange == "*":
            shownFrame = tabulate(dask_proc.compute(),headers=self.headers,tablefmt=self.tablefmt)
        elif type(self.colRange) == str and self.colRange != "*":
            shownFrame = tabulate(dask_proc[self.colRange].compute(),headers=self.headers,tablefmt=self.tablefmt)
        elif type(self.colRange) == list:
            shownFrame = tabulate(df.loc[:,self.colRange],headers=self.headers,tablefmt=self.tablefmt)
        print(shownFrame)
    def mathShown(self,slices:str):
        math_symblos = ["*","^","-","+","/","%","//"]
        variable_list = []
        matched_math_symbol = []
        # Extract the variables for math calculating
        for i in math_symblos:          
            try:
                slice_result = slices.split(i)
                for k in slice_result:
                    variable_list.append(k)
                    matched_math_symbol.append(i)
            except Exception:
                pass
        # Do calculation 
        # ...