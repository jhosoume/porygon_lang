/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 10 "flex_bison/porygon_syntax.y"

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

#line 105 "src/parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

#include "parser.h"

/* Second part of user prologue.  */
#line 128 "flex_bison/porygon_syntax.y"

int yylex(void);

#line 143 "src/parser.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6370

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  541

#define YYUNDEFTOK  2
#define YYMAXUTOK   306


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   136,   136,   140,   141,   151,   152,   153,   157,   158,
     165,   166,   173,   174,   185,   196,   207,   211,   222,   232,
     233,   244,   245,   255,   256,   266,   277,   289,   290,   300,
     308,   312,   317,   321,   322,   332,   333,   334,   335,   336,
     337,   343,   349,   353,   360,   372,   383,   393,   403,   409,
     417,   422,   431,   432,   442,   443,   453,   454,   464,   465,
     472,   482,   483,   490,   497,   504,   514,   515,   522,   532,
     533,   540,   547,   557,   558,   567,   568,   569,   570,   571,
     575,   579,   586,   594,   606,   616,   617,   625,   632,   636,
     637,   638,   639,   640,   644,   645,   646,   647,   648,   649
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTCONST", "FLOATCONST",
  "BOOLEANCONST", "CHARCONST", "STRINGCONST", "\"while\"", "\"for\"",
  "\"in\"", "\"if\"", "\"else\"", "\"return\"", "\"read\"", "\"write\"",
  "\"char\"", "\"int\"", "\"float\"", "\"string\"", "\"table\"",
  "\"bool\"", "\"void\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"", "\"%\"",
  "\"!\"", "\"<\"", "\"<=\"", "\">\"", "\">=\"", "\"!=\"", "\"==\"",
  "\"||\"", "\"&&\"", "\"{\"", "\"}\"", "\"[\"", "\"]\"", "\"(\"", "\")\"",
  "\":\"", "\";\"", "\"=\"", "\",\"", "\"|\"", "ERR_INVALID_ID",
  "ERR_INVALID_CHARCONST", "ERR_UNKNOWN_TOKEN", "$accept", "program",
  "declarationList", "declaration", "varDeclaration",
  "varSimpleDeclaration", "arrayDeclaration", "arrayDefinition",
  "tableDeclaration", "tableDefinition", "constList", "stringList",
  "columnContent", "functDeclaration", "parameterList",
  "parameterDeclaration", "compoundStmt", "statementList", "statement",
  "iterationStmt", "forDec", "conditionalStmt", "ifStmt", "elseStmt",
  "returnStmt", "expression", "logicalOrExp", "logicalAndExp",
  "equalityExp", "relationExp", "sumExp", "multExp", "unaryExp",
  "baseValue", "mutable", "functCall", "args", "argList", "constant",
  "typeSpecifier", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF (-284)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-100)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     377,   646,     2,    16,    34,    67,   657,   190,   205,    35,
     891,   945,    27,     8,    91,   118,   978,   223,   231,  -284,
    1192,  1310,   123,    81,   147,   344,   201,  4526,  4504,  4542,
    4558,  4574,  4590,  4606,   123,   138,    28,   155,    43,  1304,
    1961,  4622,  4638,  4654,  4670,  4686,  4702,   773,   226,   236,
     250,   274,   202,   303,   154,   111,  4718,   319,    66,  4251,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   232,   298,   359,   132,    20,   353,    42,
     249,   389,   358,   135,   269,   428,   430,  4734,   165,   212,
      58,  1598,  2555,  2102,  2225,  2539,  2780,  4750,  4766,  4782,
    4798,  4814,   387,   773,   289,   376,   421,  1457,   353,   780,
     433,  4830,   154,   181,  4846,   113,   338,   409,   476,  3414,
     450,   453,   458,    54,   481,   513,  1524,   534,   512,   753,
     809,  1085,   555,   544,   569,   590,  1578,   451,   253,   504,
     580,   454,   138,   657,   138,   584,   659,    23,  1417,  1604,
    1749,   632,  1805,  1869,  1915,   206,  4862,   198,   781,   373,
     628,   629,   675,   640,   664,   687,  2077,   643,   459,   694,
     690,   632,   691,   708,   715,   719,   738,  4878,   464,   781,
    2209,   791,   919,  2391,  2900,   497,   632,   565,  3273,  5433,
    1138,  5447,  5461,  5475,  5489,  5503,   165,   138,   -34,   573,
    2392,  3046,  5517,  5531,  5545,  5559,  5573,   341,   410,   414,
     415,   423,  4915,  1634,  4936,  4957,  4978,  4999,  5020,   208,
     138,    46,   192,   431,  2838,  1931,  5041,  5062,  5083,  3188,
    5104,  5125,  2696,   853,  2983,  3140,  3298,  3349,  3750,   598,
     138,   -25,    61,   411,  1870,   229,  3774,  3798,  3822,  2288,
    3846,  3870,   165,  5413,  5587,  1470,    87,  4274,   766,   108,
     768,   796,   797,   798,   799,   138,   800,   801,   803,  3531,
    3232,  2130,  5830,  5848,  5866,  5884,  5902,   631,   138,    69,
     -16,   233,  6305,  3121,  5920,  5938,  5956,  2456,  5974,  5992,
     503,   505,   510,   545,   548,   553,   781,  3571,   154,   111,
    5601,   806,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   154,   111,  4894,  5146,  5167,   811,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   154,   111,  2251,  3894,  3918,   813,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   598,   598,   598,    32,   154,   154,   123,   154,   111,
     815,  3611,  3651,   154,   111,  5811,  6010,  6028,   817,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   578,  1219,  3691,   273,   818,  5615,   583,
    6277,  6291,  5755,  5769,  5783,  5797,  5629,  5643,  5657,  5671,
    5685,   302,   819,   154,  5188,   297,   546,  2853,  6262,  2947,
    3369,  3430,  5392,  5209,  5230,  5251,  5272,  5293,   325,   361,
     820,   154,  3942,   195,   502,  2432,  2714,   340,  1112,  1235,
    1259,  3966,  3990,  4014,  4038,  4062,    64,   437,   442,   145,
     587,   822,   823,  3731,   589,   825,   154,  6046,    97,   473,
    6317,  6329,  3160,  6222,  6236,  6250,  6064,  6082,  6100,  6118,
    6136,   203,  1551,  4297,   154,  5699,  4182,   154,  5314,   600,
    2412,   154,  4086,   641,  5713,   154,  4320,   154,   826,   154,
     827,  4343,   154,  6154,   660,   665,   670,  5335,   154,   688,
    4110,   154,   693,   711,   749,   763,  6172,   154,  4366,   198,
    4205,   198,   764,  2507,   198,   792,  5727,   198,  4389,   198,
     828,   198,  4412,   198,   793,   755,   831,  5356,   198,   835,
    4134,   198,   841,   860,   861,   862,  6190,   198,  4435,  4228,
     863,  2577,   864,  5741,  4458,   851,  4481,   865,  5377,  4158,
    6208
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,  -284,  -284,   842,     7,  -284,  -284,  -284,  -284,  -284,
    -143,  -284,  -284,  -284,  -284,   807,  -100,  -263,  -127,  -284,
    -284,  -284,  -284,  -284,  -284,  3006,  2845,  2734,  2439,  2328,
    2002,  1674,   678,  1010,   -22,  1342,  -283,   794,   346,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,   127,    13,    14,    48,    15,    50,
      73,   105,   159,    16,    79,    80,   107,   128,   129,   130,
     161,   131,   132,   152,   133,    84,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,    85,    86,   231,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   150,   -54,   302,    17,   -94,   362,    12,   136,   -54,
      18,   340,    44,    59,    17,   168,   387,    12,   -52,   -95,
     -54,   370,   -52,   -99,   258,   -54,   259,   260,   261,   262,
     263,   264,   402,   249,   385,    19,   185,   -96,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,   166,   420,    -8,    22,    27,    81,   255,    29,    30,
      31,    32,    33,   -30,    60,   265,   254,   -30,   -55,   302,
     -98,   180,    21,    -9,   182,   -55,   441,    62,    63,   -56,
     -56,   445,   320,    34,   257,   108,   188,   -52,   -56,   109,
     -52,   249,    62,    63,   -57,   -57,    35,   -54,   341,   -50,
     340,   257,   252,   -57,   -54,   369,   257,   -53,   -54,   -52,
     -52,   -53,   232,    81,   233,   234,   235,   236,   237,   238,
      59,    47,    59,    60,    27,   266,    28,    29,    30,    31,
      32,    33,   -52,   -55,   370,   287,   -10,    23,   -55,   189,
     239,   190,   191,   192,   193,   194,   195,   162,   358,   252,
     359,   -80,    34,   240,   -86,   212,   -53,   213,   214,   215,
     216,   217,   218,   -12,    24,    35,   189,   196,   253,   191,
     192,   193,   194,   195,   254,    59,   111,   -15,   -15,   112,
     197,    60,   232,   219,   233,   234,   235,   236,   237,   238,
     -53,   -54,    61,   -97,   196,    49,   220,   318,    59,   270,
     -54,   271,   272,   273,   274,   275,   276,   197,   -99,   212,
     239,   316,   214,   215,   216,   217,   218,   338,    59,     2,
       3,     4,     5,   240,     7,    77,    25,   277,   -54,   321,
     254,   -55,   341,   -54,    26,   150,   -54,   219,   -55,   369,
     278,    53,   -55,    59,   -53,    78,    51,   257,   -55,    61,
     220,   -14,   -14,   348,   349,   367,    59,   -55,   150,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   371,   372,   -56,
     -56,   -11,   -61,   102,   -56,   257,   -61,   249,    75,   103,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   -27,   249,   156,   -13,   -27,   157,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   -88,   249,   463,    76,   113,   464,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   -21,   -55,   321,    44,   -21,   249,   -55,   -19,
     257,   -55,   249,   466,    82,   -19,   467,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   320,    87,   257,   348,   349,   -53,   104,    46,   -53,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     1,   -20,
      46,   206,   -89,   -63,    51,   -20,    52,   -63,   -89,   -14,
     -14,   106,   110,    74,     2,     3,     4,     5,     6,     7,
       8,   251,   470,   -17,   -17,   471,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,   117,
     169,   170,   119,   118,   255,    29,    30,    31,    32,    33,
     120,   121,   -16,   122,   206,   123,   124,   125,     2,     3,
       4,     5,     6,     7,     8,   342,   343,   -56,   -56,   116,
      34,   -90,    46,   140,   -56,   -91,   -92,   -90,   -56,   251,
     126,   -91,   -92,    35,   -93,   322,   323,   -56,   -56,    46,
     -93,   114,   -56,   -85,    46,   -56,   -29,   287,   474,   287,
     -29,   475,   287,   476,   141,   287,   477,   287,   206,   287,
     206,   287,   142,   268,   -28,   143,   287,   -22,   -28,   287,
     144,   -22,   178,   289,   295,   287,   296,   371,   372,   -57,
     -57,   -23,   -23,   119,   -57,   255,    29,    30,    31,    32,
      33,   120,   121,   146,   122,   295,   123,   124,   125,     2,
       3,     4,     5,     6,     7,     8,   342,   343,   -57,   -57,
     187,    34,   206,   206,   296,   -57,   -89,   -87,   -90,   -57,
     -89,   149,   -90,   -91,    35,   147,   -49,   -91,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   206,   -49,   151,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   148,
     322,   323,   -57,   -57,   -49,   251,   206,   -57,   -92,   153,
     -57,   -93,   -92,   155,   -49,   -93,   -19,   -49,   206,   232,
     -19,   336,   234,   235,   236,   237,   238,   303,   304,   -56,
     -56,   206,   -24,   -24,   154,    46,   -56,   303,   304,   -57,
     -57,   -20,   158,   289,   206,   -20,   -57,   239,   478,   -51,
     481,   479,   270,   482,   365,   272,   273,   274,   275,   276,
     240,   487,   383,    46,   488,   251,    -7,    -7,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     277,   251,   164,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     269,   171,   172,   278,     2,     3,     4,     5,   173,     7,
       8,   251,   490,   174,   177,   491,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
      42,   496,   181,    46,   497,   251,   498,   175,    46,   499,
     251,   500,    56,   203,   501,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   503,
     176,    46,   504,   247,   506,   -18,   179,   507,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    99,   100,
     101,   -45,   508,   297,   -33,   509,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   183,   -33,   203,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   207,   208,   209,
     210,   211,   -33,   184,    42,   290,   291,   292,   293,   294,
     510,   247,   -33,   511,   186,   -33,   528,     2,     3,     4,
       5,    42,     7,    77,   512,   517,    42,   513,   518,   -76,
     -37,   -89,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     203,   -37,   203,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   520,   526,   285,   521,   527,   -37,   -90,
     -91,   -92,   -93,   -79,   -78,   289,   -77,   289,   -37,   388,
     289,   -37,    20,   289,   404,   289,   422,   289,   442,   289,
     447,   465,   468,   472,   289,   480,   -75,   289,   483,   -81,
     -84,   -82,   529,   289,   300,   203,   531,   -80,   -80,   -80,
     -80,   -80,   533,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,    -2,     1,   334,   -83,   335,   -80,   317,   203,   -80,
     -80,   534,   535,   536,   538,   539,   540,   139,     2,     3,
       4,     5,     6,     7,     8,     0,   137,   337,   203,     0,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     203,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   203,     0,    -3,    -3,    42,   -47,     0,
       0,     0,     0,     0,     0,   366,   203,     0,   -47,     0,
       0,   -47,    -3,    -3,    -3,    -3,    -3,    -3,    -3,     0,
       0,     0,     0,     0,     0,    42,     0,   247,    -6,    -6,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   398,
     399,   400,     0,   247,     0,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,     0,     0,     0,     0,     0,     0,   415,   416,
     417,     0,     0,   247,     0,     0,     0,     0,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   433,   434,
     435,   247,    43,     0,     0,    42,     0,   247,     0,     0,
      42,     0,   247,     0,    43,   204,     0,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   458,   459,   460,
     285,     0,     0,    42,     0,   248,     0,     0,     0,     0,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,     0,     0,     0,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   204,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,     0,   -38,     0,    43,     0,     0,     0,
       0,     0,     0,   248,   -38,     0,     0,   -38,     0,     0,
       0,     0,     0,    43,     0,     0,   348,   349,    43,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,   204,     0,   204,   -65,     0,   165,     0,   -65,
       0,     0,   -80,   -80,   -80,   -80,   -80,   286,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   285,   298,   285,
     299,   -80,   285,     0,   -80,   285,     0,   285,     0,   285,
       0,   285,    -4,    -4,     0,     0,   285,     0,     0,   285,
       0,     0,     0,     0,     0,   285,   204,   204,     0,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,     0,     0,     0,     0,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     204,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,     0,   -31,   248,
     204,     0,     0,     0,     0,     0,     0,     0,   -31,   348,
     349,   -31,   204,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,   204,     0,     0,   -62,    43,
       0,     0,   -62,   348,   349,     0,     0,   286,   204,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,     0,   -64,     0,     0,     0,   -64,    43,     0,   248,
      -5,    -5,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,     0,   248,     0,    -5,    -5,    -5,
      -5,    -5,    -5,    -5,    64,    65,    66,    67,   -58,   -58,
     -58,   -58,     0,     0,     0,   248,     0,     0,     0,   -58,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,    45,     0,     0,    43,     0,   248,
       0,     0,    43,     0,   248,     0,    45,   205,     0,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,     0,     0,    43,     0,   250,     0,     0,
       0,     0,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,     0,     0,     0,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     205,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,     0,   -35,     0,    45,     0,
       0,     0,     0,     0,     0,   250,   -35,   -26,   -26,   -35,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
      45,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,     0,     0,   205,     0,   205,     0,     0,   267,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   288,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   286,
     356,   286,    55,     0,   286,   -80,   -80,   286,     0,   286,
       0,   286,     0,   286,   -31,   -31,     0,     0,   286,     0,
       0,   286,     0,     0,     0,     0,     0,   286,   205,   205,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   205,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,   -25,   -25,
     -32,   250,   205,     0,     0,     0,     0,     0,     0,     0,
     -32,     0,     0,   -32,   205,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,     0,     0,   -32,   -32,     0,   205,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,   288,
     205,   -32,   -32,   -32,   -32,   -32,   -32,   -32,    64,    65,
      66,    67,   -60,   -60,   -60,   -60,     0,     0,     0,    45,
       0,   250,     0,   -60,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,     0,   250,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,   314,   -80,   315,   250,   -80,     0,
     -80,     0,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,    41,     0,     0,    45,
       0,   250,     0,     0,    45,     0,   250,     0,     0,   202,
       0,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,     0,     0,    45,     0,   246,
       0,     0,     0,     0,    41,    41,    41,    41,    41,    41,
      41,    41,    97,    98,     0,     0,     0,     0,     0,     0,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   202,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,     0,
      41,     0,     0,     0,     0,     0,     0,   246,   -34,     0,
       0,   -34,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,    41,     0,     0,     0,   -46,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   202,   -46,   202,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,
       0,   284,     0,     0,   -46,     0,     0,     0,     0,     0,
       0,   288,     0,   288,   -46,     0,   288,   -46,     0,   288,
       0,   288,     0,   288,     0,   288,     0,     0,     0,     0,
     288,     0,     0,   288,     0,     0,     0,     0,     0,   288,
     -39,   202,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   202,     0,     0,     0,   -39,     0,
     344,   345,   346,   347,   -58,   -58,   -58,   -58,   -39,     0,
       0,   -39,     0,   -58,   202,     0,   -36,   -58,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   202,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   202,
       0,     0,     0,    41,   -36,     0,     0,     0,     0,     0,
       0,     0,   202,     0,   -36,   328,   329,   -36,     0,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,    41,   -61,   246,     0,   -61,   202,   202,   202,   202,
     202,   202,   202,   396,   397,    68,    69,     0,     0,   246,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,   413,   414,     0,     0,   -61,     0,     0,   246,
       0,     0,     0,     0,   246,   246,   246,   246,   246,   246,
     246,   246,   431,   432,    40,     0,     0,   246,     0,     0,
       0,    41,     0,   246,     0,     0,    41,   201,   246,     0,
       0,     0,     0,   284,   284,   284,   284,   284,   284,   284,
     284,   456,   457,     0,     0,     0,   284,   245,     0,    41,
       0,     0,    40,    40,    40,    40,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     201,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,     0,     0,     0,     0,   -48,     0,    40,     0,
       0,     0,     0,     0,     0,   245,   -48,     0,     0,   -48,
       0,     0,     0,     0,     0,    40,    68,    69,     0,     0,
      40,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,     0,     0,     0,   201,     0,   201,   -63,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   283,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
     363,   -80,   364,   284,     0,   284,   -80,     0,   284,     0,
       0,   284,     0,   284,     0,   284,     0,   284,     0,     0,
       0,     0,   284,     0,     0,   284,     0,     0,     0,   201,
       0,   284,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   201,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,     0,   -43,     0,
       0,     0,   201,     0,     0,     0,     0,     0,   -43,    68,
      69,   -43,     0,     0,   201,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,   201,     0,     0,
     -65,    40,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     201,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,   421,     0,   335,   -80,     0,     0,     0,   -80,    40,
       0,   245,     0,     0,   201,   201,   201,   392,   393,   394,
     395,     0,   -79,   -79,   -79,   -79,   -79,   245,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   409,   410,   411,   412,
       0,   -79,     0,     0,   353,   -79,     0,   245,     0,     0,
       0,     0,   245,   245,   245,   245,   427,   428,   429,   430,
      39,     0,     0,     0,     0,   245,     0,     0,     0,    40,
       0,   245,     0,   200,    40,     0,   245,     0,     0,     0,
       0,   283,   283,   283,   283,   452,   453,   454,   455,     0,
       0,     0,     0,   244,   283,     0,     0,    40,    39,    39,
      91,    92,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   200,     0,     0,     0,
     -40,     0,   305,   306,   307,   308,   -58,   -58,   -58,   -58,
     -40,     0,     0,   -40,    39,   -58,   -81,   -81,   -81,   -81,
     -81,   244,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,    39,     0,     0,     0,   -81,    39,     0,   -81,   -81,
       0,    38,   344,   345,   346,   347,   -60,   -60,   -60,   -60,
     200,     0,   200,     0,   199,   -60,     0,     0,     0,   -60,
     -79,   -79,   -79,   -79,   -79,   282,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   243,     0,     0,   -79,     0,    38,
      90,   283,   382,   283,     0,     0,   283,     0,     0,   283,
       0,   283,     0,   283,     0,   283,     0,     0,     0,     0,
     283,     0,     0,   283,     0,   200,     0,   199,     0,   283,
       0,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,    38,     0,     0,   200,     0,
     -82,     0,   243,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,    38,    68,    69,     0,     0,    38,   200,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,
     200,   199,     0,   199,   -62,    64,    65,    66,    67,   -59,
     -59,   -59,   -59,   200,     0,     0,   281,    39,     0,     0,
     -59,   -83,   -83,   -83,   -83,   -83,   200,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,
     -83,     0,     0,   -83,   -83,    39,     0,   244,     0,     0,
     200,   390,   391,     0,     0,     0,   199,     0,     0,     0,
       0,     0,     0,   244,     0,     0,     0,     0,     0,     0,
     407,   408,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,   244,     0,     0,     0,     0,   244,   244,
     425,   426,     0,     0,     0,     0,     0,     0,     0,   199,
       0,   244,     0,     0,     0,    39,     0,   244,     0,     0,
      39,   199,   244,     0,     0,     0,     0,   282,   282,   450,
     451,     0,     0,     0,   199,     0,     0,     0,    38,     0,
     282,     0,     0,    39,     0,     0,     0,   199,     0,     0,
     -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,    38,     0,   243,   -76,
       0,   389,     0,   -76,   344,   345,   346,   347,   -59,   -59,
     -59,   -59,     0,     0,   243,     0,    37,   -59,     0,     0,
     406,   -59,     0,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,   243,     0,     0,     0,     0,   243,
     424,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,     0,   243,     0,    89,     0,    38,     0,   243,     0,
       0,    38,     0,   243,    68,    69,     0,     0,   281,   449,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,   281,   198,     0,    38,   -64,     0,   282,     0,   282,
       0,     0,   282,     0,     0,   282,     0,   282,     0,   282,
      37,   282,     0,     0,     0,     0,   282,   242,     0,   282,
       0,     0,     0,     0,     0,   282,     0,    37,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    36,   324,   325,
     326,   327,   -58,   -58,   -58,   -58,   198,     0,   198,   -58,
      58,     0,   -58,   324,   325,   326,   327,   -60,   -60,   -60,
     -60,   280,     0,     0,   -60,     0,     0,   -60,     0,     0,
     241,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,   -41,
       0,   198,     0,   115,     0,     0,     0,     0,   281,   -41,
     281,     0,   -41,   281,     0,     0,   281,     0,   281,     0,
     281,   256,   281,     0,   198,     0,     0,   281,   241,     0,
     281,     0,     0,     0,     0,     0,   281,     0,   256,     0,
       0,   328,   329,   256,   198,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,   354,    58,   -63,    58,
       0,   -63,     0,     0,     0,     0,     0,     0,     0,   198,
       0,     0,   279,    37,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   198,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,     0,     0,     0,   -89,     0,     0,     0,
     -89,    37,     0,   242,     0,     0,     0,     0,     0,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,   242,
       0,     0,     0,     0,   405,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    58,     0,     0,     0,   242,
     309,   310,     0,     0,   423,     0,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,    58,     0,   242,     0,   -61,
       0,    37,     0,   242,     0,     0,    37,     0,   242,     0,
       0,     0,     0,   448,     0,     0,     0,     0,     0,     0,
      58,     0,   134,     0,   256,     0,   280,     0,   138,    37,
       0,     0,     0,    58,     0,     0,     0,     0,     0,   145,
       0,     0,     0,     0,   134,     0,     0,     0,     0,     0,
       0,     0,   256,     0,   241,   377,   378,     0,   160,     0,
     163,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
     241,     0,   -61,   167,   -90,   -90,   -90,   -90,   -90,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   418,     0,
     241,     0,     0,   -90,   377,   378,     0,   -90,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   436,     0,
       0,   -63,   439,   301,   241,     0,     0,   256,     0,   241,
       0,     0,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   319,   461,     0,   -79,
     256,     0,   -79,   280,   333,   280,     0,     0,   280,     0,
       0,   280,     0,   280,     0,   280,   339,   280,     0,     0,
       0,     0,   280,     0,     0,   280,   -76,   -76,   -76,   -76,
     -76,   280,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   360,     0,   -76,   -44,   134,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   368,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,   -44,   134,   386,     0,     0,     0,     0,     0,
       0,     0,   -44,     0,     0,   -44,     0,     0,     0,     0,
     401,     0,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,     0,
     419,   -91,     0,     0,   279,   -91,   279,     0,     0,   279,
       0,     0,   279,     0,   279,     0,   279,     0,   279,     0,
       0,   437,   438,   279,   440,     0,   279,     0,   134,   444,
       0,     0,   279,   -92,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
       0,   134,   -92,   328,   329,     0,   -92,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   469,
     -65,     0,     0,   -65,     0,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   473,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -76,   -76,
     -76,   -76,   -76,   -42,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   484,   -42,   328,   329,   -42,     0,     0,   -76,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
     485,   -62,     0,   486,   -62,     0,     0,   489,     0,     0,
       0,   492,     0,   493,     0,   494,     0,     0,   495,     0,
       0,     0,     0,     0,   502,     0,     0,   505,     0,     0,
       0,     0,     0,   514,     0,   515,     0,   516,     0,     0,
     519,     0,     0,   522,     0,   523,     0,   524,     0,   525,
       0,     0,     0,     0,   530,     0,     0,   532,     0,     0,
       0,     0,   119,   537,   255,    29,    30,    31,    32,    33,
     120,   121,     0,   122,     0,   123,   124,   125,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,   119,    35,   255,    29,    30,    31,    32,    33,
     120,   121,     0,   122,     0,   123,   124,   125,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     384,     0,   -31,    35,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -31,     0,   119,   -31,   255,    29,    30,    31,    32,    33,
     120,   121,     0,   122,     0,   123,   124,   125,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,     0,   119,    35,   255,    29,    30,    31,    32,    33,
     120,   121,     0,   122,     0,   123,   124,   125,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     462,     0,   -32,    35,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,
     -32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,     0,     0,   -32,   -93,   -93,   -93,   -93,   -93,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,
       0,     0,     0,   -93,     0,     0,     0,   -93,   -66,   -66,
     350,   351,   352,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,   -66,     0,     0,
       0,   -66,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
       0,   -69,     0,     0,     0,   -69,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,   -73,     0,     0,     0,   -73,
     -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,   -78,
       0,     0,     0,   -78,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,   -77,     0,     0,     0,   -77,   -74,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,   -74,     0,     0,
       0,   -74,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
       0,   -79,     0,     0,     0,   -79,   -75,   -75,   -75,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,   -75,     0,     0,     0,   -75,
     -67,   -67,   350,   351,   352,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,   -67,
       0,     0,     0,   -67,   -68,   -68,   350,   351,   352,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,     0,   -68,     0,     0,     0,   -68,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,   -70,     0,     0,
       0,   -70,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,   -71,   -72,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,   -72,     0,     0,     0,   -72,
     -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,   -84,
       0,     0,     0,   -84,   -81,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,   -81,     0,     0,     0,   -81,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,     0,   -82,     0,     0,
       0,   -82,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,   -83,     0,     0,     0,   -83,   -81,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,   -81,     0,     0,   -81,     0,   -81,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,   -82,     0,     0,   -82,
       0,   -82,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,   -83,
       0,     0,   -83,     0,   -83,   -79,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,     0,   -79,     0,     0,    88,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,   -79,
     357,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
     -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,   -81,     0,     0,     0,     0,   -81,
     -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,   -82,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,   -82,     0,     0,     0,     0,   -82,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,     0,   -83,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,   -83,     0,     0,     0,     0,   -83,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,    54,     0,    55,     0,     0,   -80,
     -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -76,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -89,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,   -91,   -91,
     -91,   -91,   -91,   -90,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,     0,   -92,   -92,   -92,   -92,   -92,   -91,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
     -93,   -93,   -93,   -93,   -93,   -92,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,     0,     0,   -66,   -66,    70,    71,
      72,   -93,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -66,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -69,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -79,   -79,   -79,   -79,   -79,   -73,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -79,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -78,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -77,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -74,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,   -67,   -67,    70,    71,    72,   -75,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
     -68,   -68,    70,    71,    72,   -67,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -68,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -70,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -71,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,   -81,   -81,   -81,   -81,   -81,   -72,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -81,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -84,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -82,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -83,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,   403,   -80,   315,     0,   -80,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,   -76,     0,     0,   -76,
     -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,   -89,     0,     0,
     -89,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,     0,   -90,     0,
       0,   -90,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,   -91,
       0,     0,   -91,   -92,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
     -92,     0,     0,   -92,   -93,   -93,   -93,   -93,   -93,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,
       0,   -93,     0,     0,   -93,   -66,   -66,   330,   331,   332,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,   -66,     0,     0,   -66,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,   -69,     0,     0,   -69,   -73,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,   -73,     0,     0,   -73,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,   -78,     0,     0,   -78,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,   -77,     0,     0,   -77,
     -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,   -74,     0,     0,
     -74,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,   -79,     0,
       0,   -79,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,   -75,
       0,     0,   -75,   -67,   -67,   330,   331,   332,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
     -67,     0,     0,   -67,   -68,   -68,   330,   331,   332,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,   -68,     0,     0,   -68,   -70,   -70,   -70,   -70,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,   -70,     0,     0,   -70,   -71,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,   -71,     0,     0,   -71,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,   -72,     0,     0,   -72,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,   -84,     0,     0,   -84,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,   -81,     0,     0,   -81,
     -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,   -82,     0,     0,
     -82,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   328,   329,   -83,     0,
       0,   -83,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,   -64,     0,     0,   -64,   -80,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,   355,     0,   299,   -80,   -76,   -76,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -89,   -89,   -89,   -89,   -89,   -76,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -90,   -90,   -90,   -90,   -90,
     -89,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -91,
     -91,   -91,   -91,   -91,   -90,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -92,   -92,   -92,   -92,   -92,   -91,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -93,   -93,   -93,
     -93,   -93,   -92,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -66,   -66,   311,   312,   313,   -93,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -69,   -69,   -69,   -69,   -69,
     -66,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -73,
     -73,   -73,   -73,   -73,   -69,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -78,   -78,   -78,   -78,   -78,   -73,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -77,   -77,   -77,
     -77,   -77,   -78,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -79,   -79,   -79,   -79,   -79,   -77,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -74,   -74,   -74,   -74,   -74,
     -79,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
     -75,   -75,   -75,   -75,   -74,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -67,   -67,   311,   312,   313,   -75,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,   311,
     312,   313,   -67,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -70,   -70,   -70,   -70,   -70,   -68,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,   -71,
     -70,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,
     -72,   -72,   -72,   -72,   -71,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -84,   -84,   -84,   -84,   -84,   -72,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -81,   -81,   -81,
     -81,   -81,   -84,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -82,   -82,   -82,   -82,   -82,   -81,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -83,   -83,   -83,   -83,   -83,
     -82,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   309,
     310,     0,     0,     0,   -83,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   309,   310,     0,     0,     0,   -63,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   309,   310,     0,
       0,     0,   -65,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   309,   310,     0,     0,     0,   -62,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -80,   -80,   -80,   -80,   -80,
     -64,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,   446,   -80,   364,   -89,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,   -89,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,   -90,
     -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,     0,   -91,   -92,   -92,
     -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,     0,     0,   -92,   -93,   -93,   -93,   -93,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,     0,     0,   -93,   -66,   -66,   379,   380,   381,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,   -66,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,   -69,
     -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,   -73,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,   -78,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,   -77,   -74,   -74,   -74,   -74,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,   -74,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,   -79,
     -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,   -75,   -67,   -67,
     379,   380,   381,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,   -67,   -68,   -68,   379,   380,
     381,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,   -68,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,   -70,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,   -71,
     -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,   -72,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,   -84,   -81,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,   -81,   -82,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,   -82,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   377,   378,     0,   -83,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     377,   378,     0,   -65,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   377,   378,     0,   -62,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,   -64,   324,   325,   326,   327,   -59,   -59,   -59,   -59,
       0,     0,     0,   -59,     0,     0,   -59,   305,   306,   307,
     308,   -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,
     -60,   305,   306,   307,   308,   -59,   -59,   -59,   -59,     0,
       0,     0,     0,     0,   -59,   373,   374,   375,   376,   -58,
     -58,   -58,   -58,     0,     0,     0,   -58,   373,   374,   375,
     376,   -60,   -60,   -60,   -60,     0,     0,     0,   -60,   373,
     374,   375,   376,   -59,   -59,   -59,   -59,     0,     0,     0,
     -59
};

