import dask.dataframe as dd
import pandas as pd
class ImportData:
    def __init__(self,sourcePath,targetDataBase,frameName,encoder) -> None:
        self.sourcePath = sourcePath
        self.targetDataBase = targetDataBase
        self.frameName = frameName
        self.encoder = encoder
    def Processing(self):
        if ".csv" in self.sourcePath:
            dd.read_csv(self.sourcePath,encoding=self.encoder)
            dd.to_json(f'../../../Data/{self.targetDataBase}/{self.frameName}.df')
            print(f"DataFrame {self.frameName} has been created!Stauts Ready!")
        if ".excel" in self.sourcePath:
            tem = pd.read_excel(self.sourcePath,enconding=self.encoder)
            dask_proc = dd.from_pandas(tem)
            dask_proc.to_json(f'../../../Data/{self.targetDataBase}/{self.frameName}.df')
            print(f"DataFrame {self.frameName} has been created!Stauts Ready!")
        if "http" in self.sourcePath:
            tem = pd.read_html(self.sourcePath)[0]
            dask_proc = dd.from_pandas(tem)
            dask_proc.to_json(f"../../../Data/{self.targetDataBase}/{self.frameName}.df")
            print(f"DataFrame {self.frameName} has been created!Stauts Ready!")
        if ".sql" in self.sourcePath:
            tem = pd.read_sql(self.sourcePath)
            dask_proc = dd.from_pandas(tem)
            dask_proc.to_json(f"../../../Data/{self.targetDataBase}/{self.frameName}.df")
            print(f"DataFrame {self.frameName} has been created!Stauts Ready!")
        else:
            print("Unsupported source datatype,refused!")