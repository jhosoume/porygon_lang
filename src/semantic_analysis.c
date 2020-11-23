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
        // printf("FINISH\n");
        /* Check num of params */
        if (indx_c != (num_params(&entry->params))) {
            // printf("[CHECK]%d != %d\n", indx_c, num_params(&entry->params));
            yyerror("Semantic Error! Number of parameters does not match.");
        }
    }
}

int verify_arg_rec(struct tree_node *node, struct params_entry **func_params, bool redef) {
    static int indx = 0;
    struct params_entry *p_entry = NULL;
    if (redef) {
        // printf("START OVER\n");
        indx = 0;
    }
    if (node == NULL) {
        return indx;
    } else if (node->node_type == ARG_LIST) {
        // printf("IM IN %s %s %d\n", node->name, node->leaf[0]->name, indx);
        p_entry = find_param(func_params, indx);
        if (p_entry->dec_type != node->leaf[0]->type) {
            if (p_entry->dec_type == FLOAT_ && node->leaf[0]->type == INT_) {
                node->leaf[0]->need_casting = true;
            } else {
                // printf("[CHECK] (indx = %d) %s %d != %s %d [%s]\n", indx, type_string(p_entry->dec_type), p_entry->dec_type, type_string(node->leaf[0]->type), node->leaf[0]->type, p_entry->name );
                yyerror("Semantic Error! Parameter types does not match.");
            }
        }
        ++indx  ;
    } else if (node->node_type == ARG_LIST_S) {
        p_entry = find_param(func_params, indx);
        // printf("IM IN LAST %s %s %d\n", node->name, node->leaf[0]->name, indx);
        if (p_entry->dec_type != node->leaf[0]->type) {
            if (p_entry->dec_type == FLOAT_ && node->leaf[0]->type == INT_) {
                node->leaf[0]->need_casting = true;
            } else {
                // printf("[CHECK] (indx = %d) %s %d != %s %d [%s]\n", indx, type_string(p_entry->dec_type), p_entry->dec_type, type_string(node->leaf[0]->type), node->leaf[0]->type, p_entry->name );
                yyerror("Semantic Error! Parameter types does not match.");
            }
        }
        ++indx;
    }
    for (int leaf_indx = 0; leaf_indx < node->num_leaves; ++leaf_indx) {
        verify_arg_rec(node->leaf[leaf_indx], func_params, false);
    }
    return indx;
}

void check_var(struct tree_node *node) {
    struct st_entry *entry =  NULL;
    entry = find_id_rec(node->name);
    if (entry != NULL) {
        if (!(entry->id_type == VARIABLE || entry->id_type == PARAM)) {
            yyerror("Semantic Error! Identifier is not a variable (possibly a function).");
        }
    }
}

void check_defined(const char *name) {
    if (name == NULL) {
        return;
    }
    struct st_entry *entry =  NULL;
    entry = find_id_rec(name);
    if (entry != NULL) {
        if (entry->id_type!= PARAM && !entry->defined) {
            yyerror("Semantic Error! Identifier is not defined.");
        }
    }
}

void set_defined(const char *name) {
    if (name == NULL) {
        return;
    }
    struct st_entry *entry =  NULL;
    entry = find_id_rec(name);
    if (entry != NULL) {
        entry->defined = true;
    }
}

void semantic_nlz() {
    check_main();
}
