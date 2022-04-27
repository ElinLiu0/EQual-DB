import json
import chardet
import os
import pwd
from time import ctime
class ShowDataFrames:
    def __init__(self,targetBase) -> None:
        """
        The __init__ function is called when an instance of a class is created
        
        :param targetBase: The base directory where the target files are located
        """
        self.targetBase = targetBase
    def showInfo(self,user):
        """
        This function is used to show the information of dataframe in the database.
        
        :param user: the user who is checking up the dataframe info
        :return: A message that user is checking up dataframe info of database
        """
        try:
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
            responseJson = {
                "execCode":"OK",
                "DataFramesAre":[{
                    "BaseName":FrameList[i],
                    "CreatBy":FrameCreateBy[i],
                    "LastModify":FrameModifyTime[i],
                    "Usage":FrameSizeList[i],
                } for i in range(len(FrameList))]
            }
            print(json.dumps(responseJson,indent=4,ensure_ascii=True,sort_keys=True))
            message = f"user {user} is checking up dataframe info of database {self.targetBase}"
            return message
        except Exception:
            raise FileNotFoundError("No dataframe exists!")