import os
from datetime import datetime
base_list = None
for root,path,file in os.walk("../../Data/"):
            base_list = path
class DropDataFrame:   
    def __init__(self,targetFrame) -> None:     
        self.targetFrame = targetFrame           
    def Drop(self):
        for i in base_list:
            for root,base,frame in os.walk(f"../../Data/{i}"):
                for j in frame:
                    if self.targetFrame in frame:
                        print(f"Dataframe {self.targetFrame} has been removed from database {i},Operation Done at {datetime.now()}")
                        os.remove(f"../../Data/{i}/{self.targetFrame}.df")

        