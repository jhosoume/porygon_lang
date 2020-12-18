#ifndef TAG_GEN_H
#define TAG_GEN_H
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "symbol_table.h"

extern int errors;
extern int label_num;
extern bool has_return;

void genCode(struct tree_node *node);
void defineSymbol(UT_string **addr);
void defineSymbolParam(UT_string **addr, int num);
void copySymbol(UT_string **addr, UT_string **copy);

void binary_instr(const char *inst, const char *dest, struct tree_node *node1, struct tree_node *node2, tac_code **code);
void binary_instr_boolean(const char *inst, const char *dest, struct tree_node *node1, struct tree_node *node2, tac_code **code);
void binary_instr_syms(const char *inst, const char *dest, const char *symb1, const char *symb, tac_code **code2);
void binary_instr_int(const char *inst, const char *dest, const char *symb1, int val, tac_code **code);
void binary_instr_int_r(const char *inst, const char *dest, int val, const char *symb1, tac_code **code);
void binary_instr_float(const char *inst, const char *dest, const char *symb1, float val, tac_code **codel);
void binary_instr_float_r(const char *inst, const char *dest,  float val, const char *symb1, tac_code **code);
void binary_instr_b(const char *inst, const char *dest, const char *symb1, bool val, tac_code **codel);
void binary_instr_b_r(const char *inst, const char *dest, bool val, const char *symb1,  tac_code **code);

void unary_instr_syms(const char *inst, const char *dest, const char *symb1, tac_code **code);
void unary_instr_int(const char *inst, const char *dest, int val, tac_code **code);
void unary_instr_float(const char *inst, const char *dest, float val, tac_code **code);
void unary_instr_char(const char *inst, const char *dest, char val, tac_code **code);
void unary_instr_bool(const char *inst, const char *dest, bool val, tac_code **code);

void doConversion(struct tree_node *node, tac_code **code);

int get_next_label();

bool check_both_const(struct tree_node *node1, struct tree_node *node2);

#endif
