# update :  For the compatibility to give up use DASK API
from copyreg import pickle
from tabulate import tabulate
import pandas as pd
import json
class ShowSelect:
    def __init__(self,targetBase,targetFrame,colRange,limation=5000) -> None:
        # in default,this varaiable would be loading the caching database from shell.py
        self.targetBase = targetFrame
        self.targetFrame = targetFrame
        self.Limitation = limation
        self.colRange = colRange
        self.headers = 'keys'
        self.tablefmt = "psql"
        self.showIndex = True
    def read_data(self):
        global df
        try:
            df = pd.read_pickle(f"./{self.targetBase}/{self.targetFrame}.df")
        except Exception as Error:
            print(f"ERR : Not found dataframe {self.targetFrame} in caching base.Operation refused!")     
    def shown(self):
        if self.colRange == "*":
            # use Pandas DataFrame Directly from Memory 
            if df.shape[0] <= self.Limitation:
                shownFrame = tabulate(df,headers=self.headers,tablefmt=self.tablefmt)
            else:
                print(f"WAR : Dataframe shape is over default limitation!Shown previous {self.Limitation} lines below.")
        elif type(self.colRange) == str and self.colRange != "*":
            shownFrame = tabulate(pd.DataFrame(df[self.colRange][0:self.Limitation]),headers=self.headers,tablefmt=self.tablefmt)
            return pd.DataFrame(df[self.colRange][0:self.Limitation])
        elif type(self.colRange) == list:
            shownFrame = tabulate(pd.DataFrame(df.loc[:,self.colRange][0:self.Limitation]),headers=self.headers,tablefmt=self.tablefmt)
            return df.loc[:,self.colRange][0:self.Limitation]
        print(shownFrame)
    def mathShown(self):
        math_symblos = ["*","^","-","+","/","%","//"]
        if type(self.colRange) == str:
            for i in self.colRange:
                if i in math_symblos:
                    shownFrame = tabulate(pd.DataFrame(exec(self.colRange))[0:self.Limitation],headers=self.headers,tablefmt=self.tablefmt)
                    print(shownFrame)
                    return pd.DataFrame(exec(self.colRange))[0:self.Limitation]
                else:
                    pass
    def lambdaShown(self):
        if type(self.colRange) == str:
            if "lambda" in self.colRange:
                shownFrame = tabulate(pd.DataFrame(exec(self.colRange))[0:self.Limitation],headers=self.headers,tablefmt=self.tablefmt)
                print(shownFrame)
                return pd.DataFrame(exec(self.colRange))[0:self.Limitation]
            else:
                pass
