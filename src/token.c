#include "token.h"

/* Returns a token from the information provided. */
struct token create_token(enum yytokentype tok_type, const char * value) {
    struct token tok;
    tok.tok_type = tok_type;
    tok.att_value = value;
    return tok;
}

/* Prints a token. */
void print_token(struct token tok) {
    printf("< %s, value: %s > \n",
        token_type_string(tok.tok_type),
        tok.att_value
    );
}
