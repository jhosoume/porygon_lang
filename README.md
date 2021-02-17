# Porygon Language

Prototype language to Compilers Class 2020.1
prof. Cláudia Nalon

#### Current Stage: Fifth - Three Address Code Generation
Implementation of a lexical analyzer (scanner) using [flex](https://github.com/westes/flex).
Implementation of a syntax analyzer (parser) using [bison](https://www.gnu.org/software/bison/manual/).
Implementation of a semantic analyzer.
Implementation of a code generator. The TAC code is the result of the tranlsation. (Interpreted by [TAC](https://github.com/lhsantos/tac/)).

The operating system used to develop and test the implementation was Ubuntu 20.04, with gcc 9.3, flex 2.6.4 and bison 3.5.1.

Documentation repo: https://www.overleaf.com/read/vckvwkqfzxww


---

## How to Compile
To properly compile the Porygon language scanner, it is necessary to have flex installed. Please follow the steps required to flex installation in their website:
https://github.com/westes/flex

To properly compile the Porygon language parser, it is necessary to have bison installed. Usually in Linux systems, it comes pre-installed. Please follow the steps required to bison installation in their website:
https://www.gnu.org/software/bison/

To interpret the resulting code, it is necessary to have TAC installed. Please follow the steps required to install TAC:
https://github.com/lhsantos/tac/blob/master/INSTALL

A Makefile was created to aid in the compilation process. There are two auxiliary commands to clean old objects and binary files. The command `make clean;` removes the build directory (object files) and `make clean_all;` also removes the flex generated files. Whilst the command `make flex;` runs flex and generates the scanner files; `make bison;` runs bison and generates the parser files, the `make;` command compiles the remaining source code (runs gcc).

To execute all necessary steps to a fresh compilation of the compiler, simply do:

```console
make clean_all; make flex; make bison; make;
```

To compile all the files without using the Makefile:
```console
mkdir build
flex flex_bison/porygon_lex.l
bison -Wall -d -v flex_bison/porygon_syntax.y
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/helpers.o src/helpers.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/parameters.o src/parameters.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/token_type.o src/token_type.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/porygon_lex.o src/porygon_lex.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/parser.o src/parser.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/token.o src/token.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/semantic_analysis.o src/semantic_analysis.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/main.o src/main.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/tac_code.o src/tac_code.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/node_type.o src/node_type.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/type.o src/type.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/columns.o src/columns.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/tac_generator.o src/tac_generator.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/type_checking.o src/type_checking.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/symbol_table.o src/symbol_table.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/tree.o src/tree.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/arrays.o src/arrays.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/scope.o src/scope.c
gcc -std=c18 --pedantic -Wall -Wextra -Wpedantic -g -I include -c -o build/scanner.o src/scanner.c
 gcc build/helpers.o build/parameters.o build/token_type.o build/porygon_lex.o build/parser.o build/token.o build/semantic_analysis.o build/main.o build/tac_code.o build/node_type.o build/type.o build/columns.o build/tac_generator.o build/type_checking.o build/symbol_table.o build/tree.o build/arrays.o build/scope.o build/scanner.o -o bin/porygon -lm
```

It may be necessary to create build and bin folders:
```console
mkdir build;
mkdir bin;
```

## How to Execute
The scanner has the interactive function of flex on. Consequently, the input file can be passed to the parser in two ways:
* From a pipe:
```console
./bin/porygon < tests/t1_correct.prg
```
* [Recommended] Directed input (argument):
```console
./bin/porygon tests/t2_correct.prg
```

* Running all tests at once (valgrind output files are saved in `valgrind_output` directory):
```console
make testing
```

* Running all tac tests at once (valgrind output files are saved in `valgrind_output` directory):
```console
make tac
```

* Interpreting the resulting TAC code:
```console
make tac
```


## Directories Architecture
* `bin`: binary files
* `build`: object files
* `flex_bison`: input files for flex and bison (main files specifying the grammar of the language)
* `include`: header files (.h)
* `src`: source files (.c)
* `tests`: some sample tests
* `README.md`: this file, contain some crucial information
* `Makefile`: compilation information
* `valgrind_output`: output files of the valgrind
