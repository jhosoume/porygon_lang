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
#include "node_type.h"
#include "type_checking.h"
#include "semantic_analysis.h"

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
int synt_errors = 0;
bool has_return = false;
extern int errors;
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
%type <tree_node> functCall args argList constant forDec
    /* %type <tree_node> lexerror */

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
                                                        struct tree_node *node = create_node(ast_tree_list, DECLARATION_LIST, "declarationList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

declaration
    : varDeclaration SEMICOLON                      {$$ = $1;}
    | functDeclaration                              {$$ = $1;}
    | error                                         {++synt_errors;}
    ;

varDeclaration
    : varSimpleDeclaration                          {$$ = $1;}
    | varSimpleDeclaration DEF_EQ logicalOrExp      {
                                                        struct tree_node *node = create_node(ast_tree_list, VAR_DECLARATION, "varDeclaration",  2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        if ($1 != NULL) {
                                                            if ($1->leaf[1] != NULL) {
                                                                set_defined($1->leaf[1]->name);
                                                            }
                                                        }
                                                        genCode($$);
                                                    }
    | arrayDeclaration                              {$$ = $1;}
    | arrayDeclaration DEF_EQ arrayDefinition       {
                                                        struct tree_node *node = create_node(ast_tree_list, ARRAY_DECLARATION_DEFINITION, "arrayDeclarationDefinition", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        if ($1 != NULL) {
                                                            if ($1->leaf[1] != NULL) {
                                                                set_defined($1->leaf[1]->name);
                                                            }
                                                        }
                                                        arr_values($$);
                                                        genCode($$);
                                                    }
    | tableDeclaration                              {$$ = $1;}
    | tableDeclaration DEF_EQ tableDefinition       {
                                                        struct tree_node *node = create_node(ast_tree_list, TABLE_DECLARATION_DEFINITION, "tableDeclarationDefinition", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        if ($1 != NULL) {
                                                            if ($1->leaf[1] != NULL) {
                                                                set_defined($1->leaf[1]->name);
                                                            }
                                                        }
                                                        table_declaration_cols($$);
                                                        genCode($$);
                                                    }
    ;


varSimpleDeclaration
    : typeSpecifier IDENTIFIER                      {
                                                        struct tree_node *node = create_node(ast_tree_list, VAR_SIMPLE_DECLARATION, "varSimpleDeclaration", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        struct st_entry *entry = add_entry($2->name, $1->type, $1->name, VARIABLE, cur_scope, SIMPLE, 0);
                                                        set_stentry($$, entry);
                                                        genCode($$);
                                                    }
    ;

arrayDeclaration
    : typeSpecifier IDENTIFIER LBRACKET RBRACKET    {
                                                        struct tree_node *node = create_node(ast_tree_list, ARRAY_DECLARATION, "arrayDeclaration", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        struct st_entry *entry = add_entry($2->name, $1->type, $1->name, VARIABLE, cur_scope, ARRAY, 0);
                                                        set_stentry($$, entry);
                                                        genCode($$);
                                                    }
    ;

arrayDefinition
    : LBRACKET constList RBRACKET                    {$$ = $2;}
    ;

tableDeclaration
    : TABLE_TYPE typeSpecifier IDENTIFIER LBRACKET RBRACKET {
                                                                struct tree_node *node = create_node(ast_tree_list, TABLE_DECLARATION, "tableDeclaration", 2);
                                                                add_leaf(node, $2, 0);
                                                                add_leaf(node, $3, 1);
                                                                check_type(node);
                                                                $$ = node;
                                                                struct st_entry *entry = add_entry($3->name, $2->type, $2->name, VARIABLE, cur_scope, TABLE, 0);
                                                                set_stentry($$, entry);
                                                                genCode($$);
                                                            }
    ;

tableDefinition
    : PIPE LPARENTHESES stringList RPARENTHESES COLON columnContent PIPE {
                                                                            struct tree_node *node = create_node(ast_tree_list, TABLE_DEFINITION, "tableDefinition", 2);
                                                                            add_leaf(node, $3, 0);
                                                                            add_leaf(node, $6, 1);
                                                                            check_type(node);
                                                                            $$ = node;
                                                                            genCode($$);
                                                                         }
    ;

constList
    : constant                                      {$$ = $1;}
    | constList COMMA constant                      {
                                                        struct tree_node *node = create_node(ast_tree_list, CONST_LIST, "constList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);

                                                    }
    ;

stringList
    : STRINGCONST                                   {$$ = $1;}
    | stringList COMMA STRINGCONST                  {
                                                        struct tree_node *node = create_node(ast_tree_list, STRING_LIST, "stringList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

columnContent
    : LPARENTHESES constList RPARENTHESES           {$$ = $2;}
    | columnContent COMMA LPARENTHESES constList RPARENTHESES {
                                                                struct tree_node *node = create_node(ast_tree_list, COLUMN_CONTENT, "columnContent", 2);
                                                                add_leaf(node, $1, 0);
                                                                add_leaf(node, $4, 1);
                                                                check_type(node);
                                                                $$ = node;
                                                                genCode($$);
                                                              }
    ;

functDeclaration
    : typeSpecifier IDENTIFIER LPARENTHESES parameterList RPARENTHESES compoundStmt {
                                                                                        struct tree_node *node = create_node(ast_tree_list, FUNCT_DECLARATION, "functDeclaration", 4);
                                                                                        add_leaf(node, $1, 0);
                                                                                        add_leaf(node, $2, 1);
                                                                                        add_leaf(node, $4, 2);
                                                                                        add_leaf(node, $6, 3);
                                                                                        check_type(node);
                                                                                        $$ = node;
                                                                                        struct st_entry *entry = add_entry($2->name, $1->type, $1->name, FUNCTION, cur_scope, SIMPLE, 0);
                                                                                        set_stentry($$, entry);
                                                                                        func_declaration_params($$);
                                                                                        set_defined($2->name);
                                                                                        genCode($2);
                                                                                        genCode($$);
                                                                                        has_return = false;
                                                                                    }
    | typeSpecifier IDENTIFIER LPARENTHESES RPARENTHESES compoundStmt {
                                                                            struct tree_node *node = create_node(ast_tree_list, FUNCT_DECLARATION, "functDeclaration", 3);
                                                                            add_leaf(node, $1, 0);
                                                                            add_leaf(node, $2, 1);
                                                                            add_leaf(node, $5, 2);
                                                                            check_type(node);
                                                                            $$ = node;
                                                                            struct st_entry *entry = add_entry($2->name, $1->type, $1->name, FUNCTION, cur_scope, SIMPLE, 0);
                                                                            set_stentry($$, entry);
                                                                            set_defined($2->name);
                                                                            genCode($2);
                                                                            genCode($$);
                                                                            has_return = false;
                                                                      }
    ;

parameterList
    : parameterDeclaration                          {$$ = $1;}
    | parameterList COMMA parameterDeclaration      {
                                                        struct tree_node *node = create_node(ast_tree_list, PARAMETER_LIST, "parameterList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

parameterDeclaration
    : typeSpecifier IDENTIFIER                      {
                                                        struct tree_node *node = create_node(ast_tree_list, PARAMETER_DECLARATION, "parameterDeclaration", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        struct st_entry *entry = add_entry($2->name, $1->type, $1->name, PARAM, count_scope + 1, SIMPLE, 0);
                                                        set_stentry($$, entry);
                                                        genCode($2);
                                                        genCode($$);
                                                    }
    | VOID_TYPE                                     {$$ = $1;}
    ;

compoundStmt
    : LBRACE RBRACE                                 {
                                                        struct tree_node *node = create_node(ast_tree_list, EMPTY_COMPOUND_STATEMENT, "emptyCompoundStatement", 0);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    | LBRACE statementList RBRACE                   {$$ = $2;}
    ;

statementList
    : statement                                     {$$ = $1;}
    | statementList statement                       {
                                                        struct tree_node *node = create_node(ast_tree_list, STATEMENT_LIST, "statementList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

statement
    : varDeclaration SEMICOLON                      {$$ = $1;}
    | expression SEMICOLON                          {$$ = $1;}
    | iterationStmt                                 {$$ = $1;}
    | conditionalStmt                               {$$ = $1;}
    | returnStmt SEMICOLON                          {$$ = $1;}
    | READ_KW LPARENTHESES IDENTIFIER RPARENTHESES SEMICOLON {
                                                                 struct tree_node *node = create_node(ast_tree_list, READ_STMT, "readStmt", 1);
                                                                 add_leaf(node, $3, 0);
                                                                 check_type(node);
                                                                 $$ = node;
                                                                 set_defined($3->name);
                                                                 check_type(node->leaf[0]);
                                                                 genCode(node->leaf[0]);
                                                                 genCode($$);
                                                             }
    | WRITE_KW LPARENTHESES baseValue RPARENTHESES SEMICOLON {
                                                                 struct tree_node *node = create_node(ast_tree_list, WRITE_STMT, "writeStmt", 1);
                                                                 add_leaf(node, $3, 0);
                                                                 check_type(node);
                                                                 $$ = node;
                                                                 genCode($$);
                                                             }
    | error                                                  {++synt_errors;}
    ;

iterationStmt
    : WHILE_KW LPARENTHESES expression RPARENTHESES compoundStmt {
                                                                     struct tree_node *node = create_node(ast_tree_list, WHILE, "while", 2);
                                                                     add_leaf(node, $3, 0);
                                                                     add_leaf(node, $5, 1);
                                                                     check_type(node);
                                                                     $$ = node;
                                                                     genCode($$);
                                                                 }
    | FOR_KW LPARENTHESES forDec RPARENTHESES IN_KW IDENTIFIER compoundStmt {
                                                                                                 struct tree_node *node = create_node(ast_tree_list, FOR_LOOP, "for_loop", 3);
                                                                                                 add_leaf(node, $3, 0);
                                                                                                 add_leaf(node, $6, 1);
                                                                                                 add_leaf(node, $7, 2);
                                                                                                 check_type(node);
                                                                                                 check_defined(node->leaf[1]->name);
                                                                                                 $$ = node;
                                                                                                 genCode($6);
                                                                                                 genCode($$);
                                                                                             }

    ;

forDec
    : typeSpecifier IDENTIFIER {
                                     struct st_entry *entry = add_entry($2->name, $1->type, $1->name, VARIABLE, count_scope + 1, SIMPLE, 0);
                                     struct tree_node *node = create_node(ast_tree_list, FOR_DEC, "for_dec", 2);
                                     set_stentry(node, entry);
                                     add_leaf(node, $1, 0);
                                     add_leaf(node, $2, 1);
                                     check_type(node);
                                     $$ = node;
                                     genCode($2);
                                     genCode($$);
                                }
    ;

conditionalStmt
    : ifStmt elseStmt                               {
                                                        struct tree_node *node = create_node(ast_tree_list, CONDITIONAL_STMT, "conditionalStmt", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $2, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

ifStmt
    : IF_KW LPARENTHESES expression RPARENTHESES compoundStmt   {
                                                                    struct tree_node *node = create_node(ast_tree_list, IF_STMT, "ifStmt", 2);
                                                                    add_leaf(node, $3, 0);
                                                                    add_leaf(node, $5, 1);
                                                                    check_type(node);
                                                                    $$ = node;
                                                                    genCode($$);
                                                                }
    ;

elseStmt
    : ELSE_KW compoundStmt                          {
                                                        struct tree_node *node = create_node(ast_tree_list, ELSE_STMT, "elseStmt", 1);
                                                        add_leaf(node, $2, 0);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    | %empty                                        {
                                                        struct tree_node *node = create_node(ast_tree_list, EMPTY_ELSE, "emptyElse", 0);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

returnStmt
    : RETURN_KW                                     {
                                                        has_return = true;
                                                        struct tree_node *node = create_node(ast_tree_list, RETURN, "return", 0);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    | RETURN_KW expression                          {
                                                        has_return = true;
                                                        struct tree_node *node = create_node(ast_tree_list, RETURN, "return", 1);
                                                        add_leaf(node, $2, 0);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

expression
    : logicalOrExp                                  {$$ = $1;}
    | mutable DEF_EQ logicalOrExp                   {
                                                        struct tree_node *node = create_node(ast_tree_list, ASSIGN, "=", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        if (node->leaf[0]->node_type == ID) {
                                                            set_defined(node->leaf[0]->name);
                                                        }
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

logicalOrExp
    : logicalAndExp                                 {$$ = $1;}
    | logicalOrExp OR_OP logicalAndExp              {
                                                        struct tree_node *node = create_node(ast_tree_list, OR, "||", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

logicalAndExp
    : equalityExp                                   {$$ = $1;}
    | logicalAndExp AND_OP equalityExp              {
                                                        struct tree_node *node = create_node(ast_tree_list, AND, "&&", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

equalityExp
    : relationExp                                   {$$ = $1;}
    | equalityExp COMPARISON_OP relationExp         {
                                                        struct tree_node *node = create_node(ast_tree_list, EQUALS, "==", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    | equalityExp NOTEQUAL_OP relationExp           {
                                                        struct tree_node *node = create_node(ast_tree_list, DIFFS, "!=", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

relationExp
    : sumExp                                        {$$ = $1;}
    | relationExp GREATERTHAN_OP sumExp             {
                                                        struct tree_node *node = create_node(ast_tree_list, BIGGER, ">", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    | relationExp LESSTHAN_OP sumExp                {
                                                        struct tree_node *node = create_node(ast_tree_list, LESSER, "<", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    | relationExp GREATEREQUAl_OP sumExp            {
                                                        struct tree_node *node = create_node(ast_tree_list, BIGGER_E, ">=", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    | relationExp LESSEQUAL_OP sumExp               {
                                                        struct tree_node *node = create_node(ast_tree_list, LESSER_E, "<=", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

sumExp
    : multExp                                       {$$ = $1;}
    | sumExp ADD_OP multExp                         {
                                                        struct tree_node *node = create_node(ast_tree_list, SUM, "+", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    | sumExp SUB_OP multExp                         {
                                                        struct tree_node *node = create_node(ast_tree_list, MINUS, "-", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

multExp
    : unaryExp                                      {$$ = $1;}
    | multExp MULT_OP unaryExp                      {
                                                        struct tree_node *node = create_node(ast_tree_list, MULT, "*", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    | multExp DIV_OP unaryExp                       {
                                                        struct tree_node *node = create_node(ast_tree_list, DIV, "/", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    | multExp REM_OP unaryExp                       {
                                                        struct tree_node *node = create_node(ast_tree_list, REM, "%", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

unaryExp
    : baseValue                                     {$$ = $1;}
    | NOT_OP unaryExp                               {
                                                        struct tree_node *node = create_node(ast_tree_list, NOT, "!", 1);
                                                        add_leaf(node, $2, 0);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

baseValue
    : LPARENTHESES expression RPARENTHESES          {$$ = $2;}
    | error                                         {++synt_errors;}
    | constant                                      {$$ = $1;}
    | functCall                                     {$$ = $1;}
    | mutable                                       {$$ = $1;}
    ;

mutable
    : IDENTIFIER                                    {
                                                        $$ = $1;
                                                        check_type($$);
                                                        check_var($$);
                                                        /* check_defined($$->name); */
                                                        genCode($$);
                                                    }
    | IDENTIFIER LBRACKET expression RBRACKET       {
                                                        struct tree_node *node = create_node(ast_tree_list, MUTABLE_ONE, "mutable[]", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        check_defined(node->leaf[0]->name);
                                                        $$ = node;
                                                        genCode($1);
                                                        genCode($$);
                                                    }
    | IDENTIFIER LBRACKET expression COLON expression RBRACKET  {
                                                                    struct tree_node *node = create_node(ast_tree_list, MUTABLE_TWO, "mutable[:]", 3);
                                                                    add_leaf(node, $1, 0);
                                                                    add_leaf(node, $3, 1);
                                                                    add_leaf(node, $5, 2);
                                                                    check_type(node);
                                                                    check_defined(node->leaf[0]->name);
                                                                    $$ = node;
                                                                    genCode($1);
                                                                    genCode($$);
                                                                }
    | IDENTIFIER LBRACKET expression COLON expression COLON expression RBRACKET {
                                                                                    struct tree_node *node = create_node(ast_tree_list, MUTABLE_THREE, "mutable[::]", 4);
                                                                                    add_leaf(node, $1, 0);
                                                                                    add_leaf(node, $3, 1);
                                                                                    add_leaf(node, $5, 2);
                                                                                    add_leaf(node, $7, 3);
                                                                                    check_type(node);
                                                                                    check_defined(node->leaf[0]->name);
                                                                                    $$ = node;
                                                                                    genCode($1);
                                                                                    genCode($$);
                                                                                }
    ;

functCall
    : IDENTIFIER LPARENTHESES args RPARENTHESES     {
                                                        struct tree_node *node = create_node(ast_tree_list, FUNCT_CALL, "functCall", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        verify_args($$);
                                                        genCode($1);
                                                        genCode($$);
                                                    }
    ;

args
    : argList                                       {$$ = $1;}
    | %empty                                        {
                                                        struct tree_node *node = create_node(ast_tree_list, EMPTY_ARGS, "emptyArgs", 0);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

argList
    : expression COMMA argList                      {
                                                        struct tree_node *node = create_node(ast_tree_list, ARG_LIST, "argList", 2);
                                                        add_leaf(node, $1, 0);
                                                        add_leaf(node, $3, 1);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    | expression                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ARG_LIST_S, "argListS", 1);
                                                        add_leaf(node, $1, 0);
                                                        check_type(node);
                                                        $$ = node;
                                                        genCode($$);
                                                    }
    ;

constant
    : INTCONST                                      {$$ = $1; $$->type = INT_;}
    | FLOATCONST                                    {$$ = $1; $$->type = FLOAT_;}
    | BOOLEANCONST                                  {$$ = $1; $$->type = BOOL_;}
    | CHARCONST                                     {$$ = $1; $$->type = CHAR_;}
    | STRINGCONST                                   {$$ = $1; $$->type = STRING_;}
    ;

typeSpecifier
    : CHAR_TYPE                                     {$$ = $1; $$->type = CHAR_;}
    | INT_TYPE                                      {$$ = $1; $$->type = INT_;}
    | FLOAT_TYPE                                    {$$ = $1; $$->type = FLOAT_;}
    | BOOL_TYPE                                     {$$ = $1; $$->type = BOOL_;}
    | STRING_TYPE                                   {$$ = $1; $$->type = STRING_;}
    | VOID_TYPE                                     {$$ = $1; $$->type = VOID_;}
    ;

    /* lexerror
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
        ; */

%%

void yyerror(char const *msg) {
    ++errors;
    fprintf(stderr, "[ERR] (Line: %d, Column: %d) Found %s\n", line_num, previous_col, msg);
}
