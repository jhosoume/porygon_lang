#include "token_type.h"

const char* token_type_string(enum yytokentype tok_type) {
    switch(tok_type) {
        case(ERR_INVALID_ID): return "ERR_INVALID_ID";
        case(ERR_INVALID_CHARCONST): return "ERR_INVALID_CHARCONST";
        case(ERR_UNKNOWN_TOKEN): return "ERR_UNKNOWN_TOKEN";
        case(IDENTIFIER): return "IDENTIFIER";
        case(INTCONST): return "INTCONST";
        case(FLOATCONST): return "FLOATCONST";
        case(BOOLEANCONST): return "BOOLEANCONST";
        case(CHARCONST): return "CHARCONST";
        case(STRINGCONST): return "STRINGCONST";
        // case(TRUECONST): return "TRUECONST";
        // case(FALSECONST): return "FALSECONST";
        case(WHILE_KW): return "WHILE_KW";
        case(FOR_KW): return "FOR_KW";
        case(IN_KW): return "IN_KW";
        case(IF_KW): return "IF_KW";
        case(ELSE_KW): return "ELSE_KW";
        case(RETURN_KW): return "RETURN_KW";
        case(READ_KW): return "READ_KW";
        case(WRITE_KW): return "WRITE_KW";
        case(CHAR_TYPE): return "CHAR_TYPE";
        case(INT_TYPE): return "INT_TYPE";
        case(FLOAT_TYPE): return "FLOAT_TYPE";
        case(STRING_TYPE): return "STRING_TYPE";
        case(TABLE_TYPE): return "TABLE_TYPE";
        case(BOOL_TYPE): return "BOOL_TYPE";
        case(VOID_TYPE): return "VOID_TYPE";
        case(ADD_OP): return "ADD_OP";
        case(SUB_OP): return "SUB_OP";
        case(MULT_OP): return "MULT_OP";
        case(DIV_OP): return "DIV_OP";
        case(REM_OP): return "REM_OP";
        case(NOT_OP): return "NOT_OP";
        case(LESSTHAN_OP): return "LESSTHAN_OP";
        case(LESSEQUAL_OP): return "LESSEQUAL_OP";
        case(GREATERTHAN_OP): return "GREATERTHAN_OP";
        case(GREATEREQUAl_OP): return "GREATEREQUAl_OP";
        case(NOTEQUAL_OP): return "NOTEQUAL_OP";
        case(COMPARISON_OP): return "COMPARISON_OP";
        case(OR_OP): return "OR_OP";
        case(AND_OP): return "AND_OP";
        case(LBRACE): return "LBRACE";
        case(RBRACE): return "RBRACE";
        case(LBRACKET): return "LBRACKET";
        case(RBRACKET): return "RBRACKET";
        case(LPARENTHESES): return "LPARENTHESES";
        case(RPARENTHESES): return "RPARENTHESES";
        case(COLON): return "COLON";
        case(SEMICOLON): return "SEMICOLON";
        case(DEF_EQ): return "DEF_EQ";
        case(COMMA): return "COMMA";
        case(PIPE): return "PIPE";
        default: return "[Err] Unknown Token Type";
    }


}
