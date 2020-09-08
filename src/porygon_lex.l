/* Definitions of a scanner for the Porygon Lang */

/* Options given by the manual https://westes.github.io/flex/manual */
/* "[...] specifies that we are being careful." */
/* %option warn nodefault */

/* "[...] asks flex to track line numbers. */
%option yylineno

/* "suppress the appearance of unneeded routines in the generated scanner." */
%option nounput

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

/* Integers to indicate line number and column*/
extern int line_num;
extern int column_num;

%}

%%

        /* Geting comments, for that start conditions are used. Blocks can span
                            multiple lines. */
"/*"                        { BEGIN(COMMENTBLOCK); }
<COMMENTBLOCK>"*/"          { BEGIN(INITIAL); }
<COMMENTBLOCK>\n            { ; }
<COMMENTBLOCK>.             { ; }

        /* Comment line finishes when a break line is inserted. */
"//"                        { BEGIN(COMMENTLINE); }
<COMMENTLINE>\n             { BEGIN(INITIAL); }
<COMMENTLINE>.              { ; }


        /* Key words are defined. They come before IDs and constants */
"while"                     { return WHILE_KW; }
"for"                       { return FOR_KW; }
"in"                        { return IN_KW; }
"if"                        { return IF_KW; }
"else"                      { return ELSE_KW; }
"return"                    { return RETURN_KW; }
"read"                      { return READ_KW; }
"write"                     { return WRITE_KW; }

        /* Variable types */
"char"                      { return CHAR_TYPE; }
"string"                    { return STRING_TYPE; }
"int"                       { return INT_TYPE; }
"float"                     { return FLOAT_TYPE; }
"table"                     { return TABLE_TYPE; }
"bool"                      { return BOOL_TYPE; }
"void"                      { return VOID_TYPE; }

        /* Definition of some operators */
"+"                         { return ADD_OP; }
"-"                         { return SUB_OP; }
"*"                         { return MULT_OP; }
"/"                         { return DIV_OP; }
"%"                         { return REM_OP; }

"!"                         { return NOT_OP; }

"<"                         { return LESSTHAN_OP; }
"<="                        { return LESSEQUAL_OP; }
">"                         { return GREATERTHAN_OP; }
">="                        { return GREATEREQUAl_OP; }
"!="                        { return NOTEQUAL_OP; }
"=="                        { return COMPARISON_OP; }

"||"                        { return OR_OP; }
"&&"                        { return AND_OP; }

        /* Some symbols to help syntax */
"{"                         { return LBRACE; }
"}"                         { return RBRACE; }
"["                         { return LBRACKET; }
"]"                         { return RBRACKET; }
"("                         { return LPARENTHESES; }
")"                         { return RPARENTHESES; }
":"                         { return COLON; }
";"                         { return SEMICOLON; }

"="                         { return DEF_EQ; }
","                         { return COMMA; }


        /* Boolean Constants */
"true"                      { return TRUECONST; }
"false"                     { return FALSECONST; }

        /* Numbers Constants */
[\+\-]?{DIGIT}+             { return INTCONST; }
[\+\-]?{DIGIT}+"."{DIGIT}*  { return FLOATCONST; }

        /* Char or string constants */

        /* Matching Identifiers */
({LETTER}|"_")({LETTER}|{DIGIT}|"_")* {return IDENTIFIER; }


        /* Break line, tabs and whitespace are ignored */
[ \n\t]                     { ; }

.                           { return ERR_UNKNOWN_TOKEN; }

%%

/*  */
int yywrap(void) {
	return 1;
}
