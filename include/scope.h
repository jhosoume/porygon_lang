#ifndef SCOPE_H
#define SCOPE_H

#include "utstack.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct scope_stack {
    int scopes;
    struct scope_stack *next;
} scope_stack;

/* Definition of scope based on hint by Jose */

extern int cur_scope;
extern int count_scope;

extern scope_stack *sp_stack;

void add_stack(int scope);
int pop_stack();
void print_stack();
void free_stack();

#endif
