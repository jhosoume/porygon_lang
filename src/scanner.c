#include "scanner.h"


/* Used by the scanner to identify line and column */
int line_num = 1;
int column_num = 1;

void run_scanner(void) {
    enum token_type ntoken;
    struct token tok;
    /* yylex function makes the tokenazation, 0 is returned when <EOF> */
    while((ntoken = yylex())) {
        tok = create_token(ntoken, yytext, line_num, column_num - yyleng);
      /* Each token will be passed to BISON parser */
        if (ntoken < 0) {
            red_print();
            print_token(tok);
            reset_pcolor();
        } else {
            print_token(tok);
        }
    }
}

int deals_input(int argc, char** argv) {
/* Check if the file was feed in the command line */
    if (argc == 2) {
        printf("[START SCANNER] -> Input file from command (argument).\n");
        /* Open file and directs it to flex */
        yyin = fopen(argv[1], "r");
        /* If file could not be opened */
        if (yyin == NULL) {
          fprintf(stderr, "[ERR] Could not open input file %s.\n", argv[1]);
          return 1;
        }
    } else {/* In other cases, the input must be piped */
        printf("[START SCANNER] -> Input file from pipe.\n");
    }
    return 0;
}

void ends_scan(int argc) {
    /* Close input files */
    if (argc == 2) {
        fclose(yyin);
  }
    /* Halts flex and destroy buffers (leak solved) */
    yylex_destroy();
}
