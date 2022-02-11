# Update : For the usbility the compatbility to give up using dask API
import pandas as pd
class ImportData:
    def __init__(self,sourcePath,targetDataBase,frameName,encoder) -> None:
        self.sourcePath = sourcePath
        self.targetDataBase = targetDataBase
        self.frameName = frameName
        self.encoder = encoder
    def Processing(self):
        if ".csv" in self.sourcePath:
            df = pd.read_csv(self.sourcePath,encoding=self.encoder)
            df.to_json(f'../../Data/{self.targetDataBase}/{self.frameName}.df')
            print(f"DataFrame {self.frameName} has been created!Stauts Ready!")
        if ".excel" in self.sourcePath:
            df = pd.read_excel(self.sourcePath,enconding=self.encoder)
            df.to_json(f'../../Data/{self.targetDataBase}/{self.frameName}.df')
            print(f"DataFrame {self.frameName} has been created!Stauts Ready!")
        if "http" in self.sourcePath:
            df = pd.read_html(self.sourcePath)[0]
            # dask_proc = pd.from_pandas(tem)
            df.to_json(f"../../Data/{self.targetDataBase}/{self.frameName}.df")
            print(f"DataFrame {self.frameName} has been created!Stauts Ready!")
        if ".sql" in self.sourcePath:
            df = pd.read_sql(self.sourcePath)
            # dask_proc = pd.from_pandas(tem)
            df.to_json(f"../../../Data/{self.targetDataBase}/{self.frameName}.df")
            print(f"DataFrame {self.frameName} has been created!Stauts Ready!")
        else:
            print("Unsupported source datatype,refused!")