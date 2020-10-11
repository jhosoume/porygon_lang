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

#include "helpers.h"

extern struct st_entry *symbol_table;
extern int line_num;
extern int column_num;

%}


%union {
    int integer_val;
    float float_val;
    const char *string_val;
}


    /* %token <string_val>     IDENTIFIER
    %token <integer_val>    INTCONST
    %token <float_val>      FLOATCONST
    %token <bool_val>       BOOLEANCONST
    %token <string_val>     CHARCONST
    %token <string_val>     STRINGCONST */


%token <string_val>     IDENTIFIER
%token <integer_val>    INTCONST
%token <float_val>      FLOATCONST
%token <integer_val>    BOOLEANCONST
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

%type declarationList declaration varDeclaration functDeclaration varSimpleDeclaration
%type logicalOrExp arrayDeclaration arrayDefinition tableDeclaration tableDefinition
%type typeSpecifier constList stringList columnContent typeSpecifier parameterList
%type compoundStmt parameterDeclaration statementList statement expression iterationStmt conditionalStmt
%type returnStmt ifStmt elseStmt logicalAndExp equalityExp relationExp sumExp multExp unaryExp mutable baseValue
%type functCall args argList constant

%code provides {
    void yyerror(char const *msg);
}


%{
int yylex(void);
%}

    /* Defines the starting type */
%start declarationList
%%
declarationList
    : declaration                                   {printf("Found declaration.\n");}
    | declarationList declaration                   {printf("Found recursive declaration.\n");}
    ;

declaration
    : varDeclaration SEMICOLON                      {printf("Found varDeclaration\n");}
    | functDeclaration                              {printf("Found functDelcaration\n");}
    ;

varDeclaration
    : varSimpleDeclaration                          {printf("Found varSimpleDeclaration\n");}
    | varSimpleDeclaration DEF_EQ logicalOrExp      {printf("Found varSimpleDeclaration with Definition\n");}
    | arrayDeclaration                              {printf("Found arrayDeclaration\n");}
    | arrayDeclaration DEF_EQ arrayDefinition       {printf("Found arrayDeclaration with Definition\n");}
    | tableDeclaration                              {printf("Found tableDeclaration\n");}
    | tableDeclaration DEF_EQ tableDefinition       {printf("Found tableDeclaration with Definition\n");}
    ;


varSimpleDeclaration
    : typeSpecifier IDENTIFIER                      {printf("[varSimpleDec] Found type specifier and ID\n");}
    ;

arrayDeclaration
    : typeSpecifier IDENTIFIER LBRACKET RBRACKET    {printf("[arrayDec] Found ARR type specifier and ID []\n");}
    ;

arrayDefinition
    : LBRACE constList RBRACE                     {printf("Found ARR DEF { }\n");}
    ;

tableDeclaration
    : TABLE_TYPE typeSpecifier IDENTIFIER LBRACKET RBRACKET {printf("Found table type with type specification ID[]\n");}
    ;

tableDefinition
    : PIPE LPARENTHESES stringList RPARENTHESES COLON columnContent PIPE {printf("Table definition with PIPES\n");}
    ;

constList
    : constant                                      {printf("Found a constant\n");}
    | constList COMMA constant                        {printf("Found a recursive constant list\n");}
    ;

stringList
    : STRINGCONST                                   {printf("Found a string constant\n");}
    | stringList COMMA STRINGCONST                       {printf("Found a recursive definition of string\n");}
    ;

columnContent
    : LPARENTHESES constList RPARENTHESES           {printf("Found a definition of column\n");}
    | columnContent COMMA LPARENTHESES constList RPARENTHESES {printf("Found a multiple column definition.\n");}
    ;

functDeclaration
    : typeSpecifier IDENTIFIER LPARENTHESES parameterList RPARENTHESES compoundStmt {printf("Found a complete function delcaration.\n");}
    | typeSpecifier IDENTIFIER LPARENTHESES RPARENTHESES compoundStmt {printf("Found a no parameters function delcaration.\n");}
    ;

parameterList
    : parameterDeclaration                          {printf("Found a parameter declaration\n");}
    | parameterList COMMA parameterDeclaration     {printf("Found a multiple parameter declaration\n");}
    ;

parameterDeclaration
    : typeSpecifier IDENTIFIER                      {printf("[paramDec] Found a type specifier and Identifier");}
    | VOID_TYPE                                     {printf("[paramDec] Found a VOID");}
    ;

compoundStmt
    : LBRACE RBRACE                             {printf("Found {}\n");}
    | LBRACE statementList RBRACE               {printf("Found a compoundStmt with Statements\n");}
    ;

statementList
    : statement                                     {printf("Found statement\n");}
    | statementList statement                       {printf("Found a recursive statement list\n");}
    ;

statement
    : varDeclaration SEMICOLON                      {printf("[State] Found a varDeclaration\n");}
    | expression SEMICOLON                          {printf("[State] Found a expression\n");}
    | iterationStmt                                 {printf("[State] Found a iterationStmt\n");}
    | conditionalStmt                               {printf("[State] Found a conditionalStmt\n");}
    | returnStmt SEMICOLON                          {printf("[State] Found a returnStmt\n");}
    | READ_KW LPARENTHESES IDENTIFIER RPARENTHESES SEMICOLON {printf("[State] Found a read statement");}
    | WRITE_KW LPARENTHESES baseValue RPARENTHESES SEMICOLON {printf("[State] Found a write statement");}
    ;

