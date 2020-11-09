#ifndef PARAMS_H
#define PARAMS_H

#include <stdio.h>

#include "uthash.h"
#include "type.h"
#include "parser.h"

struct params_entry {
    int param_indx;
    enum ttype dec_type;
    char name[32];

    UT_hash_handle hh; /* Makes the strucutre Hashable */
};

struct params_entry *find_param(struct params_entry **func_params, int param_indx);
void add_param(struct params_entry **func_params,
               int param_indx,
               enum ttype dec_type,
               const char *name
           );
void force_add_param(struct params_entry **func_params,
               int param_indx,
               enum ttype dec_type,
               const char *name
           );
void free_params(struct params_entry **func_params);
void print_params(struct params_entry *func_params);

#endif