static const yytype_int16 yycheck[] =
{
      22,   128,    36,    37,     0,     3,   269,     0,   108,    43,
       6,    36,    34,    35,    10,   158,   299,    10,    43,     3,
      36,    37,    47,     3,     1,    41,     3,     4,     5,     6,
       7,     8,   315,    55,   297,     0,   179,     3,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   151,   335,    45,    46,     1,    52,     3,     4,     5,
       6,     7,     8,    43,    36,    42,    88,    47,    36,    37,
       3,   171,    45,    45,   174,    43,   359,    34,    35,    36,
      37,   364,    36,    29,   106,    43,   186,    41,    45,    47,
      44,   113,    34,    35,    36,    37,    42,    36,    37,    45,
      36,   123,    36,    45,    43,    36,   128,    43,    47,    43,
      41,    47,     1,   109,     3,     4,     5,     6,     7,     8,
     142,    40,   144,    36,     1,   147,     3,     4,     5,     6,
       7,     8,    45,    36,    37,   157,    45,    46,    41,     1,
      29,     3,     4,     5,     6,     7,     8,   143,    40,    36,
      42,    43,    29,    42,    43,     1,    43,     3,     4,     5,
       6,     7,     8,    45,    46,    42,     1,    29,     3,     4,
       5,     6,     7,     8,   196,   197,    41,    45,    46,    44,
      42,    36,     1,    29,     3,     4,     5,     6,     7,     8,
      45,    36,    37,     3,    29,    48,    42,   219,   220,     1,
      45,     3,     4,     5,     6,     7,     8,    42,     3,     1,
      29,     3,     4,     5,     6,     7,     8,   239,   240,    17,
      18,    19,    20,    42,    22,    23,     3,    29,    36,    37,
     252,    36,    37,    41,     3,   362,    44,    29,    43,    36,
      42,    40,    47,   265,    41,    43,    40,   269,    36,    37,
      42,    45,    46,    24,    25,   277,   278,    45,   385,    30,
      31,    32,    33,    34,    35,    36,    37,    34,    35,    36,
      37,    45,    43,    41,    41,   297,    47,   299,    42,    47,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,    43,   315,    41,    45,    47,    44,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,    43,   335,    41,    41,    47,    44,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,    43,    36,    37,   357,    47,   359,    41,    41,
     362,    44,   364,    41,    41,    47,    44,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,    36,    43,   385,    24,    25,    41,     8,    22,    44,
      30,    31,    32,    33,    34,    35,    36,    37,     1,    41,
      34,    35,    41,    43,    40,    47,    42,    47,    47,    45,
      46,    38,     3,    47,    17,    18,    19,    20,    21,    22,
      23,    55,    41,    45,    46,    44,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    43,
      47,    48,     1,    47,     3,     4,     5,     6,     7,     8,
       9,    10,    45,    12,    88,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    34,    35,    36,    37,   103,
      29,    41,   106,    44,    43,    41,    41,    47,    47,   113,
      39,    47,    47,    42,    41,    34,    35,    36,    37,   123,
      47,    43,    41,    43,   128,    44,    43,   499,    41,   501,
      47,    44,   504,    41,     8,   507,    44,   509,   142,   511,
     144,   513,    42,   147,    43,    42,   518,    43,    47,   521,
      42,    47,    43,   157,   158,   527,    47,    34,    35,    36,
      37,    47,    48,     1,    41,     3,     4,     5,     6,     7,
       8,     9,    10,    42,    12,   179,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    34,    35,    36,    37,
      43,    29,   196,   197,    47,    43,    43,    43,    43,    47,
      47,    39,    47,    43,    42,    42,     1,    47,     3,     4,
       5,     6,     7,     8,     9,    10,   220,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    45,
      34,    35,    36,    37,    29,   239,   240,    41,    43,    45,
      44,    43,    47,     3,    39,    47,    43,    42,   252,     1,
      47,     3,     4,     5,     6,     7,     8,    34,    35,    36,
      37,   265,    47,    48,    45,   269,    43,    34,    35,    36,
      37,    43,    42,   277,   278,    47,    43,    29,    41,    45,
      41,    44,     1,    44,     3,     4,     5,     6,     7,     8,
      42,    41,   296,   297,    44,   299,     0,     1,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
      29,   315,     3,    17,    18,    19,    20,    21,    22,    23,
      38,    43,    43,    42,    17,    18,    19,    20,     3,    22,
      23,   335,    41,    43,    41,    44,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
      22,    41,    11,   357,    44,   359,    41,    43,   362,    44,
     364,    41,    34,    35,    44,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,    41,
      43,   385,    44,    55,    41,    45,    42,    44,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    43,    41,    38,     1,    44,     3,     4,     5,     6,
       7,     8,     9,    10,    45,    12,    88,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     4,     5,     6,
       7,     8,    29,    45,   106,     4,     5,     6,     7,     8,
      41,   113,    39,    44,     3,    42,    41,    17,    18,    19,
      20,   123,    22,    23,    41,    41,   128,    44,    44,    43,
       1,    43,     3,     4,     5,     6,     7,     8,     9,    10,
     142,    12,   144,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    41,    41,   157,    44,    44,    29,    43,
      43,    43,    43,    43,    43,   499,    43,   501,    39,    43,
     504,    42,    10,   507,    43,   509,    43,   511,    43,   513,
      43,    43,    43,    43,   518,    43,    43,   521,    43,    43,
      43,    43,    41,   527,   196,   197,    41,    24,    25,    26,
      27,    28,    41,    30,    31,    32,    33,    34,    35,    36,
      37,     0,     1,    40,    43,    42,    43,   219,   220,    46,
      47,    41,    41,    41,    41,    41,    41,   113,    17,    18,
      19,    20,    21,    22,    23,    -1,   109,   239,   240,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
     252,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   265,    -1,     0,     1,   269,    29,    -1,
      -1,    -1,    -1,    -1,    -1,   277,   278,    -1,    39,    -1,
      -1,    42,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,   297,    -1,   299,     0,     1,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,    -1,   315,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,   330,   331,
     332,    -1,    -1,   335,    -1,    -1,    -1,    -1,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,    22,    -1,    -1,   357,    -1,   359,    -1,    -1,
     362,    -1,   364,    -1,    34,    35,    -1,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,    -1,    -1,   385,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    88,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    29,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    24,    25,   128,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,   142,    -1,   144,    43,    -1,   147,    -1,    47,
      -1,    -1,    24,    25,    26,    27,    28,   157,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,   499,    40,   501,
      42,    43,   504,    -1,    46,   507,    -1,   509,    -1,   511,
      -1,   513,     0,     1,    -1,    -1,   518,    -1,    -1,   521,
      -1,    -1,    -1,    -1,    -1,   527,   196,   197,    -1,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
     220,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,   239,
     240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    24,
      25,    42,   252,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,   265,    -1,    -1,    43,   269,
      -1,    -1,    47,    24,    25,    -1,    -1,   277,   278,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,   297,    -1,   299,
       0,     1,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,    -1,   315,    -1,    17,    18,    19,
      20,    21,    22,    23,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,   335,    -1,    -1,    -1,    45,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,    22,    -1,    -1,   357,    -1,   359,
      -1,    -1,   362,    -1,   364,    -1,    34,    35,    -1,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,    -1,    -1,   385,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      88,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    29,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    39,     0,     1,    42,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
     128,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,   142,    -1,   144,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,   157,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,   499,
      40,   501,    42,    -1,   504,    45,    46,   507,    -1,   509,
      -1,   511,    -1,   513,     0,     1,    -1,    -1,   518,    -1,
      -1,   521,    -1,    -1,    -1,    -1,    -1,   527,   196,   197,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,   220,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,     0,     1,
      29,   239,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,   252,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,     0,     1,    -1,   265,    -1,    -1,
      -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   277,
     278,    17,    18,    19,    20,    21,    22,    23,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,   297,
      -1,   299,    -1,    45,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,    -1,   315,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,   335,    44,    -1,
      46,    -1,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,    22,    -1,    -1,   357,
      -1,   359,    -1,    -1,   362,    -1,   364,    -1,    -1,    35,
      -1,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,    -1,    -1,   385,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    88,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,   113,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,   128,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,   142,    12,   144,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,   157,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,   499,    -1,   501,    39,    -1,   504,    42,    -1,   507,
      -1,   509,    -1,   511,    -1,   513,    -1,    -1,    -1,    -1,
     518,    -1,    -1,   521,    -1,    -1,    -1,    -1,    -1,   527,
       1,   197,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,   220,    -1,    -1,    -1,    29,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    39,    -1,
      -1,    42,    -1,    43,   240,    -1,     1,    47,     3,     4,
       5,     6,     7,     8,     9,    10,   252,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   265,
      -1,    -1,    -1,   269,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   278,    -1,    39,    24,    25,    42,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,   297,    41,   299,    -1,    44,   302,   303,   304,   305,
     306,   307,   308,   309,   310,    24,    25,    -1,    -1,   315,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,   328,   329,    -1,    -1,    45,    -1,    -1,   335,
      -1,    -1,    -1,    -1,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,    22,    -1,    -1,   353,    -1,    -1,
      -1,   357,    -1,   359,    -1,    -1,   362,    35,   364,    -1,
      -1,    -1,    -1,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,    -1,    -1,    -1,   382,    55,    -1,   385,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      88,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    29,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,   123,    24,    25,    -1,    -1,
     128,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,   142,    -1,   144,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,   157,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,    42,   499,    -1,   501,    46,    -1,   504,    -1,
      -1,   507,    -1,   509,    -1,   511,    -1,   513,    -1,    -1,
      -1,    -1,   518,    -1,    -1,   521,    -1,    -1,    -1,   197,
      -1,   527,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,   220,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,   240,    -1,    -1,    -1,    -1,    -1,    39,    24,
      25,    42,    -1,    -1,   252,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,   265,    -1,    -1,
      45,   269,    -1,    -1,    -1,    24,    25,    26,    27,    28,
     278,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    42,    43,    -1,    -1,    -1,    47,   297,
      -1,   299,    -1,    -1,   302,   303,   304,   305,   306,   307,
     308,    -1,    24,    25,    26,    27,    28,   315,    30,    31,
      32,    33,    34,    35,    36,    37,   324,   325,   326,   327,
      -1,    43,    -1,    -1,    46,    47,    -1,   335,    -1,    -1,
      -1,    -1,   340,   341,   342,   343,   344,   345,   346,   347,
      22,    -1,    -1,    -1,    -1,   353,    -1,    -1,    -1,   357,
      -1,   359,    -1,    35,   362,    -1,   364,    -1,    -1,    -1,
      -1,   369,   370,   371,   372,   373,   374,   375,   376,    -1,
      -1,    -1,    -1,    55,   382,    -1,    -1,   385,    60,    61,
      62,    63,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    88,    -1,    -1,    -1,
      29,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      39,    -1,    -1,    42,   106,    43,    24,    25,    26,    27,
      28,   113,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,   123,    -1,    -1,    -1,    43,   128,    -1,    46,    47,
      -1,    22,    30,    31,    32,    33,    34,    35,    36,    37,
     142,    -1,   144,    -1,    35,    43,    -1,    -1,    -1,    47,
      24,    25,    26,    27,    28,   157,    30,    31,    32,    33,
      34,    35,    36,    37,    55,    -1,    -1,    41,    -1,    60,
      61,   499,    46,   501,    -1,    -1,   504,    -1,    -1,   507,
      -1,   509,    -1,   511,    -1,   513,    -1,    -1,    -1,    -1,
     518,    -1,    -1,   521,    -1,   197,    -1,    88,    -1,   527,
      -1,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,   106,    -1,    -1,   220,    -1,
      43,    -1,   113,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    24,    25,    -1,    -1,   128,   240,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
     252,   142,    -1,   144,    45,    30,    31,    32,    33,    34,
      35,    36,    37,   265,    -1,    -1,   157,   269,    -1,    -1,
      45,    24,    25,    26,    27,    28,   278,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    47,   297,    -1,   299,    -1,    -1,
     302,   303,   304,    -1,    -1,    -1,   197,    -1,    -1,    -1,
      -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
      -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,   340,   341,
     342,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,   353,    -1,    -1,    -1,   357,    -1,   359,    -1,    -1,
     362,   252,   364,    -1,    -1,    -1,    -1,   369,   370,   371,
     372,    -1,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
     382,    -1,    -1,   385,    -1,    -1,    -1,   278,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,   297,    -1,   299,    43,
      -1,   302,    -1,    47,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,   315,    -1,    22,    43,    -1,    -1,
     321,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,   340,
     341,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,   353,    -1,    60,    -1,   357,    -1,   359,    -1,
      -1,   362,    -1,   364,    24,    25,    -1,    -1,   369,   370,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,   382,    88,    -1,   385,    45,    -1,   499,    -1,   501,
      -1,    -1,   504,    -1,    -1,   507,    -1,   509,    -1,   511,
     106,   513,    -1,    -1,    -1,    -1,   518,   113,    -1,   521,
      -1,    -1,    -1,    -1,    -1,   527,    -1,   123,    -1,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,    22,    30,    31,
      32,    33,    34,    35,    36,    37,   142,    -1,   144,    41,
      35,    -1,    44,    30,    31,    32,    33,    34,    35,    36,
      37,   157,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      55,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,   197,    -1,    88,    -1,    -1,    -1,    -1,   499,    39,
     501,    -1,    42,   504,    -1,    -1,   507,    -1,   509,    -1,
     511,   106,   513,    -1,   220,    -1,    -1,   518,   113,    -1,
     521,    -1,    -1,    -1,    -1,    -1,   527,    -1,   123,    -1,
      -1,    24,    25,   128,   240,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,   252,   142,    41,   144,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,
      -1,    -1,   157,   269,    -1,    -1,    -1,    24,    25,    26,
      27,    28,   278,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      47,   297,    -1,   299,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,   197,    -1,    -1,    -1,    -1,    -1,    -1,   315,
      -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,   335,
      24,    25,    -1,    -1,   340,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,   240,    -1,   353,    -1,    43,
      -1,   357,    -1,   359,    -1,    -1,   362,    -1,   364,    -1,
      -1,    -1,    -1,   369,    -1,    -1,    -1,    -1,    -1,    -1,
     265,    -1,   106,    -1,   269,    -1,   382,    -1,   112,   385,
      -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   297,    -1,   299,    24,    25,    -1,   142,    -1,
     144,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
     315,    -1,    41,   157,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,   333,    -1,
     335,    -1,    -1,    43,    24,    25,    -1,    47,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,   353,    -1,
      -1,    41,   357,   197,   359,    -1,    -1,   362,    -1,   364,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,   220,   382,    -1,    41,
     385,    -1,    44,   499,    46,   501,    -1,    -1,   504,    -1,
      -1,   507,    -1,   509,    -1,   511,   240,   513,    -1,    -1,
      -1,    -1,   518,    -1,    -1,   521,    24,    25,    26,    27,
      28,   527,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,   265,    -1,    41,     1,   269,     3,     4,     5,     6,
       7,     8,     9,    10,   278,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    29,   297,   298,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
     314,    -1,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
     334,    43,    -1,    -1,   499,    47,   501,    -1,    -1,   504,
      -1,    -1,   507,    -1,   509,    -1,   511,    -1,   513,    -1,
      -1,   355,   356,   518,   358,    -1,   521,    -1,   362,   363,
      -1,    -1,   527,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,   385,    43,    24,    25,    -1,    47,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,   403,
      41,    -1,    -1,    44,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,   421,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,   446,    39,    24,    25,    42,    -1,    -1,    45,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
     464,    41,    -1,   467,    44,    -1,    -1,   471,    -1,    -1,
      -1,   475,    -1,   477,    -1,   479,    -1,    -1,   482,    -1,
      -1,    -1,    -1,    -1,   488,    -1,    -1,   491,    -1,    -1,
      -1,    -1,    -1,   497,    -1,   499,    -1,   501,    -1,    -1,
     504,    -1,    -1,   507,    -1,   509,    -1,   511,    -1,   513,
      -1,    -1,    -1,    -1,   518,    -1,    -1,   521,    -1,    -1,
      -1,    -1,     1,   527,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,     1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,     1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,     1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,     1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,     1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    47,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    47,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    47,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    47,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    47,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    47,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    47,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    47,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,    -1,    44,    -1,    46,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,
      -1,    46,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,    -1,    44,    -1,    46,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    46,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    46,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    46,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    42,    -1,    -1,    45,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    24,    25,    26,    27,
      28,    45,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    24,    25,    26,    27,    28,    45,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    24,    25,
      26,    27,    28,    45,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    24,    25,    26,    27,    28,    45,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      24,    25,    26,    27,    28,    45,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    24,    25,    26,    27,
      28,    45,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    24,    25,    26,    27,    28,    45,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    24,    25,
      26,    27,    28,    45,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    24,    25,    26,    27,    28,    45,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      24,    25,    26,    27,    28,    45,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    24,    25,    26,    27,
      28,    45,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    24,    25,    26,    27,    28,    45,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    24,    25,
      26,    27,    28,    45,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    24,    25,    26,    27,    28,    45,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      24,    25,    26,    27,    28,    45,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    24,    25,    26,    27,
      28,    45,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    24,    25,    26,    27,    28,    45,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    24,    25,
      26,    27,    28,    45,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    24,    25,    26,    27,    28,    45,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      24,    25,    26,    27,    28,    45,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    24,    25,    26,    27,
      28,    45,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    24,    25,    26,    27,    28,    45,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    24,    25,
      26,    27,    28,    45,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,    -1,    44,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,
      44,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,
      -1,    44,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,    -1,    44,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    -1,    -1,    44,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,    -1,    44,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    -1,    -1,    44,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,    -1,    44,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    -1,    -1,    44,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,
      44,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,
      -1,    44,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,    -1,    44,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    -1,    -1,    44,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,    -1,    44,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    -1,    -1,    44,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,    -1,    44,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    -1,    -1,    44,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,
      44,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    24,    25,    41,    -1,
      -1,    44,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,    -1,    44,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    42,    43,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    24,    25,    26,    27,    28,    43,    30,    31,    32,
      33,    34,    35,    36,    37,    24,    25,    26,    27,    28,
      43,    30,    31,    32,    33,    34,    35,    36,    37,    24,
      25,    26,    27,    28,    43,    30,    31,    32,    33,    34,
      35,    36,    37,    24,    25,    26,    27,    28,    43,    30,
      31,    32,    33,    34,    35,    36,    37,    24,    25,    26,
      27,    28,    43,    30,    31,    32,    33,    34,    35,    36,
      37,    24,    25,    26,    27,    28,    43,    30,    31,    32,
      33,    34,    35,    36,    37,    24,    25,    26,    27,    28,
      43,    30,    31,    32,    33,    34,    35,    36,    37,    24,
      25,    26,    27,    28,    43,    30,    31,    32,    33,    34,
      35,    36,    37,    24,    25,    26,    27,    28,    43,    30,
      31,    32,    33,    34,    35,    36,    37,    24,    25,    26,
      27,    28,    43,    30,    31,    32,    33,    34,    35,    36,
      37,    24,    25,    26,    27,    28,    43,    30,    31,    32,
      33,    34,    35,    36,    37,    24,    25,    26,    27,    28,
      43,    30,    31,    32,    33,    34,    35,    36,    37,    24,
      25,    26,    27,    28,    43,    30,    31,    32,    33,    34,
      35,    36,    37,    24,    25,    26,    27,    28,    43,    30,
      31,    32,    33,    34,    35,    36,    37,    24,    25,    26,
      27,    28,    43,    30,    31,    32,    33,    34,    35,    36,
      37,    24,    25,    26,    27,    28,    43,    30,    31,    32,
      33,    34,    35,    36,    37,    24,    25,    26,    27,    28,
      43,    30,    31,    32,    33,    34,    35,    36,    37,    24,
      25,    26,    27,    28,    43,    30,    31,    32,    33,    34,
      35,    36,    37,    24,    25,    26,    27,    28,    43,    30,
      31,    32,    33,    34,    35,    36,    37,    24,    25,    26,
      27,    28,    43,    30,    31,    32,    33,    34,    35,    36,
      37,    24,    25,    26,    27,    28,    43,    30,    31,    32,
      33,    34,    35,    36,    37,    24,    25,    26,    27,    28,
      43,    30,    31,    32,    33,    34,    35,    36,    37,    24,
      25,    -1,    -1,    -1,    43,    30,    31,    32,    33,    34,
      35,    36,    37,    24,    25,    -1,    -1,    -1,    43,    30,
      31,    32,    33,    34,    35,    36,    37,    24,    25,    -1,
      -1,    -1,    43,    30,    31,    32,    33,    34,    35,    36,
      37,    24,    25,    -1,    -1,    -1,    43,    30,    31,    32,
      33,    34,    35,    36,    37,    24,    25,    26,    27,    28,
      43,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,    42,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    24,    25,    -1,    41,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      24,    25,    -1,    41,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    24,    25,    -1,    41,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,    -1,    44,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      43,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    17,    18,    19,    20,    21,    22,    23,    53,
      54,    55,    56,    57,    58,    60,    65,    91,    91,     0,
      55,    45,    46,    46,    46,     3,     3,     1,     3,     4,
       5,     6,     7,     8,    29,    42,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    90,    40,    59,    48,
      61,    40,    42,    40,    40,    42,    84,    77,    78,    86,
      36,    37,    34,    35,    30,    31,    32,    33,    24,    25,
      26,    27,    28,    62,    90,    42,    41,    23,    43,    66,
      67,    91,    41,    77,    77,    88,    89,    43,    46,    79,
      80,    81,    81,    82,    82,    82,    82,    83,    83,    84,
      84,    84,    41,    47,     8,    63,    38,    68,    43,    47,
       3,    41,    44,    47,    43,    78,    90,    43,    47,     1,
       9,    10,    12,    14,    15,    16,    39,    56,    69,    70,
      71,    73,    74,    76,    77,    91,    68,    67,    77,    89,
      44,     8,    42,    42,    42,    77,    42,    42,    45,    39,
      70,    13,    75,    45,    45,     3,    41,    44,    42,    64,
      77,    72,    91,    77,     3,    85,    68,    77,    62,    47,
      48,    43,    43,     3,    43,    43,    43,    41,    43,    42,
      68,    11,    68,    45,    45,    62,     3,    43,    68,     1,
       3,     4,     5,     6,     7,     8,    29,    42,    79,    80,
      81,    82,    83,    84,    85,    87,    90,     4,     5,     6,
       7,     8,     1,     3,     4,     5,     6,     7,     8,    29,
      42,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    90,     1,     3,     4,     5,     6,     7,     8,    29,
      42,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    90,    36,     3,    86,     3,    78,    86,     1,     3,
       4,     5,     6,     7,     8,    42,    86,    87,    90,    38,
       1,     3,     4,     5,     6,     7,     8,    29,    42,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    90,
       4,     5,     6,     7,     8,    90,    47,    38,    40,    42,
      84,    77,    37,    34,    35,    30,    31,    32,    33,    24,
      25,    26,    27,    28,    40,    42,     3,    84,    86,    77,
      36,    37,    34,    35,    30,    31,    32,    33,    24,    25,
      26,    27,    28,    46,    40,    42,     3,    84,    86,    77,
      36,    37,    34,    35,    30,    31,    32,    33,    24,    25,
      26,    27,    28,    46,    79,    40,    40,    46,    40,    42,
      77,    39,    69,    40,    42,     3,    84,    86,    77,    36,
      37,    34,    35,    30,    31,    32,    33,    24,    25,    26,
      27,    28,    46,    90,    39,    69,    77,    88,    43,    80,
      81,    81,    82,    82,    82,    82,    83,    83,    84,    84,
      84,    77,    88,    40,    43,    79,    80,    81,    81,    82,
      82,    82,    82,    83,    83,    84,    84,    84,    78,    77,
      88,    40,    43,    79,    80,    81,    81,    82,    82,    82,
      82,    83,    83,    84,    84,    84,    78,    77,    77,    78,
      77,    88,    43,    39,    77,    88,    40,    43,    79,    80,
      81,    81,    82,    82,    82,    82,    83,    83,    84,    84,
      84,    78,    39,    41,    44,    43,    41,    44,    43,    77,
      41,    44,    43,    77,    41,    44,    41,    44,    41,    44,
      43,    41,    44,    43,    77,    77,    77,    41,    44,    77,
      41,    44,    77,    77,    77,    77,    41,    44,    41,    44,
      41,    44,    77,    41,    44,    77,    41,    44,    41,    44,
      41,    44,    41,    44,    77,    77,    77,    41,    44,    77,
      41,    44,    77,    77,    77,    77,    41,    44,    41,    41,
      77,    41,    77,    41,    41,    41,    41,    77,    41,    41,
      41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    57,    58,    59,    60,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    71,    72,    73,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    80,
      80,    81,    81,    81,    81,    81,    82,    82,    82,    83,
      83,    83,    83,    84,    84,    85,    85,    85,    85,    85,
      86,    86,    86,    86,    87,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    91,    91,    91,    91,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     1,     3,
       1,     3,     1,     3,     2,     4,     3,     5,     7,     1,
       3,     1,     3,     3,     5,     6,     5,     1,     3,     2,
       1,     2,     3,     1,     2,     2,     2,     1,     1,     2,
       5,     5,     1,     5,     7,     2,     2,     5,     2,     0,
       1,     2,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     3,     1,     1,     1,     1,
       1,     4,     6,     8,     4,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 136 "flex_bison/porygon_syntax.y"
                                                    {ast_root = (yyvsp[0].tree_node);}
#line 2787 "src/parser.c"
    break;

  case 3:
#line 140 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2793 "src/parser.c"
    break;

  case 4:
#line 141 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, DECLARATION_LIST, "declarationList", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2805 "src/parser.c"
    break;

  case 5:
#line 151 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 2811 "src/parser.c"
    break;

  case 6:
#line 152 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2817 "src/parser.c"
    break;

  case 7:
#line 153 "flex_bison/porygon_syntax.y"
                                                    {++synt_errors;}
#line 2823 "src/parser.c"
    break;

  case 8:
#line 157 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2829 "src/parser.c"
    break;

  case 9:
#line 158 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, VAR_DECLARATION, "varDeclaration",  2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2841 "src/parser.c"
    break;

  case 10:
#line 165 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2847 "src/parser.c"
    break;

  case 11:
#line 166 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ARRAY_DECLARATION_DEFINITION, "arrayDeclarationDefinition", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2859 "src/parser.c"
    break;

  case 12:
#line 173 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2865 "src/parser.c"
    break;

  case 13:
#line 174 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, TABLE_DECLARATION_DEFINITION, "tableDeclarationDefinition", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2877 "src/parser.c"
    break;

  case 14:
#line 185 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, VAR_SIMPLE_DECLARATION, "varSimpleDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                        add_entry((yyvsp[0].tree_node)->name, (yyvsp[-1].tree_node)->type, (yyvsp[-1].tree_node)->name, VARIABLE, cur_scope, SIMPLE, 0, line_num, strlen((yyvsp[0].tree_node)->name));
                                                    }