iterationStmt
    : WHILE_KW LPARENTHESES expression RPARENTHESES compoundStmt {printf("While\n");}
    | FOR_KW LPARENTHESES typeSpecifier IDENTIFIER RPARENTHESES IN_KW IDENTIFIER compoundStmt {printf("For\n");}
    ;

conditionalStmt
    : ifStmt elseStmt                               {printf("Conditional Statement\n");}
    ;

ifStmt
    : IF_KW LPARENTHESES expression RPARENTHESES compoundStmt {printf("[CondStmt] If expr");}
    ;

elseStmt
    : ELSE_KW compoundStmt                          {printf("[CondStmt] Else expr");}
    | %empty                                        {printf("[Condstmt] Empty else");}
    ;

returnStmt
    : RETURN_KW                                     {printf("Return\n");}
    | RETURN_KW expression                          {printf("Return with expr\n");}
    ;

expression
    : logicalOrExp                                  {printf("[Expr] logicalOrExp\n");}
    | mutable DEF_EQ logicalOrExp                   {printf("[Expr] logicalOrExp with mutable\n");}
    ;

logicalOrExp
    : logicalAndExp                                 {printf("[Expr] logicalAndExp\n");}
    | logicalOrExp OR_OP logicalAndExp              {printf("[Expr] || \n");}
    ;

logicalAndExp
    : equalityExp                                   {printf("[Expr] equalityExp\n");}
    | logicalAndExp AND_OP equalityExp              {printf("[Expr] && \n");}
    ;

equalityExp
    : relationExp                                   {printf("[Expr] relationExp\n");}
    | equalityExp COMPARISON_OP relationExp         {printf("[Expr] == \n");}
    | equalityExp NOTEQUAL_OP relationExp           {printf("[Expr] != \n");}
    ;

relationExp
    : sumExp                                        {printf("[Expr] sumExp\n");}
    | relationExp GREATERTHAN_OP sumExp             {printf("[Expr] > \n");}
    | relationExp LESSTHAN_OP sumExp                {printf("[Expr] < \n");}
    | relationExp GREATEREQUAl_OP sumExp            {printf("[Expr] >= \n");}
    | relationExp LESSEQUAL_OP sumExp               {printf("[Expr] <= \n");}
    ;

sumExp
    : multExp                                       {printf("[Expr] multExp\n");}
    | sumExp ADD_OP multExp                         {printf("[Expr] + \n");}
    | sumExp SUB_OP multExp                         {printf("[Expr] - \n");}
    ;

multExp
    : unaryExp                                      {printf("[Expr] unaryExp\n");}
    | multExp MULT_OP unaryExp                      {printf("[Expr] * \n");}
    | multExp DIV_OP unaryExp                       {printf("[Expr] / \n");}
    | multExp REM_OP unaryExp                       {printf("[Expr] rem \n");}
    ;

unaryExp
    : baseValue                                     {printf("[Expr] baseValue\n");}
    | NOT_OP unaryExp                               {printf("[Expr] ! \n");}
    ;

baseValue
    : LPARENTHESES expression RPARENTHESES          {printf("[baseValue] Expr in parentheses\n");}
    | constant                                      {printf("[baseValue] Constant\n");}
    | functCall                                     {printf("[baseValue] Function Call\n");}
    | mutable                                       {printf("[baseValue] Mutable\n");}
    ;

mutable
    : IDENTIFIER                                    {printf("Found Identifier\n");}
    | IDENTIFIER LBRACKET expression RBRACKET       {printf("Found Identifier []\n");}
    | IDENTIFIER LBRACKET expression COLON expression RBRACKET {printf("Found Identifier []\n");}
    | IDENTIFIER LBRACKET expression COLON expression COLON expression RBRACKET  {printf("Found Identifier []\n");}
    ;

functCall
    : IDENTIFIER LPARENTHESES args RPARENTHESES     {printf("Function call\n");}
    ;

args
    : argList                                       {printf("argList\n");}
    | %empty                                        {printf("Empty argument list\n");}
    ;

argList
    : expression COMMA argList                      {printf("Multiple arguments list\n");}
    | expression                                    {printf("Single arguments list\n");}
    ;

constant
    : INTCONST                                      {printf("INTCONST\n");}
    | FLOATCONST                                    {printf("FLOATCONST\n");}
    | BOOLEANCONST                                  {printf("BOOLEANCONST\n");}
    | CHARCONST                                     {printf("CHARCONST\n");}
    | STRINGCONST                                   {printf("STRINGCONST\n");}
    ;

typeSpecifier
    : CHAR_TYPE                                      {printf("CHAR_TYPE\n");}
    | INT_TYPE                                    {printf("INT_TYPE\n");}
    | FLOAT_TYPE                                  {printf("FLOAT_TYPE\n");}
    | BOOL_TYPE                                     {printf("BOOL_TYPE\n");}
    | STRING_TYPE                                   {printf("STRING_TYPE\n");}
    | VOID_TYPE                                   {printf("VOID_TYPE\n");}
    ;

%%

void yyerror(char const *msg) {
    red_print();
    printf("[ERR] (Line: %d, Column: %d) Found error %s\n", line_num, column_num, msg);
    reset_pcolor();
}
