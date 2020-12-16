#include "tac_generator.h"

void genCode(struct tree_node *node) {
    if (errors > 0) {
        return;
    }
    struct st_entry *entry = NULL;
    switch(node->node_type) {
        case(ID):
            entry = find_id_rec(node->name);
            if (entry == NULL) return;
            copySymbol(&node->addr, &entry->tac_sym);
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
                printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                // const char *inst = binary_instr("add", utstring_body(node->addr), node->leaf[0], node->leaf[1]);
                // printf("[HERE] %s\n", inst);
                // append_code_line(&node->code, inst);
            }
            // print_code(&node->code);
            return;
        default: return;
    }
}

void defineSymbol(UT_string **addr) {
    utstring_printf(*addr, "$%d", symbol_count);
    ++symbol_count;
    return;
}

void copySymbol(UT_string **addr, UT_string **copy) {
    utstring_printf(*addr, "%s", utstring_body(*copy));
    return;
}

const char *binary_instr(const char *inst, const char *dest, struct tree_node *node1, struct tree_node *node2) {
    if (node1->is_const && !node2->is_const) {
        if (node1->type == INT_) {
            return binary_instr_int(inst, dest, utstring_body(node2->addr), node1->value.int_n);
        } else if (node1->type == FLOAT_) {
            return binary_instr_float(inst, dest, utstring_body(node2->addr), node1->value.float_n);
        }
    } else if (!node1->is_const && node2->is_const) {
        if (node2->type == INT_) {
            return binary_instr_int(inst, dest, utstring_body(node1->addr), node2->value.int_n);
        } else if (node1->type == FLOAT_) {
            return binary_instr_float(inst, dest, utstring_body(node1->addr), node2->value.float_n);
        }
    // } else if (!node1->is_const && !node2->is_const) {
    }
    return binary_instr_syms(inst, dest, utstring_body(node1->addr), utstring_body(node2->addr));

}

const char *binary_instr_syms(const char *inst, const char *dest, const char *symb1, const char *symb2) {
    UT_string *tmp = NULL;
    utstring_new(tmp);
    utstring_printf(tmp, "%s %s, %s, %s\n", inst, dest, symb1, symb2);
    const char *instruction = utstring_body(tmp);
    utstring_free(tmp);
    return instruction;
}

const char *binary_instr_int(const char *inst, const char *dest, const char *symb1, int val) {
    UT_string *tmp = NULL;
    utstring_new(tmp);
    utstring_printf(tmp, "%s %s, %s, %d\n", inst, dest, symb1, val);
    const char *instruction = utstring_body(tmp);
    utstring_free(tmp);
    return instruction;
}

const char *binary_instr_float(const char *inst, const char *dest, const char *symb1, float val) {
    UT_string *tmp = NULL;
    utstring_new(tmp);
    utstring_printf(tmp, "%s %s, %s, %f\n", inst, dest, symb1, val);
    const char *instruction = utstring_body(tmp);
    utstring_free(tmp);
    return instruction;
}

bool check_both_const(struct tree_node *node1, struct tree_node *node2) {
    return node1->is_const && node2->is_const;
}
