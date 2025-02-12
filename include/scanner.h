#ifndef SCANNER_H
#define SCANNER_H

#include <stdio.h>
#include "porygon_lex.h"
#include "token.h"
#include "token_type.h"
#include "helpers.h"
#include "tree.h"

// extern int line_num;
// extern int column_num;

// All the externs defined below are specified in flex

/* Routine defined in porygon_lex.c */
extern int yylex();

/* Maintain the line number */
extern int yylineno;

/* Text of the most recently matched token */
extern char* yytext;

/* Length of the most recently matched token */
extern int yyleng;

/* List of AST nodes */
extern struct node_list *ast_tree_list;


/* Main function to the scanner*/
void run_scanner(void);
int deals_input(int argc, char** argv);
void ends_scan(int argc);

#endif
