from datetime import datetime
class LogsInit:
    def __init__(self,logdir) -> None:
        self.logdir = logdir
    def Error(self,file,line):
        return f"[{datetime.now()}][Error] There was error occured in file {file} at line {line}."
    def Warn(self,file,line):
        return f"[{datetime.now()}][Warn] Opearation occured a warn in file {file} at line {line}."
    def Sucess(self,message):
        return f"[{datetime.now()}][Success]Functions Run Success.Message :{message}"
    def LoginSuccess(self,user):
        return f"[{datetime.now()}][Success] user {user} login success!"
    def LoginFailed(self):
        return f"[{datetime.now()}][Error] Got an unexcpeted user login,but failed!"
    def InitLog(self):
        logsName = f"{self.logdir}/{datetime.now()}.log"
        with open(logsName,"w") as log:
            return logsName
    def writeLog(self,logsname,message):
        with open(logsname,"w") as Logs:
            Logs.writelines(message+"\n")