#line 2890 "src/parser.c"
    break;

  case 15:
#line 196 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ARRAY_DECLARATION, "arrayDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                        add_entry((yyvsp[-2].tree_node)->name, (yyvsp[-3].tree_node)->type, (yyvsp[-3].tree_node)->name, VARIABLE, cur_scope, ARRAY, 0, line_num, strlen((yyvsp[-2].tree_node)->name));
                                                    }
#line 2903 "src/parser.c"
    break;

  case 16:
#line 207 "flex_bison/porygon_syntax.y"
                                                     {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 2909 "src/parser.c"
    break;

  case 17:
#line 211 "flex_bison/porygon_syntax.y"
                                                            {
                                                                struct tree_node *node = create_node(ast_tree_list, TABLE_DECLARATION, "tableDeclaration", 2);
                                                                add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                                add_leaf(node, (yyvsp[-2].tree_node), 1);
                                                                check_type(node);
                                                                (yyval.tree_node) = node;
                                                                add_entry((yyvsp[-2].tree_node)->name, (yyvsp[-3].tree_node)->type, (yyvsp[-3].tree_node)->name, VARIABLE, cur_scope, TABLE, 0, line_num, strlen((yyvsp[-3].tree_node)->name));
                                                            }
#line 2922 "src/parser.c"
    break;

  case 18:
#line 222 "flex_bison/porygon_syntax.y"
                                                                         {
                                                                            struct tree_node *node = create_node(ast_tree_list, TABLE_DEFINITION, "tableDefinition", 2);
                                                                            add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                            add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                                            check_type(node);
                                                                            (yyval.tree_node) = node;
                                                                         }
#line 2934 "src/parser.c"
    break;

  case 19:
#line 232 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2940 "src/parser.c"
    break;

  case 20:
#line 233 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, CONST_LIST, "constList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;

                                                    }
