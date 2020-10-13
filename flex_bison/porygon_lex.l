/* Definitions of a scanner for the Porygon Lang */

/* Options given by the manual https://westes.github.io/flex/manual */
/* "[...] specifies that we are being careful." */
/* %option warn nodefault */

/* "[...] asks flex to track line numbers. */
%option yylineno

/* "suppress the appearance of unneeded routines in the generated scanner." */
%option noinput nounput
%option never-interactive

/* Define output files. Headers and C files are create in src directory */
%option outfile="src/porygon_lex.c" header-file="include/porygon_lex.h"

DIGIT [0-9]
LETTER [a-zA-Z]

/* To ease the process of identifying comments, create start conditions*/
/* http://westes.github.io/flex/manual/Start-Conditions.html */

%x COMMENTLINE
%x COMMENTBLOCK

%{
#include "token_type.h"
#include "token.h"
#include "symbol_table.h"
#include "tree.h"
#include "parser.h"

/* Integers to indicate line number and column, both are defined in the scanner.h*/
extern int line_num;
extern int column_num;

/* Get symbol table */
extern struct st_entry *symbol_table;

/* Get List of Nodes */
extern struct node_list  *ast_tree_list;

/* Getting auxiliary functions. They are described at the end of the current file. */
static void update_pos(void);
static enum yytokentype valid_char_const(void);
static enum yytokentype valid_id(void);

%}

%%

        /* Geting comments, for that start conditions are used. Blocks can span
                            multiple lines. */
"/*"                        { update_pos(); BEGIN(COMMENTBLOCK); }
<COMMENTBLOCK>"*/"          { update_pos(); BEGIN(INITIAL); }
<COMMENTBLOCK>\n            { update_pos(); }
<COMMENTBLOCK>.             { update_pos(); }

        /* Comment line finishes when a break line is inserted. */
"//"                        { update_pos(); BEGIN(COMMENTLINE); }
<COMMENTLINE>\n             { update_pos(); BEGIN(INITIAL); }
<COMMENTLINE>.              { update_pos(); }


        /* Key words are defined. They come before IDs and constants */
"while"                     { update_pos(); return WHILE_KW; }
"for"                       { update_pos(); return FOR_KW; }
"in"                        { update_pos(); return IN_KW; }
"if"                        { update_pos(); return IF_KW; }
"else"                      { update_pos(); return ELSE_KW; }
"return"                    { update_pos(); return RETURN_KW; }
"read"                      { update_pos(); return READ_KW; }
"write"                     { update_pos(); return WRITE_KW; }

        /* Variable types */
"char"                      {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return CHAR_TYPE;
                            }

"string"                    {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return STRING_TYPE;
                            }

"int"                       {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return INT_TYPE;
                            }

"float"                     {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return FLOAT_TYPE;
                            }

"table"                     {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return TABLE_TYPE;
                            }

"bool"                      {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return BOOL_TYPE;
                            }

"void"                      {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return VOID_TYPE;
                            }

        /* Definition of some operators */
"+"                         { update_pos(); return ADD_OP; }
"-"                         { update_pos(); return SUB_OP; }
"*"                         { update_pos(); return MULT_OP; }
"/"                         { update_pos(); return DIV_OP; }
"%"                         { update_pos(); return REM_OP; }

"!"                         { update_pos(); return NOT_OP; }

"<"                         { update_pos(); return LESSTHAN_OP; }
"<="                        { update_pos(); return LESSEQUAL_OP; }
">"                         { update_pos(); return GREATERTHAN_OP; }
">="                        { update_pos(); return GREATEREQUAl_OP; }
"!="                        { update_pos(); return NOTEQUAL_OP; }
"=="                        { update_pos(); return COMPARISON_OP; }

"||"                        { update_pos(); return OR_OP; }
"&&"                        { update_pos(); return AND_OP; }

        /* Some symbols to help syntax */
"{"                         { update_pos(); return LBRACE; }
"}"                         { update_pos(); return RBRACE; }
"["                         { update_pos(); return LBRACKET; }
"]"                         { update_pos(); return RBRACKET; }
"("                         { update_pos(); return LPARENTHESES; }
")"                         { update_pos(); return RPARENTHESES; }
":"                         { update_pos(); return COLON; }
";"                         { update_pos(); return SEMICOLON; }
"|"                         { update_pos(); return PIPE; }

"="                         { update_pos(); return DEF_EQ; }
","                         { update_pos(); return COMMA; }


        /* Boolean Constants */
"true"                      {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return BOOLEANCONST;
                            }
"false"                     {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return BOOLEANCONST;
                             }

        /* Numbers Constants */
[\+\-]?{DIGIT}+             {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return INTCONST;
                             }
[\+\-]?{DIGIT}+"."{DIGIT}*  {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return FLOATCONST;
                            }

        /* Char or string constants */
        /* Reference: https://stackoverflow.com/questions/2039795/regular-expression-for-a-string-literal-in-flex-lex */
'(\\.|[^\\'])+'             {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return valid_char_const();
                             }
\"(\\.|[^\\"])*\"           {
                                update_pos();
                                yylval.tree_node = create_node(ast_tree_list, yytext, 0);
                                return STRINGCONST;
                            }


        /* Matching Identifiers */
({LETTER}|"_")({LETTER}|{DIGIT}|"_")* { update_pos(); return valid_id(); }


        /* Break line, tabs and whitespace are ignored, including
           \f and \r for feed and carriege return and \v for vertical */
[ \n\t\f\v\r]               { update_pos(); }

.                           { update_pos(); return ERR_UNKNOWN_TOKEN; }

%%

/*  */
int yywrap(void) {
	return 1;
}


/* Verifies if the constant char, e.g. 'j', has only one char */
static enum yytokentype valid_char_const(void) {
    if (yyleng <= 3) {
        yylval.tree_node = create_node(ast_tree_list, yytext, 0);
        return CHARCONST;
        } else {
        return ERR_INVALID_CHARCONST;
    }
}

/* Verifies if the identifier is not bigger than 32 chars */
static enum yytokentype valid_id(void) {
    if (yyleng <= 32) {
        add_entry(yytext, IDENTIFIER, line_num, column_num - yyleng);
        yylval.tree_node = create_node(ast_tree_list, yytext, 0);
        return IDENTIFIER;
    } else {
        return ERR_INVALID_ID;
    }
}



/* Updates line and columns that are being read */
static void update_pos(void) {
    for (int nletter = 0; nletter < yyleng; ++nletter) {
        if (yytext[nletter] == '\n') {
            column_num = 1;
            line_num++;
        } else {
            column_num++;
        }
    }
}
