# Console Commands for ANSI C (C89) checks

## MacOS and Windows
### To get warnings for ANSI C conformance, but still have it compile: 
gcc -std=c89 -pedantic -Wall -Wextra -o "fileName" "fileName".c

### To get errors for it and, if it throws errors, not to compile:
gcc -std=c89 -pedantic -Wall -Werror  -Wextra -o "fileName" "fileName".c

## DISCLAIMER: 
### Code compiles and works, I do not guarantee that it will run efficent and is clean. It is not yet ANSI C conform. Please also do not copy it as solution. Please at least change names of functions and variables. :D
