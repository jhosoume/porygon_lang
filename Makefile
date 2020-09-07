CC	     := gcc
CFLAGS   := -std=c11 --pedantic -O3 -Wall -Wextra -Wpedantic

TARGET   := bin/scanner

SRCEXT   := c
SRCDIR   := src
BUILDDIR := build

default:
	flex src/porygon_lex.l
	gcc src/scanner.c src/porygon_lex.c -o bin/scanner -std=c11 -O3 -Wall -Wextra -Wpedantic
