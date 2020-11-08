#include "type_checking.h"

void check_type(struct tree_node *node) {
    struct st_entry *entry;
    switch(node->node_type) {
        case(ID):
            entry = find_id(node->name, cur_scope);
            if (entry == NULL) {
                yyerror("Semantic Error! Identifier not declared.");
            }
            else {
                node->type = entry->dec_type;
            }
            return;


        case(EMPTY_ARGS):
            node->type = UNDEFINED_;
            return;

        case(ARG_LIST):
            node->type = UNDEFINED_;
            return;

        case(FUNCT_CALL):
            // TODO! Find further in the stack. MAKE GUARDS FOR LEAVES
            entry = find_id(node->leaf[0]->name, cur_scope);
            if (entry == NULL) {
                // TODO Create interpolation sprintf
                yyerror("Semantic Error! Function not defined!" );
            } else {
                node->type = entry->dec_type;
            }
            return;

        case(MUTABLE_ONE):
            entry = find_id(node->leaf[0]->name, cur_scope);
            if (entry == NULL || entry->spec_var != ARRAY) {
                yyerror("Semantic Error! Indexing of a variable that is not an array!");
            } else {
                node->type = entry->dec_type;
                if (node->leaf[1]->type != INT_) {
                    yyerror("Semantic Error! Indexing without using integer!");
                }
            }
            return;

        case(MUTABLE_TWO):
            entry = find_id(node->leaf[0]->name, cur_scope);
            if (entry == NULL || entry->spec_var != ARRAY) {
                yyerror("Semantic error found! Indexing of a variable that is not an array!");
            } else {
                node->type = entry->dec_type;
                if (node->leaf[1]->type != INT_ || node->leaf[2]->type != INT_) {
                    yyerror("Semantic Error! Indexing without using integer!");
                }
            }
            return;

        case(MUTABLE_THREE):
            entry = find_id(node->leaf[0]->name, cur_scope);
            if (entry == NULL || entry->spec_var != ARRAY) {
                yyerror("Semantic Error! Indexing of a variable that is not an array!");
            } else {
                node->type = entry->dec_type;
                if (node->leaf[1]->type != INT_ || node->leaf[2]->type != INT_ || node->leaf[3]->type != INT_) {
                    yyerror("Semantic Error! Indexing without using integer!");
                }
            }
            return;

        case(NOT):
            if (node->leaf[0]->type != BOOL_) {
                yyerror("Semantic Error! The [!] operator can only be applied on a boolean.");
            }
            node->type = node->leaf[0]->type;
            return;

        case(REM):
            return;



        default: return;

    }
}
