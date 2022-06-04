from datetime import datetime
import json
import os
class CreateDataBase:
    def __init__(self,BaseName,userAuthority,username) -> None:
        """
        The __init__ function is called when an instance of a class is created
        
        :param BaseName: The name of the database
        :param userAuthority: The authority of the user
        :param username: The username of the user
        """
        self.BaseName = BaseName
        self.userAuthority = userAuthority
        self.username = username
    def Make(self):
        '''Make a new database
        
        Returns
        -------
            A message.
        
        '''
        if self.userAuthority == "Admin":
            os.mkdir(f"./Data/{self.BaseName}")
            message = {
                "execCode":"OK",
                "message":f"Successfully create database {self.BaseName}",
                "location":f"./Data/{self.BaseName}"
            }
            print(json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True))
            message = f"Database {self.BaseName} has been created by {self.username} at {datetime.now()}"