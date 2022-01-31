import os
def showUsage():
    print(float(os.popen("du -bs ../../../Data").read()[:os.popen("du -bs ../../../Data").read().index(".")]))