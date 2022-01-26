import os
from UserLogin import UserLogin
class CreateDataBase:
    def __init__(self,BaseName) -> None:
        self.BaseName = BaseName
    def Make(self):
        os.mkdir(f"../../Data/{self.BaseName}")
def create_data_base():
    user_authority = UserLogin.userCheck['authoriy']
    if user_authority == "Adminer":
        basename = input("Please spicify the database name : ")
        creator = CreateDataBase(BaseName=basename)
        creator.Make()
    else:
        print("Invalid user authority!Create database denied!")