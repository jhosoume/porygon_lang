# Porygon Language
Juliana Hosoume

Prototype language to Compilers Class 2020.1
prof. Cláudia Nalon

#### Current Stage: Second - Lexical Analysis
Implementation of a lexical analyzer (scanner) using [flex](https://github.com/westes/flex).

---

## How to Compile
To properly compile the Porygon language scanner, it is necessary to have flex installed. Please follow the steps required to flex installation in their website:
https://github.com/westes/flex

A Makefile was created to aid in the compilation process. There are two auxiliary commands to clean old objects and binary files. The command `make clean;` removes the build directory (object files) and `make clean_all;` also removes the flex generated files. Whilst the command `make flex;` runs flex and generates the scanner files, the `make;` compiles the remaining source code (runs gcc).

To execute all necessary steps to a fresh compilation of the scanner, simply do:

```console
make clean_all; make flex; make;
```

To compile all the files without using the Makefile:
```console
mkdir build;
mkdir bin;
flex src/porygon_lex.l
gcc -std=c11 --pedantic -O3 -Wall -Wextra -Wpedantic -I include -c -o build/token_type.o src/token_type.c
gcc -std=c11 --pedantic -O3 -Wall -Wextra -Wpedantic -I include -c -o build/porygon_lex.o src/porygon_lex.c
gcc -std=c11 --pedantic -O3 -Wall -Wextra -Wpedantic -I include -c -o build/token.o src/token.c
gcc -std=c11 --pedantic -O3 -Wall -Wextra -Wpedantic -I include -c -o build/main.o src/main.c
gcc -std=c11 --pedantic -O3 -Wall -Wextra -Wpedantic -I include -c -o build/scanner.o src/scanner.c
gcc build/token_type.o build/porygon_lex.o build/token.o build/main.o build/scanner.o -o bin/scanner -lm
```

## How to Execute
The scanner has the interactive function of flex on. Consequently, the input file can be passed to the scanner in two ways:
* From a pipe:
```console
./bin/scanner < tests/t1_correct.prg
```
* Directed input (argument):
```console
./bin/scanner tests/t2_correct.prg
```

## Directories Architecture
* `bin`: binary files
* `build`: object files
* `include`: header files (.h)
* `src`: source files (.c)
* `tests`: some sample tests
* `README.md`: this file, contain some crucial information
* `Makefile`: compilation information
