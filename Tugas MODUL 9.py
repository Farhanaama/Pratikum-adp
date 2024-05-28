from termcolor import colored, cprint

for i in range(2):
    cprint(" " * 30, 'blue', 'on_blue', end="")
    print()

cprint(" " * 12+ "V", 'blue', end="")
cprint("I", 'blue', end="")
cprint("S", 'blue',end="")
cprint("A", 'blue')
    
for i in range(2):
    cprint(" " * 30, 'yellow', 'on_yellow', end="")
    print()
