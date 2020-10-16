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
    /* AST based on https://efxa.org/2014/05/25/how-to-create-an-abstract-syntax-tree-while-parsing-an-input-stream/ */
#include "tree.h"

#include "helpers.h"
#include "symbol_table.h"
#include "scope.h"

/* Pointer to symbol table initilized in the main*/
extern struct st_entry *symbol_table;

/* Pointer to struct that holds a list of the ast nodes*/
extern struct node_list *ast_tree_list;

/* Pointer to ast tree root (Program start)*/
extern struct tree_node *ast_root;

extern int line_num;
extern int column_num;
extern int previous_col;

extern int cur_scope;

extern scope_stack *sp_stack;

extern int lex_errors;
%}


%union {
    int integer_val;
    float float_val;
    const char *string_val;

    struct tree_node *tree_node;
}


    /* %token <string_val>     IDENTIFIER
    %token <integer_val>    INTCONST
    %token <float_val>      FLOATCONST
    %token <bool_val>       BOOLEANCONST
    %token <string_val>     CHARCONST
    %token <string_val>     STRINGCONST */


%token <tree_node> IDENTIFIER
%token <tree_node> INTCONST
%token <tree_node> FLOATCONST
%token <tree_node> BOOLEANCONST
%token <tree_node> CHARCONST
%token <tree_node> STRINGCONST

%token <tree_node> WHILE_KW        "while"  /* while */
%token <tree_node> FOR_KW          "for"    /* for */
%token <tree_node> IN_KW           "in"     /* in */
%token <tree_node> IF_KW           "if"     /* if */
%token <tree_node> ELSE_KW         "else"   /* else */
%token <tree_node> RETURN_KW       "return" /* return */
%token <tree_node> READ_KW         "read"   /* read */
%token <tree_node> WRITE_KW        "write"  /* write */
%token <tree_node> CHAR_TYPE       "char"   /* char */
%token <tree_node> INT_TYPE        "int"    /* int */
%token <tree_node> FLOAT_TYPE      "float"  /* float */
%token <tree_node> STRING_TYPE     "string" /* string */
%token <tree_node> TABLE_TYPE      "table"  /* table */
%token <tree_node> BOOL_TYPE       "bool"   /* bool */
%token <tree_node> VOID_TYPE       "void"   /* void */
%token <tree_node> ADD_OP          "+"      /* + */
%token <tree_node> SUB_OP          "-"      /* - */
%token <tree_node> MULT_OP         "*"      /* * */
%token <tree_node> DIV_OP          "/"      /* / */
%token <tree_node> REM_OP          "%"      /* % */
%token <tree_node> NOT_OP          "!"      /* ! */
%token <tree_node> LESSTHAN_OP     "<"      /* < */
%token <tree_node> LESSEQUAL_OP    "<="     /* <= */
%token <tree_node> GREATERTHAN_OP  ">"      /* > */
%token <tree_node> GREATEREQUAl_OP ">="     /* >= */
%token <tree_node> NOTEQUAL_OP     "!="     /* != */
%token <tree_node> COMPARISON_OP   "=="     /* == */
%token <tree_node> OR_OP           "||"     /* || */
%token <tree_node> AND_OP          "&&"     /* && */
%token <tree_node> LBRACE          "{"      /* { */
%token <tree_node> RBRACE          "}"      /* } */
%token <tree_node> LBRACKET        "["      /* [ */
%token <tree_node> RBRACKET        "]"      /* ] */
%token <tree_node> LPARENTHESES    "("      /* ( */
%token <tree_node> RPARENTHESES    ")"      /* ) */
%token <tree_node> COLON           ":"      /* : */
%token <tree_node> SEMICOLON       ";"      /* ; */
%token <tree_node> DEF_EQ          "="      /* = */
%token <tree_node> COMMA           ","      /* , */
%token <tree_node> PIPE            "|"      /* | */

