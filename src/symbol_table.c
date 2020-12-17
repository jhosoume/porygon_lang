#include "symbol_table.h"


/* Code in here is based in the uthash by Hanson and O'Dwyer, 2018.
   Availabe in GitHub https://troydhanson.github.io/uthash/userguide.html#_a_hash_in_c
*/

struct st_entry *force_add_entry(
                      const char *name,
                      enum ttype dec_type,
                      const char *type,
                      enum id_type id_type,
                      int scope,
                      enum special_var spec_var,
                      int size) {
    struct st_entry *sample = (struct st_entry *) malloc(sizeof *sample);
    strcpy(sample->name, name);
    char scope_char[5 * sizeof(char)];
    sprintf(scope_char, "_%d", scope);
    strcpy(sample->identifier, name);
    strcat(sample->identifier, scope_char);
    strcpy(sample->type, type);
    sample->id_type = id_type;
    sample->dec_type = dec_type;
    sample->scope = scope;
    sample->spec_var = spec_var;
    sample->size = size;
    sample->defined = false;
    sample->params = NULL;
    sample->columns = NULL;
    sample->value.int_n = 0;
    sample->ar_val = NULL;
    utstring_new(sample->tac_sym);
    if (sample->spec_var == SIMPLE && sample->id_type == VARIABLE) {
        defineSymbol(&sample->tac_sym);
    } else {
        utstring_printf(sample->tac_sym, "EMPTY");
    }
    HASH_ADD_STR(symbol_table, identifier, sample);
    return sample;
}

struct st_entry *add_entry(
                const char *name,
                enum ttype dec_type,
                const char *type,
                enum id_type id_type,
                int scope,
                enum special_var spec_var,
                int size) {
    struct st_entry *entry = NULL;
    entry = find_id(name, scope);
    if (entry == NULL) {
        entry = force_add_entry(name, dec_type, type, id_type, scope, spec_var, size);
        return entry;
    } else {
        if (entry->id_type == VARIABLE) {
            yyerror("Semantic Error! Re-declaration of variable.");
        } else if (entry->id_type == FUNCTION) {
            yyerror("Semantic Error! Function redefinition.");
        } else if (entry->id_type == PARAM) {
            yyerror("Semantic Error! Re-declaration of function parameter.");
        } else  {
            yyerror("Semantic Error! Redefinition.");
        }
        return entry;
    }
}

void free_st() {
    struct st_entry *entry, *tmp = NULL;
    HASH_ITER(hh, symbol_table, entry, tmp) {
        HASH_DEL(symbol_table, entry);
        // free(entry->name);
        // free(entry->identifier);
        free_params(&entry->params);
        entry->params = NULL;
        free_col(&entry->columns);
        entry->columns = NULL;
        free_values(&entry->ar_val);
        entry->ar_val = NULL;
        utstring_free(entry->tac_sym);
        entry->tac_sym = NULL;
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

struct st_entry *find_id_rec(const char *name) {
    /* Using temp stack */
    bool found = false;
    int f_scope = cur_scope;

    /* Check if can be found in the current scope */
    struct st_entry *entry = find_id(name, f_scope);
    if (entry != NULL) {
        found = true;
    }

    /* Only stops when found */
    while(!found && !STACK_EMPTY(sp_stack)) {
        f_scope = pop_stack();
        add_generic(f_scope);

        entry = find_id(name, f_scope);
        if (entry != NULL) {
            found = true;
        }
    }

    /* Return values to the stack */
    while(!STACK_EMPTY(temp_stack)) {
        add_stack(pop_generic());
    }

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
    } else if (type == PARAM) {
        return "PARAM";
    } else if (type == FUNCTION) {
        return "FUNCTION";
    } else {
        return "UNKNOWN";
    }
}

char const *vtos(enum special_var type) {
    if (type == SIMPLE) {
        return "SIMPLE";

    } else if (type == ARRAY) {
        return "ARRAY";

    } else if (type == TABLE) {
        return "TABLE";

    } else if (type == STRING) {
        return "STRING";
    } else {
        return "NONE";
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
        printf("Var Type: %6s | ", vtos(entry->spec_var));
        printf("Defined: %5s | ", entry->defined ? "true" : "false");
        // printf("Line: %4d | ", entry->line);
        // printf("Column: %4d | ", entry->col);
        if (entry->id_type == FUNCTION) {
            print_params(entry->params);
        }
        if (entry->spec_var == TABLE) {
            print_col(entry->columns);
        }
        if (entry->spec_var == ARRAY) {
            print_values(&entry->ar_val, entry->dec_type);
        }
        if (entry->spec_var == SIMPLE && (entry->id_type == VARIABLE || entry->id_type == PARAM)) {
            printf("%s\n", utstring_body(entry->tac_sym));
        }
        printf("\n");
    }
    printf("---------------------------------------------------------------------------------------------------------------------------\n");
}
