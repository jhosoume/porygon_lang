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

#include "helpers.h"

extern struct st_entry *symbol_table;
extern int line_num;
extern int column_num;


#line 83 "src/parser.c"

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
#line 103 "flex_bison/porygon_syntax.y"

int yylex(void);

#line 121 "src/parser.c"


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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  531

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
       0,   111,   111,   112,   116,   117,   121,   122,   123,   124,
     125,   126,   131,   135,   139,   143,   147,   151,   152,   156,
     157,   161,   162,   166,   167,   171,   172,   176,   177,   181,
     182,   186,   187,   191,   192,   193,   194,   195,   196,   197,
     201,   202,   206,   210,   214,   215,   219,   220,   224,   225,
     229,   230,   234,   235,   239,   240,   241,   245,   246,   247,
     248,   249,   253,   254,   255,   259,   260,   261,   262,   266,
     267,   271,   272,   273,   274,   278,   279,   280,   281,   285,
     289,   290,   294,   295,   299,   300,   301,   302,   303,   307,
     308,   309,   310,   311,   312
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTCONST", "FLOATCONST",
  "BOOLEANCONST", "CHARCONST", "STRINGCONST", "WHILE_KW", "FOR_KW",
  "IN_KW", "IF_KW", "ELSE_KW", "RETURN_KW", "READ_KW", "WRITE_KW",
  "CHAR_TYPE", "INT_TYPE", "FLOAT_TYPE", "STRING_TYPE", "TABLE_TYPE",
  "BOOL_TYPE", "VOID_TYPE", "ADD_OP", "SUB_OP", "MULT_OP", "DIV_OP",
  "REM_OP", "NOT_OP", "LESSTHAN_OP", "LESSEQUAL_OP", "GREATERTHAN_OP",
  "GREATEREQUAl_OP", "NOTEQUAL_OP", "COMPARISON_OP", "OR_OP", "AND_OP",
  "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "LPARENTHESES",
  "RPARENTHESES", "COLON", "SEMICOLON", "DEF_EQ", "COMMA", "PIPE",
  "ERR_INVALID_ID", "ERR_INVALID_CHARCONST", "ERR_UNKNOWN_TOKEN",
  "$accept", "declarationList", "declaration", "varDeclaration",
  "varSimpleDeclaration", "arrayDeclaration", "arrayDefinition",
  "tableDeclaration", "tableDefinition", "constList", "stringList",
  "columnContent", "functDeclaration", "parameterList",
  "parameterDeclaration", "compoundStmt", "statementList", "statement",
  "iterationStmt", "conditionalStmt", "ifStmt", "elseStmt", "returnStmt",
  "expression", "logicalOrExp", "logicalAndExp", "equalityExp",
  "relationExp", "sumExp", "multExp", "unaryExp", "baseValue", "mutable",
  "functCall", "args", "argList", "constant", "typeSpecifier", YY_NULLPTR
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

