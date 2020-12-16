/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_INCLUDE_PARSER_H_INCLUDED
# define YY_YY_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTCONST = 259,
    FLOATCONST = 260,
    BOOLEANCONST = 261,
    CHARCONST = 262,
    STRINGCONST = 263,
    WHILE_KW = 264,
    FOR_KW = 265,
    IN_KW = 266,
    IF_KW = 267,
    ELSE_KW = 268,
    RETURN_KW = 269,
    READ_KW = 270,
    WRITE_KW = 271,
    CHAR_TYPE = 272,
    INT_TYPE = 273,
    FLOAT_TYPE = 274,
    STRING_TYPE = 275,
    TABLE_TYPE = 276,
    BOOL_TYPE = 277,
    VOID_TYPE = 278,
    ADD_OP = 279,
    SUB_OP = 280,
    MULT_OP = 281,
    DIV_OP = 282,
    REM_OP = 283,
    NOT_OP = 284,
    LESSTHAN_OP = 285,
    LESSEQUAL_OP = 286,
    GREATERTHAN_OP = 287,
    GREATEREQUAl_OP = 288,
    NOTEQUAL_OP = 289,
    COMPARISON_OP = 290,
    OR_OP = 291,
    AND_OP = 292,
    LBRACE = 293,
    RBRACE = 294,
    LBRACKET = 295,
    RBRACKET = 296,
    LPARENTHESES = 297,
    RPARENTHESES = 298,
    COLON = 299,
    SEMICOLON = 300,
    DEF_EQ = 301,
    COMMA = 302,
    PIPE = 303,
    ERR_INVALID_ID = 304,
    ERR_INVALID_CHARCONST = 305,
    ERR_UNKNOWN_TOKEN = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 47 "flex_bison/porygon_syntax.y"

    int integer_val;
    float float_val;
    const char *string_val;

    struct tree_node *tree_node;

#line 117 "include/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);
/* "%code provides" blocks.  */
#line 124 "flex_bison/porygon_syntax.y"

    void yyerror(char const *msg);

#line 134 "include/parser.h"

#endif /* !YY_YY_INCLUDE_PARSER_H_INCLUDED  */
