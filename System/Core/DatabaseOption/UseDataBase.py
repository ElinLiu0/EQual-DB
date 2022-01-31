import os

from importlib_metadata import files
class UseDataBase:
    def __init__(self,targetBase) -> None:
        self.targetBase = targetBase
    def useBase(self):
        frameList = None
        for root,path,files in os.walk(f"../../../Data/{self.targetBase}"):
            frameList = files
        return frameList