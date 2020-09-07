#include "scanner.h"

/* Routine defined in porygon_lex.c */
extern int yylex();

/* Maintain the line number */
extern int yylineno;

/* Text of the most recently matched token */
extern char* yytext;

/* Length of the most recently matched token */
extern int yyleng;

int main(void) {
  int ntoken;
  while((ntoken = yylex())) {
      printf("%d\n", ntoken);

  }

  return 0;
}
