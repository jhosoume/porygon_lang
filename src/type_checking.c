#include "type_checking.h"

void check_type(struct tree_node *node) {
    struct st_entry *entry;
    switch(node->node_type) {
        case(ID):
            entry = find_id_rec(node->name);
            if (entry == NULL) {
                yyerror("Semantic Error! Identifier not declared.");
                // print_table();
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
            entry = find_id_rec(node->leaf[0]->name);
            if (entry == NULL) {
                // TODO Create interpolation sprintf
                yyerror("Semantic Error! Function not defined!" );
            } else {
                node->type = entry->dec_type;
            }
            return;

        case(MUTABLE_ONE):
            entry = find_id_rec(node->leaf[0]->name);
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
            entry = find_id_rec(node->leaf[0]->name);
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
            entry = find_id_rec(node->leaf[0]->name);
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
            if(!binary_numerical_check(node)) {
                yyerror("Semantic Error! The [%] operator can only be applied on numerical types.");
            }
            return;
        case(DIV):
            if(!binary_numerical_check(node)) {
                yyerror("Semantic Error! The [/] operator can only be applied on numerical types.");
            }
            return;
        case(MULT):
            if(!binary_numerical_check(node)) {
                yyerror("Semantic Error! The [*] operator can only be applied on numerical types.");
            }
            return;
        case(MINUS):
            if(!binary_numerical_check(node)) {
                yyerror("Semantic Error! The [-] operator can only be applied on numerical types.");
            }
            return;
        case(SUM):
            if(!binary_numerical_check(node)) {
                yyerror("Semantic Error! The [+] operator can only be applied on numerical types.");
            }
            return;
        case(LESSER_E):
            node->type = BOOL_;
            return;
        case(BIGGER_E):
            node->type = BOOL_;
            return;
        case(LESSER):
            node->type = BOOL_;
            return;
        case(BIGGER):
            node->type = BOOL_;
            return;
        case(EQUALS):
            node->type = BOOL_;
            return;
        case(DIFFS):
            node->type = BOOL_;
            return;
        case(OR):
            if(!binary_bool_check(node)) {
                yyerror("Semantic Error! The [||] operator can only be applied on bool types.");
            }
            return;
        case(AND):
            if(!binary_bool_check(node)) {
                yyerror("Semantic Error! The [&&] operator can only be applied on bool types.");
            }
            return;
        case(ASSIGN):
            if (node->leaf[0]->type != node->leaf[1]->type) {
                yyerror("Semantic Error! Not matching assignment types.");
            }
            node->type = node->leaf[0]->type;
            return;

        case(RETURN):
            if (node->num_leaves == 1) {
                node->type = node->leaf[0]->type;
            } else {
                node->type = VOID_;
            }
            return;

        case(EMPTY_ELSE):
            node->type = VOID_;
            return;

        case(ELSE_STMT):
            node->type = node->leaf[0]->type;
            return;

        case(IF_STMT):
            if (node->leaf[0]->type != BOOL_) {
                yyerror("Semantic Error! Conditional is not bool.");
            }
            node->type = node->leaf[1]->type;
            return;

        case(CONDITIONAL_STMT):
            node->type = node->leaf[0]->type;
            return;

        // case()



        default: return;

    }
}

bool binary_numerical_check(struct tree_node *node) {
    if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
        node->type = INT_;
    } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
        node->type = FLOAT_;
        node->leaf[0]->need_casting = true;
    } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
        node->type = FLOAT_;
        node->leaf[1]->need_casting = true;
    } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
        node->type = FLOAT_;
    } else {
        return false;
    }
    return true;
}

bool binary_bool_check(struct tree_node *node) {
    node->type = BOOL_;
    if (node->leaf[0]->type != BOOL_ || node->leaf[1]->type != BOOL_) {
        return false;
    }
    return true;
}
