#include <stdio.h>
#include "scanner.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

char *names[] = {NULL, "db_type", "db_name", "db_table_prefix", "db_port"};

int main(void) {
  int ntoken, vtoken; // name and value token

  ntoken = yylex(); // get the first token, scanner returns the first token
  while(ntoken) {   // ylex returns a 0 when EOF
    printf("%d\n", ntoken); // As defined in the language it returns an integer
    ntoken = yylex();
  }

  return 0;
}
