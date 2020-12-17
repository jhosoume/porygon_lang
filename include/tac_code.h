#ifndef TAC_CODE_H
#define TAC_CODE_H

#include <stdio.h>
#include <stdlib.h>
#include "values.h"
#include "utlist.h"
#include "utstring.h"
#include "type.h"

typedef struct tac_code {
    UT_string *code;
    struct tac_code *prev;
    struct tac_code *next;
} tac_code;

// IMPORTANT! Remember to always initialize to NULL

void prepend_code_line(tac_code **tac, const char *code);
void append_code_line(tac_code **tac, const char *code);
void unite_code(tac_code **tac1, tac_code **tac2);
int num_lines(tac_code **tac);
void free_tac(tac_code **tac);
tac_code *tac_in(tac_code **tac, int indx);
void print_code(tac_code **tac);
void save_file(tac_code **tac, const char *file_name);

#endif
