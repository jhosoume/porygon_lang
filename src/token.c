#include "token.h"

/* Returns a token from the information provided. */
struct token create_token(enum yytokentype tok_type, const char * value, int line, int col) {
    struct token tok;
    tok.tok_type = tok_type;
    tok.att_value = value;
    tok.line = line;
    tok.column = col;
    return tok;
}

/* Prints a token. */
void print_token(struct token tok) {
    printf("< (line: %d column: %d) %s, value: %s > \n",
        tok.line,
        tok.column,
        token_type_string(tok.tok_type),
        tok.att_value
    );
}