#line 2953 "src/parser.c"
    break;

  case 21:
#line 244 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2959 "src/parser.c"
    break;

  case 22:
#line 245 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, STRING_LIST, "stringList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2971 "src/parser.c"
    break;

  case 23:
#line 255 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 2977 "src/parser.c"
    break;

  case 24:
#line 256 "flex_bison/porygon_syntax.y"
                                                              {
                                                                struct tree_node *node = create_node(ast_tree_list, COLUMN_CONTENT, "columnContent", 2);
                                                                add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                                check_type(node);
                                                                (yyval.tree_node) = node;
                                                              }
#line 2989 "src/parser.c"
    break;

  case 25:
#line 266 "flex_bison/porygon_syntax.y"
                                                                                    {
                                                                                        struct tree_node *node = create_node(ast_tree_list, FUNCT_DECLARATION, "functDeclaration", 4);
                                                                                        add_leaf(node, (yyvsp[-5].tree_node), 0);
                                                                                        add_leaf(node, (yyvsp[-4].tree_node), 1);
                                                                                        add_leaf(node, (yyvsp[-2].tree_node), 2);
                                                                                        add_leaf(node, (yyvsp[0].tree_node), 3);
                                                                                        check_type(node);
                                                                                        (yyval.tree_node) = node;
                                                                                        add_entry((yyvsp[-4].tree_node)->name, (yyvsp[-5].tree_node)->type, (yyvsp[-5].tree_node)->name, FUNCTION, cur_scope, SIMPLE, 0, line_num, strlen((yyvsp[-4].tree_node)->name));
                                                                                        func_declaration_params((yyval.tree_node));
                                                                                    }
