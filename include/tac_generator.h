#ifndef TAG_GEN_H
#define TAG_GEN_H

#include "tree.h"
#include "symbol_table.h"

extern int errors;

void genCode(struct tree_node *node);
void defineSymbol(UT_string **addr);
void binary_instr();
bool check_both_const(struct tree_node *node1, struct tree_node *node2);

#endif