#define YYPACT_NINF (-273)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-95)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     481,    52,    86,    88,   104,   764,   119,   193,   239,   370,
     181,    60,   168,   308,   570,   230,   246,  -273,   599,   632,
     122,   217,   216,   -11,   247,  1438,  4393,  4409,  4425,  4441,
    4457,   122,   139,   -32,    23,    -9,   626,  1530,  4473,  4489,
    4505,  4521,  4537,  4553,   408,   262,   284,   323,   337,    44,
     357,   149,   107,  4569,   382,   -27,  1559,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
      33,   126,   431,   338,    11,   403,     9,   151,   448,   351,
      93,   241,   412,   419,  4585,   155,   103,    39,   858,  1274,
    1854,  1915,  2055,  2175,  4601,  4617,  4633,  4649,  4665,   439,
     408,   261,   281,   414,   956,   403,   806,   397,  4681,   149,
     196,  4697,    95,   188,   426,   470,   445,   450,   452,    90,
     471,   484,  1168,   491,   502,   542,   738,   793,  2101,   508,
     524,   580,  1280,   417,   125,   584,   591,   420,   139,   764,
     139,   601,   610,    15,  1062,  1422,  1190,   627,  1386,  1514,
    1710,   291,  4713,   202,   732,   519,   605,   667,   645,   650,
     672,  1765,   681,   425,   707,   719,   627,   735,   736,   734,
     749,  4729,   652,   732,  1838,   782,  2336,  2031,  2159,   443,
     792,   673,   627,  3188,  4048,  5263,  5277,  5291,  5305,  5319,
     155,   139,   152,    66,  6122,  2337,  5333,  5347,  5361,  5375,
    5389,   204,   328,   330,   332,   399,  1596,  4766,  4787,  4808,
    4829,  4850,   212,   139,   227,    80,   413,  3085,  2525,  4871,
    4892,  4913,  2468,  4934,  4955,   840,  2887,  2995,  3040,  3108,
    3133,   353,   139,    45,   143,   140,  2690,   905,  3640,  3664,
    3688,  1877,  3712,  3736,   155,  5243,  5403,  2359,   -30,  4140,
     433,   791,   794,   795,   797,   799,   139,   801,   803,   804,
    3421,  4071,  5632,  5650,  5668,  5686,  5704,   572,   139,   131,
     229,   571,  2447,  6024,  5722,  5740,  5758,  4163,  5776,  5794,
     446,   492,   495,   525,   557,   568,   732,  3461,   149,   107,
    5417,   805,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   149,   107,  4745,  4976,  4997,   808,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   149,   107,   881,  3760,  3784,   809,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   422,   149,   149,   122,   149,   107,
     811,  3501,  3541,   149,   107,  5613,  5812,  5830,   812,   572,
     572,   572,   572,   572,   572,   572,   572,   572,   572,   572,
     572,   572,   572,   621,  3341,  3581,   141,   815,  5431,   560,
    6136,  6150,  2390,  5571,  5585,  5599,  5445,  5459,  5473,  5487,
    5501,   245,   817,   149,  5018,   209,   493,  6092,  6107,  2779,
    2907,  3016,  5222,  5039,  5060,  5081,  5102,  5123,   289,   265,
     818,   149,  3808,   185,   329,  2797,  2924,  1088,  1115,  1206,
    1231,  3832,  3856,  3880,  3904,  3928,   187,   294,   499,    34,
     541,   819,   820,  3621,   625,   826,   149,  5848,   344,   589,
    6164,  6176,  6038,  6052,  6066,  6080,  5866,  5884,  5902,  5920,
    5938,   201,  3381,  4186,   149,  5515,  2669,   149,  5144,   646,
    2198,   149,  3952,   651,  5529,   149,  4209,   149,   838,   149,
     841,  4232,   149,  5956,   675,   721,   722,  5165,   149,   727,
    3976,   149,   729,   731,   747,   748,  5974,   149,  4255,   202,
    4094,   202,   776,  2235,   202,   777,  5543,   202,  4278,   202,
     842,   202,  4301,   202,   786,   855,   859,  5186,   202,   860,
    4000,   202,   861,   863,   878,   879,  5992,   202,  4324,  4117,
     884,  2634,   886,  5557,  4347,   856,  4370,   890,  5207,  4024,
    6010
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
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
    -273,  -273,   924,    78,  -273,  -273,  -273,  -273,  -273,  -149,
    -273,  -273,  -273,  -273,   743,   -97,  -257,  -123,  -273,  -273,
    -273,  -273,  -273,  2826,  2756,  2496,  2387,  2278,  1959,  1638,
     666,   990,   -20,  1314,  -272,   833,   342,     2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,   123,    11,    12,    45,    13,    47,    70,
     102,   155,    14,    76,    77,   104,   124,   125,   126,   127,
     128,   148,   129,    81,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    82,    83,   224,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,   146,    15,   352,    57,   163,    57,    16,   132,   244,
      15,    41,    56,    -7,   -94,   -48,   -48,   377,   250,   251,
     252,   253,   254,   255,   179,    59,    60,   -52,   -52,    48,
     375,    49,   241,   392,   -12,   -12,   -52,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
     161,    78,   105,   410,   -28,   -89,   106,   256,   -28,   -50,
      58,     1,     2,     3,     4,   246,     6,    74,   -50,   174,
      57,   176,    99,    59,    60,   -53,   -53,   431,    10,   -49,
     100,   330,   435,   249,   -53,   183,    10,    75,   -48,   -90,
     241,   -91,   -48,   247,    26,    27,    28,    29,    30,   249,
     293,   294,   -52,   -52,   249,    -6,    20,   -93,    78,   -52,
     225,   226,   227,   228,   229,   230,   -50,   311,    56,    31,
      56,   -50,   -92,   257,   -50,    25,    26,    27,    28,    29,
      30,   244,    32,   277,   108,   -46,   231,   109,   -49,   -51,
      58,   157,   184,   185,   186,   187,   188,   189,   -51,   232,
     -81,    31,   206,   207,   208,   209,   210,   211,   245,   185,
     186,   187,   188,   189,    32,   -17,   152,   359,   190,   153,
     246,    56,   -48,   -17,   332,   333,   -52,   -52,   212,   -50,
     331,   191,   453,   -52,   190,   454,   -50,   -52,   -50,   292,
     -50,   213,   308,    56,   -25,   -50,   -94,   191,   -25,   225,
     226,   227,   228,   229,   230,   261,   262,   263,   264,   265,
     266,   328,    56,    -8,    21,   306,   207,   208,   209,   210,
     211,   -51,   331,   330,   246,   231,    19,   -18,   -51,   146,
     -49,   267,   -51,    23,   -49,   -18,    56,   359,   232,    17,
     249,   212,   -49,   -84,   268,   -51,   311,   357,    56,    24,
     -51,   -84,   146,   -51,   213,    44,     1,     2,     3,     4,
       5,     6,     7,   310,    46,   -50,   360,   249,   -48,   241,
     -50,   -48,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   -83,   241,   456,    50,   110,   457,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   -19,   241,   460,    -9,   -19,   461,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   114,   310,    72,    41,   115,   241,
     -49,    48,   249,   -49,   241,   464,   -12,   -12,   465,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   -10,    22,   249,   326,   226,   227,   228,
     229,   230,    43,   332,   333,   -53,   -53,   -85,   -11,   -86,
      -2,   -87,   -53,    43,   200,   -85,   -53,   -86,    73,   -87,
     -51,   360,   231,   -13,   -13,   -51,    71,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,   243,   232,   -15,   -15,    79,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,   201,   202,   203,   204,   205,   247,    26,    27,
      28,    29,    30,   116,   117,    84,   118,   200,   119,   120,
     121,     1,     2,     3,     4,     5,     6,     7,   -88,   101,
     -27,   103,   113,    31,   -27,    43,   -88,   312,   313,   -52,
     -52,   107,   243,   122,   -52,   111,    32,   -52,   -51,   292,
     -26,    43,   -80,   -20,   -26,   -51,    43,   -20,   172,   277,
     136,   277,   286,   348,   277,   349,   -75,   277,   137,   277,
     200,   277,   200,   277,   -14,   259,   181,   138,   277,   -84,
     286,   277,   139,   -84,   140,   279,   285,   277,     1,     2,
       3,     4,     5,     6,     7,   247,    26,    27,    28,    29,
      30,   116,   117,   142,   118,   285,   119,   120,   121,     1,
       2,     3,     4,     5,     6,     7,   143,   312,   313,   -53,
     -53,    31,   200,   200,   -53,   -85,   144,   -53,   -86,   -85,
     466,   145,   -86,   467,    32,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   149,   -31,   200,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   164,   165,   -87,   150,
      -5,   -31,   -87,   243,   200,   355,   262,   263,   264,   265,
     266,   -31,   468,   151,   -31,   469,   200,    -5,    -5,    -5,
      -5,    -5,    -5,    -5,   293,   294,   -53,   -53,   200,    -3,
     -88,   267,    43,   -53,   -88,   361,   362,   -52,   -52,   279,
     200,   -17,   -52,   159,   268,   -17,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,   361,   362,   -53,   -53,   -82,   373,    43,
     -53,   243,    -4,   154,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   -47,   243,   166,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    61,    62,    63,    64,
     -54,   -54,   -54,   -54,   -18,   260,   471,   243,   -18,   472,
     167,   -54,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,    39,   477,   168,    43,
     478,   243,   480,   169,    43,   481,   243,    53,   197,   -21,
     -21,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   170,   486,    43,   239,   487,
     -22,   -22,   171,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    96,    97,    98,   280,   281,   282,   283,
     284,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   173,
     -35,   197,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   488,   490,   -16,   489,   491,   -35,   493,    39,
     496,   494,   498,   497,   287,   499,   239,   -35,   175,   177,
     -35,     1,     2,     3,     4,    39,     6,     7,   500,   502,
      39,   501,   503,   180,   178,   182,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   197,   -36,   197,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   507,   510,   275,
     508,   511,   -36,     1,     2,     3,     4,   516,     6,    74,
     517,   279,   -36,   279,   -84,   -36,   279,   -85,   -86,   279,
     -87,   279,   -88,   279,   -74,   279,   -73,   -72,   378,   133,
     279,   394,   412,   279,   432,   437,   290,   197,   455,   279,
     458,   462,   470,   -71,   -75,   -75,   -75,   -75,   -75,   473,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   307,   197,
     324,   -76,   325,   -75,   -79,   -77,   -75,   -75,    61,    62,
      63,    64,   -56,   -56,   -56,   -56,   518,   327,   197,   -78,
     519,   521,   523,   -56,   524,   -75,   -75,   -75,   -75,   -75,
     197,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   525,
     526,   411,   197,   325,   -75,   528,    39,   529,   -75,   338,
     339,   530,    18,   356,   197,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   135,     0,     0,     0,     0,   -57,     0,
       0,     0,   -57,    39,     0,   239,   -24,     0,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   388,   389,   390,
       0,   239,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,     0,     0,     0,     0,   405,   406,   407,     0,
       0,   239,     0,     0,     0,     0,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   423,   424,   425,   239,
      40,     0,     0,    39,     0,   239,     0,     0,    39,     0,
     239,    40,   198,     0,     0,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   448,   449,   450,   275,     0,
       0,    39,   240,     0,     0,     0,     0,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   198,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,
       0,   -33,     0,    40,     0,     0,     0,     0,     0,     0,
     240,   -33,     0,     0,   -33,     0,     0,     0,     0,    40,
       0,     0,   338,   339,    40,     0,     0,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,     0,     0,   198,     0,
     198,   -59,     0,   160,     0,   -59,     0,     0,     0,   338,
     339,     0,     0,   276,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,   275,     0,   275,   -61,     0,
     275,     0,   -61,   275,     0,   275,     0,   275,   -29,   275,
       0,     0,     0,     0,   275,     0,     0,   275,     0,     0,
     198,   198,     0,   275,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   198,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,   -32,
       0,   240,   198,     0,     0,     0,     0,     0,     0,   -32,
     338,   339,   -32,     0,   198,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,     0,     0,   198,     0,     0,   -58,
      40,     0,     0,   -58,     0,   338,   339,   276,   198,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,     0,     0,     0,   -60,     0,     0,    40,   -60,   240,
     -23,     0,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,     0,   240,     0,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,    61,    62,    63,    64,   -55,   -55,
     -55,   -55,     0,     0,     0,   240,     0,     0,     0,   -55,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,    42,     0,     0,    40,     0,   240,
       0,     0,    40,     0,   240,    42,   199,     0,     0,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,     0,     0,    40,   242,     0,     0,     0,
       0,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,     0,     0,     0,     0,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   199,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,     0,   -42,     0,    42,     0,     0,
       0,     0,   -30,     0,   242,   -42,     0,     0,   -42,     0,
       0,     0,     0,    42,     0,     0,     0,     0,    42,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
       0,     0,   199,     0,   199,     0,     0,   258,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -75,   278,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,    51,   276,
      52,   276,     0,   -75,   276,     0,     0,   276,     0,   276,
       0,   276,     0,   276,     0,     0,     0,     0,   276,     0,
       0,   276,     0,     0,   199,   199,     0,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   199,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,     0,   -37,     0,   242,   199,     0,     0,     0,
       0,     0,     0,   -37,    65,    66,   -37,     0,   199,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,
     199,     0,     0,     0,    42,   -57,     0,     0,     0,     0,
       0,   278,   199,   -74,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,    42,   -74,   242,     0,    85,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,     0,   242,
     -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,   304,   -75,   305,   242,
     -75,     0,   -75,     0,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,    38,     0,
       0,    42,     0,   242,     0,     0,    42,     0,   242,     0,
     196,     0,     0,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,     0,     0,    42,
     238,     0,     0,     0,     0,    38,    38,    38,    38,    38,
      38,    38,    38,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   196,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,
       0,    38,     0,     0,     0,     0,     0,     0,   238,   -34,
       0,     0,   -34,     0,     0,     0,     0,    38,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   196,   -44,   196,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
       0,   274,     0,     0,   -44,     0,     0,     0,     0,     0,
       0,     0,     0,   278,   -44,   278,     0,   -44,   278,     0,
       0,   278,     0,   278,     0,   278,     0,   278,     0,     0,
       0,     0,   278,     0,     0,   278,     0,     0,     0,   196,
       0,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   196,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,     0,   -40,     0,     0,
     196,     0,     0,     0,     0,     0,     0,   -40,    65,    66,
     -40,     0,   196,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,     0,   196,     0,     0,     0,    38,   -59,
       0,   -74,   -74,   -74,   -74,   -74,   196,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,
     -74,     0,     0,   343,   -74,    38,     0,   238,     0,     0,
     196,   196,   196,   196,   196,   196,   196,   386,   387,    65,
      66,     0,     0,   238,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,   403,   404,     0,     0,
     -61,     0,     0,   238,     0,     0,     0,     0,   238,   238,
     238,   238,   238,   238,   238,   238,   421,   422,     0,    37,
       0,   238,     0,     0,     0,    38,     0,   238,     0,     0,
      38,   195,   238,     0,     0,     0,     0,   274,   274,   274,
     274,   274,   274,   274,   274,   446,   447,     0,     0,     0,
     274,   237,     0,    38,     0,     0,    37,    37,    37,    37,
      90,    91,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,     0,   -38,   195,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,
     -38,     0,    37,     0,     0,     0,     0,     0,     0,   237,
     -38,     0,     0,   -38,     0,     0,     0,     0,    37,    65,
      66,     0,     0,    37,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,   195,     0,   195,
     -58,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   273,   -45,   147,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,     0,   274,     0,   274,
     -45,     0,   274,     0,     0,   274,     0,   274,     0,   274,
     -45,   274,     0,   -45,     0,     0,   274,     0,     0,   274,
     195,     0,     0,     0,     0,   274,     0,     0,     0,     0,
       0,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   195,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,     0,   -39,     0,
       0,   195,     0,     0,     0,     0,     0,     0,   -39,    65,
      66,   -39,     0,   195,     0,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,   195,     0,     0,     0,    37,
     -60,     0,   -76,   -76,   -76,   -76,   -76,   195,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,
       0,   -76,     0,     0,   -76,   -76,    37,     0,   237,     0,
       0,   195,   195,   195,   382,   383,   384,   385,     0,   -77,
     -77,   -77,   -77,   -77,   237,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   399,   400,   401,   402,     0,   -77,     0,
       0,   -77,   -77,     0,   237,     0,     0,     0,     0,   237,
     237,   237,   237,   417,   418,   419,   420,     0,    36,     0,
       0,     0,   237,     0,     0,     0,    37,     0,   237,     0,
     194,    37,     0,   237,     0,     0,     0,     0,   273,   273,
     273,   273,   442,   443,   444,   445,     0,     0,     0,     0,
     236,   273,     0,     0,    37,    36,    36,    88,    89,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   299,   300,   194,     0,   -43,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -43,     0,     0,   -43,     0,
     -57,    36,     0,   -75,   -75,   -75,   -75,   -75,   236,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,    36,     0,   346,
       0,    52,    36,     0,   -75,   -75,     0,    35,     0,     0,
       0,     0,     0,     0,   299,   300,   194,     0,   194,   193,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,
       0,   272,     0,   -59,     0,     0,     0,     0,     0,   235,
       0,     0,     0,     0,    35,    87,     0,     0,   273,     0,
     273,     0,     0,   273,     0,     0,   273,     0,   273,     0,
     273,     0,   273,     0,     0,     0,     0,   273,     0,   194,
     273,     0,   193,     0,     0,     0,   273,   363,   364,   365,
     366,   -54,   -54,   -54,   -54,     0,     0,     0,   -54,     0,
      35,   194,   -74,   -74,   -74,   -74,   -74,   235,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,    35,     0,     0,   -74,
     194,    35,   -74,     0,   323,     0,    34,     0,     0,     0,
       0,     0,   194,     0,     0,   193,     0,   193,   192,     0,
       0,     0,     0,     0,   194,     0,     0,     0,    36,     0,
     271,     0,     0,     0,     0,     0,   194,     0,   234,   318,
     319,     0,     0,    86,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     0,     0,    36,   -57,   236,     0,   -57,
     194,   380,   381,     0,     0,     0,     0,     0,   193,     0,
       0,   192,     0,   236,     0,     0,     0,     0,     0,     0,
     397,   398,     0,     0,     0,     0,     0,     0,     0,    34,
     193,     0,     0,   236,     0,     0,   234,     0,   236,   236,
     415,   416,     0,     0,     0,    34,     0,     0,     0,   193,
      34,   236,     0,     0,     0,    36,     0,   236,     0,     0,
      36,   193,   236,     0,   192,     0,   192,   272,   272,   440,
     441,     0,     0,   193,     0,     0,     0,    35,     0,   270,
     272,     0,     0,    36,     0,   193,     0,     0,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,    35,     0,   235,   -78,     0,   379,
     -78,   -78,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,   235,   -76,   -76,   -76,   -76,   -76,   396,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,   192,
     -76,     0,   235,   -76,     0,   -76,     0,   235,   414,     0,
     334,   335,   336,   337,   -54,   -54,   -54,   -54,   192,     0,
     235,     0,     0,   -54,    35,     0,   235,   -54,     0,    35,
     344,   235,     0,     0,     0,     0,   271,   439,     0,     0,
       0,     0,   192,     0,     0,     0,    34,     0,     0,   271,
       0,     0,    35,     0,   192,     0,     0,   272,     0,   272,
       0,     0,   272,     0,     0,   272,    33,   272,     0,   272,
       0,   272,     0,    34,     0,   234,   272,     0,    55,   272,
       0,     0,     0,     0,     0,   272,     0,     0,     0,     0,
       0,   234,     0,   318,   319,     0,   395,     0,   233,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,
     -59,   234,     0,   -59,     0,     0,   413,   334,   335,   336,
     337,   -56,   -56,   -56,   -56,     0,     0,     0,     0,   234,
     -56,   112,     0,    34,   -56,   234,     0,     0,    34,     0,
     234,     0,     0,     0,     0,   438,     0,     0,    54,   248,
       0,     0,     0,     0,     0,     0,   233,     0,   270,     0,
       0,    34,     0,     0,     0,   248,   271,    80,   271,     0,
     248,   271,     0,     0,   271,     0,   271,     0,   271,     0,
     271,     0,     0,     0,    55,   271,    55,     0,   271,     0,
       0,     0,     0,     0,   271,     0,     0,     0,     0,   269,
       0,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,   130,
     -84,   318,   319,     0,   -84,   134,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   141,     0,    55,   -61,     0,
     130,   -61,     0,     0,   334,   335,   336,   337,   -55,   -55,
     -55,   -55,     0,     0,   156,     0,   158,   -55,     0,    55,
       0,   -55,     0,     0,     0,     0,     0,     0,     0,   162,
       0,     0,     0,     0,     0,   270,     0,   270,    55,     0,
     270,     0,     0,   270,     0,   270,     0,   270,     0,   270,
       0,     0,     0,     0,   270,     0,     0,   270,     0,     0,
       0,     0,    55,   270,     0,     0,   248,   291,     0,   -85,
     -85,   -85,   -85,   -85,    55,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,   -85,   309,
     318,   319,   -85,   248,     0,   233,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,     0,     0,     0,   -58,   329,     0,
     -58,   233,     0,     0,   -86,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   408,
       0,   233,   350,   -86,     0,     0,   130,   -86,     0,     0,
       0,     0,     0,     0,   358,     0,     0,     0,     0,   426,
       0,     0,     0,   429,     0,   233,     0,     0,   248,     0,
     233,     0,     0,   130,   376,   314,   315,   316,   317,   -54,
     -54,   -54,   -54,     0,     0,     0,   -54,     0,   451,   -54,
     391,   248,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
     409,   -87,     0,     0,     0,   -87,     0,   -88,   -88,   -88,
     -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   427,   428,     0,   430,     0,   -88,     0,   130,   434,
     -88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   130,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,   -41,     0,   459,
       0,     0,     0,     0,     0,     0,     0,   -41,     0,     0,
     -41,     0,     0,     0,     0,     0,     0,   463,     0,     0,
       0,     0,     0,     0,     0,   269,     0,   269,     0,     0,
     269,     0,     0,   269,     0,   269,     0,   269,     0,   269,
       0,     0,   474,     0,   269,     0,     0,   269,     0,     0,
       0,     0,     0,   269,     0,     0,     0,     0,     0,     0,
     475,     0,     0,   476,     0,     0,     0,   479,     0,     0,
       0,   482,     0,   483,     0,   484,     0,     0,   485,     0,
       0,     0,     0,     0,   492,     0,     0,   495,     0,     0,
       0,     0,     0,   504,     0,   505,     0,   506,     0,     0,
     509,     0,     0,   512,     0,   513,     0,   514,     0,   515,
       0,     0,     0,     0,   520,     0,     0,   522,     0,     0,
       0,     0,     0,   527,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,     0,     0,   -29,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,     0,     0,   -30,   247,    26,    27,    28,    29,    30,
     116,   117,     0,   118,     0,   119,   120,   121,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     351,     0,     0,    32,   247,    26,    27,    28,    29,    30,
     116,   117,     0,   118,     0,   119,   120,   121,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     374,     0,     0,    32,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,     0,     0,   -29,   247,    26,    27,    28,    29,    30,
     116,   117,     0,   118,     0,   119,   120,   121,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     433,     0,     0,    32,   247,    26,    27,    28,    29,    30,
     116,   117,     0,   118,     0,   119,   120,   121,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     452,     0,     0,    32,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,     0,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,     0,     0,   -30,   -62,   -62,   340,   341,   342,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,     0,   -62,     0,     0,     0,   -62,   -65,   -65,
     -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,   -65,     0,     0,
       0,   -65,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
       0,   -69,     0,     0,     0,   -69,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,   -73,     0,     0,     0,   -73,
     -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,   -72,
       0,     0,     0,   -72,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,   -70,     0,     0,     0,   -70,   -74,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,   -74,     0,     0,
       0,   -74,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,   -71,   -63,   -63,   340,   341,
     342,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,     0,     0,     0,     0,   -63,     0,     0,     0,   -63,
     -64,   -64,   340,   341,   342,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,   -64,
       0,     0,     0,   -64,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,   -66,     0,     0,     0,   -66,   -67,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,   -67,     0,     0,
       0,   -67,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
       0,   -68,     0,     0,     0,   -68,   -79,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,     0,     0,   -79,     0,     0,     0,   -79,
     -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,   -76,
       0,     0,     0,   -76,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,   -77,     0,     0,     0,   -77,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,     0,   -78,     0,     0,
       0,   -78,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,   288,     0,
     289,   -75,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,   353,   -75,   354,     0,     0,     0,   -75,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,   -77,     0,     0,   -77,     0,
     -77,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,   -78,     0,
       0,   -78,     0,   -78,   -74,   -74,   -74,   -74,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,   -74,   347,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,   -74,     0,     0,     0,     0,   372,
     -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,   -76,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,   -76,     0,     0,     0,     0,   -76,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,   -77,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,   -77,     0,     0,     0,     0,   -77,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,     0,   -78,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,   -78,     0,     0,     0,     0,   -78,   -84,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,   -85,   -85,   -85,   -85,   -85,   -84,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -85,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -86,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -87,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,   -62,   -62,    67,
      68,    69,   -88,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,     0,     0,   -65,   -65,   -65,   -65,   -65,   -62,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -65,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -69,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -74,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -73,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,   -70,   -70,   -70,   -70,   -70,   -72,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -70,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -63,   -63,    67,    68,    69,
     -71,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -64,   -64,    67,    68,    69,   -63,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -64,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,   -67,   -67,   -67,   -67,   -67,   -66,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -68,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -76,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -79,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,   -78,   -78,   -78,   -78,   -78,   -77,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -78,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,   393,   -75,   305,     0,   -75,
     -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,   -84,     0,     0,
     -84,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,   -85,     0,
       0,   -85,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,   -86,
       0,     0,   -86,   -87,   -87,   -87,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
     -87,     0,     0,   -87,   -88,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,   -88,     0,     0,   -88,   -62,   -62,   320,   321,   322,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,
       0,     0,   -62,     0,     0,   -62,   -65,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,     0,   -65,     0,     0,   -65,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,   -69,     0,     0,   -69,   -73,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,   -73,     0,     0,   -73,   -72,
     -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,   -72,     0,     0,   -72,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,   -70,     0,     0,
     -70,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,   -74,     0,
       0,   -74,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,   -71,
       0,     0,   -71,   -63,   -63,   320,   321,   322,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
     -63,     0,     0,   -63,   -64,   -64,   320,   321,   322,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,   -64,     0,     0,   -64,   -66,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,   -66,     0,     0,   -66,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,   -67,     0,     0,   -67,   -68,   -68,   -68,
     -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,   -68,     0,     0,   -68,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,   -79,     0,     0,   -79,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,   -76,     0,     0,   -76,
     -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,   -77,     0,     0,
     -77,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   318,   319,   -78,     0,
       0,   -78,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
       0,     0,     0,   -60,     0,     0,   -60,   -75,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,   345,     0,   289,   -75,   -84,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,   -85,   -85,   -85,   -85,   -84,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,
     -85,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
     -87,   -87,   -87,   -87,   -86,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -87,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -62,   -62,   301,
     302,   303,   -88,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -65,   -65,   -65,   -65,   -65,   -62,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -69,   -69,   -69,   -69,   -69,
     -65,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -73,
     -73,   -73,   -73,   -73,   -69,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -72,   -72,   -72,   -72,   -72,   -73,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -74,   -74,   -74,
     -74,   -74,   -72,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -70,   -70,   -70,   -70,   -70,   -74,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,   -71,
     -70,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -63,
     -63,   301,   302,   303,   -71,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -64,   -64,   301,   302,   303,   -63,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -66,   -66,   -66,
     -66,   -66,   -64,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -67,   -67,   -67,   -67,   -67,   -66,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -67,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -79,
     -79,   -79,   -79,   -79,   -68,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -76,   -76,   -76,   -76,   -76,   -79,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,   -77,   -77,
     -77,   -77,   -76,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -78,   -78,   -78,   -78,   -78,   -77,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   299,   300,     0,     0,     0,
     -78,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   299,
     300,     0,     0,     0,   -61,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   299,   300,     0,     0,     0,   -58,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -75,   -75,   -75,
     -75,   -75,   -60,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,   436,   -75,   354,   -84,   -84,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,   -84,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,   -85,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,   -86,
     -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,   -87,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,   -88,   -62,   -62,   369,   370,
     371,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,     0,     0,   -62,   -65,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,   -65,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,   -69,
     -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,   -73,   -72,   -72,
     -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,   -72,   -70,   -70,   -70,   -70,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,   -70,   -74,   -74,   -74,   -74,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,   -74,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,   -71,
     -63,   -63,   369,   370,   371,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,   -63,   -64,   -64,
     369,   370,   371,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,   -64,   -66,   -66,   -66,   -66,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,   -66,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,   -67,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,   -68,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,   -79,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,   -76,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,   -77,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   367,   368,
       0,   -78,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   367,   368,     0,   -57,     0,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   367,   368,     0,   -59,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     367,   368,     0,   -61,     0,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   367,   368,     0,   -58,     0,     0,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,
       0,   -60,   314,   315,   316,   317,   -56,   -56,   -56,   -56,
       0,     0,     0,   -56,     0,     0,   -56,   314,   315,   316,
     317,   -55,   -55,   -55,   -55,     0,     0,     0,   -55,     0,
       0,   -55,   295,   296,   297,   298,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,     0,   -54,   295,   296,   297,   298,
     -56,   -56,   -56,   -56,     0,     0,     0,     0,     0,   -56,
     295,   296,   297,   298,   -55,   -55,   -55,   -55,     0,     0,
       0,     0,     0,   -55,   363,   364,   365,   366,   -56,   -56,
     -56,   -56,     0,     0,     0,   -56,   363,   364,   365,   366,
     -55,   -55,   -55,   -55,     0,     0,     0,   -55
};

