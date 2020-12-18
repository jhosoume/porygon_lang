#include "columns.h"

struct column_entry *find_col(struct column_entry **table_cols, int column_indx) {
    struct column_entry *entry = NULL;
    HASH_FIND_INT(*table_cols, &column_indx, entry);
    return entry;
}
struct column_entry *find_col_name(struct column_entry **table_cols, const char* name) {
    struct column_entry *entry, *tmp = NULL;
    HASH_ITER(hh, *table_cols, entry, tmp) {
        if (entry != NULL && (strcmp(entry->name, name) == 0)) {
            return entry;
        }
    }
    return entry;
}

void add_col(struct column_entry **table_cols,
               int column_indx,
               enum ttype dec_type,
               const char *name
              ) {
    struct column_entry *entry = NULL;
    entry = find_col(table_cols, column_indx);
    if (entry == NULL) {
        force_add_col(table_cols, column_indx, dec_type, name);
    } else {
        yyerror("Semantic Error! Params Redefinition.");
    }
}

void force_add_col(struct column_entry **table_cols,
               int column_indx,
               enum ttype dec_type,
               const char *name
              ) {
    struct column_entry *entry = (struct column_entry *) malloc(sizeof *entry);
    strcpy(entry->name, name);
    entry->ar_val = NULL;
    entry->dec_type = dec_type;
    entry->column_indx = column_indx;
    utstring_new(entry->tac_sym);
    HASH_ADD_INT(*table_cols, column_indx, entry);
}

void free_col(struct column_entry **table_cols) {
    struct column_entry *entry, *tmp = NULL;
    HASH_ITER(hh, *table_cols, entry, tmp) {
        free_values(&entry->ar_val);
        entry->ar_val = NULL;
        utstring_free(entry->tac_sym);
        entry->tac_sym = NULL;
        HASH_DEL(*table_cols, entry);
        // free(entry->name);
        // free(entry->identifier);
        free(entry);
    }
    return;
}

int num_col(struct column_entry **table_cols) {
    if (table_cols != NULL) {
        return HASH_COUNT(*table_cols);
    }
    return 0;
}

void print_col(struct column_entry *table_cols) {
    struct column_entry *entry = NULL;
    printf("\n    Table Columns (count = %d)\n", num_col(&table_cols));
    for (entry = table_cols; entry != NULL; entry = entry->hh.next) {
        printf("     |-> (Indx: %d, ", entry->column_indx);
        printf("Type: %10s, ", type_string(entry->dec_type));
        printf("Name: %32s) ", entry->name);
        printf("\n");
    }
}