#line 3005 "src/parser.c"
    break;

  case 26:
#line 277 "flex_bison/porygon_syntax.y"
                                                                      {
                                                                            struct tree_node *node = create_node(ast_tree_list, FUNCT_DECLARATION, "functDeclaration", 3);
                                                                            add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                            add_leaf(node, (yyvsp[-3].tree_node), 1);
                                                                            add_leaf(node, (yyvsp[0].tree_node), 2);
                                                                            check_type(node);
                                                                            (yyval.tree_node) = node;
                                                                            add_entry((yyvsp[-3].tree_node)->name, (yyvsp[-4].tree_node)->type, (yyvsp[-4].tree_node)->name, FUNCTION, cur_scope, SIMPLE, 0, line_num, strlen((yyvsp[-3].tree_node)->name));
                                                                      }
#line 3019 "src/parser.c"
    break;

  case 27:
#line 289 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3025 "src/parser.c"
    break;

  case 28:
#line 290 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, PARAMETER_LIST, "parameterList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3037 "src/parser.c"
    break;

  case 29:
#line 300 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, PARAMETER_DECLARATION, "parameterDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                        add_entry((yyvsp[0].tree_node)->name, (yyvsp[-1].tree_node)->type, (yyvsp[-1].tree_node)->name, VARIABLE, count_scope + 1, SIMPLE, 0, line_num, strlen((yyvsp[0].tree_node)->name));
                                                    }
