#include "tac_generator.h"

void genCode(struct tree_node *node) {
    if (errors > 0) {
        return;
    }
    struct st_entry *entry = NULL;
    char instruction[500];
    int label1;
    int label2;
    switch(node->node_type) {
        case(ID):
            entry = find_id_rec(node->name);
            if (entry == NULL) return;
            copySymbol(&node->addr, &entry->tac_sym);
            return;

        case(DECLARATION_LIST):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            // print_code(&node->code);
            return;

        case(VAR_DECLARATION):
        // TODO: what if the variable is a string?
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
            // print_code(&node->code);
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
            // printf("FUNCT -> ");
            // print_code(&node->code);
            return;

        case(PARAMETER_LIST):
            return;

        case(PARAMETER_DECLARATION):
            return;

        case(EMPTY_COMPOUND_STATEMENT):
            append_code_line(&node->code, "return\n");
            return;

        case(STATEMENT_LIST):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            // printf("SL -> ");
            // print_code(&node->code);
            return;

        case(READ_STMT):
            if (node->leaf[0]->type == FLOAT_) {
                sprintf(instruction, "scanf %s\n", utstring_body(node->leaf[0]->addr));
                append_code_line(&node->code, instruction);
            } else if (node->leaf[0]->type == INT_) {
                sprintf(instruction, "scani %s\n", utstring_body(node->leaf[0]->addr));
                append_code_line(&node->code, instruction);
            } else if (node->leaf[0]->type == BOOL_) {
                sprintf(instruction, "scani %s\n", utstring_body(node->leaf[0]->addr));
                append_code_line(&node->code, instruction);
            } else if (node->leaf[0]->type == CHAR_) {
                sprintf(instruction, "scanc %s\n", utstring_body(node->leaf[0]->addr));
                append_code_line(&node->code, instruction);
            }
            return;

        case(WRITE_STMT):
            if (node->leaf[0]->is_const) {
                if (node->leaf[0]->type == FLOAT_) {
                    sprintf(instruction, "println %f\n", node->leaf[0]->value.float_n);
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == INT_) {
                    sprintf(instruction, "println %d\n", node->leaf[0]->value.int_n);
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == BOOL_) {
                    // TODO
                    sprintf(instruction, "println %i\n", node->leaf[0]->value.boolean);
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == CHAR_) {
                    sprintf(instruction, "println %c\n", node->leaf[0]->value.character);
                    append_code_line(&node->code, instruction);
                }
            } else {
                unite_code(&node->code, &node->leaf[0]->code);
                sprintf(instruction, "println %s\n", utstring_body(node->leaf[0]->addr));
                append_code_line(&node->code, instruction);
            }
            return;

        case(WHILE):
            if (node->leaf[0]->is_const) {
                if (node->leaf[0]->value.boolean) {
                    unite_code(&node->code, &node->leaf[1]->code);                          // Statements
                }
                return;
            }
            label1 = get_next_label();
            label2 = get_next_label();
            sprintf(instruction, "_label%d:\n", label1);
            append_code_line(&node->code, instruction);                             // Label1:
            unite_code(&node->code, &node->leaf[0]->code);                          // condition
            sprintf(instruction, "brz _label%d, %s\n", label2, utstring_body(node->addr));       // brz Label2, condition (caso falso)
            append_code_line(&node->code, instruction);
            unite_code(&node->code, &node->leaf[1]->code);                          // Statements
            sprintf(instruction, "jump _label%d:\n", label1);                       // jump Label1
            append_code_line(&node->code, instruction);
            sprintf(instruction, "_label%d:\n", label2);
            append_code_line(&node->code, instruction);                             // Label2:
            return;

        case(FOR_LOOP):
            // TODO
            return;

        case(IF_STMT):
            label1 = get_next_label();
            node->next_label = label1;
            if (node->leaf[0]->is_const) {
                if (node->leaf[0]->value.boolean) {
                    unite_code(&node->code, &node->leaf[1]->code);                          // Statements
                }
                return;
            }
            unite_code(&node->code, &node->leaf[0]->code);                                       // condition
            sprintf(instruction, "brz _label%d, %s\n", label1, utstring_body(node->addr));      // brz Label1, condition (caso falso)
            append_code_line(&node->code, instruction);
            unite_code(&node->code, &node->leaf[1]->code);                          // Statements
            return;

        case(ELSE_STMT):
            unite_code(&node->code, &node->leaf[0]->code);
            return;

        case(CONDITIONAL_STMT):
            label1 = node->leaf[0]->next_label;
            unite_code(&node->code, &node->leaf[0]->code);
            if (node->leaf[1]->node_type == ELSE_STMT) {
                label2 = get_next_label();
                sprintf(instruction, "jump _label%d:\n", label2);                       // jump Label2
                append_code_line(&node->code, instruction);
                sprintf(instruction, "_label%d:\n", label1);
                append_code_line(&node->code, instruction);                             // Label1:
                unite_code(&node->code, &node->leaf[1]->code);                          // Statements
                sprintf(instruction, "_label%d:\n", label2);
                append_code_line(&node->code, instruction);                             // Label2:
            } else if (node->leaf[1]->node_type == EMPTY_ELSE) {
                sprintf(instruction, "_label%d:\n", label1);
                append_code_line(&node->code, instruction);                             // Label1:
            }
            return;

        case(RETURN):
            if (node->num_leaves == 0) {
                sprintf(instruction, "return\n");
                append_code_line(&node->code, instruction);
            } else if (node->num_leaves == 1) {
                if (node->leaf[0]->is_const) {
                    if (node->leaf[0]->type == FLOAT_) {
                        sprintf(instruction, "return %f\n", node->leaf[0]->value.float_n);
                        append_code_line(&node->code, instruction);
                    } else if (node->leaf[0]->type == INT_) {
                        sprintf(instruction, "return %i\n", node->leaf[0]->value.int_n);
                        append_code_line(&node->code, instruction);
                    } else if (node->leaf[0]->type == BOOL_) {
                        sprintf(instruction, "return %i\n", node->leaf[0]->value.boolean);
                        append_code_line(&node->code, instruction);
                    } else if (node->leaf[0]->type == CHAR_) {
                        sprintf(instruction, "return %c\n", node->leaf[0]->value.character);
                        append_code_line(&node->code, instruction);
                    }
                } else {
                    unite_code(&node->code, &node->leaf[0]->code);
                    sprintf(instruction, "return %s\n", utstring_body(node->leaf[0]->addr));
                    append_code_line(&node->code, instruction);
                }
            }
            return;

        case(ASSIGN):
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
                unite_code(&node->code, &node->leaf[1]->code);
                unary_instr_syms("mov", utstring_body(node->leaf[0]->addr), utstring_body(node->leaf[1]->addr), &node->code);
            }
            return;

        case(OR):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                node->value.boolean = node->leaf[0]->value.boolean || node->leaf[1]->value.boolean;
            } else {
                defineSymbol(&node->addr);
                binary_instr_boolean("or", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
            }
            return;

        case(AND):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                node->value.boolean = node->leaf[0]->value.boolean && node->leaf[1]->value.boolean;
            } else {
                defineSymbol(&node->addr);
                binary_instr_boolean("and", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
            }
            return;

        case(EQUALS):
        // TODO!
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                node->value.boolean = node->leaf[0]->value.int_n == node->leaf[1]->value.int_n;
            } else {
                defineSymbol(&node->addr);
                // printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                binary_instr("sub", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
                if (node->leaf[0]->type == FLOAT_ || node->leaf[1]->type == FLOAT_) {
                    binary_instr_float("sleq", utstring_body(node->addr), utstring_body(node->addr), 0.0, &node->code);
                } else {
                    binary_instr_int("sleq", utstring_body(node->addr), utstring_body(node->addr), 0, &node->code);
                }
                // append_code_line(&node->code, inst);
            }
            // print_code(&node->code);
            return;

        case(DIFFS):
        // TODO!
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                node->value.boolean = node->leaf[0]->value.int_n != node->leaf[1]->value.int_n;
            } else {
                defineSymbol(&node->addr);
                // printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                binary_instr("sub", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
            }
            // print_code(&node->code);
            return;

        case(BIGGER):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                node->value.boolean = node->leaf[0]->value.int_n > node->leaf[1]->value.int_n;
            } else {
                defineSymbol(&node->addr);
                // printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                binary_instr("slt", utstring_body(node->addr), node->leaf[1], node->leaf[0], &node->code);
            }
            // print_code(&node->code);
            return;

        case(LESSER):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                node->value.boolean = node->leaf[0]->value.int_n < node->leaf[1]->value.int_n;
            } else {
                defineSymbol(&node->addr);
                // printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                binary_instr("slt", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
            }
            // print_code(&node->code);
            return;

        case(BIGGER_E):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                node->value.boolean = node->leaf[0]->value.int_n >= node->leaf[1]->value.int_n;
            } else {
                defineSymbol(&node->addr);
                // printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                binary_instr("sleq", utstring_body(node->addr), node->leaf[1], node->leaf[0], &node->code);
            }
            // print_code(&node->code);
            return;

        case(LESSER_E):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                node->value.boolean = node->leaf[0]->value.int_n <= node->leaf[1]->value.int_n;
            } else {
                defineSymbol(&node->addr);
                // printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                binary_instr("sleq", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
            }
            // print_code(&node->code);
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
            }
            // print_code(&node->code);
            return;

        case(MINUS):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.float_n = node->leaf[0]->value.float_n - node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->value.float_n = node->leaf[0]->value.float_n - node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.float_n = node->leaf[0]->value.int_n - node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                    node->value.int_n = node->leaf[0]->value.int_n - node->leaf[1]->value.int_n;
                }
            } else {
                defineSymbol(&node->addr);
                // printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                binary_instr("sub", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
            }
            // print_code(&node->code);
            return;

        case(MULT):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.float_n = node->leaf[0]->value.float_n * node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->value.float_n = node->leaf[0]->value.float_n * node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.float_n = node->leaf[0]->value.int_n * node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                    node->value.int_n = node->leaf[0]->value.int_n * node->leaf[1]->value.int_n;
                }
            } else {
                defineSymbol(&node->addr);
                // printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                binary_instr("mul", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
            }
            // print_code(&node->code);
            return;

        case(DIV):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.float_n = node->leaf[0]->value.float_n / node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->value.float_n = node->leaf[0]->value.float_n / node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.float_n = node->leaf[0]->value.int_n / node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                    node->value.int_n = node->leaf[0]->value.int_n / node->leaf[1]->value.int_n;
                }
            } else {
                defineSymbol(&node->addr);
                // printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                binary_instr("div", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
            }
            // print_code(&node->code);
            return;

        case(REM):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            if ( check_both_const(node->leaf[0], node->leaf[1]) ) {
                node->is_const = true;
                // if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
                //     node->value.float_n = node->leaf[0]->value.float_n % node->leaf[1]->value.float_n;
                // } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                //     node->value.float_n = node->leaf[0]->value.float_n % node->leaf[1]->value.int_n;
                // } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
                //     node->value.float_n = node->leaf[0]->value.int_n % node->leaf[1]->value.float_n;
                // } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                    node->value.int_n = node->leaf[0]->value.int_n % node->leaf[1]->value.int_n;
                }
            } else {
                defineSymbol(&node->addr);
                // printf("%s %s %s\n", node->leaf[0]->name, node_type_string(node->leaf[0]->node_type), node->leaf[1]->name);
                binary_instr("rem", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
            }
            // print_code(&node->code);
            return;

        case(NOT):
            unite_code(&node->code, &node->leaf[0]->code);
            if (node->leaf[0]->is_const) {
                node->is_const = true;
                node->value.boolean = !node->leaf[0]->value.boolean;
            } else {
                defineSymbol(&node->addr);
                unary_instr_syms("not", utstring_body(node->addr), utstring_body(node->leaf[0]->addr), &node->code);
            }
            return;

        case(MUTABLE_ONE):
            return;

        case(MUTABLE_TWO):
            return;

        case(MUTABLE_THREE):
            return;

        case(FUNCT_CALL):
            if (node->leaf[1]->node_type == ARG_LIST) {
                unite_code(&node->code, &node->leaf[1]->code);
            }
            sprintf(instruction, "call %s:\n", node->leaf[0]->name);                       // call function
            append_code_line(&node->code, instruction);
            return;

        case(ARG_LIST):
            if (node->leaf[0]->is_const) {
                if (node->leaf[0]->type == INT_) {
                    sprintf(instruction, "param %i:\n", node->leaf[0]->value.int_n);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == FLOAT_) {
                    sprintf(instruction, "param %f:\n", node->leaf[0]->value.float_n);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == BOOL_) {
                    sprintf(instruction, "param %i:\n", node->leaf[0]->value.boolean);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == CHAR_) {
                    sprintf(instruction, "param %c:\n", node->leaf[0]->value.character);                       // param
                    append_code_line(&node->code, instruction);
                }
            } else {
                unite_code(&node->code, &node->leaf[0]->code);
                defineSymbol(&node->addr);
                unary_instr_syms("mov", utstring_body(node->addr), utstring_body(node->leaf[0]->addr), &node->code);
                sprintf(instruction, "param %s:\n", utstring_body(node->addr));                       // param
                append_code_line(&node->code, instruction);
            }
            unite_code(&node->code, &node->leaf[1]->code);
            return;

        case(ARG_LIST_S):
            if (node->leaf[0]->is_const) {
                if (node->leaf[0]->type == INT_) {
                    sprintf(instruction, "param %i:\n", node->leaf[0]->value.int_n);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == FLOAT_) {
                    sprintf(instruction, "param %f:\n", node->leaf[0]->value.float_n);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == BOOL_) {
                    sprintf(instruction, "param %i:\n", node->leaf[0]->value.boolean);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == CHAR_) {
                    sprintf(instruction, "param %c:\n", node->leaf[0]->value.character);                       // param
                    append_code_line(&node->code, instruction);
                }
            } else {
                unite_code(&node->code, &node->leaf[0]->code);
                defineSymbol(&node->addr);
                unary_instr_syms("mov", utstring_body(node->addr), utstring_body(node->leaf[0]->addr), &node->code);
                sprintf(instruction, "param %s:\n", utstring_body(node->addr));                       // param
                append_code_line(&node->code, instruction);
            }
            return;

        default:
            return;
    }
}

