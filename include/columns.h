#ifndef COLUMN_H
#define COLUMN_H

#include <stdio.h>

#include "uthash.h"
#include "type.h"
#include "parser.h"
#include "arrays.h"
#include "utstring.h"
#include "tac_generator.h"


struct column_entry {
    int column_indx;
    enum ttype dec_type;
    ar_values *ar_val;               /* Stores multiple values */
    char name[150];
    UT_string *tac_sym;              /* Symbol to use in tac */

    UT_hash_handle hh; /* Makes the strucutre Hashable */
};

struct column_entry *find_col(struct column_entry **table_cols, int column_indx);
struct column_entry *find_col_name(struct column_entry **table_cols, const char *name);
void add_col(struct column_entry **table_cols,
               int column_indx,
               enum ttype dec_type,
               const char *name
           );
void force_add_col(struct column_entry **table_cols,
               int column_indx,
               enum ttype dec_type,
               const char *name
           );
void free_col(struct column_entry **table_cols);
void print_col(struct column_entry *table_cols);
int num_col(struct column_entry **table_cols);


#endif
