#include "symbol_table.h"


/* All code in here is based in the uthash by Hanson and O'Dwyer, 2018.
   Availabe in GitHub https://troydhanson.github.io/uthash/userguide.html#_a_hash_in_c
*/

void force_add_entry(const char *name, const char *type, enum id_type id_type, int scope, int line, int col) {
    struct st_entry *sample = (struct st_entry *) malloc(sizeof *sample);
    strcpy(sample->name, name);
    char scope_char[5 * sizeof(char)];
    sprintf(scope_char, "_%d", scope);
    strcpy(sample->identifier, name);
    strcat(sample->identifier, scope_char);
    strcpy(sample->type, type);
    sample->id_type = id_type;
    sample->scope = scope;
    sample->line = line;
    sample->col = col;
    HASH_ADD_STR(symbol_table, identifier, sample);
}

void add_entry(const char *name, const char *type, enum id_type id_type, int scope, int line, int col) {
    struct st_entry *entry = NULL;
    entry = find_id(name, scope);
    if (entry == NULL) {
        force_add_entry(name, type, id_type, scope, line, col);
    }
}

void free_st() {
    struct st_entry *entry, *tmp = NULL;
    HASH_ITER(hh, symbol_table, entry, tmp) {
        HASH_DEL(symbol_table, entry);
        // free(entry->name);
        // free(entry->identifier);
        free(entry);
    }
}

struct st_entry *find_id(const char *name, int scope) {
    char scope_char[5 * sizeof(char)];
    char identifier[strlen(name) + 5 * sizeof(char)];
    sprintf(scope_char, "_%d", scope);
    strcpy(identifier, name);
    strcat(identifier, scope_char);
    struct st_entry *entry = NULL;
    HASH_FIND_STR(symbol_table, identifier, entry);
    // if (entry == NULL) printf("[ERR] Entry not found, returning NULL\n");
    return entry;
}

struct st_entry *find_id_verbose(const char *name, int scope) {
    char scope_char[5 * sizeof(char)];
    char identifier[strlen(name) + 5 * sizeof(char)];
    sprintf(scope_char, "_%d", scope);
    strcpy(identifier, name);
    strcat(identifier, scope_char);
    struct st_entry *entry = NULL;
    HASH_FIND_STR(symbol_table, identifier, entry);
    if (entry == NULL) printf("[ERR] Entry not found, returning NULL\n");
    return entry;

}

char const *ttos(enum id_type type) {
    if (type == VARIABLE) {
        return "VARIABLE";
    } else {
        return "FUNCTION";
    }
}

void print_table() {
    struct st_entry *entry = NULL;
    printf("---------------------------------------------------------------------------------------------------------------------------\n");
    printf("                                    SYMBOL TABLE                                     \n");
    printf("---------------------------------------------------------------------------------------------------------------------------\n");
    for (entry = symbol_table; entry != NULL; entry = entry->hh.next) {
        printf("Entry Name: %32s | ", entry->identifier);
        printf("Type: %10s | ", entry->type);
        printf("ID: %10s | ", ttos(entry->id_type));
        printf("Scope: %3d | ", entry->scope);
        // printf("Line: %4d | ", entry->line);
        // printf("Column: %4d | ", entry->col);
        printf("\n");
    }
    printf("---------------------------------------------------------------------------------------------------------------------------\n");
}
