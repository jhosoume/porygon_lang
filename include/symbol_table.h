#include "uthash.h"
#include "token_type.h"

struct st_entry {
    char identifier[32];
    enum token_type ttype;
    int line;
    int col;
    UT_hash_handle hh; /* Makes the strucutre Hashable */
};

struct st_entry *add_entry(struct st_entry *symbol_table,
                           const char *id,
                           enum token_type ttype,
                           int line, int col);

void free(struct st_entry *symbol_table);

void find(struct st_entry *symbol_table, const char *id);
