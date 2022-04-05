from pyfiglet import Figlet
def CurrentVersion() -> str:
    '''Prints the current version of the program
    
    '''
    log_font = Figlet(font='slant')
    print(log_font.renderText('JessieDB'))
    print("-----------------------------")
    print("JessieDB by Python,current version : Beta Deving 0.5")