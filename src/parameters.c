#include "parameters.h"

struct params_entry *find_param(struct params_entry **func_params, int param_indx) {
    struct params_entry *entry = NULL;
    HASH_FIND_INT(*func_params, &param_indx, entry);
    return entry;
}

void add_param(struct params_entry **func_params,
               int param_indx,
               enum ttype dec_type,
               const char *name
              ) {
    struct params_entry *entry = NULL;
    entry = find_param(func_params, param_indx);
    if (entry == NULL) {
        force_add_param(func_params, param_indx, dec_type, name);
    } else {
        yyerror("Semantic Error! Params Redefinition.");
    }
}

void force_add_param(struct params_entry **func_params,
               int param_indx,
               enum ttype dec_type,
               const char *name
              ) {
    struct params_entry *entry = (struct params_entry *) malloc(sizeof *entry);
    strcpy(entry->name, name);
    entry->dec_type = dec_type;
    entry->param_indx = param_indx;
    HASH_ADD_INT(*func_params, param_indx, entry);
}

void free_params(struct params_entry **func_params) {
    struct params_entry *entry, *tmp = NULL;
    HASH_ITER(hh, *func_params, entry, tmp) {
        HASH_DEL(*func_params, entry);
        // free(entry->name);
        // free(entry->identifier);
        free(entry);
    }
    return;
}

int num_params(struct params_entry **func_params) {
    return HASH_COUNT(*func_params);
}


void print_params(struct params_entry *func_params) {
    struct params_entry *entry = NULL;
    printf("\n    Function Params (count = %d)\n", num_params(&func_params));
    for (entry = func_params; entry != NULL; entry = entry->hh.next) {
        printf("     |-> (Indx: %d, ", entry->param_indx);
        printf("Type: %10s, ", type_string(entry->dec_type));
        printf("Name: %32s) ", entry->name);
        printf("\n");
    }

}
