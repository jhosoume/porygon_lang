#ifndef TAG_GEN_H
#define TAG_GEN_H

#include "tree.h"
#include "symbol_table.h"

extern int errors;

void genCode(struct tree_node *node);
void defineSymbol(UT_string **addr);
void copySymbol(UT_string **addr, UT_string **copy);
const char *binary_instr(const char *inst, const char *dest, struct tree_node *node1, struct tree_node *node2);
const char *binary_instr_syms(const char *inst, const char *dest, const char *symb1, const char *symb2);
const char *binary_instr_int(const char *inst, const char *dest, const char *symb1, int val);
const char *binary_instr_float(const char *inst, const char *dest, const char *symb1, float val);
bool check_both_const(struct tree_node *node1, struct tree_node *node2);

#endif
