#include "tac_generator.h"

void genCode(struct tree_node *node) {
    struct st_entry *entry = NULL;
    switch(node->node_type) {
        case(SUM):
            printf("IM IN A SUM\n");
            return;
        default: return;
    }
}

void defineSymbol(UT_string **addr) {
    utstring_printf(*addr, "$%d", symbol_count);
    ++symbol_count;
    return;
}
