import dask.dataframe as dd
import pandas as pd
class ImportData:
    def __init__(self,sourcePath,targetDataBase,encoder) -> None:
        self.sourcePath = sourcePath
        self.targetDataBase = targetDataBase
        self.ecoder = encoder
    def Processing(self):
        if ".csv" in self.sourcePath:
            dd.read_csv(self.sourcePath,encoding=self.ecoder)
            dd.to_json(f'../../Data/{self.targetDataBase}/{self.sourcePath}.jdb')
        if ".excel" in self.sourcePath:
            tem = pd.read_excel(self.sourcePath,enconding=self.encoder)
            dask_proc = dd.from_pandas(tem)
            dask_proc.to_json(f'../../Data/{self.targetDataBase}/{self.sourcePath}.jdb')
        if "http" in self.sourcePath:
            tem = pd.read_html(self.sourcePath)[0]
            dask_proc = dd.from_pandas(tem)
            dask_proc.to_json(f"../../Data/{self.targetDataBase}/{self.sourcePath}.jdb")
        if ".sql" in self.sourcePath:
            tem = pd.read_sql(self.sourcePath)
            dask_proc = dd.from_pandas(tem)
        else:
            print("Unsupported source datatype,refused!")