#line 3050 "src/parser.c"
    break;

  case 30:
#line 308 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3056 "src/parser.c"
    break;

  case 31:
#line 312 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, EMPTY_COMPOUND_STATEMENT, "emptyCompoundStatement", 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3066 "src/parser.c"
    break;

  case 32:
#line 317 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3072 "src/parser.c"
    break;

  case 33:
#line 321 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3078 "src/parser.c"
    break;

  case 34:
#line 322 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, STATEMENT_LIST, "statementList", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3090 "src/parser.c"
    break;

  case 35:
#line 332 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3096 "src/parser.c"
    break;

  case 36:
#line 333 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3102 "src/parser.c"
    break;

  case 37:
#line 334 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3108 "src/parser.c"
    break;

  case 38:
#line 335 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3114 "src/parser.c"
    break;

  case 39:
#line 336 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3120 "src/parser.c"
    break;

  case 40:
#line 337 "flex_bison/porygon_syntax.y"
                                                             {
                                                                 struct tree_node *node = create_node(ast_tree_list, READ_STMT, "readStmt", 1);
                                                                 add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                 check_type(node);
                                                                 (yyval.tree_node) = node;
                                                             }
#line 3131 "src/parser.c"
    break;

  case 41:
#line 343 "flex_bison/porygon_syntax.y"
                                                             {
                                                                 struct tree_node *node = create_node(ast_tree_list, WRITE_STMT, "writeStmt", 1);
                                                                 add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                 check_type(node);
                                                                 (yyval.tree_node) = node;
                                                             }
