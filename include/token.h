#ifndef TOKEN_H
#define TOKEN_H

#include "token_type.h"

/* Defines a token that will be returned by the scanner */
struct token {
    enum token_type tok_type;
    const char * att_value;
    int line;
    int column;
};

/* Returns a token from the information provided. */
struct token create_token(enum token_type tok_type, const char * value, int line, int col);

/* Prints a token. */
void print_token(struct token tok);

#endif
