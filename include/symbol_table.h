#ifndef SYM_TAB_H
#define SYM_TAB_H

#include "uthash.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "token_type.h"

extern struct st_entry *symbol_table;

enum id_type {
    VARIABLE,
    FUNCTION
};

enum special_var {
    SIMPLE,
    ARRAY,
    TABLE,
    STRING
};

struct st_entry {
    char identifier[64];            /* ID name + Scope */
    char name[32];                  /* ID name */
    enum id_type id_type;           /* Function or Variable */
    char type[15];                  /* */
    int scope;                      /* Integer that is related to scope*/
    int line;
    int col;
    enum special_var spec_var;     /* Simple, array or table*/
    int size;

    UT_hash_handle hh; /* Makes the strucutre Hashable */
};

char const *ttos(enum id_type type);
void force_add_entry(
                     const char *name,
                     const char *type,
                     enum id_type id_type,
                     int scope,
                     enum special_var spec_var,
                     int size,
                     int line, int col);

void add_entry(
               const char *name,
               const char *type,
               enum id_type id_type,
               int scope,
               enum special_var spec_var,
               int size,
               int line, int col);

void free_st();

void print_table();

struct st_entry *find_id(const char *name, int scope);

#endif
