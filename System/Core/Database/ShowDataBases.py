import json
import os
from time import ctime
import pwd
class ShowDataBases:
    def __init__(self) -> None:
        pass
    def showInfo(self,user):
        """
        This function is used to show the information of the database.
        
        :param user: The user who is executing the command
        :return: A message that is being returned to the user.
        """
        BaseList = None
        BaseModifyTime = []
        BaseSizeList = []
        BaseCreateBy = []
        BaseList = []
        for root,path,files in os.walk('./Data/'):
            for i in path:
                BaseModifyTime.append(ctime(os.stat(f'./Data/{i}').st_ctime))
                BaseSizeList.append(os.stat(f'./Data/{i}').st_size)
                BaseCreateBy.append(pwd.getpwuid(os.stat(f'./Data/{i}').st_uid).pw_name)
                BaseList.append(i)
        responseJson = {
            "execCode":"OK",
            "DataBaseAre":[{
                "BaseName":BaseList[i],
                "CreatBy":BaseCreateBy[i],
                "LastModify":BaseModifyTime[i],
                "Usage":BaseSizeList[i],
            } for i in range(len(BaseCreateBy))]
        }
        print(json.dumps(responseJson,indent=True,ensure_ascii=True,sort_keys=True))
        message = f"User {user} is checking up database info."
        return message