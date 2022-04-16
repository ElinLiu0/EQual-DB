# update :  For the compatibility to give up use DASK API
import pickle
from tabulate import tabulate
import pandas as pd
import json
class ShowSelect:
    def __init__(self,targetBase,targetFrame,colRange,limation) -> None:
        """
        This function is used to initialize the class, and it would be called in the shell.py.
            The parameters are:
                targetBase: the database file name
                targetFrame: the table name
                colRange: the range of the column
                Limitation: the limitation of the rows
        
        :param targetBase: the database you want to query from
        :param targetFrame: the target frame you want to display
        :param colRange: the range of columns you want to display,
        :param limation: the limitation of the dataframe
        """
        # in default,this varaiable would be loading the caching database from shell.py
        self.targetBase = targetBase
        self.targetFrame = targetFrame
        self.Limitation = limation
        self.colRange = colRange
        self.headers = 'keys'
        self.tablefmt = "psql"
        self.showIndex = True
    def read_data(self):
        """
        1. Read the dataframe from the cache base.
        2. If the dataframe is not found, raise an error
        """
        global df
        try:
            df = pd.read_pickle(f"./{self.targetBase}/{self.targetFrame}.df")
        except Exception as Error:
            raise FileNotFoundError(f"ERR : Not found dataframe {self.targetFrame} in caching base.Operation refused!")     
    def shown(self):
        """
        Params :
            colRange : Which a specified keyword or list like parameter
            Limitation : Which is a float keyword that specified for limitation returns
        Returns :
            Dataframe Object
        """
        if self.colRange == "*" and self.Limitation == None:
            QueryResult = df
            return QueryResult
        elif self.colRange == "*" and self.Limitation is not None:
            QueryResult = df.loc[:,self.colRange][0:self.Limitation]
            return QueryResult
        elif self.colRange != "*" and self.Limitation == None:
            colRange = None
            exec("colRange=self.colRange")
            QueryResult = df.loc[:,colRange]
            return QueryResult
        elif self.colRange != "*" and self.Limitation is not None:
            colRange = None
            exec("colRange=self.colRange")
            QueryResult = df.loc[:,colRange][0:self.Limitation]
            return QueryResult
        elif self.colRange is "":
            raise TypeError("Invalid Query Colrange Received!")
    def mathMetic(self):
        if self.colRange is "":
            raise TypeError("Invalid Query Colrange Received!")
        else:
            colRange = None
            exec("colRange=self.colRange")
            pass

