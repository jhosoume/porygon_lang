#include "node_type.h"

const char* node_type_string(enum node_type type) {
    switch(type) {
        case(DECLARATION_LIST): return "declarationList";
        case(VAR_DECLARATION): return "varDeclaration";
        case(ARRAY_DECLARATION_DEFINITION): return "arrayDeclarationDefinition";
        case(TABLE_DECLARATION_DEFINITION): return "tableDeclarationDefinition";
        case(VAR_SIMPLE_DECLARATION): return "varSimpleDeclaration";
        case(ARRAY_DECLARATION): return "arrayDeclaration";
        case(TABLE_DECLARATION): return "tableDeclaration";
        case(TABLE_DEFINITION): return "tableDefinition";
        case(CONST_LIST): return "constList";
        case(STRING_LIST): return "stringList";
        case(COLUMN_CONTENT): return "columnContent";
        case(FUNCT_DECLARATION): return "functDeclaration";
        case(PARAMETER_LIST): return "parameterList";
        case(PARAMETER_DECLARATION): return "parameterDeclaration";
        case(EMPTY_COMPOUND_STATEMENT): return "emptyCompoundStatement";
        case(STATEMENT_LIST): return "statementList";
        case(READ_STMT): return "readStmt";
        case(WRITE_STMT): return "writeStmt";
        case(WHILE): return "while";
        case(CONDITIONAL_STMT): return "conditionalStmt";
        case(IF_STMT): return "ifStmt";
        case(ELSE_STMT): return "elseStmt";
        case(EMPTY_ELSE): return "emptyElse";
        case(RETURN): return "return";
        case(ASSIGN): return "=";    /* =  */
        case(OR): return "||";        /* || */
        case(AND): return "&&";       /* && */
        case(EQUALS): return "==";    /* == */
        case(DIFFS): return "!=";    /* != */
        case(BIGGER): return ">";   /* >  */
        case(LESSER): return "<";    /* <  */
        case(BIGGER_E): return ">=";  /* >= */
        case(LESSER_E): return "<=";  /* <= */
        case(SUM): return "+";       /* +  */
        case(MINUS): return "-";     /* -  */
        case(MULT): return "*";      /* *  */
        case(DIV): return "/";      /* *  */
        case(REM): return "%";      /* *  */
        case(NOT): return "!";       /* !  */
        case(MUTABLE_ONE): return "mutable[]";
        case(MUTABLE_TWO): return "mutable[;]";
        case(MUTABLE_THREE): return "mutable[;;]";
        case(FUNCT_CALL): return "functCall";
        case(EMPTY_ARGS): return "emptyArgs";
        case(ARG_LIST): return "argList";
        /* lexer node types */
        case(CHAR_T): return "char_type";
        case(STRING_T): return "string_type";
        case(INT_T): return "int_type";
        case(FLOAT_T): return "float_type";
        case(TABLE_T): return "table_type";
        case(BOOL_T): return "bool_type";
        case(VOID_T): return "void_type";
        case(TRUE_CONST): return "true_const";
        case(FALSE_CONST): return "false_const";
        case(INT_CONST): return "int_const";
        case(FLOAT_CONST): return "float_const";
        case(CHAR_CONST): return "char_const";
        case(STRING_CONST): return "string_const";
        default: return "[ERR] Node type not identified!";
    }
}
