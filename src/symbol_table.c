#include "symbol_table.h"


/* All code in here is based in the uthash by Hanson and O'Dwyer, 2018.
   Availabe in GitHub https://troydhanson.github.io/uthash/userguide.html#_a_hash_in_c
*/

struct st_entry *add_entry(struct st_entry *symbol_table, const char *id, enum token_type ttype, int line, int col) {
    struct st_entry *sample = (struct st_entry *) malloc(sizeof *sample);
    strcpy(sample->identifier, id);
    sample->ttype = ttype;
    sample->line = line;
    sample->col = col;
    HASH_ADD_STR(symbol_table, identifier, sample);
    return sample;
}

void free_st(struct st_entry *symbol_table) {
  struct st_entry *entry, *tmp = NULL;
  HASH_ITER(hh, symbol_table, entry, tmp) {
    HASH_DEL(symbol_table, entry);
    free(entry);
  }
}

struct st_entry *find_id(struct st_entry *symbol_table, const char *id) {
  struct st_entry *entry = NULL;
  HASH_FIND_STR(symbol_table, id, entry);
  if (entry == NULL) printf("[ERR] Entry not found, returning NULL\n");
  return entry;
}
