#ifndef TAG_GEN_H
#define TAG_GEN_H
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "symbol_table.h"

extern int errors;

void genCode(struct tree_node *node);
void defineSymbol(UT_string **addr);
void copySymbol(UT_string **addr, UT_string **copy);
void binary_instr(const char *inst, const char *dest, struct tree_node *node1, struct tree_node *node2, tac_code **code);
void binary_instr_syms(const char *inst, const char *dest, const char *symb1, const char *symb, tac_code **code2);
void binary_instr_int(const char *inst, const char *dest, const char *symb1, int val, tac_code **code);
void binary_instr_float(const char *inst, const char *dest, const char *symb1, float va, tac_code **codel);
bool check_both_const(struct tree_node *node1, struct tree_node *node2);

#endif
