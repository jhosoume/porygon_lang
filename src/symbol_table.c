#include "symbol_table.h"


/* All code in here is based in the uthash by Hanson and O'Dwyer, 2018.
   Availabe in GitHub https://troydhanson.github.io/uthash/userguide.html#_a_hash_in_c
*/

void add_entry(const char *id, enum token_type ttype, int line, int col) {
    struct st_entry *sample = (struct st_entry *) malloc(sizeof *sample);
    strcpy(sample->identifier, id);
    sample->ttype = ttype;
    sample->line = line;
    sample->col = col;
    HASH_ADD_STR(symbol_table, identifier, sample);
}

void free_st() {
    struct st_entry *entry, *tmp = NULL;
    HASH_ITER(hh, symbol_table, entry, tmp) {
        HASH_DEL(symbol_table, entry);
        free(entry);
    }
}

struct st_entry *find_id(const char *id) {
    struct st_entry *entry = NULL;
    HASH_FIND_STR(symbol_table, id, entry);
    if (entry == NULL) printf("[ERR] Entry not found, returning NULL\n");
    return entry;
}

void print_table() {
    struct st_entry *entry = NULL;
    printf("-------------------------------------------------------------------------------------\n");
    printf("                                    SYMBOL TABLE                                     \n");
    printf("-------------------------------------------------------------------------------------\n");
    for (entry = symbol_table; entry != NULL; entry = entry->hh.next) {
        printf("Entry Name: %32s | ", entry->identifier);
        printf("Line: %4d | ", entry->line);
        printf("Column: %4d | ", entry->col);
        printf("\n");
    }
    printf("-------------------------------------------------------------------------------------\n");
}
