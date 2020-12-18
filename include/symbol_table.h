#ifndef SYM_TAB_H
#define SYM_TAB_H

#include "uthash.h"
#include "utstring.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "token_type.h"
#include "type.h"
#include "scope.h"
#include "parser.h"
#include "parameters.h"
#include "columns.h"
#include "values.h"
#include "arrays.h"
#include "tac_generator.h"

extern struct st_entry *symbol_table;
extern struct scope_stack *sp_stack;
extern struct scope_stack *temp_stack;
extern int symbol_count;
extern int cur_scope;

enum id_type {
    VARIABLE,
    FUNCTION,
    PARAM
};

enum special_var {
    SIMPLE,
    ARRAY,
    TABLE,
    STRING
};

struct st_entry {
    char identifier[64];             /* ID name + Scope */
    char name[32];                   /* ID name */
    enum id_type id_type;            /* Function, Variable or Parameter */
    char type[15];                   /* Type of the entry as a string */
    enum ttype dec_type;             /* Declared type (e.g. integer, float...)*/
    int scope;                       /* Integer that is related to scope*/
    enum special_var spec_var;       /* Simple, array or table*/
    int size;
    bool defined;                    /* Check if the variable has been defined */
    union Values value;              /* Stores a single value */
    ar_values *ar_val;               /* Stores multiple values */
    struct params_entry *params;     /* Hold parameter values */
    struct column_entry *columns;    /* Hold column values */
    UT_string *tac_sym;              /* Symbol to use in tac */
    UT_string *tac_sym_aux;                  /* Symbol to use in tac */

    UT_hash_handle hh; /* Makes the strucutre Hashable */
};

char const *ttos(enum id_type type);
struct st_entry *force_add_entry(
                     const char *name,
                     enum ttype dec_type,
                     const char *type,
                     enum id_type id_type,
                     int scope,
                     enum special_var spec_var,
                     int size);

struct st_entry *add_entry(
               const char *name,
               enum ttype dec_type,
               const char *type,
               enum id_type id_type,
               int scope,
               enum special_var spec_var,
               int size);

void free_st();

void print_table();

struct st_entry *find_id(const char *name, int scope);
struct st_entry *find_id_rec(const char *name);

#endif
