from pyfiglet import Figlet
def CurrentVersion() -> str:
    log_font = Figlet(font='slant')
    print(log_font.renderText('JessieDB'))
    print("-----------------------------")
    print("JessieDB by Python,current version : Beta Deving 0.1")