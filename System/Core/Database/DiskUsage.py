import os
class ShowUsage:
    def __init__(self) -> None:
        pass
    def showUsage(self):
        '''It shows the total size of the data path in bytes
        
        '''
        usage = float(os.popen("du -bs ./Data").read()[:os.popen("du -bs ./Data").read().index(".")])
        if usage // 1024 == 0:
            print(f"Total data path usage : {round(usage / 1024,2)} KiB")
        elif usage // 1024 // 1024 == 0:
            print(f"Total data path usage : {round(usage / 1024 / 1024,2)} MiB")
        elif usage // 1024 // 1024 // 1024 == 0:
            print(f"Total data path usage : {round(usage / 1024 / 1024 / 1024 ,2)} GiB")
        elif usage // 1024 // 1024 // 1024 // 1024 == 0:
            print(f"Total data path usage : {round(usage / 1024 / 1024 / 1024 / 1024 ,2)} TiB")
        elif usage // 1024 // 1024 // 1024 // 1024 // 1024 == 0:
            print(f"Total data path usage : {round(usage / 1024 / 1024 / 1024 / 1024 / 1024 ,2)} PiB")
        else:
            print(f"Total data path usage : {round(usage,2)} bytes")
        