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
  enum token_type ntoken;
  while((ntoken = yylex())) {
      printf("<%s>: %s (l: %d, d: %d)\n", token_string(ntoken), yytext, line_num, column_num);

  }

  return 0;
}
