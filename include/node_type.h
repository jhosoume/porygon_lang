#ifndef NODE_TYPE
#define NODE_TYPE

enum node_type {
    DECLARATION_LIST,
    VAR_DECLARATION,
    ARRAY_DECLARATION_DEFINITION,
    TABLE_DECLARATION_DEFINITION,
    VAR_SIMPLE_DECLARATION,
    ARRAY_DECLARATION,
    TABLE_DECLARATION,
    TABLE_DEFINITION,
    CONST_LIST,
    STRING_LIST,
    COLUMN_CONTENT,
    FUNCT_DECLARATION,
    PARAMETER_LIST,
    PARAMETER_DECLARATION,
    EMPTY_COMPOUND_STATEMENT,
    STATEMENT_LIST,
    READ_STMT,
    WRITE_STMT,
    WHILE,
    CONDITIONAL_STMT,
    IF_STMT,
    ELSE_STMT,
    EMPTY_ELSE,
    RETURN,
    ASSIGN,    /* =  */
    OR,        /* || */
    AND,       /* && */
    EQUALS,    /* == */
    DIFFS,     /* != */
    BIGGER,    /* >  */
    LESSER,    /* <  */
    BIGGER_E,  /* >= */
    LESSER_E,  /* <= */
    SUM,       /* +  */
    MINUS,     /* -  */
    MULT,      /* *  */
    DIV,       /* /  */
    REM,       /* %  */
    NOT,       /* !  */
    MUTABLE_ONE,
    MUTABLE_TWO,
    MUTABLE_THREE,
    FUNCT_CALL,
    EMPTY_ARGS,
    ARG_LIST,
    /* lexer node types */
    CHAR_T,
    STRING_T,
    INT_T,
    FLOAT_T,
    TABLE_T,
    BOOL_T,
    VOID_T,
    TRUE_CONST,
    FALSE_CONST,
    INT_CONST,
    FLOAT_CONST,
    CHAR_CONST,
    STRING_CONST,
    ID
};

const char* node_type_string(enum node_type type);

#endif
