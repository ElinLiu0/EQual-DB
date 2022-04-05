import os
class CreateDataBase:
    def __init__(self,BaseName,userAuthority) -> None:
        '''The __init__ function is called when an instance of a class is created
        
        Parameters
        ----------
        BaseName
            The name of the database.
        userAuthority
            The authority of the user.
        
        '''
        self.BaseName = BaseName
        self.userAuthority = userAuthority
    def Make(self):
        '''Make a new database
        
        Returns
        -------
            A message.
        
        '''
        if self.userAuthority == "Admin":
            os.mkdir(f"./Data/{self.BaseName}")
            message = f"Successfully create database {self.BaseName}"
            return message