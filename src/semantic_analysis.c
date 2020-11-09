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

void verify_args(struct tree_node *node) {
    if (node->node_type != FUNCT_CALL || node->num_leaves != 2) {
        return;
    }
    struct st_entry *entry =  NULL;
    int indx_c;
    entry = find_id_rec(node->leaf[0]->name);
    if (entry != NULL) {
        indx_c = verify_arg_rec(node->leaf[1], &entry->params, true);
    }
    /* Check num of params */
    if (indx_c == 0) {
        return;
    }


}

int verify_arg_rec(struct tree_node *node, struct params_entry **func_params, bool redef) {
    static int indx = 0;
    struct params_entry *p_entry = NULL;
    if (redef) {
        indx = 0;
    }
    if (node == NULL) {
        return indx;
    } else if (node->node_type == ARG_LIST) {
        p_entry = find_param(func_params, indx);
        if (p_entry->dec_type != node->leaf[1]->type) {
            yyerror("Semantic Error! Parameter types does not match.");
        }
        indx++;
        return indx;
    } else if (node->node_type == ARG_LIST_S) {
        p_entry = find_param(func_params, indx);
        if (p_entry->dec_type != node->leaf[0]->type) {
            yyerror("Semantic Error! Parameter types does not match.");
        }
        indx++;
        return indx;
    }
    for (int leaf_indx = 0; leaf_indx < node->num_leaves; ++leaf_indx) {
        verify_arg_rec(node->leaf[leaf_indx], func_params, false);
    }
    return indx;
}

void semantic_nlz() {
    check_main();
}
