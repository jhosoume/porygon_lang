#include "type_checking.h"

void check_type(struct tree_node *node) {
    struct st_entry *entry = NULL;
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
            node->type = node->leaf[0]->type;
            return;

        case(ARG_LIST_S):
            node->type = node->leaf[0]->type;
            return;

        case(FUNCT_CALL):
            entry = find_id_rec(node->leaf[0]->name);
            if (entry == NULL) {
                // TODO Create interpolation sprintf
                yyerror("Semantic Error! Function not defined!" );
            } else {
                if (entry->id_type != FUNCTION) {
                    yyerror("Semantic Error! Identifier is not a function, thus cannot be called!" );
                }
                node->type = entry->dec_type;
                node->leaf[0]->type = entry->dec_type;
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
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->leaf[1]->need_casting = true;
                } else {
                    yyerror("Semantic Error! Variable value does not match defined type.");
                }
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

        case(FOR_DEC):
            node->type = node->leaf[0]->type;
            node->leaf[1]->type = node->leaf[0]->type;
            return;

        case(FOR_LOOP):
            node->type = node->leaf[2]->type;
            entry = find_id_rec(node->leaf[1]->name);
            if (entry == NULL) {
                yyerror("Semantic Error! Identifier not declared.");
            } else if (entry->spec_var != ARRAY) {
                yyerror("Semantic Error! For loop not done in array.");
            } else {
                node->leaf[1]->type = entry->dec_type;
            }
            if (node->leaf[1]->type != node->leaf[0]->type) {
                yyerror("Semantic Error! Variable type not compatible with array type.");
            }
            return;

        case(WHILE):
            if (node->leaf[0]->type != BOOL_) {
                yyerror("Semantic Error! Variable type not compatible with array type.");
            }
            node->type = node->leaf[1]->type;
            return;

        case(WRITE_STMT):
            node->type = VOID_;
            return;

        case(READ_STMT):
            entry = find_id_rec(node->leaf[0]->name);
            if (entry == NULL) {
                yyerror("Semantic Error! Identifier not declared.");
            }  else {
                node->type = entry->dec_type;
            }
            return;

        case(STATEMENT_LIST):
            if (node->leaf[1]->node_type == RETURN) {
                node->type = node->leaf[1]->type;
            } else {
                node->type = VOID_;
            }
            return;

        case(EMPTY_COMPOUND_STATEMENT):
            node->type = VOID_;
            return;

        case(PARAMETER_DECLARATION):
            node->type = node->leaf[0]->type;
            node->leaf[1]->type = node->leaf[0]->type;
            return;

        case(PARAMETER_LIST):
            node->type = VOID_;
            return;

        case(FUNCT_DECLARATION):
            node->leaf[1]->type = node->leaf[0]->type;
            node->type = node->leaf[0]->type;
            bool found_return;
            if (synt_errors > 0) {
                return;
            }
            if (node->num_leaves == 4) {
                found_return = check_return(node->leaf[3], node->type);
                // if (node->leaf[0]->type != node->leaf[3]->type) {
            //         // printf("[CHECK] %s %d != %s %d\n", type_string(node->leaf[0]->type), node->leaf[0]->type, type_string(node->leaf[2]->type), node->leaf[2]->type);
            //         yyerror("Semantic Error! Function return value is different from declaration.");
                // }
            //
            } else if (node->num_leaves == 3) {
                found_return = check_return(node->leaf[2], node->type);
            //     if (node->leaf[0]->type != node->leaf[2]->type) {
            //         // printf("[CHECK] %s %d != %s %d\n", type_string(node->leaf[0]->type), node->leaf[0]->type, type_string(node->leaf[2]->type), node->leaf[2]->type);
            //         yyerror("Semantic Error! Function return value is different from declaration.");
            //     }
            //
            }
            if (!found_return && node->type != VOID_) {
                yyerror("Semantic Error! Function does not define return!");
            }
            return;

        case(COLUMN_CONTENT):
            node->type = node->leaf[1]->type;
            return;

        case(STRING_LIST):
            if ((node->leaf[0]->type != STRING_) || (node->leaf[1]->type != STRING_)) {
                yyerror("Semantic Error! Column name is not a string.");
            }
            node->type = STRING_;
            return;

        case(CONST_LIST):
            if (node->leaf[0]->type != node->leaf[1]->type) {
                yyerror("Semantic Error! Table or array value does not match defined type.");
            }
            node->type = node->leaf[1]->type;
            return;

        case(TABLE_DEFINITION):
            node->type = node->leaf[1]->type;
            return;

        case(TABLE_DECLARATION):
            node->type = node->leaf[0]->type;
            node->leaf[1]->type = node->leaf[0]->type;
            return;

        case(ARRAY_DECLARATION):
            node->type = node->leaf[0]->type;
            node->leaf[1]->type = node->leaf[0]->type;
            return;

        case(VAR_SIMPLE_DECLARATION):
            node->type = node->leaf[0]->type;
            node->leaf[1]->type = node->leaf[0]->type;
            return;

        case(TABLE_DECLARATION_DEFINITION):
            if (node->leaf[0]->type != node->leaf[1]->type) {
                yyerror("Semantic Error! Array value does not match defined type.");
            }
            node->type = node->leaf[1]->type;
            return;

        case(ARRAY_DECLARATION_DEFINITION):
            if (node->leaf[0]->type != node->leaf[1]->type) {
                yyerror("Semantic Error! Array value does not match defined type.");
            }
            node->type = node->leaf[1]->type;
            return;

        case(VAR_DECLARATION):
            node->type = node->leaf[1]->type;
            if (node->leaf[0]->type != node->leaf[1]->type) {
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->leaf[1]->need_casting = true;
                    node->type = node->leaf[0]->type;
                } else {
                    yyerror("Semantic Error! Variable value does not match defined type.");
                }
            }
            node->type = node->leaf[1]->type;
            /*Only here a variable is defined */
            if (synt_errors == 0) {
                set_defined(node->leaf[0]->leaf[1]->name);
            }
            return;

        case(DECLARATION_LIST):
            node->type = node->leaf[1]->type;
            return;

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

bool check_return(struct tree_node *node, enum ttype func_type) {
    bool found_return = false;
    bool fr;
    if (node == NULL) {
        return found_return;
    }
    // printf("[CHECK %s]\n", node->name);

    if (node->node_type == RETURN) {
        found_return = true;
        // printf("[CHECK %s] %s %d != %s %d\n", node->name, type_string(node->type), node->type, type_string(func_type), func_type);
        if (node->type != func_type) {
            if (node->type == INT_ && func_type == FLOAT_) {
                node->need_casting = true;
            } else {
                yyerror("Semantic Error! Return does not match function declared type!");
            }
        }
    }

    for (int leaf_indx = 0; leaf_indx < node->num_leaves; ++leaf_indx) {
        fr = check_return(node->leaf[leaf_indx], func_type);
        found_return = fr || found_return;
    }
    return found_return;
}
