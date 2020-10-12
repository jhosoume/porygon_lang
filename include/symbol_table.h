#include "uthash.h"
#include <stdbool.h>
#include "token_type.h"

extern struct st_entry *symbol_table;

struct st_entry {
    char identifier[32];
    enum yytokentype ttype;
    int line;
    int col;
    UT_hash_handle hh; /* Makes the strucutre Hashable */
};

void force_add_entry(const char *id,
               enum yytokentype ttype,
               int line, int col);

void add_entry(const char *id,
               enum yytokentype ttype,
               int line, int col);

void free_st();

void print_table();

struct st_entry *find_id(const char *id);
