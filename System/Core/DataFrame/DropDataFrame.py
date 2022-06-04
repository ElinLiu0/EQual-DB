import os
from datetime import datetime
import json
class DropDataFrame:   
    # Respicify the DropDataFrame Method
    # With Specify the targetDataBase to reduce more for loops file check 
    # to save the response time
    def __init__(self,targetBase,targetFrame,user) -> None:
        self.targetBase = targetBase
        self.targetFrame = targetFrame
        self.user = user
    def Drop(self):
        """
        Drop a dataframe from the DataBase
        :return: opperaion message or error.
        """
        if os.path.exists(f"./Data/{self.targetBase}/{self.targetFrame}.df"):
            os.remove(f"./Data/{self.targetBase}/{self.targetFrame}.df")
            print(f"Successfully remove dataframe {self.targetFrame}")
            message = {
                "execCode":"OK",
                "message":f"Successfully remove dataframe {self.targetFrame}"            
            }
            print(json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True))
            logMessage = f"{self.user} has removed dataframe {self.targetFrame} from {self.targetBase}"
            return logMessage
        else:
            message = {
                "execCode":"Failed",
                "message":f"Failed to remove dataframe {self.targetFrame}"
            }
            print(json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True))
            logMessage = f"{self.user} has failed to remove dataframe {self.targetFrame} from {self.targetBase} but failed"
            return logMessage

        