void defineSymbol(UT_string **addr) {
    utstring_clear(*addr);
    utstring_printf(*addr, "$%d", symbol_count);
    ++symbol_count;
    return;
}

void defineSymbolParam(UT_string **addr, int num) {
    utstring_clear(*addr);
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

void binary_instr_boolean(const char *inst, const char *dest, struct tree_node *node1, struct tree_node *node2, tac_code **code) {
    if (node1->is_const && !node2->is_const) {
            binary_instr_b(inst, dest, utstring_body(node2->addr), node1->value.boolean, code);
            return;
    } else if (!node1->is_const && node2->is_const) {
            binary_instr_b(inst, dest, utstring_body(node1->addr), node2->value.boolean, code);
            return;
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

void binary_instr_b(const char *inst, const char *dest, const char *symb1, bool val, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %s, %d\n", inst, dest, symb1, val);
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

void doConversion(struct tree_node *node, tac_code **code) {
    if (node->need_casting) {
        if (node->is_const) {
            node->type = FLOAT_;
            int old_num = node->value.int_n;
            node->value.float_n = old_num;
        } else {
            // TODO! Check if needed
            if (node->addr == NULL) {
                defineSymbol(&node->addr);
            }
            unary_instr_syms("inttofl", utstring_body(node->addr), utstring_body(node->addr), code);
        }
    }

}

int get_next_label() {
    return label_num++;
}
