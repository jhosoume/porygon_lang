#include "symbol_table.h"

struct st_entry *add_entry(struct st_entry *symbol_table, const char *id, enum token_type ttype, int line, int col) {
    struct st_entry *sample = (struct st_entry *) malloc(sizeof *sample);
    strcpy(sample->identifier, id);
    sample->ttype = ttype;
    sample->line = line;
    sample->col = col;
    HASH_ADD_STR(symbol_table, identifier, sample);
    return sample;
}
