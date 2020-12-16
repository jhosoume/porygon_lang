#include "tac_generator.h"

void genCode(struct tree_node *node) {
    if (errors > 0) {
        return;
    }
    // struct st_entry *entry = NULL;
    switch(node->node_type) {
        case(SUM):
            printf("IM IN A SUM\n");
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
                if (node->leaf[0]->is_const && !node->leaf[1]->is_const) {

                }
            }
            return;
        default: return;
    }
}

void defineSymbol(UT_string **addr) {
    utstring_printf(*addr, "$%d", symbol_count);
    ++symbol_count;
    return;
}

void binary_instr() {
    return;
}

bool check_both_const(struct tree_node *node1, struct tree_node *node2) {
    return node1->is_const && node2->is_const;
}
