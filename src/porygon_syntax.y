    /* Basic definition of the output files */
%defines "include/parser.h"
%output  "src/parser.c"
%define api.header.include "\"parser.h\""

    /* Define the type of the automaton */
%define parse.error verbose
%define lr.type canonical-lr

%{
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

extern struct st_entry *symbol_table;

%}


    /* %union {
        int integer_val;
        float float_val;
        const char *string_val;
        bool bool_val;
    } */


    /* %token <string_val>     IDENTIFIER
    %token <integer_val>    INTCONST
    %token <float_val>      FLOATCONST
    %token <bool_val>       BOOLEANCONST
    %token <string_val>     CHARCONST
    %token <string_val>     STRINGCONST */

%token <string_val>     IDENTIFIER
%token <integer_val>    INTCONST
%token <float_val>      FLOATCONST
%token <bool_val>       BOOLEANCONST
%token <string_val>     CHARCONST
%token <string_val>     STRINGCONST

%token WHILE_KW               /* while */
%token FOR_KW                 /* for */
%token IN_KW                  /* in */
%token IF_KW                  /* if */
%token ELSE_KW                /* else */
%token RETURN_KW              /* return */
%token READ_KW                /* read */
%token WRITE_KW               /* write */
%token CHAR_TYPE              /* char */
%token INT_TYPE               /* int */
%token FLOAT_TYPE             /* float */
%token STRING_TYPE            /* string */
%token TABLE_TYPE             /* table */
%token BOOL_TYPE              /* bool */
%token VOID_TYPE              /* void */
%token ADD_OP                 /* + */
%token SUB_OP                 /* - */
%token MULT_OP                /* * */
%token DIV_OP                 /* / */
%token REM_OP                 /* % */
%token NOT_OP                 /* ! */
%token LESSTHAN_OP            /* < */
%token LESSEQUAL_OP           /* <= */
%token GREATERTHAN_OP         /* > */
%token GREATEREQUAl_OP        /* >= */
%token NOTEQUAL_OP            /* != */
%token COMPARISON_OP          /* == */
%token OR_OP                  /* || */
%token AND_OP                 /* && */
%token LBRACE                 /* { */
%token RBRACE                 /* } */
%token LBRACKET               /* [ */
%token RBRACKET               /* ] */
%token LPARENTHESES           /* ( */
%token RPARENTHESES           /* ) */
%token COLON                  /* : */
%token SEMICOLON              /* ; */
%token DEF_EQ                 /* = */
%token COMMA                  /* , */
%token PIPE                   /* | */

%token ERR_INVALID_ID
%token ERR_INVALID_CHARCONST
%token ERR_UNKNOWN_TOKEN

%type declaration_list
%type declaration



    /* Defines the starting type */
%start declaration_list
%%
declaration_list
    : declaration                       {printf("Found declaration.\n");}
    | declaration_list declaration      {printf("Found recursive declaration.\n");}
    ;

declaration
    : INTCONST ADD_OP INTCONST          {printf("Found SUM OPERATION.\n");}
    ;
%%
