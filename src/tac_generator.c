#include "tac_generator.h"

void genCode(struct tree_node *node) {
    if (errors > 0) {
        return;
    }
    struct st_entry *entry = NULL;
    char instruction[500];
    int label1;
    int label2;
    int num_el;
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
            doConversion(node->leaf[1], &node->code);
            if (node->leaf[1]->type == STRING_ && node->leaf[1]->node_type == STRING_CONST) {
                if (node->leaf[0]->st_link != 0) {
                    node->leaf[0]->st_link->size = (int) strlen(node->leaf[1]->name);
                }
                sprintf(instruction, "mema %s, %d\n", utstring_body(node->leaf[0]->addr), (int) strlen(node->leaf[1]->name) + 4);
                append_code_line(&node->code, instruction);
                for (int indx = 0; indx < (int) strlen(node->leaf[1]->name); ++indx) {
                    sprintf(instruction, "%s %s[%d], '%c'\n", "mov", utstring_body(node->leaf[0]->addr), indx, node->leaf[1]->name[indx]);
                    append_code_line(&node->code, instruction);
                }
                return;
            }
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
            num_el = num_values(&node->leaf[0]->st_link->ar_val);
            sprintf(instruction, "mema %s, %d\n", utstring_body(node->leaf[0]->addr), num_el);
            append_code_line(&node->code, instruction);
            for (int indx = 0; indx < num_el; ++indx) {
                if (node->type == INT_) {
                    sprintf(instruction, "%s %s[%d], %d\n", "mov", utstring_body(node->leaf[0]->addr), indx, get_in(&node->leaf[0]->st_link->ar_val, indx)->val.int_n);
                    append_code_line(&node->code, instruction);
                } else if (node->type == FLOAT_) {
                    sprintf(instruction, "%s %s[%d], %f\n", "mov", utstring_body(node->leaf[0]->addr), indx, get_in(&node->leaf[0]->st_link->ar_val, indx)->val.float_n);
                    append_code_line(&node->code, instruction);
                } else if (node->type == CHAR_) {
                    sprintf(instruction, "%s %s[%d], '%c'\n", "mov", utstring_body(node->leaf[0]->addr), indx, get_in(&node->leaf[0]->st_link->ar_val, indx)->val.character);
                    append_code_line(&node->code, instruction);
                } else if (node->type == BOOL_) {
                    sprintf(instruction, "%s %s[%d], %i\n", "mov", utstring_body(node->leaf[0]->addr), indx, get_in(&node->leaf[0]->st_link->ar_val, indx)->val.boolean);
                    append_code_line(&node->code, instruction);
                }
            }
            return;

        case(TABLE_DECLARATION_DEFINITION):
            num_el = num_col(&node->leaf[0]->st_link->columns);
            for (int indx = 0; indx < num_el; ++indx) {
                sprintf(instruction, "mema %s, %d\n", utstring_body(node->leaf[0]->addr), num_el);
                append_code_line(&node->code, instruction);
            }
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
                unite_code(&node->code, &node->leaf[2]->code);
                unite_code(&node->code, &node->leaf[3]->code);
            } else if (node->num_leaves == 3) {
                unite_code(&node->code, &node->leaf[2]->code);
            }
            if (!has_return && node->type == VOID_ && (strcmp(node->leaf[1]->name, "main") != 0)) {
                sprintf(instruction, "return\n");
                append_code_line(&node->code, instruction);
            }
            // printf("FUNCT -> %d", has_return);
            // print_code(&node->code);
            return;

        case(PARAMETER_LIST):
            unite_code(&node->code, &node->leaf[0]->code);
            unite_code(&node->code, &node->leaf[1]->code);
            return;

        case(PARAMETER_DECLARATION):
            unary_instr_syms("mov", utstring_body(node->st_link->tac_sym), utstring_body(node->st_link->tac_sym_aux), &node->code);
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
            if (node->type == FLOAT_) {
                sprintf(instruction, "scanf %s\n", utstring_body(node->leaf[0]->addr));
                append_code_line(&node->code, instruction);
            } else if (node->type == INT_) {
                sprintf(instruction, "scani %s\n", utstring_body(node->leaf[0]->addr));
                append_code_line(&node->code, instruction);
            } else if (node->type == BOOL_) {
                sprintf(instruction, "scani %s\n", utstring_body(node->leaf[0]->addr));
                append_code_line(&node->code, instruction);
            } else if (node->type == CHAR_) {
                sprintf(instruction, "scanc %s\n", utstring_body(node->leaf[0]->addr));
                append_code_line(&node->code, instruction);
            }
            return;

        case(WRITE_STMT):
            if (node->leaf[0]->type == STRING_) {
                if(node->leaf[0]->node_type == STRING_CONST) {
                    for (int indx = 0; indx < (int) strlen(node->leaf[0]->name); ++indx) {
                        sprintf(instruction, "print '%c'\n", node->leaf[0]->name[indx]);
                        append_code_line(&node->code, instruction);
                    }
                    sprintf(instruction, "println\n");
                    append_code_line(&node->code, instruction);
                    return;
                }
            }
            if (node->leaf[0]->is_const) {
                if (node->leaf[0]->type == FLOAT_) {
                    sprintf(instruction, "println %f\n", node->leaf[0]->value.float_n);
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == INT_) {
                    sprintf(instruction, "println %d\n", node->leaf[0]->value.int_n);
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == BOOL_) {
                    if (!node->leaf[0]->value.boolean) {
                        sprintf(instruction, "print 'f'\nprint 'a'\nprint 'l'\nprint 's'\nprintln 'e'\n");
                        append_code_line(&node->code, instruction);
                    } else {
                        sprintf(instruction, "print 't'\nprint 'r'\nprint 'u'\nprintln 'e'\n");
                        append_code_line(&node->code, instruction);
                    }
                } else if (node->leaf[0]->type == CHAR_) {
                    sprintf(instruction, "println '%c'\n", node->leaf[0]->value.character);
                    append_code_line(&node->code, instruction);
                }
            } else {
                unite_code(&node->code, &node->leaf[0]->code);
                sprintf(instruction, "println %s\n", utstring_body(node->leaf[0]->addr));
                append_code_line(&node->code, instruction);
            }
            return;

        case(WHILE):
            defineSymbol(&node->addr);
            label1 = get_next_label();
            sprintf(instruction, "_label%d:\n", label1);
            append_code_line(&node->code, instruction);                             // Label1:
            if (node->leaf[0]->is_const) {
                if (node->leaf[0]->value.boolean) {
                    printf("Semantic Warning! Infinite Loop.");
                    unite_code(&node->code, &node->leaf[1]->code);                          // Statements
                    sprintf(instruction, "jump _label%d\n", label1);                       // jump Label1
                    append_code_line(&node->code, instruction);
                }
            }
            label2 = get_next_label();
            unite_code(&node->code, &node->leaf[0]->code);                          // condition
            unary_instr_syms("mov", utstring_body(node->addr), utstring_body(node->leaf[0]->addr), &node->code);
            sprintf(instruction, "brz _label%d, %s\n", label2, utstring_body(node->addr));       // brz Label2, condition (caso falso)
            append_code_line(&node->code, instruction);
            unite_code(&node->code, &node->leaf[1]->code);                          // Statements
            sprintf(instruction, "jump _label%d\n", label1);                       // jump Label1
            append_code_line(&node->code, instruction);
            sprintf(instruction, "_label%d:\n", label2);
            append_code_line(&node->code, instruction);                             // Label2:
            sprintf(instruction, "print ''\n");
            append_code_line(&node->code, instruction);                             // NOP
            return;

        case(FOR_LOOP):
            entry = find_id_rec(node->leaf[1]->name);
            defineSymbol(&node->addr);
            if (entry == NULL) return;
            defineSymbol(&node->aux_addr);
            label1 = get_next_label();
            label2 = get_next_label();
            unary_instr_int("mov", utstring_body(node->addr), 0, &node->code);
            sprintf(instruction, "_label%d:\n", label1);
            append_code_line(&node->code, instruction);                             // Label1:
            if (entry->spec_var == ARRAY) {
                num_el = num_values(&entry->ar_val);
                binary_instr_int("slt", utstring_body(node->aux_addr), utstring_body(node->addr), num_el, &node->code);
                sprintf(instruction, "brz _label%d, %s\n", label2, utstring_body(node->aux_addr));      // brz Label1, condition (caso falso)
                append_code_line(&node->code, instruction);
                sprintf(instruction, "mov %s, %s[%s]\n", utstring_body(node->leaf[0]->addr), utstring_body(entry->tac_sym), utstring_body(node->addr));                       // jump Label1
                append_code_line(&node->code, instruction);
                unite_code(&node->code, &node->leaf[2]->code);                          // Statements
                binary_instr_int("add", utstring_body(node->addr), utstring_body(node->addr), 1, &node->code);
                sprintf(instruction, "jump _label%d\n", label1);                       // jump Label1
                append_code_line(&node->code, instruction);
                sprintf(instruction, "_label%d:\n", label2);
                append_code_line(&node->code, instruction);                             // Label2:
                sprintf(instruction, "print ''\n");
                append_code_line(&node->code, instruction);                             // NOP
            }
            return;

        case(FOR_DEC):
            entry = find_id_rec(node->leaf[1]->name);
            if (entry == NULL) {
                entry = node->st_link;
            }
            if (entry == NULL) return;
            copySymbol(&node->addr, &entry->tac_sym);
            return;

        case(IF_STMT):
            label1 = get_next_label();
            node->next_label = label1;
            defineSymbol(&node->addr);
            if (node->leaf[0]->is_const) {
                if (node->leaf[0]->value.boolean) {
                    unite_code(&node->code, &node->leaf[1]->code);                          // Statements
                }
                return;
            }
            unite_code(&node->code, &node->leaf[0]->code);                                       // condition
            unary_instr_syms("mov", utstring_body(node->addr), utstring_body(node->leaf[0]->addr), &node->code);
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
                sprintf(instruction, "jump _label%d\n", label2);                       // jump Label2
                append_code_line(&node->code, instruction);
                sprintf(instruction, "_label%d:\n", label1);
                append_code_line(&node->code, instruction);                             // Label1:
                unite_code(&node->code, &node->leaf[1]->code);                          // Statements
                sprintf(instruction, "_label%d:\n", label2);
                append_code_line(&node->code, instruction);                             // Label2:
                sprintf(instruction, "print ''\n");
                append_code_line(&node->code, instruction);                             // NOP
            } else if (node->leaf[1]->node_type == EMPTY_ELSE) {
                        // && (num_lines(&node->leaf[1]->code) > 0) ) {
                sprintf(instruction, "_label%d:\n", label1);
                append_code_line(&node->code, instruction);                             // Label1:
                sprintf(instruction, "print ''\n");
                append_code_line(&node->code, instruction);                             // NOP
            }
            return;

        case(RETURN):
            if (node->num_leaves == 0) {
                sprintf(instruction, "return\n");
                append_code_line(&node->code, instruction);
            } else if (node->num_leaves == 1) {
                if (node->leaf[0]->is_const) {
                    doConversion(node->leaf[0], &node->code);
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
                        sprintf(instruction, "return '%c'\n", node->leaf[0]->value.character);
                        append_code_line(&node->code, instruction);
                    }
                } else {
                    unite_code(&node->code, &node->leaf[0]->code);
                    doConversion(node->leaf[0], &node->code);
                    sprintf(instruction, "return %s\n", utstring_body(node->leaf[0]->addr));
                    append_code_line(&node->code, instruction);
                }
            }
            return;

        case(ASSIGN):
            if (node->leaf[1]->is_const) {
                doConversion(node->leaf[1], &node->code);
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
                doConversion(node->leaf[1], &node->code);
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
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.float_n == node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.float_n == node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.int_n == node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.int_n == node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == CHAR_ && node->leaf[1]->type == CHAR_) {
                    node->value.boolean = node->leaf[0]->value.character == node->leaf[1]->value.character;
                } else if (node->leaf[0]->type == BOOL_ && node->leaf[1]->type == BOOL_) {
                    node->value.boolean = node->leaf[0]->value.boolean == node->leaf[1]->value.boolean;
                } else {
                    node->value.boolean = false;
                }
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
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.float_n != node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.float_n != node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.int_n != node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.int_n != node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == CHAR_ && node->leaf[1]->type == CHAR_) {
                    node->value.boolean = node->leaf[0]->value.character != node->leaf[1]->value.character;
                } else if (node->leaf[0]->type == BOOL_ && node->leaf[1]->type == BOOL_) {
                    node->value.boolean = node->leaf[0]->value.boolean != node->leaf[1]->value.boolean;
                } else {
                    node->value.boolean = false;
                }

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
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.float_n > node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.float_n > node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.int_n > node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.int_n > node->leaf[1]->value.int_n;
                }
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
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.float_n < node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.float_n < node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.int_n < node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.int_n < node->leaf[1]->value.int_n;
                }
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
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.float_n >= node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.float_n >= node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.int_n >= node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.int_n >= node->leaf[1]->value.int_n;
                }
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
                if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.float_n <= node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == FLOAT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.float_n <= node->leaf[1]->value.int_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == FLOAT_) {
                    node->value.boolean = node->leaf[0]->value.int_n <= node->leaf[1]->value.float_n;
                } else if (node->leaf[0]->type == INT_ && node->leaf[1]->type == INT_) {
                    node->value.boolean = node->leaf[0]->value.int_n <= node->leaf[1]->value.int_n;
                }
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
                // printf("%s %s %s %s\n", node->leaf[0]->name, node->leaf[0]->need_casting ? "true" : "false" , node->leaf[1]->name, node->leaf[1]->need_casting ? "true" : "false");
                if (node->leaf[0]->need_casting) {
                    doConversion(node->leaf[0], &node->code);
                } else if (node->leaf[1]->need_casting) {
                    doConversion(node->leaf[1], &node->code);
                }
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
                if (node->leaf[0]->need_casting) {
                    doConversion(node->leaf[0], &node->code);
                } else if (node->leaf[1]->need_casting) {
                    doConversion(node->leaf[1], &node->code);
                }
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
                if (node->leaf[0]->need_casting) {
                    doConversion(node->leaf[0], &node->code);
                } else if (node->leaf[1]->need_casting) {
                    doConversion(node->leaf[1], &node->code);
                }
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
                if (node->leaf[0]->need_casting) {
                    doConversion(node->leaf[0], &node->code);
                } else if (node->leaf[1]->need_casting) {
                    doConversion(node->leaf[1], &node->code);
                }
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
                binary_instr("mod", utstring_body(node->addr), node->leaf[0], node->leaf[1], &node->code);
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
            defineSymbol(&node->addr);
            if (node->leaf[1]->is_const) {
                if (node->leaf[1]->type == INT_) {
                    sprintf(instruction, "%s %s, %s[%d]\n", "mov", utstring_body(node->addr), utstring_body(node->leaf[0]->addr), node->leaf[1]->value.int_n);
                    append_code_line(&node->code, instruction);
                }
            } else {
                unite_code(&node->code, &node->leaf[1]->code);
                sprintf(instruction, "%s %s, %s[%s]\n", "mov", utstring_body(node->addr), utstring_body(node->leaf[0]->addr), utstring_body(node->leaf[1]->addr));
                append_code_line(&node->code, instruction);
            }
            return;

        case(MUTABLE_TWO):
            defineSymbol(&node->addr);
            defineSymbol(&node->aux_addr);
            if (check_both_const(node->leaf[1], node->leaf[2])) {
                num_el = node->leaf[2]->value.int_n - node->leaf[1]->value.int_n ;
                sprintf(instruction, "mema %s, %d\n", utstring_body(node->addr), num_el);
                append_code_line(&node->code, instruction);
                for (int indx = node->leaf[1]->value.int_n; indx < node->leaf[2]->value.int_n; ++indx) {
                    sprintf(instruction, "%s %s, %s[%d]\n", "mov", utstring_body(node->addr), utstring_body(node->leaf[0]->addr), node->leaf[1]->value.int_n);
                    append_code_line(&node->code, instruction);
                }
            }
            defineSymbol(&node->addr);
            defineSymbol(&node->aux_addr);
            defineSymbol(&node->a1);
            defineSymbol(&node->a2);
            label1 = get_next_label();
            label2 = get_next_label();
            unite_code(&node->code, &node->leaf[1]->code);
            unite_code(&node->code, &node->leaf[2]->code);
            binary_instr_syms("sub", utstring_body(node->aux_addr), utstring_body(node->leaf[2]->addr), utstring_body(node->leaf[1]->addr), &node->code);
            sprintf(instruction, "mema %s, %s\n", utstring_body(node->addr), utstring_body(node->aux_addr));
            append_code_line(&node->code, instruction);
            unary_instr_int("mov", utstring_body(node->a1), 0, &node->code);
            unary_instr_syms("mov", utstring_body(node->a1), utstring_body(node->leaf[2]->addr), &node->code);
            sprintf(instruction, "_label%d:\n", label1);
            append_code_line(&node->code, instruction);
            binary_instr_int("slt", utstring_body(node->aux_addr), utstring_body(node->a1), 0, &node->code);
            sprintf(instruction, "brz _label%d, %s\n", label2, utstring_body(node->aux_addr));       // brz Label2, condition (caso falso)
            append_code_line(&node->code, instruction);
            sprintf(instruction, "%s %s[%s], %s[%s]\n", "mov", utstring_body(node->addr), utstring_body(node->a1), utstring_body(node->leaf[0]->addr), utstring_body(node->a2));
            append_code_line(&node->code, instruction);
            binary_instr_int("add", utstring_body(node->a1), utstring_body(node->a1), 1, &node->code);
            binary_instr_int("add", utstring_body(node->a2), utstring_body(node->a2), 1, &node->code);
            sprintf(instruction, "jump _label%d\n", label1);                       // jump Label1
            append_code_line(&node->code, instruction);
            sprintf(instruction, "_label%d:\n", label2);
            append_code_line(&node->code, instruction);                             // Label2:
            sprintf(instruction, "print ''\n");
            append_code_line(&node->code, instruction);                             // NOP
            return;

        case(MUTABLE_THREE):
            defineSymbol(&node->addr);
            defineSymbol(&node->aux_addr);
            if (check_both_const(node->leaf[1], node->leaf[2]) && node->leaf[3]->is_const) {
                num_el = node->leaf[2]->value.int_n - node->leaf[1]->value.int_n ;
                sprintf(instruction, "mema %s, %d\n", utstring_body(node->addr), num_el);
                append_code_line(&node->code, instruction);
                for (int indx = node->leaf[1]->value.int_n; indx < node->leaf[2]->value.int_n; indx += node->leaf[3]->value.int_n) {
                    sprintf(instruction, "%s %s, %s[%d]\n", "mov", utstring_body(node->addr), utstring_body(node->leaf[0]->addr), node->leaf[1]->value.int_n);
                    append_code_line(&node->code, instruction);
                }
            }
            defineSymbol(&node->addr);
            defineSymbol(&node->aux_addr);
            defineSymbol(&node->a1);
            defineSymbol(&node->a2);
            label1 = get_next_label();
            label2 = get_next_label();
            unite_code(&node->code, &node->leaf[1]->code);
            unite_code(&node->code, &node->leaf[2]->code);
            binary_instr_syms("sub", utstring_body(node->aux_addr), utstring_body(node->leaf[2]->addr), utstring_body(node->leaf[1]->addr), &node->code);
            sprintf(instruction, "mema %s, %s\n", utstring_body(node->addr), utstring_body(node->aux_addr));
            append_code_line(&node->code, instruction);
            unary_instr_int("mov", utstring_body(node->a1), 0, &node->code);
            unary_instr_syms("mov", utstring_body(node->a1), utstring_body(node->leaf[2]->addr), &node->code);
            sprintf(instruction, "_label%d:\n", label1);
            append_code_line(&node->code, instruction);
            binary_instr_int("slt", utstring_body(node->aux_addr), utstring_body(node->a1), 0, &node->code);
            sprintf(instruction, "brz _label%d, %s\n", label2, utstring_body(node->aux_addr));       // brz Label2, condition (caso falso)
            append_code_line(&node->code, instruction);
            sprintf(instruction, "%s %s[%s], %s[%s]\n", "mov", utstring_body(node->addr), utstring_body(node->a1), utstring_body(node->leaf[0]->addr), utstring_body(node->a2));
            append_code_line(&node->code, instruction);
            binary_instr_syms("add", utstring_body(node->a1), utstring_body(node->a1), utstring_body(node->leaf[3]->addr), &node->code);
            binary_instr_syms("add", utstring_body(node->a2), utstring_body(node->a2), utstring_body(node->leaf[3]->addr), &node->code);
            sprintf(instruction, "jump _label%d\n", label1);                       // jump Label1
            append_code_line(&node->code, instruction);
            sprintf(instruction, "_label%d:\n", label2);
            append_code_line(&node->code, instruction);                             // Label2:
            sprintf(instruction, "print ''\n");
            append_code_line(&node->code, instruction);                             // NOP
            return;
            return;

        case(FUNCT_CALL):
            defineSymbol(&node->addr);
            if (node->leaf[1]->node_type == ARG_LIST || node->leaf[1]->node_type == ARG_LIST_S) {
                unite_code(&node->code, &node->leaf[1]->code);
            }
            struct st_entry *entry = find_id_rec(node->leaf[0]->name);
            if (entry != NULL) {
                sprintf(instruction, "call %s, %d\n", node->leaf[0]->name, entry->size);                       // call function
            } else {
                sprintf(instruction, "call %s, %d\n", node->leaf[0]->name, node->num_args);                       // call function
            }
            append_code_line(&node->code, instruction);
            sprintf(instruction, "pop %s\n", utstring_body(node->addr));                       // call function
            append_code_line(&node->code, instruction);
            return;

        case(ARG_LIST):
            if (node->leaf[0]->is_const) {
                if (node->leaf[0]->type == INT_) {
                    sprintf(instruction, "param %i\n", node->leaf[0]->value.int_n);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == FLOAT_) {
                    sprintf(instruction, "param %f\n", node->leaf[0]->value.float_n);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == BOOL_) {
                    sprintf(instruction, "param %i\n", node->leaf[0]->value.boolean);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == CHAR_) {
                    sprintf(instruction, "param '%c'\n", node->leaf[0]->value.character);                       // param
                    append_code_line(&node->code, instruction);
                }
            } else {
                unite_code(&node->code, &node->leaf[0]->code);
                defineSymbol(&node->addr);
                if (node->leaf[0]->need_casting) {
                    doConversion(node->leaf[0], &node->code);
                }
                unary_instr_syms("mov", utstring_body(node->addr), utstring_body(node->leaf[0]->addr), &node->code);
                sprintf(instruction, "param %s\n", utstring_body(node->addr));                       // param
                append_code_line(&node->code, instruction);
            }
            unite_code(&node->code, &node->leaf[1]->code);
            return;

        case(ARG_LIST_S):
            if (node->leaf[0]->is_const) {
                if (node->leaf[0]->type == INT_) {
                    sprintf(instruction, "param %i\n", node->leaf[0]->value.int_n);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == FLOAT_) {
                    sprintf(instruction, "param %f\n", node->leaf[0]->value.float_n);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == BOOL_) {
                    sprintf(instruction, "param %i\n", node->leaf[0]->value.boolean);                       // param
                    append_code_line(&node->code, instruction);
                } else if (node->leaf[0]->type == CHAR_) {
                    sprintf(instruction, "param '%c'\n", node->leaf[0]->value.character);                       // param
                    append_code_line(&node->code, instruction);
                }
            } else {
                unite_code(&node->code, &node->leaf[0]->code);
                defineSymbol(&node->addr);
                if (node->leaf[0]->need_casting) {
                    doConversion(node->leaf[0], &node->code);
                }
                unary_instr_syms("mov", utstring_body(node->addr), utstring_body(node->leaf[0]->addr), &node->code);
                sprintf(instruction, "param %s\n", utstring_body(node->addr));                       // param
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
            binary_instr_int_r(inst, dest, node1->value.int_n, utstring_body(node2->addr), code);
            return;
        } else if (node1->type == FLOAT_) {
            binary_instr_float_r(inst, dest, node1->value.float_n, utstring_body(node2->addr), code);
            return;
        }
    } else if (!node1->is_const && node2->is_const) {
        if (node2->type == INT_) {
            binary_instr_int(inst, dest, utstring_body(node1->addr), node2->value.int_n, code);
            return;
        } else if (node2->type == FLOAT_) {
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

void binary_instr_int_r(const char *inst, const char *dest, int val, const char *symb1, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %d, %s\n", inst, dest, val, symb1);
    append_code_line(code, instruction);
}

void binary_instr_float(const char *inst, const char *dest, const char *symb1, float val, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %s, %f\n", inst, dest, symb1, val);
    append_code_line(code, instruction);
}

void binary_instr_float_r(const char *inst, const char *dest,  float val, const char *symb1, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %f, %s\n", inst, dest, val, symb1);
    append_code_line(code, instruction);
}

void binary_instr_b(const char *inst, const char *dest, const char *symb1, bool val, tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %s, %d\n", inst, dest, symb1, val);
    append_code_line(code, instruction);
}

void binary_instr_b_r(const char *inst, const char *dest, bool val, const char *symb1,  tac_code **code) {
    char instruction[500];
    sprintf(instruction, "%s %s, %d, %s\n", inst, dest, val, symb1);
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
            if (utstring_len(node->addr) <= 0) {
                defineSymbol(&node->addr);
            }
            unary_instr_syms("inttofl", utstring_body(node->addr), utstring_body(node->addr), code);
        }
    }

}

int get_next_label() {
    return label_num++;
}
