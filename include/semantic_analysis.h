#ifndef SEMANTIC_A
#define SEMANTIC_A

#include "parser.h"
#include "tree.h"
#include "symbol_table.h"

extern struct st_entry *symbol_table;

void check_main();
void semantic_nlz();
void func_declaration_params(struct tree_node *node);
void add_param_rec(struct tree_node *node, struct params_entry **func_params, bool redef);
void verify_args(struct tree_node *node);
int verify_arg_rec(struct tree_node *node, struct params_entry **func_params, bool redef);
void check_var(struct tree_node *node);

#endif
