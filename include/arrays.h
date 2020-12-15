#ifndef ARRAYS_H
#define ARRAYS_H

#include <stdio.h>
#include <stdlib.h>
#include "values.h"
#include "utlist.h"

typedef struct ar_values {
    union Values val;
    struct ar_values *prev;
    struct ar_values *next;
} ar_values;

// IMPORTANT! Remember to always initialize to NULL

void add_int_value(ar_values **values, int val);
void add_float_value(ar_values **values, float val);
void add_char_value(ar_values **values, char val);
int num_values(ar_values **values);
void free_values(ar_values **values);
ar_values *get_in(ar_values **values, int indx);

#endif
