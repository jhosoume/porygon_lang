#include "tac_generator.h"

void genCode(struct tree_node *node) {
    if (errors > 0) {
        return;
    }
    struct st_entry *entry = NULL;
    char instruction[500];
    switch(node->node_type) {
        case(ID):
            entry = find_id_rec(node->name);
            if (entry == NULL) return;
            copySymbol(&node->addr, &entry->tac_sym);
            return;

        case(DECLARATION_LIST):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            print_code(&node->code);
            return;

        case(VAR_DECLARATION):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if (node->leaf[1]->is_const) {
                if (node->leaf[1]->type == FLOAT_) {
                    unary_instr_float("mov", utstring_body(node->leaf[0]->addr), node->leaf[1]->value.float_n, &node->code);
                } else if (node->leaf[1]->type == INT_) {
                    unary_instr_int("mov", utstring_body(node->leaf[0]->addr), node->leaf[1]->value.int_n, &node->code);
                } else if (node->leaf[1]->type == BOOL_) {
                    unary_instr_bool("mov", utstring_body(node->leaf[0]->addr), node->leaf[1]->value.boolean, &node->code);
                } else if (node->leaf[1]->type == CHAR_) {
                    unary_instr_char("mov", utstring_body(node->leaf[0]->addr), node->leaf[1]->value.character, &node->code);
                }
            } else {
                unary_instr_syms("mov", utstring_body(node->leaf[0]->addr), utstring_body(node->leaf[1]->addr), &node->code);
            }
            print_code(&node->code);
            return;

        case(ARRAY_DECLARATION_DEFINITION):
            return;

        case(TABLE_DECLARATION_DEFINITION):
            return;

        case(VAR_SIMPLE_DECLARATION):
            entry = find_id_rec(node->leaf[1]->name);
            if (entry == NULL) return;
            copySymbol(&node->addr, &entry->tac_sym);
            return;

        case(ARRAY_DECLARATION):
            entry = find_id_rec(node->leaf[1]->name);
            if (entry == NULL) return;
            copySymbol(&node->addr, &entry->tac_sym);
            return;

        case(TABLE_DECLARATION):
            return;

        case(TABLE_DEFINITION):
            return;

        case(CONST_LIST):
            return;

        case(STRING_LIST):
            return;

        case(COLUMN_CONTENT):
            return;

        case(FUNCT_DECLARATION):
            sprintf(instruction, "%s:\n", node->leaf[1]->name);
            append_code_line(&node->code, instruction);
            if (node->num_leaves == 4) {
                unite_code(&node->code, &node->leaf[3]->code);
            } else if (node->num_leaves == 3) {
                unite_code(&node->code, &node->leaf[2]->code);
            }
            print_code(&node->code);
            return;

        case(SUM):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.float_n = node->leaf[0]->value.float_n + node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->value.float_n = node->leaf[0]->value.float_n + node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.float_n = node->leaf[0]->value.int_n + node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                    node->value.int_n = node->leaf[0]->value.int_n + node->leaf[1]->value.int_n;
                }
            } else {
                defineSymbol(&node->addr);
                // printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                binary_instr("add", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
                // append_code_line(&node->code, inst);
            }
            print_code(&node->code);
            return;

        default:
            return;
    }
}

void defineSymbol(UT_string **addr) {
    utstring_printf(*addr, "$%d", symbol_count);
    ++symbol_count;
    return;
}

void defineSymbolParam(UT_string **addr, int num) {
    utstring_printf(*addr, "#%d", num);
    return;
}

void copySymbol(UT_string **addr, UT_string **copy) {
    utstring_printf(*addr, "%s", utstring_body(*copy));
    return;
}

void binary_instr(const char *inst, const char *dest, struct tree_node *node1, struct tree_node *node2, tac_code **code) {
    if (node1->is_const && !node2->is_const) {
        if (node1->type == INT_) {
            binary_instr_int(inst, dest, utstring_body(node2->addr), node1->value.int_n, code);
            return;
        } else if (node1->type == FLOAT_) {
            binary_instr_float(inst, dest, utstring_body(node2->addr), node1->value.float_n, code);
            return;
        }
    } else if (!node1->is_const && node2->is_const) {
        if (node2->type == INT_) {
            binary_instr_int(inst, dest, utstring_body(node1->addr), node2->value.int_n, code);
            return;
        } else if (node1->type == FLOAT_) {
            binary_instr_float(inst, dest, utstring_body(node1->addr), node2->value.float_n, code);
            return;
        }
    // } else if (!node1->is_const && !node2->is_const) {
    }
    binary_instr_syms(inst, dest, utstring_body(node1->addr), utstring_body(node2->addr), code);
    return;
}

void binary_instr_syms(const char *inst, const char *dest, const char *symb1, const char *symb2, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %s, %s\n", inst, dest, symb1, symb2);
    append_code_line(code, instruction);
}

void binary_instr_int(const char *inst, const char *dest, const char *symb1, int val, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %s, %d\n", inst, dest, symb1, val);
    append_code_line(code, instruction);
}

void binary_instr_float(const char *inst, const char *dest, const char *symb1, float val, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %s, %f\n", inst, dest, symb1, val);
    append_code_line(code, instruction);
}

void unary_instr_syms(const char *inst, const char *dest, const char *symb1, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %s\n", inst, dest, symb1);
    append_code_line(code, instruction);
}

void unary_instr_int(const char *inst, const char *dest, int val, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %d\n", inst, dest, val);
    append_code_line(code, instruction);
}

void unary_instr_float(const char *inst, const char *dest, float val, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %f\n", inst, dest, val);
    append_code_line(code, instruction);
}

void unary_instr_char(const char *inst, const char *dest, char val, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, '%c'\n", inst, dest, val);
    append_code_line(code, instruction);
}

void unary_instr_bool(const char *inst, const char *dest, bool val, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %d\n", inst, dest, val);
    append_code_line(code, instruction);
}

bool check_both_const(struct tree_node *node1, struct tree_node *node2) {
    return node1->is_const && node2->is_const;
}
