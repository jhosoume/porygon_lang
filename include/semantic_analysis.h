#ifndef SEMANTIC_A
#define SEMANTIC_A

#include "parser.h"
#include "tree.h"
#include "symbol_table.h"

extern struct st_entry *symbol_table;

void check_main();
void semantic_nlz();

#endif
