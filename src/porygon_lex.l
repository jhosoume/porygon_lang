/* Definitions of a scanner for the Porygon Lang */

/* Options given by the manual https://westes.github.io/flex/manual */
/* "[...] specifies that we are being careful." */
/* %option warn nodefault */

/* "[...] asks flex to track line numbers. */
%option yylineno

/* "suppress the appearance of unneeded routines in the generated scanner." */
%option nounput

/* Define output files. Headers and C files are create in src directory */
%option outfile="src/porygon_lex.c" header-file="include/porygon_lex.h"

DIGIT [0-9]
LETTER [a-zA-Z]

/* To ease the process of identifying comments, create start conditions*/
/* http://westes.github.io/flex/manual/Start-Conditions.html */

%x COMMENT

%{
#include "token_type.h"
#include "token.h"

/* Integers to indicate line number and column*/
extern int line_num;
extern int column_num;

%}

%%

. { return ERR_UNKNOWN_TOKEN; }

%%

/*  */
int yywrap(void) {
	return 1;
}
