#ifndef TOKEN_TYPE
#define TOKEN_TYPE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum token_type {
    ERR_INVALID_ID        = -3,
    ERR_INVALID_CHARCONST = -2,
    ERR_UNKNOWN_TOKEN     = -1,
    IDENTIFIER            = 1,
    INTCONST              = 2,
    FLOATCONST            = 3,
    BOOLEANCONST          = 4,
    CHARCONST             = 5,
    STRINGCONST           = 6,
    TRUECONST             = 7, /* true */
    FALSECONST            = 8, /* false */
    WHILE_KW              = 9, /* while */
    FOR_KW                = 10, /* for */
    IN_KW                 = 11, /* in */
    IF_KW                 = 12, /* if */
    ELSE_KW               = 13, /* else */
    RETURN_KW             = 14, /* return */
    READ_KW               = 15, /* read */
    WRITE_KW              = 16, /* write */
    CHAR_TYPE             = 17, /* char */
    INT_TYPE              = 18, /* int */
    FLOAT_TYPE            = 19, /* float */
    STRING_TYPE           = 20, /* string */
    TABLE_TYPE            = 21, /* table */
    BOOL_TYPE             = 22, /* bool */
    VOID_TYPE             = 23, /* void */
    ADD_OP                = 24, /* + */
    SUB_OP                = 25, /* - */
    MULT_OP               = 26, /* * */
    DIV_OP                = 27, /* / */
    REM_OP                = 28, /* % */
    NOT_OP                = 29, /* ! */
    LESSTHAN_OP           = 30, /* < */
    LESSEQUAL_OP          = 31, /* <= */
    GREATERTHAN_OP        = 32, /* > */
    GREATEREQUAl_OP       = 33, /* >= */
    NOTEQUAL_OP           = 34, /* != */
    COMPARISON_OP         = 35, /* == */
    OR_OP                 = 36, /* || */
    AND_OP                = 37, /* && */
    LBRACE                = 38, /* { */
    RBRACE                = 39, /* } */
    LBRACKET              = 40, /* [ */
    RBRACKET              = 41, /* ] */
    LPARENTHESES          = 42, /* ( */
    RPARENTHESES          = 43, /* ) */
    COLON                 = 44, /* : */
    SEMICOLON             = 45, /* ; */
    DEF_EQ                = 46, /* = */
    COMMA                 = 47, /* , */
    PIPE                  = 48 /* | */
};

const char* token_string(enum token_type tok_type);


#endif