#line 3142 "src/parser.c"
    break;

  case 42:
#line 349 "flex_bison/porygon_syntax.y"
                                                             {++synt_errors;}
#line 3148 "src/parser.c"
    break;

  case 43:
#line 353 "flex_bison/porygon_syntax.y"
                                                                 {
                                                                     struct tree_node *node = create_node(ast_tree_list, WHILE, "while", 2);
                                                                     add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                     add_leaf(node, (yyvsp[0].tree_node), 1);
                                                                     check_type(node);
                                                                     (yyval.tree_node) = node;
                                                                 }
#line 3160 "src/parser.c"
    break;

  case 44:
#line 360 "flex_bison/porygon_syntax.y"
                                                                            {
                                                                                                 struct tree_node *node = create_node(ast_tree_list, FOR_LOOP, "for_loop", 3);
                                                                                                 add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                                                 add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                                                                 add_leaf(node, (yyvsp[0].tree_node), 2);
                                                                                                 check_type(node);
                                                                                                 (yyval.tree_node) = node;
                                                                                             }
#line 3173 "src/parser.c"
    break;

  case 45:
#line 372 "flex_bison/porygon_syntax.y"
                               {
                                     add_entry((yyvsp[0].tree_node)->name, (yyvsp[-1].tree_node)->type, (yyvsp[-1].tree_node)->name, VARIABLE, count_scope + 1, SIMPLE, 0, line_num, strlen((yyvsp[0].tree_node)->name));
                                     struct tree_node *node = create_node(ast_tree_list, FOR_DEC, "for_dec", 2);
                                     add_leaf(node, (yyvsp[-1].tree_node), 0);
                                     add_leaf(node, (yyvsp[0].tree_node), 1);
                                     check_type(node);
                                     (yyval.tree_node) = node;
                                }
