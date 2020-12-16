#ifndef TAG_GEN_H
#define TAG_GEN_H

#include "tree.h"
#include "symbol_table.h"

void genCode(struct tree_node *node);
void defineSymbol(UT_string **addr);

#endif