static const yytype_int16 yycheck[] =
{
      20,   124,     0,   260,    36,   154,    36,     5,   105,    36,
       8,    31,    32,    45,     3,    45,    43,   289,     3,     4,
       5,     6,     7,     8,   173,    34,    35,    36,    37,    40,
     287,    42,    52,   305,    45,    46,    45,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
     147,    49,    43,   325,    43,     3,    47,    42,    47,    36,
      37,    17,    18,    19,    20,    85,    22,    23,    45,   166,
      36,   168,    39,    34,    35,    36,    37,   349,     0,    45,
      47,    36,   354,   103,    45,   182,     8,    43,    43,     3,
     110,     3,    47,     3,     4,     5,     6,     7,     8,   119,
      34,    35,    36,    37,   124,    45,    46,     3,   106,    43,
       3,     4,     5,     6,     7,     8,    36,    37,   138,    29,
     140,    41,     3,   143,    44,     3,     4,     5,     6,     7,
       8,    36,    42,   153,    41,    45,    29,    44,    43,    36,
      37,   139,     3,     4,     5,     6,     7,     8,    45,    42,
      43,    29,     3,     4,     5,     6,     7,     8,     3,     4,
       5,     6,     7,     8,    42,    39,    41,    36,    29,    44,
     190,   191,    41,    47,    34,    35,    36,    37,    29,    36,
      37,    42,    41,    43,    29,    44,    43,    47,    36,    37,
      47,    42,   212,   213,    43,    43,     3,    42,    47,     3,
       4,     5,     6,     7,     8,     3,     4,     5,     6,     7,
       8,   231,   232,    45,    46,     3,     4,     5,     6,     7,
       8,    36,    37,    36,   244,    29,    45,    39,    43,   352,
      43,    29,    47,     3,    47,    47,   256,    36,    42,     0,
     260,    29,    41,    39,    42,    36,    37,   267,   268,     3,
      41,    47,   375,    44,    42,    38,    17,    18,    19,    20,
      21,    22,    23,    36,    48,    36,    37,   287,    41,   289,
      41,    44,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,    43,   305,    41,    40,    47,    44,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,    43,   325,    41,    45,    47,    44,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    43,    36,    42,   347,    47,   349,
      41,    40,   352,    44,   354,    41,    45,    46,    44,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,    45,    46,   375,     3,     4,     5,     6,
       7,     8,    20,    34,    35,    36,    37,    39,    45,    39,
       0,    39,    43,    31,    32,    47,    47,    47,    41,    47,
      36,    37,    29,    45,    46,    41,    44,    17,    18,    19,
      20,    21,    22,    23,    52,    42,    45,    46,    41,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,     4,     5,     6,     7,     8,     3,     4,     5,
       6,     7,     8,     9,    10,    43,    12,    85,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    39,     8,
      43,    38,   100,    29,    47,   103,    47,    34,    35,    36,
      37,     3,   110,    39,    41,    43,    42,    44,    36,    37,
      43,   119,    43,    43,    47,    43,   124,    47,    43,   489,
      44,   491,    47,    40,   494,    42,    43,   497,     8,   499,
     138,   501,   140,   503,    45,   143,    43,    42,   508,    43,
      47,   511,    42,    47,    42,   153,   154,   517,    17,    18,
      19,    20,    21,    22,    23,     3,     4,     5,     6,     7,
       8,     9,    10,    42,    12,   173,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    42,    34,    35,    36,
      37,    29,   190,   191,    41,    43,    45,    44,    43,    47,
      41,    39,    47,    44,    42,     3,     4,     5,     6,     7,
       8,     9,    10,    45,    12,   213,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    47,    48,    43,    45,
       0,    29,    47,   231,   232,     3,     4,     5,     6,     7,
       8,    39,    41,     3,    42,    44,   244,    17,    18,    19,
      20,    21,    22,    23,    34,    35,    36,    37,   256,     0,
      43,    29,   260,    43,    47,    34,    35,    36,    37,   267,
     268,    43,    41,     3,    42,    47,    17,    18,    19,    20,
      21,    22,    23,    34,    35,    36,    37,    43,   286,   287,
      41,   289,     0,    42,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,    45,   305,    43,    17,
      18,    19,    20,    21,    22,    23,    30,    31,    32,    33,
      34,    35,    36,    37,    43,    38,    41,   325,    47,    44,
       3,    45,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,    20,    41,    43,   347,
      44,   349,    41,    43,   352,    44,   354,    31,    32,    47,
      48,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,    43,    41,   375,    52,    44,
      47,    48,    41,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,     4,     5,     6,     7,
       8,     3,     4,     5,     6,     7,     8,     9,    10,    42,
      12,    85,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    41,    41,    45,    44,    44,    29,    41,   103,
      41,    44,    41,    44,    38,    44,   110,    39,    43,    45,
      42,    17,    18,    19,    20,   119,    22,    23,    41,    41,
     124,    44,    44,    11,    45,     3,     3,     4,     5,     6,
       7,     8,     9,    10,   138,    12,   140,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    41,    41,   153,
      44,    44,    29,    17,    18,    19,    20,    41,    22,    23,
      44,   489,    39,   491,    43,    42,   494,    43,    43,   497,
      43,   499,    43,   501,    43,   503,    43,    43,    43,   106,
     508,    43,    43,   511,    43,    43,   190,   191,    43,   517,
      43,    43,    43,    43,    24,    25,    26,    27,    28,    43,
      30,    31,    32,    33,    34,    35,    36,    37,   212,   213,
      40,    43,    42,    43,    43,    43,    46,    47,    30,    31,
      32,    33,    34,    35,    36,    37,    41,   231,   232,    43,
      41,    41,    41,    45,    41,    24,    25,    26,    27,    28,
     244,    30,    31,    32,    33,    34,    35,    36,    37,    41,
      41,    40,   256,    42,    43,    41,   260,    41,    47,    24,
      25,    41,     8,   267,   268,    30,    31,    32,    33,    34,
      35,    36,    37,   110,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,   287,    -1,   289,     0,    -1,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
      -1,   305,    -1,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,   320,   321,   322,    -1,
      -1,   325,    -1,    -1,    -1,    -1,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      20,    -1,    -1,   347,    -1,   349,    -1,    -1,   352,    -1,
     354,    31,    32,    -1,    -1,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,    -1,
      -1,   375,    52,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    85,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    29,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    24,    25,   124,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,   138,    -1,
     140,    43,    -1,   143,    -1,    47,    -1,    -1,    -1,    24,
      25,    -1,    -1,   153,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,   489,    -1,   491,    43,    -1,
     494,    -1,    47,   497,    -1,   499,    -1,   501,     0,   503,
      -1,    -1,    -1,    -1,   508,    -1,    -1,   511,    -1,    -1,
     190,   191,    -1,   517,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,   213,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      24,    25,    42,    -1,   244,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,   256,    -1,    -1,    43,
     260,    -1,    -1,    47,    -1,    24,    25,   267,   268,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,   287,    47,   289,
       0,    -1,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,    -1,   305,    -1,    17,    18,    19,
      20,    21,    22,    23,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,   325,    -1,    -1,    -1,    45,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    20,    -1,    -1,   347,    -1,   349,
      -1,    -1,   352,    -1,   354,    31,    32,    -1,    -1,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,    -1,    -1,   375,    52,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    85,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    29,    -1,   103,    -1,    -1,
      -1,    -1,     0,    -1,   110,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,   124,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,   138,    -1,   140,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,   153,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,   489,
      42,   491,    -1,    45,   494,    -1,    -1,   497,    -1,   499,
      -1,   501,    -1,   503,    -1,    -1,    -1,    -1,   508,    -1,
      -1,   511,    -1,    -1,   190,   191,    -1,   517,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,   213,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    24,    25,    42,    -1,   244,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
     256,    -1,    -1,    -1,   260,    45,    -1,    -1,    -1,    -1,
      -1,   267,   268,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,   287,    43,   289,    -1,    46,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,    -1,   305,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,    42,   325,
      44,    -1,    46,    -1,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    20,    -1,
      -1,   347,    -1,   349,    -1,    -1,   352,    -1,   354,    -1,
      32,    -1,    -1,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,    -1,    -1,   375,
      52,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    85,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,   138,    12,   140,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,   153,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   489,    39,   491,    -1,    42,   494,    -1,
      -1,   497,    -1,   499,    -1,   501,    -1,   503,    -1,    -1,
      -1,    -1,   508,    -1,    -1,   511,    -1,    -1,    -1,   191,
      -1,   517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,   213,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    39,    24,    25,
      42,    -1,   244,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,   256,    -1,    -1,    -1,   260,    45,
      -1,    24,    25,    26,    27,    28,   268,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    47,   287,    -1,   289,    -1,    -1,
     292,   293,   294,   295,   296,   297,   298,   299,   300,    24,
      25,    -1,    -1,   305,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,   318,   319,    -1,    -1,
      45,    -1,    -1,   325,    -1,    -1,    -1,    -1,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,    -1,    20,
      -1,   343,    -1,    -1,    -1,   347,    -1,   349,    -1,    -1,
     352,    32,   354,    -1,    -1,    -1,    -1,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,    -1,    -1,    -1,
     372,    52,    -1,   375,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    85,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,   119,    24,
      25,    -1,    -1,   124,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,   138,    -1,   140,
      45,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,   153,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,   489,    -1,   491,
      29,    -1,   494,    -1,    -1,   497,    -1,   499,    -1,   501,
      39,   503,    -1,    42,    -1,    -1,   508,    -1,    -1,   511,
     191,    -1,    -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,   213,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    39,    24,
      25,    42,    -1,   244,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,   256,    -1,    -1,    -1,   260,
      45,    -1,    24,    25,    26,    27,    28,   268,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    46,    47,   287,    -1,   289,    -1,
      -1,   292,   293,   294,   295,   296,   297,   298,    -1,    24,
      25,    26,    27,    28,   305,    30,    31,    32,    33,    34,
      35,    36,    37,   314,   315,   316,   317,    -1,    43,    -1,
      -1,    46,    47,    -1,   325,    -1,    -1,    -1,    -1,   330,
     331,   332,   333,   334,   335,   336,   337,    -1,    20,    -1,
      -1,    -1,   343,    -1,    -1,    -1,   347,    -1,   349,    -1,
      32,   352,    -1,   354,    -1,    -1,    -1,    -1,   359,   360,
     361,   362,   363,   364,   365,   366,    -1,    -1,    -1,    -1,
      52,   372,    -1,    -1,   375,    57,    58,    59,    60,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    24,    25,    85,    -1,    29,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    39,    -1,    -1,    42,    -1,
      43,   103,    -1,    24,    25,    26,    27,    28,   110,    30,
      31,    32,    33,    34,    35,    36,    37,   119,    -1,    40,
      -1,    42,   124,    -1,    45,    46,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,   138,    -1,   140,    32,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,   153,    -1,    43,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,   489,    -1,
     491,    -1,    -1,   494,    -1,    -1,   497,    -1,   499,    -1,
     501,    -1,   503,    -1,    -1,    -1,    -1,   508,    -1,   191,
     511,    -1,    85,    -1,    -1,    -1,   517,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,
     103,   213,    24,    25,    26,    27,    28,   110,    30,    31,
      32,    33,    34,    35,    36,    37,   119,    -1,    -1,    41,
     232,   124,    44,    -1,    46,    -1,    20,    -1,    -1,    -1,
      -1,    -1,   244,    -1,    -1,   138,    -1,   140,    32,    -1,
      -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,
     153,    -1,    -1,    -1,    -1,    -1,   268,    -1,    52,    24,
      25,    -1,    -1,    57,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,   287,    41,   289,    -1,    44,
     292,   293,   294,    -1,    -1,    -1,    -1,    -1,   191,    -1,
      -1,    85,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
     312,   313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
     213,    -1,    -1,   325,    -1,    -1,   110,    -1,   330,   331,
     332,   333,    -1,    -1,    -1,   119,    -1,    -1,    -1,   232,
     124,   343,    -1,    -1,    -1,   347,    -1,   349,    -1,    -1,
     352,   244,   354,    -1,   138,    -1,   140,   359,   360,   361,
     362,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,   153,
     372,    -1,    -1,   375,    -1,   268,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,   287,    -1,   289,    43,    -1,   292,
      46,    47,    -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,
      -1,    -1,   305,    24,    25,    26,    27,    28,   311,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,   213,
      41,    -1,   325,    44,    -1,    46,    -1,   330,   331,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,   232,    -1,
     343,    -1,    -1,    43,   347,    -1,   349,    47,    -1,   352,
     244,   354,    -1,    -1,    -1,    -1,   359,   360,    -1,    -1,
      -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   372,
      -1,    -1,   375,    -1,   268,    -1,    -1,   489,    -1,   491,
      -1,    -1,   494,    -1,    -1,   497,    20,   499,    -1,   501,
      -1,   503,    -1,   287,    -1,   289,   508,    -1,    32,   511,
      -1,    -1,    -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    24,    25,    -1,   310,    -1,    52,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,   325,    -1,    44,    -1,    -1,   330,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,   343,
      43,    85,    -1,   347,    47,   349,    -1,    -1,   352,    -1,
     354,    -1,    -1,    -1,    -1,   359,    -1,    -1,    32,   103,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,   372,    -1,
      -1,   375,    -1,    -1,    -1,   119,   489,    51,   491,    -1,
     124,   494,    -1,    -1,   497,    -1,   499,    -1,   501,    -1,
     503,    -1,    -1,    -1,   138,   508,   140,    -1,   511,    -1,
      -1,    -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,   153,
      -1,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,   103,
      43,    24,    25,    -1,    47,   109,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,   119,    -1,   191,    41,    -1,
     124,    44,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,   138,    -1,   140,    43,    -1,   213,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,    -1,   489,    -1,   491,   232,    -1,
     494,    -1,    -1,   497,    -1,   499,    -1,   501,    -1,   503,
      -1,    -1,    -1,    -1,   508,    -1,    -1,   511,    -1,    -1,
      -1,    -1,   256,   517,    -1,    -1,   260,   191,    -1,    24,
      25,    26,    27,    28,   268,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,   213,
      24,    25,    47,   287,    -1,   289,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,   232,    -1,
      44,   305,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,   323,
      -1,   325,   256,    43,    -1,    -1,   260,    47,    -1,    -1,
      -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,   343,
      -1,    -1,    -1,   347,    -1,   349,    -1,    -1,   352,    -1,
     354,    -1,    -1,   287,   288,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,   372,    44,
     304,   375,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
     324,    43,    -1,    -1,    -1,    47,    -1,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,   345,   346,    -1,   348,    -1,    43,    -1,   352,   353,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,   375,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,   393,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,   411,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   489,    -1,   491,    -1,    -1,
     494,    -1,    -1,   497,    -1,   499,    -1,   501,    -1,   503,
      -1,    -1,   436,    -1,   508,    -1,    -1,   511,    -1,    -1,
      -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,    -1,    -1,
     454,    -1,    -1,   457,    -1,    -1,    -1,   461,    -1,    -1,
      -1,   465,    -1,   467,    -1,   469,    -1,    -1,   472,    -1,
      -1,    -1,    -1,    -1,   478,    -1,    -1,   481,    -1,    -1,
      -1,    -1,    -1,   487,    -1,   489,    -1,   491,    -1,    -1,
     494,    -1,    -1,   497,    -1,   499,    -1,   501,    -1,   503,
      -1,    -1,    -1,    -1,   508,    -1,    -1,   511,    -1,    -1,
      -1,    -1,    -1,   517,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,     3,     4,     5,     6,     7,     8,
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
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
      42,    43,    -1,    -1,    46,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    46,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,
      46,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,
      -1,    44,    -1,    46,    24,    25,    26,    27,    28,    -1,
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
      36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    46,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    24,    25,    26,    27,    28,    45,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    24,
      25,    26,    27,    28,    45,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    24,    25,    26,    27,    28,
      45,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    24,    25,    26,    27,    28,    45,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    24,    25,    26,
      27,    28,    45,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    24,    25,    26,    27,    28,    45,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    24,
      25,    26,    27,    28,    45,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    24,    25,    26,    27,    28,
      45,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    24,    25,    26,    27,    28,    45,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    24,    25,    26,
      27,    28,    45,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    24,    25,    26,    27,    28,    45,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    24,
      25,    26,    27,    28,    45,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    24,    25,    26,    27,    28,
      45,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    24,    25,    26,    27,    28,    45,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    24,    25,    26,
      27,    28,    45,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    24,    25,    26,    27,    28,    45,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    24,
      25,    26,    27,    28,    45,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    24,    25,    26,    27,    28,
      45,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    24,    25,    26,    27,    28,    45,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    24,    25,    26,
      27,    28,    45,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    24,    25,    26,    27,    28,    45,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    24,
      25,    26,    27,    28,    45,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,    42,    -1,    44,
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
      33,    34,    35,    36,    37,    24,    25,    -1,    -1,    -1,
      43,    30,    31,    32,    33,    34,    35,    36,    37,    24,
      25,    -1,    -1,    -1,    43,    30,    31,    32,    33,    34,
      35,    36,    37,    24,    25,    -1,    -1,    -1,    43,    30,
      31,    32,    33,    34,    35,    36,    37,    24,    25,    26,
      27,    28,    43,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,    42,    24,    25,    26,    27,
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
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    24,    25,
      -1,    41,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    24,    25,    -1,    41,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    24,    25,    -1,    41,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      24,    25,    -1,    41,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    24,    25,    -1,    41,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,    -1,    44,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,
      -1,    44,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    43,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    43,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    18,    19,    20,    21,    22,    23,    53,    54,
      55,    56,    57,    59,    64,    89,    89,     0,    54,    45,
      46,    46,    46,     3,     3,     3,     4,     5,     6,     7,
       8,    29,    42,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    88,    38,    58,    48,    60,    40,    42,
      40,    40,    42,    82,    75,    76,    84,    36,    37,    34,
      35,    30,    31,    32,    33,    24,    25,    26,    27,    28,
      61,    88,    42,    41,    23,    43,    65,    66,    89,    41,
      75,    75,    86,    87,    43,    46,    77,    78,    79,    79,
      80,    80,    80,    80,    81,    81,    82,    82,    82,    39,
      47,     8,    62,    38,    67,    43,    47,     3,    41,    44,
      47,    43,    76,    88,    43,    47,     9,    10,    12,    14,
      15,    16,    39,    55,    68,    69,    70,    71,    72,    74,
      75,    89,    67,    66,    75,    87,    44,     8,    42,    42,
      42,    75,    42,    42,    45,    39,    69,    13,    73,    45,
      45,     3,    41,    44,    42,    63,    75,    89,    75,     3,
      83,    67,    75,    61,    47,    48,    43,     3,    43,    43,
      43,    41,    43,    42,    67,    43,    67,    45,    45,    61,
      11,    43,     3,    67,     3,     4,     5,     6,     7,     8,
      29,    42,    77,    78,    79,    80,    81,    82,    83,    85,
      88,     4,     5,     6,     7,     8,     3,     4,     5,     6,
       7,     8,    29,    42,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    88,     3,     4,     5,     6,     7,
       8,    29,    42,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    88,    36,     3,    84,     3,    76,    84,
       3,     4,     5,     6,     7,     8,    42,    84,    85,    88,
      38,     3,     4,     5,     6,     7,     8,    29,    42,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    88,
       4,     5,     6,     7,     8,    88,    47,    38,    40,    42,
      82,    75,    37,    34,    35,    30,    31,    32,    33,    24,
      25,    26,    27,    28,    40,    42,     3,    82,    84,    75,
      36,    37,    34,    35,    30,    31,    32,    33,    24,    25,
      26,    27,    28,    46,    40,    42,     3,    82,    84,    75,
      36,    37,    34,    35,    30,    31,    32,    33,    24,    25,
      26,    27,    28,    46,    77,    40,    40,    46,    40,    42,
      75,    39,    68,    40,    42,     3,    82,    84,    75,    36,
      37,    34,    35,    30,    31,    32,    33,    24,    25,    26,
      27,    28,    46,    88,    39,    68,    75,    86,    43,    78,
      79,    79,    80,    80,    80,    80,    81,    81,    82,    82,
      82,    75,    86,    40,    43,    77,    78,    79,    79,    80,
      80,    80,    80,    81,    81,    82,    82,    82,    76,    75,
      86,    40,    43,    77,    78,    79,    79,    80,    80,    80,
      80,    81,    81,    82,    82,    82,    76,    75,    75,    76,
      75,    86,    43,    39,    75,    86,    40,    43,    77,    78,
      79,    79,    80,    80,    80,    80,    81,    81,    82,    82,
      82,    76,    39,    41,    44,    43,    41,    44,    43,    75,
      41,    44,    43,    75,    41,    44,    41,    44,    41,    44,
      43,    41,    44,    43,    75,    75,    75,    41,    44,    75,
      41,    44,    75,    75,    75,    75,    41,    44,    41,    44,
      41,    44,    75,    41,    44,    75,    41,    44,    41,    44,
      41,    44,    41,    44,    75,    75,    75,    41,    44,    75,
      41,    44,    75,    75,    75,    75,    41,    44,    41,    41,
      75,    41,    75,    41,    41,    41,    41,    75,    41,    41,
      41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    55,    55,    55,    55,
      55,    55,    56,    57,    58,    59,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    71,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    79,    79,    79,
      79,    79,    80,    80,    80,    81,    81,    81,    81,    82,
      82,    83,    83,    83,    83,    84,    84,    84,    84,    85,
      86,    86,    87,    87,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     3,     1,     3,
       1,     3,     2,     4,     3,     5,     7,     1,     3,     1,
       3,     3,     5,     6,     5,     1,     3,     2,     1,     2,
       3,     1,     2,     2,     2,     1,     1,     2,     5,     5,
       5,     8,     2,     5,     2,     0,     1,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     3,     1,     1,     1,     1,     4,     6,     8,     4,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 111 "flex_bison/porygon_syntax.y"
                                                    {printf("Found declaration.\n");}
#line 2730 "src/parser.c"
    break;

  case 3:
#line 112 "flex_bison/porygon_syntax.y"
                                                    {printf("Found recursive declaration.\n");}
#line 2736 "src/parser.c"
    break;

  case 4:
#line 116 "flex_bison/porygon_syntax.y"
                                                    {printf("Found varDeclaration\n");}
#line 2742 "src/parser.c"
    break;

  case 5:
#line 117 "flex_bison/porygon_syntax.y"
                                                    {printf("Found functDelcaration\n");}
#line 2748 "src/parser.c"
    break;

  case 6:
#line 121 "flex_bison/porygon_syntax.y"
                                                    {printf("Found varSimpleDeclaration\n");}
#line 2754 "src/parser.c"
    break;

  case 7:
#line 122 "flex_bison/porygon_syntax.y"
                                                    {printf("Found varSimpleDeclaration with Definition\n");}
#line 2760 "src/parser.c"
    break;

  case 8:
#line 123 "flex_bison/porygon_syntax.y"
                                                    {printf("Found arrayDeclaration\n");}
#line 2766 "src/parser.c"
    break;

  case 9:
#line 124 "flex_bison/porygon_syntax.y"
                                                    {printf("Found arrayDeclaration with Definition\n");}
#line 2772 "src/parser.c"
    break;

  case 10:
#line 125 "flex_bison/porygon_syntax.y"
                                                    {printf("Found tableDeclaration\n");}
#line 2778 "src/parser.c"
    break;

  case 11:
#line 126 "flex_bison/porygon_syntax.y"
                                                    {printf("Found tableDeclaration with Definition\n");}
#line 2784 "src/parser.c"
    break;

  case 12:
#line 131 "flex_bison/porygon_syntax.y"
                                                    {printf("[varSimpleDec] Found type specifier and ID\n");}
#line 2790 "src/parser.c"
    break;

  case 13:
#line 135 "flex_bison/porygon_syntax.y"
                                                    {printf("[arrayDec] Found ARR type specifier and ID []\n");}
#line 2796 "src/parser.c"
    break;

  case 14:
#line 139 "flex_bison/porygon_syntax.y"
                                                  {printf("Found ARR DEF { }\n");}
#line 2802 "src/parser.c"
    break;

  case 15:
#line 143 "flex_bison/porygon_syntax.y"
                                                            {printf("Found table type with type specification ID[]\n");}
#line 2808 "src/parser.c"
    break;

  case 16:
#line 147 "flex_bison/porygon_syntax.y"
                                                                         {printf("Table definition with PIPES\n");}
#line 2814 "src/parser.c"
    break;

  case 17:
#line 151 "flex_bison/porygon_syntax.y"
                                                    {printf("Found a constant\n");}
#line 2820 "src/parser.c"
    break;

  case 18:
#line 152 "flex_bison/porygon_syntax.y"
                                                      {printf("Found a recursive constant list\n");}
#line 2826 "src/parser.c"
    break;

  case 19:
#line 156 "flex_bison/porygon_syntax.y"
                                                    {printf("Found a string constant\n");}
#line 2832 "src/parser.c"
    break;

  case 20:
#line 157 "flex_bison/porygon_syntax.y"
                                                         {printf("Found a recursive definition of string\n");}
#line 2838 "src/parser.c"
    break;

  case 21:
#line 161 "flex_bison/porygon_syntax.y"
                                                    {printf("Found a definition of column\n");}
#line 2844 "src/parser.c"
    break;

  case 22:
#line 162 "flex_bison/porygon_syntax.y"
                                                              {printf("Found a multiple column definition.\n");}
#line 2850 "src/parser.c"
    break;

  case 23:
#line 166 "flex_bison/porygon_syntax.y"
                                                                                    {printf("Found a complete function delcaration.\n");}
#line 2856 "src/parser.c"
    break;

  case 24:
#line 167 "flex_bison/porygon_syntax.y"
                                                                      {printf("Found a no parameters function delcaration.\n");}
#line 2862 "src/parser.c"
    break;

  case 25:
#line 171 "flex_bison/porygon_syntax.y"
                                                    {printf("Found a parameter declaration\n");}
#line 2868 "src/parser.c"
    break;

  case 26:
#line 172 "flex_bison/porygon_syntax.y"
                                                   {printf("Found a multiple parameter declaration\n");}
#line 2874 "src/parser.c"
    break;

  case 27:
#line 176 "flex_bison/porygon_syntax.y"
                                                    {printf("[paramDec] Found a type specifier and Identifier");}
#line 2880 "src/parser.c"
    break;

  case 28:
#line 177 "flex_bison/porygon_syntax.y"
                                                    {printf("[paramDec] Found a VOID");}
#line 2886 "src/parser.c"
    break;

  case 29:
#line 181 "flex_bison/porygon_syntax.y"
                                                {printf("Found {}\n");}
#line 2892 "src/parser.c"
    break;

  case 30:
#line 182 "flex_bison/porygon_syntax.y"
                                                {printf("Found a compoundStmt with Statements\n");}
#line 2898 "src/parser.c"
    break;

  case 31:
#line 186 "flex_bison/porygon_syntax.y"
                                                    {printf("Found statement\n");}
#line 2904 "src/parser.c"
    break;

  case 32:
#line 187 "flex_bison/porygon_syntax.y"
                                                    {printf("Found a recursive statement list\n");}
#line 2910 "src/parser.c"
    break;

  case 33:
#line 191 "flex_bison/porygon_syntax.y"
                                                    {printf("[State] Found a varDeclaration\n");}
#line 2916 "src/parser.c"
    break;

  case 34:
#line 192 "flex_bison/porygon_syntax.y"
                                                    {printf("[State] Found a expression\n");}
#line 2922 "src/parser.c"
    break;

  case 35:
#line 193 "flex_bison/porygon_syntax.y"
                                                    {printf("[State] Found a iterationStmt\n");}
#line 2928 "src/parser.c"
    break;

  case 36:
#line 194 "flex_bison/porygon_syntax.y"
                                                    {printf("[State] Found a conditionalStmt\n");}
#line 2934 "src/parser.c"
    break;

  case 37:
#line 195 "flex_bison/porygon_syntax.y"
                                                    {printf("[State] Found a returnStmt\n");}
#line 2940 "src/parser.c"
    break;

  case 38:
#line 196 "flex_bison/porygon_syntax.y"
                                                             {printf("[State] Found a read statement");}
#line 2946 "src/parser.c"
    break;

  case 39:
#line 197 "flex_bison/porygon_syntax.y"
                                                             {printf("[State] Found a write statement");}
#line 2952 "src/parser.c"
    break;

  case 40:
#line 201 "flex_bison/porygon_syntax.y"
                                                                 {printf("While\n");}
#line 2958 "src/parser.c"
    break;

  case 41:
#line 202 "flex_bison/porygon_syntax.y"
                                                                                              {printf("For\n");}
#line 2964 "src/parser.c"
    break;

  case 42:
#line 206 "flex_bison/porygon_syntax.y"
                                                    {printf("Conditional Statement\n");}
#line 2970 "src/parser.c"
    break;

  case 43:
#line 210 "flex_bison/porygon_syntax.y"
                                                              {printf("[CondStmt] If expr");}
#line 2976 "src/parser.c"
    break;

  case 44:
#line 214 "flex_bison/porygon_syntax.y"
                                                    {printf("[CondStmt] Else expr");}
#line 2982 "src/parser.c"
    break;

  case 45:
#line 215 "flex_bison/porygon_syntax.y"
                                                    {printf("[Condstmt] Empty else");}
#line 2988 "src/parser.c"
    break;

  case 46:
#line 219 "flex_bison/porygon_syntax.y"
                                                    {printf("Return\n");}
#line 2994 "src/parser.c"
    break;

  case 47:
#line 220 "flex_bison/porygon_syntax.y"
                                                    {printf("Return with expr\n");}
#line 3000 "src/parser.c"
    break;

  case 48:
#line 224 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] logicalOrExp\n");}
#line 3006 "src/parser.c"
    break;

  case 49:
#line 225 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] logicalOrExp with mutable\n");}
#line 3012 "src/parser.c"
    break;

  case 50:
#line 229 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] logicalAndExp\n");}
#line 3018 "src/parser.c"
    break;

  case 51:
#line 230 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] || \n");}
#line 3024 "src/parser.c"
    break;

  case 52:
#line 234 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] equalityExp\n");}
#line 3030 "src/parser.c"
    break;

  case 53:
#line 235 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] && \n");}
#line 3036 "src/parser.c"
    break;

  case 54:
#line 239 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] relationExp\n");}
#line 3042 "src/parser.c"
    break;

  case 55:
#line 240 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] == \n");}
#line 3048 "src/parser.c"
    break;

  case 56:
#line 241 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] != \n");}
#line 3054 "src/parser.c"
    break;

  case 57:
#line 245 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] sumExp\n");}
#line 3060 "src/parser.c"
    break;

  case 58:
#line 246 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] > \n");}
#line 3066 "src/parser.c"
    break;

  case 59:
#line 247 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] < \n");}
#line 3072 "src/parser.c"
    break;

  case 60:
#line 248 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] >= \n");}
#line 3078 "src/parser.c"
    break;

  case 61:
#line 249 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] <= \n");}
#line 3084 "src/parser.c"
    break;

  case 62:
#line 253 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] multExp\n");}
#line 3090 "src/parser.c"
    break;

  case 63:
#line 254 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] + \n");}
#line 3096 "src/parser.c"
    break;

  case 64:
#line 255 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] - \n");}
#line 3102 "src/parser.c"
    break;

  case 65:
#line 259 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] unaryExp\n");}
#line 3108 "src/parser.c"
    break;

  case 66:
#line 260 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] * \n");}
#line 3114 "src/parser.c"
    break;

  case 67:
#line 261 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] / \n");}
#line 3120 "src/parser.c"
    break;

  case 68:
#line 262 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] rem \n");}
#line 3126 "src/parser.c"
    break;

  case 69:
#line 266 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] baseValue\n");}
#line 3132 "src/parser.c"
    break;

  case 70:
#line 267 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] ! \n");}
#line 3138 "src/parser.c"
    break;

  case 71:
#line 271 "flex_bison/porygon_syntax.y"
                                                    {printf("[baseValue] Expr in parentheses\n");}
#line 3144 "src/parser.c"
    break;

  case 72:
#line 272 "flex_bison/porygon_syntax.y"
                                                    {printf("[baseValue] Constant\n");}
#line 3150 "src/parser.c"
    break;

  case 73:
#line 273 "flex_bison/porygon_syntax.y"
                                                    {printf("[baseValue] Function Call\n");}
#line 3156 "src/parser.c"
    break;

  case 74:
#line 274 "flex_bison/porygon_syntax.y"
                                                    {printf("[baseValue] Mutable\n");}
#line 3162 "src/parser.c"
    break;

  case 75:
#line 278 "flex_bison/porygon_syntax.y"
                                                    {printf("Found Identifier\n");}
#line 3168 "src/parser.c"
    break;

  case 76:
#line 279 "flex_bison/porygon_syntax.y"
                                                    {printf("Found Identifier []\n");}
#line 3174 "src/parser.c"
    break;

  case 77:
#line 280 "flex_bison/porygon_syntax.y"
                                                               {printf("Found Identifier []\n");}
#line 3180 "src/parser.c"
    break;

  case 78:
#line 281 "flex_bison/porygon_syntax.y"
                                                                                 {printf("Found Identifier []\n");}
#line 3186 "src/parser.c"
    break;

  case 79:
#line 285 "flex_bison/porygon_syntax.y"
                                                    {printf("Function call\n");}
#line 3192 "src/parser.c"
    break;

  case 80:
#line 289 "flex_bison/porygon_syntax.y"
                                                    {printf("argList\n");}
#line 3198 "src/parser.c"
    break;

  case 81:
#line 290 "flex_bison/porygon_syntax.y"
                                                    {printf("Empty argument list\n");}
#line 3204 "src/parser.c"
    break;

  case 82:
#line 294 "flex_bison/porygon_syntax.y"
                                                    {printf("Multiple arguments list\n");}
#line 3210 "src/parser.c"
    break;

  case 83:
#line 295 "flex_bison/porygon_syntax.y"
                                                    {printf("Single arguments list\n");}
#line 3216 "src/parser.c"
    break;

  case 84:
#line 299 "flex_bison/porygon_syntax.y"
                                                    {printf("INTCONST\n");}
#line 3222 "src/parser.c"
    break;

  case 85:
#line 300 "flex_bison/porygon_syntax.y"
                                                    {printf("FLOATCONST\n");}
#line 3228 "src/parser.c"
    break;

  case 86:
#line 301 "flex_bison/porygon_syntax.y"
                                                    {printf("BOOLEANCONST\n");}
#line 3234 "src/parser.c"
    break;

  case 87:
#line 302 "flex_bison/porygon_syntax.y"
                                                    {printf("CHARCONST\n");}
#line 3240 "src/parser.c"
    break;

  case 88:
#line 303 "flex_bison/porygon_syntax.y"
                                                    {printf("STRINGCONST\n");}
#line 3246 "src/parser.c"
    break;

  case 89:
#line 307 "flex_bison/porygon_syntax.y"
                                                     {printf("CHAR_TYPE\n");}
#line 3252 "src/parser.c"
    break;

  case 90:
#line 308 "flex_bison/porygon_syntax.y"
                                                  {printf("INT_TYPE\n");}
#line 3258 "src/parser.c"
    break;

  case 91:
#line 309 "flex_bison/porygon_syntax.y"
                                                  {printf("FLOAT_TYPE\n");}
#line 3264 "src/parser.c"
    break;

  case 92:
#line 310 "flex_bison/porygon_syntax.y"
                                                    {printf("BOOL_TYPE\n");}
#line 3270 "src/parser.c"
    break;

  case 93:
#line 311 "flex_bison/porygon_syntax.y"
                                                    {printf("STRING_TYPE\n");}
#line 3276 "src/parser.c"
    break;

  case 94:
#line 312 "flex_bison/porygon_syntax.y"
                                                  {printf("VOID_TYPE\n");}
#line 3282 "src/parser.c"
    break;


#line 3286 "src/parser.c"

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
#line 315 "flex_bison/porygon_syntax.y"


void yyerror(char const *msg) {
    red_print();
    printf("[ERR] (Line: %d, Column: %d) Found error %s\n", line_num, column_num, msg);
    reset_pcolor();
}
