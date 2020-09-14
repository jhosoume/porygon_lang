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
  struct token tok;
  while((ntoken = yylex())) {
      tok = create_token(ntoken, yytext, line_num, column_num - yyleng);
      print_token(tok);

  }

  return 0;
}
