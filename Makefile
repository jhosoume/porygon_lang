default:
	lex src/porygon_lex.l
	gcc src/scanner.c src/porygon_lex.c -o bin/scanner -lfl -std=c11 -O3 -Wall -Wextra -Wpedantic
