import json
import pandas as pd
import pickle
import os
from datetime import datetime
class ExportCache:
    def __init__(self,data,name,format):
        self.data = data
        self.format = format
        self.name = name
    def Export(self):
        """
        It takes in a dataframe, a name and a format, and exports the dataframe to the specified format
        :return: a dictionary with the key "execCode" and "message"
        """
        if self.format == "CSV" or self.format == "csv":
            self.data.to_csv(f"Export/{self.name}.csv")
            message = {
                "execCode":"OK",
                "message":f"Successfully export data."
            }
            return message
        elif self.format == "JSON" or self.format == "json":
            self.data.to_json(f"Export/{self.name}.json")
            message = {
                "execCode":"OK",
                "message":f"Successfully export data."
            }
            return message
        elif self.format == "HDF" or self.format == "hdf":
            self.data.to_hdf(f"Export/{self.name}.hdf")
            message = {
                "execCode":"OK",
                "message":f"Successfully export data."
            }
            return json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True)
        else:
            raise TypeError("Currently unsupport datatype rendered!")