#ifndef SEMANTIC_A
#define SEMANTIC_A

#include "parser.h"
#include "tree.h"
#include "symbol_table.h"

extern struct st_entry *symbol_table;

void check_main();
void semantic_nlz();
void func_declaration_params(struct tree_node *node);
void table_declaration_cols(struct tree_node *node);
void add_param_rec(struct tree_node *node, struct params_entry **func_params, bool redef);
void add_cols_rec(struct tree_node *node, struct column_entry **table_cols, bool redef);
void verify_args(struct tree_node *node);
int verify_arg_rec(struct tree_node *node, struct params_entry **func_params, bool redef);
void check_var(struct tree_node *node);
void check_defined(const char *name);
void set_defined(const char *name);

#endif