%token ERR_INVALID_ID
%token ERR_INVALID_CHARCONST
%token ERR_UNKNOWN_TOKEN

%type <tree_node> declarationList declaration varDeclaration functDeclaration varSimpleDeclaration
%type <tree_node> logicalOrExp arrayDeclaration arrayDefinition tableDeclaration tableDefinition
%type <tree_node> typeSpecifier constList stringList columnContent parameterList
%type <tree_node> compoundStmt parameterDeclaration statementList statement expression iterationStmt conditionalStmt
%type <tree_node> returnStmt ifStmt elseStmt logicalAndExp equalityExp relationExp sumExp multExp unaryExp mutable baseValue
%type <tree_node> functCall args argList constant lexerror

%code provides {
    void yyerror(char const *msg);
}


%{
int yylex(void);
%}

    /* Defines the starting type */
%start program
%%
program
    : declarationList                               {ast_root = $1;}
    ;

declarationList
    : declaration                                   {$$ = $1;}
    | declarationList declaration                   {
                                                        struct tree_node *node = create_node(ast_tree_list, "declarationList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        $$ = node;
                                                    }
    | lexerror
    ;

declaration
    : varDeclaration SEMICOLON                      {$$ = $1;}
    | functDeclaration                              {$$ = $1;}
    ;

varDeclaration
    : varSimpleDeclaration                          {$$ = $1;}
    | varSimpleDeclaration DEF_EQ logicalOrExp      {
                                                        struct tree_node *node = create_node(ast_tree_list, "varDeclaration", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    | arrayDeclaration                              {$$ = $1;}
    | arrayDeclaration DEF_EQ arrayDefinition       {
                                                        struct tree_node *node = create_node(ast_tree_list, "arrayDeclarationDefinition", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    | tableDeclaration                              {$$ = $1;}
    | tableDeclaration DEF_EQ tableDefinition       {
                                                        struct tree_node *node = create_node(ast_tree_list, "tableDeclarationDefinition", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    ;


varSimpleDeclaration
    : typeSpecifier IDENTIFIER                      {
                                                        struct tree_node *node = create_node(ast_tree_list, "varSimpleDeclaration", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        $$ = node;
                                                        add_entry($2->name, $1->name, VARIABLE, cur_scope, line_num, strlen($2->name));
                                                    }
    ;

arrayDeclaration
    : typeSpecifier IDENTIFIER LBRACKET RBRACKET    {
                                                        struct tree_node *node = create_node(ast_tree_list, "arrayDeclaration", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        $$ = node;
                                                        add_entry($2->name, $1->name, VARIABLE, cur_scope, line_num, strlen($2->name));
                                                    }
    ;

arrayDefinition
    : LBRACE constList RBRACE                     {$$ = $2;}
    ;

tableDeclaration
    : TABLE_TYPE typeSpecifier IDENTIFIER LBRACKET RBRACKET {
                                                                struct tree_node *node = create_node(ast_tree_list, "tableDeclaration", 2);
                                                                add_leaf(node, $2, 0);
                                                                add_leaf(node, $3, 1);
                                                                $$ = node;
                                                                add_entry($3->name, $2->name, VARIABLE, cur_scope, line_num, strlen($2->name));
                                                            }
    ;

tableDefinition
    : PIPE LPARENTHESES stringList RPARENTHESES COLON columnContent PIPE {
                                                                            struct tree_node *node = create_node(ast_tree_list, "tableDefinition", 2);
                                                                            add_leaf(node, $3, 0);
                                                                            add_leaf(node, $6, 1);
                                                                            $$ = node;
                                                                         }
    ;

constList
    : constant                                      {$$ = $1;}
    | constList COMMA constant                      {
                                                        struct tree_node *node = create_node(ast_tree_list, "constList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;

                                                    }
    ;

stringList
    : STRINGCONST                                   {$$ = $1;}
    | stringList COMMA STRINGCONST                  {
                                                        struct tree_node *node = create_node(ast_tree_list, "stringList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    ;

columnContent
    : LPARENTHESES constList RPARENTHESES           {$$ = $2;}
    | columnContent COMMA LPARENTHESES constList RPARENTHESES {
                                                                struct tree_node *node = create_node(ast_tree_list, "columnContent", 2);
                                                                add_leaf(node, $1, 0);
                                                                add_leaf(node, $4, 1);
                                                                $$ = node;
                                                              }
    ;

functDeclaration
    : typeSpecifier IDENTIFIER LPARENTHESES parameterList RPARENTHESES compoundStmt {
                                                                                        struct tree_node *node = create_node(ast_tree_list, "functDeclaration", 4);
                                                                                        add_leaf(node, $1, 0);
                                                                                        add_leaf(node, $2, 1);
                                                                                        add_leaf(node, $4, 2);
                                                                                        add_leaf(node, $6, 3);
                                                                                        $$ = node;
                                                                                        add_entry($2->name, $1->name, FUNCTION, cur_scope, line_num, strlen($2->name));
                                                                                    }
    | typeSpecifier IDENTIFIER LPARENTHESES RPARENTHESES compoundStmt {
                                                                            struct tree_node *node = create_node(ast_tree_list, "functDeclaration", 3);
                                                                            add_leaf(node, $1, 0);
                                                                            add_leaf(node, $2, 1);
                                                                            add_leaf(node, $5, 2);
                                                                            $$ = node;
                                                                            add_entry($2->name, $1->name, FUNCTION, cur_scope, line_num, strlen($2->name));
                                                                      }
    ;

parameterList
    : parameterDeclaration                          {$$ = $1;}
    | parameterList COMMA parameterDeclaration      {
                                                        struct tree_node *node = create_node(ast_tree_list, "parameterList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    ;

parameterDeclaration
    : typeSpecifier IDENTIFIER                      {
                                                        struct tree_node *node = create_node(ast_tree_list, "parameterDeclaration", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        $$ = node;
                                                        add_entry($2->name, $1->name, VARIABLE, count_scope + 1, line_num, strlen($2->name));
                                                    }
    | VOID_TYPE                                     {$$ = $1;}
    ;

compoundStmt
    : LBRACE RBRACE                                 {
                                                        struct tree_node *node = create_node(ast_tree_list, "emptyCompoundStatement", 0);
                                                        $$ = node;
                                                    }
    | LBRACE statementList RBRACE                   {$$ = $2;}
    ;

statementList
    : statement                                     {$$ = $1;}
    | statementList statement                       {
                                                        struct tree_node *node = create_node(ast_tree_list, "statementList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        $$ = node;
                                                    }
    ;

statement
    : varDeclaration SEMICOLON                      {$$ = $1;}
    | expression SEMICOLON                          {$$ = $1;}
    | iterationStmt                                 {$$ = $1;}
    | conditionalStmt                               {$$ = $1;}
    | returnStmt SEMICOLON                          {$$ = $1;}
    | READ_KW LPARENTHESES IDENTIFIER RPARENTHESES SEMICOLON {
                                                                 struct tree_node *node = create_node(ast_tree_list, "readStmt", 1);
                                                                 add_leaf(node, $3, 0);
                                                                 $$ = node;
                                                             }
    | WRITE_KW LPARENTHESES baseValue RPARENTHESES SEMICOLON {
                                                                 struct tree_node *node = create_node(ast_tree_list, "writeStmt", 1);
                                                                 add_leaf(node, $3, 0);
                                                                 $$ = node;
                                                             }
    ;

iterationStmt
    : WHILE_KW LPARENTHESES expression RPARENTHESES compoundStmt {
                                                                     struct tree_node *node = create_node(ast_tree_list, "while", 2);
                                                                     add_leaf(node, $3, 0);
                                                                     add_leaf(node, $5, 1);
                                                                     $$ = node;
                                                                 }
    | FOR_KW LPARENTHESES typeSpecifier IDENTIFIER RPARENTHESES IN_KW IDENTIFIER compoundStmt {
                                                                                                 struct tree_node *node = create_node(ast_tree_list, "while", 2);
                                                                                                 add_leaf(node, $3, 0);
                                                                                                 add_leaf(node, $5, 1);
                                                                                                 $$ = node;
                                                                                                add_entry($4->name, $3->name, VARIABLE, count_scope + 1, line_num, strlen($2->name));
                                                                                             }

    ;

conditionalStmt
    : ifStmt elseStmt                               {
                                                        struct tree_node *node = create_node(ast_tree_list, "conditionalStmt", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        $$ = node;
                                                    }
    ;

ifStmt
    : IF_KW LPARENTHESES expression RPARENTHESES compoundStmt   {
                                                                    struct tree_node *node = create_node(ast_tree_list, "ifStmt", 2);
                                                                    add_leaf(node, $3, 0);
                                                                    add_leaf(node, $5, 1);
                                                                    $$ = node;
                                                                }
    ;

elseStmt
    : ELSE_KW compoundStmt                          {
                                                        struct tree_node *node = create_node(ast_tree_list, "elseStmt", 1);
                                                        add_leaf(node, $2, 0);
                                                        $$ = node;
                                                    }
    | %empty                                        {
                                                        struct tree_node *node = create_node(ast_tree_list, "emptyElse", 0);
                                                        $$ = node;
                                                    }
    ;

returnStmt
    : RETURN_KW                                     {
                                                        struct tree_node *node = create_node(ast_tree_list, "return", 0);
                                                        $$ = node;
                                                    }
    | RETURN_KW expression                          {
                                                        struct tree_node *node = create_node(ast_tree_list, "return", 1);
                                                        add_leaf(node, $2, 0);
                                                        $$ = node;
                                                    }
    ;

expression
    : logicalOrExp                                  {$$ = $1;}
    | mutable DEF_EQ logicalOrExp                   {
                                                        struct tree_node *node = create_node(ast_tree_list, "=", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    ;

logicalOrExp
    : logicalAndExp                                 {$$ = $1;}
    | logicalOrExp OR_OP logicalAndExp              {
                                                        struct tree_node *node = create_node(ast_tree_list, "||", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    ;

logicalAndExp
    : equalityExp                                   {$$ = $1;}
    | logicalAndExp AND_OP equalityExp              {
                                                        struct tree_node *node = create_node(ast_tree_list, "&&", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    ;

equalityExp
    : relationExp                                   {$$ = $1;}
    | equalityExp COMPARISON_OP relationExp         {
                                                        struct tree_node *node = create_node(ast_tree_list, "==", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    | equalityExp NOTEQUAL_OP relationExp           {
                                                        struct tree_node *node = create_node(ast_tree_list, "!=", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    ;

relationExp
    : sumExp                                        {$$ = $1;}
    | relationExp GREATERTHAN_OP sumExp             {
                                                        struct tree_node *node = create_node(ast_tree_list, ">", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    | relationExp LESSTHAN_OP sumExp                {
                                                        struct tree_node *node = create_node(ast_tree_list, "<", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    | relationExp GREATEREQUAl_OP sumExp            {
                                                        struct tree_node *node = create_node(ast_tree_list, ">=", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    | relationExp LESSEQUAL_OP sumExp               {
                                                        struct tree_node *node = create_node(ast_tree_list, "<=", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    ;

sumExp
    : multExp                                       {$$ = $1;}
    | sumExp ADD_OP multExp                         {
                                                        struct tree_node *node = create_node(ast_tree_list, "+", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    | sumExp SUB_OP multExp                         {
                                                        struct tree_node *node = create_node(ast_tree_list, "-", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    ;

multExp
    : unaryExp                                      {$$ = $1;}
    | multExp MULT_OP unaryExp                      {
                                                        struct tree_node *node = create_node(ast_tree_list, "*", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    | multExp DIV_OP unaryExp                       {
                                                        struct tree_node *node = create_node(ast_tree_list, "/", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    | multExp REM_OP unaryExp                       {
                                                        struct tree_node *node = create_node(ast_tree_list, "%", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    ;

unaryExp
    : baseValue                                     {$$ = $1;}
    | NOT_OP unaryExp                               {
                                                        struct tree_node *node = create_node(ast_tree_list, "!", 1);
                                                        add_leaf(node, $2, 0);
                                                        $$ = node;
                                                    }
    ;

baseValue
    : LPARENTHESES expression RPARENTHESES          {$$ = $2;}
    | lexerror
    | constant                                      {$$ = $1;}
    | functCall                                     {$$ = $1;}
    | mutable                                       {$$ = $1;}
    ;

mutable
    : IDENTIFIER                                    {$$ = $1;}
    | IDENTIFIER LBRACKET expression RBRACKET       {
                                                        struct tree_node *node = create_node(ast_tree_list, "mutable[]", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    | IDENTIFIER LBRACKET expression COLON expression RBRACKET  {
                                                                    struct tree_node *node = create_node(ast_tree_list, "mutable[;]", 3);
                                                                    add_leaf(node, $1, 0);
                                                                    add_leaf(node, $3, 1);
                                                                    add_leaf(node, $5, 2);
                                                                    $$ = node;
                                                                }
    | IDENTIFIER LBRACKET expression COLON expression COLON expression RBRACKET {
                                                                                    struct tree_node *node = create_node(ast_tree_list, "mutable[;:]", 4);
                                                                                    add_leaf(node, $1, 0);
                                                                                    add_leaf(node, $3, 1);
                                                                                    add_leaf(node, $5, 2);
                                                                                    add_leaf(node, $7, 3);
                                                                                    $$ = node;
                                                                                }
    ;

functCall
    : IDENTIFIER LPARENTHESES args RPARENTHESES     {
                                                        struct tree_node *node = create_node(ast_tree_list, "functCall", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    ;

args
    : argList                                       {$$ = $1;}
    | %empty                                        {
                                                        struct tree_node *node = create_node(ast_tree_list, "emptyArgs", 0);
                                                        $$ = node;
                                                    }
    ;

argList
    : expression COMMA argList                      {
                                                        struct tree_node *node = create_node(ast_tree_list, "argList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        $$ = node;
                                                    }
    | expression                                    {$$ = $1;}
    ;

constant
    : INTCONST                                      {$$ = $1;}
    | FLOATCONST                                    {$$ = $1;}
    | BOOLEANCONST                                  {$$ = $1;}
    | CHARCONST                                     {$$ = $1;}
    | STRINGCONST                                   {$$ = $1;}
    ;

typeSpecifier
    : CHAR_TYPE                                     {$$ = $1;}
    | INT_TYPE                                      {$$ = $1;}
    | FLOAT_TYPE                                    {$$ = $1;}
    | BOOL_TYPE                                     {$$ = $1;}
    | STRING_TYPE                                   {$$ = $1;}
    | VOID_TYPE                                     {$$ = $1;}
    ;

lexerror
    : ERR_INVALID_ID                                {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Invalid Identifier (size bigger than 32 characters). Line: %d Column: %d\n", line_num, previous_col);
                                                        reset_pcolor();
                                                    }
    | ERR_INVALID_CHARCONST                         {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Invalid char (more than one character). Line: %d Column: %d\n", line_num, previous_col);
                                                        reset_pcolor();
                                                    }
    | ERR_UNKNOWN_TOKEN                             {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Unknown Token. Line: %d Column: %d\n", line_num, previous_col);
                                                        reset_pcolor();
                                                    }
    ;

%%

void yyerror(char const *msg) {
    fprintf(stderr, "[ERR] (Line: %d, Column: %d) Found error %s\n", line_num, previous_col, msg);
}
