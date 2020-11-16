#ifndef TYPE_C
#define TYPE_C

#include "parser.h"
#include "symbol_table.h"
#include "scope.h"
#include "type.h"
#include "tree.h"
#include "parameters.h"

extern int cur_scope;
extern scope_stack *sp_stack;


void check_type(struct tree_node *node);
bool binary_bool_check(struct tree_node *node);
bool binary_numerical_check(struct tree_node *node);
bool check_return(struct tree_node *node, enum ttype func_type);

#endif