#line 3186 "src/parser.c"
    break;

  case 46:
#line 383 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, CONDITIONAL_STMT, "conditionalStmt", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3198 "src/parser.c"
    break;

  case 47:
#line 393 "flex_bison/porygon_syntax.y"
                                                                {
                                                                    struct tree_node *node = create_node(ast_tree_list, IF_STMT, "ifStmt", 2);
                                                                    add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                    add_leaf(node, (yyvsp[0].tree_node), 1);
                                                                    check_type(node);
                                                                    (yyval.tree_node) = node;
                                                                }
#line 3210 "src/parser.c"
    break;

  case 48:
#line 403 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ELSE_STMT, "elseStmt", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3221 "src/parser.c"
    break;

  case 49:
#line 409 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, EMPTY_ELSE, "emptyElse", 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3231 "src/parser.c"
    break;

  case 50:
#line 417 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, RETURN, "return", 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3241 "src/parser.c"
    break;

  case 51:
#line 422 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, RETURN, "return", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3252 "src/parser.c"
    break;

  case 52:
#line 431 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3258 "src/parser.c"
    break;

  case 53:
#line 432 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ASSIGN, "=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3270 "src/parser.c"
    break;

  case 54:
#line 442 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3276 "src/parser.c"
    break;

  case 55:
#line 443 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, OR, "||", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3288 "src/parser.c"
    break;

  case 56:
#line 453 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3294 "src/parser.c"
    break;

  case 57:
#line 454 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, AND, "&&", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3306 "src/parser.c"
    break;

  case 58:
#line 464 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3312 "src/parser.c"
    break;

  case 59:
#line 465 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, EQUALS, "==", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3324 "src/parser.c"
    break;

  case 60:
#line 472 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, DIFFS, "!=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3336 "src/parser.c"
    break;

  case 61:
#line 482 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3342 "src/parser.c"
    break;

  case 62:
#line 483 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, BIGGER, ">", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3354 "src/parser.c"
    break;

  case 63:
#line 490 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, LESSER, "<", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3366 "src/parser.c"
    break;

  case 64:
#line 497 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, BIGGER_E, ">=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3378 "src/parser.c"
    break;

  case 65:
#line 504 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, LESSER_E, "<=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3390 "src/parser.c"
    break;

  case 66:
#line 514 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3396 "src/parser.c"
    break;

  case 67:
#line 515 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, SUM, "+", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3408 "src/parser.c"
    break;

  case 68:
#line 522 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, MINUS, "-", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3420 "src/parser.c"
    break;

  case 69:
#line 532 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3426 "src/parser.c"
    break;

  case 70:
#line 533 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, MULT, "*", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3438 "src/parser.c"
    break;

  case 71:
#line 540 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, DIV, "/", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3450 "src/parser.c"
    break;

  case 72:
#line 547 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, REM, "%", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3462 "src/parser.c"
    break;

  case 73:
#line 557 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3468 "src/parser.c"
    break;

  case 74:
#line 558 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, NOT, "!", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3479 "src/parser.c"
    break;

  case 75:
#line 567 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3485 "src/parser.c"
    break;

  case 76:
#line 568 "flex_bison/porygon_syntax.y"
                                                    {++synt_errors;}
#line 3491 "src/parser.c"
    break;

  case 77:
#line 569 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3497 "src/parser.c"
    break;

  case 78:
#line 570 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3503 "src/parser.c"
    break;

  case 79:
#line 571 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3509 "src/parser.c"
    break;

  case 80:
#line 575 "flex_bison/porygon_syntax.y"
                                                    {
                                                        (yyval.tree_node) = (yyvsp[0].tree_node);
                                                        check_type((yyval.tree_node));
                                                    }
#line 3518 "src/parser.c"
    break;

  case 81:
#line 579 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, MUTABLE_ONE, "mutable[]", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3530 "src/parser.c"
    break;

  case 82:
#line 586 "flex_bison/porygon_syntax.y"
                                                                {
                                                                    struct tree_node *node = create_node(ast_tree_list, MUTABLE_TWO, "mutable[;]", 3);
                                                                    add_leaf(node, (yyvsp[-5].tree_node), 0);
                                                                    add_leaf(node, (yyvsp[-3].tree_node), 1);
                                                                    add_leaf(node, (yyvsp[-1].tree_node), 2);
                                                                    check_type(node);
                                                                    (yyval.tree_node) = node;
                                                                }
#line 3543 "src/parser.c"
    break;

  case 83:
#line 594 "flex_bison/porygon_syntax.y"
                                                                                {
                                                                                    struct tree_node *node = create_node(ast_tree_list, MUTABLE_THREE, "mutable[;;]", 4);
                                                                                    add_leaf(node, (yyvsp[-7].tree_node), 0);
                                                                                    add_leaf(node, (yyvsp[-5].tree_node), 1);
                                                                                    add_leaf(node, (yyvsp[-3].tree_node), 2);
                                                                                    add_leaf(node, (yyvsp[-1].tree_node), 3);
                                                                                    check_type(node);
                                                                                    (yyval.tree_node) = node;
                                                                                }
#line 3557 "src/parser.c"
    break;

  case 84:
#line 606 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, FUNCT_CALL, "functCall", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3569 "src/parser.c"
    break;

  case 85:
#line 616 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3575 "src/parser.c"
    break;

  case 86:
#line 617 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, EMPTY_ARGS, "emptyArgs", 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3585 "src/parser.c"
    break;

  case 87:
#line 625 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ARG_LIST, "argList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3597 "src/parser.c"
    break;

  case 88:
#line 632 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3603 "src/parser.c"
    break;

  case 89:
#line 636 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = INT_;}
#line 3609 "src/parser.c"
    break;

  case 90:
#line 637 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = FLOAT_;}
#line 3615 "src/parser.c"
    break;

  case 91:
#line 638 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = BOOL_;}
#line 3621 "src/parser.c"
    break;

  case 92:
#line 639 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = CHAR_;}
#line 3627 "src/parser.c"
    break;

  case 93:
#line 640 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = STRING_;}
#line 3633 "src/parser.c"
    break;

  case 94:
#line 644 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = CHAR_;}
#line 3639 "src/parser.c"
    break;

  case 95:
#line 645 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = INT_;}
#line 3645 "src/parser.c"
    break;

  case 96:
#line 646 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = FLOAT_;}
#line 3651 "src/parser.c"
    break;

  case 97:
#line 647 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = BOOL_;}
#line 3657 "src/parser.c"
    break;

  case 98:
#line 648 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = STRING_;}
#line 3663 "src/parser.c"
    break;

  case 99:
#line 649 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = VOID_;}
#line 3669 "src/parser.c"
    break;


#line 3673 "src/parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 670 "flex_bison/porygon_syntax.y"


void yyerror(char const *msg) {
    fprintf(stderr, "[ERR] (Line: %d, Column: %d) Found %s\n", line_num, previous_col, msg);
}
