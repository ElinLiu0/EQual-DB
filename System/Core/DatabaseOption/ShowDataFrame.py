import chardet
import os
import pwd
from prettytable import PrettyTable
from time import ctime
class ShowDataFrames:
    def __init__(self,targetBase) -> None:
        self.targetBase = targetBase
    def showInfo(self):
        try:
            InfoTable = PrettyTable()
            FrameList = None
            FrameModifyTime = []
            FrameSizeList = []
            FrameCreateBy = []
            FrameEncoding = []
            for root,path,files in os.walk(f'./Data/{self.targetBase}'):
                FrameList = files
                for i in files:
                    FrameModifyTime.append(ctime(os.stat(f'./Data/{self.targetBase}/{i}').st_ctime))
                    FrameSizeList.append(os.stat(f'./Data/{self.targetBase}/{i}').st_size)
                    FrameCreateBy.append(pwd.getpwuid(os.stat(f'./../Data/{self.targetBase}/{i}').st_uid))
                    tmp = open(f'./Data/{self.targetBase}/{i}',"rb")
                    data = tmp.read()
                    FrameEncoding.append(chardet.detect(data)['encoding'])
            InfoTable.add_column('DataFrameName',FrameList)
            InfoTable.add_column('LastModified',FrameModifyTime)
            InfoTable.add_column('Size',FrameSizeList)
            InfoTable.add_column('Creator',FrameCreateBy)
            InfoTable.add_column("Encoding",FrameEncoding)
            print(InfoTable)
        except Exception:
            raise FileNotFoundError("No dataframe exists!")