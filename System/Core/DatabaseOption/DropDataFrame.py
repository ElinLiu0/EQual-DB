import os
from datetime import datetime
class DropDataFrame:   
    # Respicify the DropDataFrame Method
    # With Specify the targetDataBase to reduce more for loops file check 
    # to save the response time
    def __init__(self,targetBase,targetFrame) -> None:
        self.targetBase = targetBase
        self.targetFrame = targetFrame           
    def Drop(self):
        if os.path.exists(f"../../Data/{self.targetBase}/{self.targetFrame}.df"):
            os.remove(f"../../Data/{self.targetBase}/{self.targetFrame}.df")
            print(f"Successfully remove dataframe {self.targetFrame}")
        else:
            print(f"Invalid dataFrame specified!Drop operation refuesed!")

        