#ifndef SCANNER_H
#define SCANNER_H

#include <stdio.h>
#include "porygon_lex.h"
#include "token.h"
#include "token_type.h"
#include "helpers.h"

// extern int line_num;
// extern int column_num;

/* Routine defined in porygon_lex.c */
extern int yylex();

/* Maintain the line number */
extern int yylineno;

/* Text of the most recently matched token */
extern char* yytext;

/* Length of the most recently matched token */
extern int yyleng;


/* Main function to the scanner*/
void run_scanner(void);
int deals_input(int argc, char** argv);
void ends_scan(int argc);

#endif
