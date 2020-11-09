#include "semantic_analysis.h"

void check_main() {
    struct st_entry *entry = find_id("main", 0);
    if (entry == NULL) {
        yyerror("Semantic Error! Main function is not defined.");
    }

}

void func_declaration_params(struct tree_node *node) {
    if (node->node_type != FUNCT_DECLARATION || node->num_leaves != 4) {
        return;
    }
    if (node->leaf[2] == NULL) return;
    struct st_entry *entry =  NULL;
    entry = find_id_rec(node->leaf[1]->name);
    if (entry != NULL) {
        add_param_rec(node->leaf[2], &entry->params, true);
    }

}

void add_param_rec(struct tree_node *node, struct params_entry **func_params, bool redef) {
    static int indx = 0;
    if (redef) {
        indx = 0;
    }
    if (node == NULL) {
        return;
    } else if (node->node_type == PARAMETER_DECLARATION) {
        add_param(func_params, indx++, node->leaf[0]->type, node->leaf[1]->name);
        return;
    }
    for (int leaf_indx = 0; leaf_indx < node->num_leaves; ++leaf_indx) {
        add_param_rec(node->leaf[leaf_indx], func_params, false);
    }

}

void semantic_nlz() {
    check_main();
}
