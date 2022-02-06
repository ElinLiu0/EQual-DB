import os
from prettytable import PrettyTable
from time import ctime
import pwd
class ShowDataBases:
    def __init__(self) -> None:
        pass
    def showInfo(self):
        InfoTable = PrettyTable()
        BaseList = None
        BaseModifyTime = []
        BaseSizeList = []
        BaseCreateBy = []
        for root,path,files in os.walk('../../Data'):
            BaseList = files
            for i in files:
                BaseModifyTime.append(ctime(os.stat(f'../../Data/{i}').st_ctime))
                BaseSizeList.append(os.stat(f'../../Data/{i}').st_size)
                BaseCreateBy.append(pwd.getpwuid(os.stat(f'../../Data/{i}').st_uid))
        InfoTable.add_column('DataBaseName',BaseList)
        InfoTable.add_column('LastModified',BaseModifyTime)
        InfoTable.add_column('Size',BaseSizeList)
        InfoTable.add_column('Creator',BaseCreateBy)
        print(InfoTable)