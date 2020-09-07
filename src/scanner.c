#include "scanner.h"

/* Routine defined in porygon_lex.c */
extern int yylex();

/* Maintain the line number */
extern int yylineno;

/* Text of the most recently matched token */
extern char* yytext;

/* Length of the most recently matched token */
extern int yyleng;

int main(int argc, char** argv) {
  int ntoken;
  while((ntoken = yylex())) {

  }

  return 0;
}
