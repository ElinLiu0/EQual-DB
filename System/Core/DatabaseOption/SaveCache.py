import pandas as pd
import pickle
import os
from datetime import datetime
class SaveCache:
    def __init__(self,data,name,format):
        self.data = data
        self.format = format
        self.name = name
    def Save(self):
        if self.format == "CSV" or self.format == "csv":
            self.data.to_csv(f"Export/{self.name}.csv")
        elif self.format == "EXCEL" or self.format == "xls":
            self.data.to_excel(f"Export/{self.name}.xlsx")
        elif self.format == "HTML" or self.format == "html":
            self.data.to_html(f"Export/{self.name}.csv")
        elif self.format == "JSON" or self.format == "json":
            self.data.to_json(f"Export/{self.name}.json")
        elif self.format == "PICKLE" or self.format == "pickle":
            self.data.to_pickle(f"Export/{self.name}.pkl")
        elif self.format == "SQL" or self.format == "sql":
            self.data.to_sq;(f"Export/{self.name}.sql")
        elif self.format == "XML" or self.format == "xml":
            self.data.to_xml(f"Export/{self.name}.xml")
        else:
            print("Currently unsupport datatype rendered!")