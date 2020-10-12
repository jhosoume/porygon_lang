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

#include "tree.h"

#include "helpers.h"

extern struct st_entry *symbol_table;
extern int line_num;
extern int column_num;


#line 85 "src/parser.c"

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
#line 107 "flex_bison/porygon_syntax.y"

int yylex(void);

#line 123 "src/parser.c"


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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6863

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  559

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
       0,   115,   115,   116,   117,   121,   122,   126,   127,   128,
     129,   130,   131,   136,   140,   144,   148,   152,   156,   157,
     161,   162,   166,   167,   171,   172,   176,   177,   181,   182,
     186,   187,   191,   192,   196,   197,   198,   199,   200,   201,
     202,   206,   207,   211,   215,   219,   220,   224,   225,   229,
     230,   234,   235,   239,   240,   244,   245,   246,   250,   251,
     252,   253,   254,   258,   259,   260,   264,   265,   266,   267,
     271,   272,   276,   277,   278,   279,   280,   284,   285,   286,
     287,   291,   295,   296,   300,   301,   305,   306,   307,   308,
     309,   313,   314,   315,   316,   317,   318,   322,   327,   332
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
  "functCall", "args", "argList", "constant", "typeSpecifier", "lexerror", YY_NULLPTR
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

#define YYPACT_NINF (-303)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-100)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     133,    34,    57,   106,   108,   515,   119,   141,    83,   249,
     318,   461,   634,   -26,    46,   114,   504,   766,   183,  1051,
     198,  -303,  1294,  1399,   252,   131,   175,    36,   265,  4746,
    4768,  4784,  4800,  4816,  4832,   252,   305,     9,   -31,    82,
     549,  2398,  4848,  4864,  4880,  4896,  4912,  4928,  4944,   419,
     271,   290,   301,   307,     3,   333,   984,    91,  4960,   342,
      92,  4470,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,     8,   110,   368,   530,     1,
     366,   412,   415,   433,   555,   144,   452,   406,   428,  4976,
    1038,    -7,   102,  1978,  2083,  2743,  3287,  3618,  3874,  4992,
    5008,  5024,  5040,  5056,   445,   419,   483,   531,   212,  1542,
     366,  1059,   545,  5072,   984,  1187,  5088,   343,   166,   454,
     508,   479,   486,   498,    81,   517,   568,  1642,   591,   425,
     599,   810,  1158,   158,   602,   613,   680,  1747,   546,   233,
     660,   691,   580,   305,   515,   305,   676,   731,   894,  1281,
    1890,  1332,   553,  1506,  1629,  1680,   362,  5104,  1386,   638,
     164,   706,   747,   724,   749,   778,  1854,   752,   582,   794,
     765,   553,   792,   808,   806,   811,  5120,   195,   638,  1977,
     843,   548,  2028,  2202,   583,   861,   248,   553,  2325,  5136,
    5152,  5168,  4332,  5831,  5845,  5859,  5873,  5887,  1038,   305,
    5901,  5915,  5929,    -4,   -25,  2326,  6195,  5943,  5957,  5971,
    5985,  5999,  6013,   197,   206,   226,   241,   259,  4309,  5205,
    5226,  5247,  5268,  5289,  1734,   305,  5310,  5331,  5352,   337,
     246,   308,  2604,  3264,  5373,  5394,  5415,  3200,  5436,  5457,
    5478,  3031,  2774,  3415,  3459,  3532,  3568,  2082,   305,  3640,
    3665,  3689,    78,   167,     6,   159,  1210,  3713,  3901,  3925,
     477,  3949,  3973,  3997,  1038,  5811,  6027,  4355,    14,  4493,
     730,   825,   826,   828,   829,   831,   305,   837,   839,   840,
     842,   845,   846,   847,  2376,  4378,  6284,  6302,  6320,  6338,
    6356,  2231,   305,  6374,  6392,  6410,    71,   429,   507,  2848,
    6748,  6428,  6446,  6464,  4516,  6482,  6500,  6518,   588,   590,
     637,   657,   677,   679,   638,  2547,   984,    91,  6041,   851,
    1038,  1038,  1038,  1038,  1038,  1038,  1038,  1038,  1038,  1038,
    1038,  1038,   984,    91,  5184,  5499,  5520,   852,  1734,  1734,
    1734,  1734,  1734,  1734,  1734,  1734,  1734,  1734,  1734,  1734,
    1734,  1734,   984,    91,  2941,  4021,  4045,   853,  2082,  2082,
    2082,  2082,  2082,  2082,  2082,  2082,  2082,  2082,  2082,  2082,
    2082,  2082,   314,   984,   984,   252,   984,    91,   881,  2670,
    2721,   984,    91,  6265,  6536,  6554,   882,  2231,  2231,  2231,
    2231,  2231,  2231,  2231,  2231,  2231,  2231,  2231,  2231,  2231,
    2231,   684,   900,  2889,   448,   883,  6055,   451,  2571,  2671,
    6209,  6223,  6237,  6251,  6069,  6083,  6097,  6111,  6125,   456,
     884,   984,  5541,   263,   416,  2990,  3009,  5745,  5760,  5775,
    5790,  5562,  5583,  5604,  5625,  5646,   365,   474,   885,   984,
    4069,   242,   203,  3433,  6816,  2254,  2430,  2586,  3773,  4093,
    4117,  4141,  4165,  4189,   250,   623,   641,    16,   661,   887,
     890,  3873,   688,   891,   984,  6572,   432,   625,  3126,  3550,
    6762,  6776,  6790,  6804,  6590,  6608,  6626,  6644,  6662,   278,
     956,  4539,   984,  6139,  4401,   984,  5667,   735,   728,   984,
    4213,   736,  6153,   984,  4562,   984,   892,   984,   895,  4585,
     984,  6680,   737,   750,   767,  5688,   984,   768,  4237,   984,
     793,   799,   801,   803,  6698,   984,  4608,  1386,  4424,  1386,
     809,  1558,  1386,   814,  6167,  1386,  4631,  1386,   897,  1386,
    4654,  1386,   822,   896,   905,  5709,  1386,   906,  4261,  1386,
     907,   911,   912,   913,  6716,  1386,  4677,  4447,   914,  1906,
     915,  6181,  4700,   898,  4723,   916,  5730,  4285,  6734
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -303,  -303,   875,    17,  -303,  -303,  -303,  -303,  -303,  -151,
    -303,  -303,  -303,  -303,   856,   -94,  -281,  -128,  -303,  -303,
    -303,  -303,  -303,  3330,  3256,  2992,  2890,  2812,  2470,  2125,
    1081,  1429,   348,  1777,  -302,   867,   733,     2,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,   128,    14,    15,    50,    16,    52,    75,
     107,   160,    17,    81,    82,   109,   129,   130,   131,   132,
     133,   153,   134,    86,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,    87,    88,   239,   136,   240
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,   151,    18,   380,   -96,   -51,    63,    20,   168,   321,
     322,   -53,   -53,    18,   -51,   405,   137,    13,   -53,    23,
       1,     2,     3,     4,    48,     6,    79,   184,    13,   -52,
      63,   420,   -51,   320,   403,    48,   212,   -91,   -52,   -51,
     360,   361,   -53,   -53,   -29,    62,    80,   104,   -29,   -53,
      62,   438,    62,   -53,    -8,   105,    83,   263,   166,   -49,
     -92,   -50,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,   459,    53,   179,    54,   181,
     463,   -13,   -13,   -97,   267,    30,    31,    32,    33,    34,
     212,    -7,    24,   188,   241,   242,   243,   244,   245,   246,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   387,    48,   -93,
      35,   -95,   -49,    83,   358,   263,    64,    65,   -53,   -53,
     247,   -49,   -94,    36,    48,   -49,   -47,   -53,   264,    48,
     189,   190,   191,   248,   -83,   -49,    64,    65,   -54,   -54,
     249,   250,   251,   212,   -96,   212,   162,   -54,   283,   -18,
       1,     2,     3,     4,     5,     6,     7,   -18,   307,    -9,
      25,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,    49,
     -46,   152,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     8,     9,    10,   113,    27,   -46,   114,   362,
     363,   364,   365,   -55,   -55,   -55,   -55,   -46,   212,   212,
     -46,    28,   -55,   -51,   359,   -19,   -55,   -46,   -46,   -46,
     -51,   169,   170,   -19,   -51,   267,    30,    31,    32,    33,
      34,   121,   122,    51,   123,   212,   124,   125,   126,     1,
       2,     3,     4,     5,     6,     7,   -86,   360,   361,   -54,
     -54,    35,   -22,   -22,   -86,   -87,   -54,   263,   212,   -98,
     -54,   127,   151,   -87,    36,    29,    30,    31,    32,    33,
      34,   189,   190,   191,   212,   -88,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -88,   157,   151,   212,   158,   -52,   359,
     -89,    35,   -51,   339,    48,   -52,   358,   -51,   -89,   -52,
     -51,   307,   212,   -50,    36,   -23,   -23,   -50,   -90,   -52,
     339,   189,   190,   191,   -52,    55,   -90,   -52,   192,   193,
     194,   195,   196,   197,   387,    48,   -10,   263,   -99,   -50,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,    77,   263,   198,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   340,   341,   -53,   -53,   -12,   199,    78,   -53,
     -52,   320,   -53,   263,   200,   201,   202,   -52,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,    45,   338,    84,    48,   106,   263,   -49,   264,
      48,   -49,   263,    45,    61,    89,   -50,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   338,    53,    48,   108,   260,   -50,   -13,   -13,   -50,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,   213,   214,   215,   216,   217,   267,    30,
      31,    32,    33,    34,   121,   122,   112,   123,   266,   124,
     125,   126,     1,     2,     3,     4,     5,     6,     7,   116,
     340,   341,   -54,   -54,    35,   110,   269,   -54,   -26,   111,
     -54,    21,   -26,   260,   150,   -51,   388,    36,   -52,   388,
     -51,   -82,   269,   -52,   189,   190,   191,   269,     1,     2,
       3,     4,     5,     6,     7,   321,   322,   -54,   -54,   481,
     -15,    61,   482,    61,   -54,   -85,   280,   484,   141,   115,
     485,   -76,   -76,   -76,   -76,   -76,   304,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   488,   142,   307,   489,   307,
     -76,   143,   307,   371,   -76,   307,   -20,   307,   144,   307,
     -20,   307,     1,     2,     3,     4,   307,     6,     7,   307,
     145,   389,   390,   -53,   -53,   307,   266,    61,   -53,   -11,
      26,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   147,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   336,    61,   119,   -14,   -14,   -44,   120,    66,
      67,    68,    69,   -55,   -55,   -55,   -55,   -44,   -28,   -27,
     -44,   284,   -28,   -27,   -55,   356,    61,   -44,   -44,   -44,
     -16,   -16,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     148,   -32,   266,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -21,    61,   177,   186,   -21,   -32,   314,
     314,   -86,   269,   -87,    -2,   -86,   149,   -87,   -32,   385,
      61,   -32,   308,   309,   310,   311,   312,   154,   -32,   -32,
     -32,    -2,    -2,    -2,    -2,    -2,    -2,    -2,   155,   389,
     390,   -54,   -54,   269,   492,   260,   -54,   493,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     -88,   260,   494,   156,   -88,   495,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     -89,   260,   496,   -84,   -89,   497,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     -90,   -48,   -18,    45,   -90,   260,   -18,   -19,   269,   499,
     260,   -19,   500,   159,   164,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   171,
     172,   269,   -78,   -78,   -78,   -78,   -78,    47,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,    -6,   173,    47,   211,
     376,   -78,   377,   -77,   -78,   -78,   505,   508,   514,   506,
     509,   515,    76,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
     262,   516,   174,   176,   517,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,   518,   521,
     -17,   519,   522,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   175,   -36,   211,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   524,   180,   178,   525,   118,   -36,
     526,    47,   528,   527,   530,   529,   315,   531,   262,   -36,
     535,   182,   -36,   536,   185,   538,   183,    47,   539,   -36,
     -36,   -36,    47,   544,   187,   304,   545,   304,   -86,   -87,
     304,   -88,   -89,   304,   -90,   304,   211,   304,   211,   304,
     -97,   282,   -98,   -99,   304,   -76,    22,   304,   -75,   -74,
     -73,   306,   313,   304,   406,   422,   440,   270,   271,   272,
     273,   274,   275,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   313,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   460,   465,   483,   486,   490,   -30,
     498,   211,   211,   -72,   501,   -78,   276,   546,   -81,   -30,
     -79,   -80,   -30,   277,   278,   279,   547,   549,   551,   -30,
     -30,   -30,   552,   553,   554,   556,   557,   558,   211,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   138,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     262,   211,   140,     0,     0,   -31,     0,   218,   219,   220,
     221,   222,   223,     0,     0,   -31,     0,   211,   -31,     0,
       0,     0,     0,     0,     0,   -31,   -31,   -31,     0,   211,
       0,     0,     0,   224,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,   306,   211,   225,     0,     0,     0,
       0,     0,     0,   226,   227,   228,     0,     0,     0,     0,
       0,   265,   193,   194,   195,   196,   197,   401,    47,     0,
     262,    -4,     0,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,     0,   262,   198,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,     0,     1,     2,     3,     4,
     199,     6,    79,     0,     0,     0,   262,   200,   201,   202,
       0,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,    43,     0,     0,    47,     0,
     262,     0,     0,    47,     0,   262,    58,   208,     0,     0,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,     0,     0,    47,     0,   258,     0,
       0,     0,     0,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,   101,   102,   103,     0,     0,     0,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   208,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,   -37,     0,    43,
     241,   242,   243,   244,   245,   246,   258,   -37,     0,     0,
     -37,     0,     0,     0,     0,    43,     0,   -37,   -37,   -37,
      43,     0,     0,     0,     0,     0,   247,     0,     0,     0,
       0,     0,     0,     0,   208,     0,   208,     0,     0,   248,
       0,     0,     0,     0,   366,   367,   249,   250,   251,   302,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,
     306,     0,   306,   -58,     0,   306,     0,   -58,   306,     0,
     306,     0,   306,     0,   306,     0,     0,     0,     0,   306,
       0,     0,   306,     0,     0,     0,     0,     0,   306,   318,
     208,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,    -3,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   335,   208,     0,     0,     0,
     -34,    -3,    -3,    -3,    -3,    -3,    -3,    -3,     0,     0,
     -34,     0,     0,   -34,     0,     0,     0,     0,   355,   208,
     -34,   -34,   -34,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   208,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   208,     0,     0,
       0,   -33,     0,     0,     0,    43,     0,     0,     0,     0,
       0,   -33,   384,   208,   -33,     0,     0,     0,     0,     0,
       0,   -33,   -33,   -33,     0,     0,     0,     0,     0,   285,
     286,   287,   288,   289,   290,     0,    43,     0,   258,    -5,
       0,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     416,   417,   418,     0,   258,   291,    -5,    -5,    -5,    -5,
      -5,    -5,    -5,     0,     0,     0,     0,     0,   292,   433,
     434,   435,     0,     0,   258,   293,   294,   295,     0,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   451,
     452,   453,   258,    44,     0,     0,    43,     0,   258,     0,
       0,    43,     0,   258,    44,   209,     0,     0,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   476,   477,
     478,   302,     0,     0,    43,     0,   259,     0,     0,     0,
       0,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,     0,     0,     0,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,   209,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,   -43,     0,    44,     0,     0,
       0,     0,   -25,     0,   259,   -43,     0,     0,   -43,     0,
       0,     0,     0,    44,     0,   -43,   -43,   -43,    44,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
       0,     0,   209,     0,   209,     0,     0,   165,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   303,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   302,     0,
     302,   -79,     0,   302,   -79,   -79,   302,     0,   302,     0,
     302,     0,   302,     0,     0,     0,     0,   302,     0,     0,
     302,     0,     0,     0,     0,     0,   302,   209,   209,     0,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
       0,   -38,   -30,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   209,     0,     0,     0,   -38,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -38,     0,
       0,   -38,     0,     0,     0,     0,   259,   209,   -38,   -38,
     -38,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   209,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   209,     0,     0,     0,   -35,
       0,     0,     0,    44,     0,     0,     0,     0,     0,   -35,
     303,   209,   -35,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,     0,     0,     0,     0,     0,   334,   219,   220,
     221,   222,   223,     0,    44,     0,   259,   -24,     0,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,     0,   259,   224,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,   259,   226,   227,   228,     0,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,    46,     0,     0,    44,     0,   259,     0,     0,    44,
       0,   259,    46,   210,     0,     0,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   303,
       0,     0,    44,     0,   261,     0,     0,     0,     0,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,     0,     0,     0,     0,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   210,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,
       0,     0,     0,   -45,     0,    46,     0,     0,     0,     0,
     -31,     0,   261,   -45,     0,     0,   -45,     0,     0,     0,
       0,    46,     0,   -45,   -45,   -45,    46,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,     0,
     210,     0,   210,     0,     0,   281,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   305,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,   303,     0,   303,   -80,
       0,   303,   -80,   -80,   303,     0,   303,     0,   303,     0,
     303,     0,     0,     0,     0,   303,     0,     0,   303,     0,
       0,     0,     0,     0,   303,   210,   210,     0,     0,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   210,     0,     0,     0,   -41,     0,    66,    67,
      68,    69,   -57,   -57,   -57,   -57,   -41,     0,     0,   -41,
       0,     0,     0,   -57,   261,   210,   -41,   -41,   -41,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   210,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   210,     0,     0,     0,   -39,     0,     0,
       0,    46,     0,     0,     0,     0,     0,   -39,   305,   210,
     -39,     0,     0,     0,     0,     0,     0,   -39,   -39,   -39,
       0,     0,     0,     0,     0,   354,   242,   243,   244,   245,
     246,     0,    46,     0,   261,     0,     0,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,     0,
     261,   247,     0,    66,    67,    68,    69,   -56,   -56,   -56,
     -56,     0,     0,     0,   248,     0,     0,     0,   -56,     0,
     261,   249,   250,   251,     0,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,    42,
       0,     0,    46,     0,   261,     0,     0,    46,     0,   261,
       0,   207,     0,     0,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,     0,     0,
      46,     0,   257,     0,     0,     0,     0,    42,    42,    42,
      42,    42,    42,    42,    42,    99,   100,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   207,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
       0,   -40,     0,    42,   383,   286,   287,   288,   289,   290,
     257,   -40,     0,     0,   -40,     0,     0,     0,     0,    42,
       0,   -40,   -40,   -40,    42,     0,     0,     0,     0,     0,
     291,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     207,     0,     0,   292,     0,     0,     0,     0,   366,   367,
     293,   294,   295,   301,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,   305,     0,   305,   -60,     0,   305,
       0,   -60,   305,     0,   305,     0,   305,     0,   305,     0,
       0,     0,     0,   305,     0,     0,   305,     0,     0,     0,
       0,     0,   305,     0,   207,     0,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     207,     0,     0,     0,   -42,     0,   323,   324,   325,   326,
     -55,   -55,   -55,   -55,   -42,     0,     0,   -42,     0,   -55,
       0,     0,     0,   207,   -42,   -42,   -42,     0,     0,   267,
      30,    31,    32,    33,    34,   121,   122,     0,   123,   207,
     124,   125,   126,     1,     2,     3,     4,     5,     6,     7,
       0,   207,     0,     0,     0,    35,     0,     0,     0,    42,
       0,     0,     0,     0,     0,   379,     0,   207,    36,     0,
       0,     0,    70,    71,     0,   189,   190,   191,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,     0,     0,     0,     0,
      42,     0,   257,   -58,     0,   207,   207,   207,   207,   207,
     207,   207,   414,   415,   366,   367,     0,     0,   257,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,   431,   432,   -62,     0,     0,     0,   -62,   257,     0,
       0,     0,     0,   257,   257,   257,   257,   257,   257,   257,
     257,   449,   450,     0,    41,     0,   257,     0,     0,     0,
      42,     0,   257,     0,     0,    42,   206,   257,     0,     0,
       0,     0,   301,   301,   301,   301,   301,   301,   301,   301,
     474,   475,     0,     0,     0,   301,     0,   256,    42,     0,
       0,     0,    41,    41,    41,    41,    95,    96,    97,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     267,    30,    31,    32,    33,    34,   121,   122,     0,   123,
     206,   124,   125,   126,     1,     2,     3,     4,     5,     6,
       7,     0,     0,     0,     0,     0,    35,     0,    41,     0,
       0,     0,     0,     0,     0,   256,   402,     0,     0,    36,
       0,     0,     0,     0,    41,     0,   189,   190,   191,    41,
       0,   323,   324,   325,   326,   -57,   -57,   -57,   -57,     0,
     366,   367,     0,   206,   -57,   206,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,     0,     0,     0,   300,   -59,
       0,     0,     0,   -59,   342,   343,   344,   345,   -55,   -55,
     -55,   -55,   301,     0,   301,   -55,     0,   301,   -55,     0,
     301,     0,   301,     0,   301,     0,   301,     0,     0,     0,
       0,   301,     0,     0,   301,     0,     0,     0,     0,   206,
     301,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   206,     0,     0,     0,   -30,
       0,   323,   324,   325,   326,   -56,   -56,   -56,   -56,   -30,
       0,     0,   -30,     0,   -56,     0,     0,     0,   206,   -30,
     -30,   -30,     0,     0,   267,    30,    31,    32,    33,    34,
     121,   122,     0,   123,   206,   124,   125,   126,     1,     2,
       3,     4,     5,     6,     7,     0,   206,     0,     0,     0,
      35,     0,     0,     0,    41,     0,     0,     0,     0,     0,
     461,     0,   206,    36,     0,     0,     0,    70,    71,     0,
     189,   190,   191,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,     0,     0,     0,     0,    41,     0,   256,   -60,     0,
     206,   206,   206,   410,   411,   412,   413,     0,   -86,   -86,
     -86,   -86,   -86,   256,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   427,   428,   429,   430,     0,   -86,     0,     0,
       0,   -86,     0,   256,     0,     0,     0,     0,   256,   256,
     256,   256,   445,   446,   447,   448,    40,     0,     0,     0,
       0,   256,     0,     0,     0,    41,     0,   256,   205,     0,
      41,     0,   256,     0,     0,     0,     0,   300,   300,   300,
     300,   470,   471,   472,   473,     0,     0,     0,     0,   255,
     300,     0,     0,    41,    40,    40,    93,    94,   391,   392,
     393,   394,   -55,   -55,   -55,   -55,     0,     0,     0,   -55,
       0,     0,   267,    30,    31,    32,    33,    34,   121,   122,
       0,   123,   205,   124,   125,   126,     1,     2,     3,     4,
       5,     6,     7,     0,    39,     0,     0,     0,    35,     0,
      40,     0,     0,     0,     0,     0,   204,   255,   480,     0,
       0,    36,     0,     0,     0,     0,    40,     0,   189,   190,
     191,    40,     0,     0,     0,     0,     0,   254,     0,     0,
       0,     0,    39,    92,     0,   205,     0,   205,     0,     0,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     299,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     204,   439,     0,   353,   -77,     0,     0,   300,   -77,   300,
       0,     0,   300,     0,     0,   300,     0,   300,    39,   300,
       0,   300,     0,     0,     0,   254,   300,     0,     0,   300,
       0,   205,     0,     0,    39,   300,    38,     0,     0,    39,
     342,   343,   344,   345,   -57,   -57,   -57,   -57,   203,     0,
       0,   -57,     0,   204,   -57,   204,     0,   205,     0,   342,
     343,   344,   345,   -56,   -56,   -56,   -56,     0,   298,   253,
     -56,     0,     0,   -56,    91,   -77,   -77,   -77,   -77,   -77,
     205,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,   352,     0,   353,   -77,     0,   205,   -77,   -77,     0,
       0,     0,   203,     0,     0,     0,     0,     0,   205,   204,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
      38,     0,     0,     0,   205,     0,     0,   253,     0,     0,
       0,     0,     0,     0,     0,   204,    38,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,    40,     0,   255,
       0,     0,   205,   408,   409,   203,     0,   203,   204,     0,
       0,     0,     0,     0,     0,   255,     0,     0,     0,     0,
     297,     0,   425,   426,   204,     0,   391,   392,   393,   394,
     -57,   -57,   -57,   -57,     0,   255,   204,   -57,     0,     0,
     255,   255,   443,   444,    39,     0,     0,     0,     0,     0,
       0,     0,   204,   255,     0,     0,     0,    40,     0,   255,
       0,   203,    40,     0,   255,     0,     0,     0,     0,   299,
     299,   468,   469,     0,     0,    39,     0,   254,     0,     0,
     407,     0,   299,     0,     0,    40,     0,   203,     0,     0,
       0,     0,     0,   254,   -76,   -76,   -76,   -76,   -76,   424,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
     203,   -76,     0,   254,   -76,     0,   351,     0,   254,   442,
       0,     0,     0,     0,     0,     0,   372,     0,     0,     0,
       0,   254,     0,     0,     0,    39,     0,   254,   203,     0,
      39,     0,   254,     0,     0,     0,    38,   298,   467,     0,
      37,     0,     0,     0,   203,     0,     0,     0,   346,   347,
     298,     0,    60,    39,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,     0,   -58,     0,    38,   -58,   253,
       0,    70,    71,   252,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   253,     0,     0,     0,   299,
     423,   299,   -62,     0,   299,     0,     0,   299,     0,   299,
       0,   299,     0,   299,     0,   253,   117,     0,   299,     0,
     441,   299,     0,     0,     0,     0,     0,   299,     0,     0,
       0,     0,     0,   253,   268,     0,    59,    38,     0,   253,
       0,   252,    38,     0,   253,     0,     0,     0,     0,   466,
     268,     0,     0,     0,     0,   268,    85,     0,     0,     0,
       0,     0,   297,     0,     0,    38,     0,     0,     0,    60,
       0,    60,     0,     0,     0,     0,     0,   298,     0,   298,
       0,     0,   298,     0,   296,   298,     0,   298,     0,   298,
       0,   298,     0,     0,     0,     0,   298,     0,     0,   298,
       0,     0,     0,     0,     0,   298,     0,     0,   135,   -87,
     -87,   -87,   -87,   -87,   139,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   146,    60,     0,     0,   -87,   135,
       0,     0,   -87,   362,   363,   364,   365,   -57,   -57,   -57,
     -57,     0,     0,   161,     0,   163,   -57,     0,     0,     0,
     -57,    60,     0,   -88,   -88,   -88,   -88,   -88,   167,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
       0,     0,   -88,     0,    60,     0,   -88,     0,     0,   297,
       0,   297,     0,     0,   297,     0,     0,   297,     0,   297,
       0,   297,     0,   297,     0,     0,     0,     0,   297,   319,
       0,   297,    60,     0,     0,     0,     0,   297,     0,     0,
     268,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,   337,   -89,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,   268,     0,   252,     0,   -89,     0,     0,   357,   -89,
     391,   392,   393,   394,   -56,   -56,   -56,   -56,     0,   252,
       0,   -56,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   378,   436,     0,   252,
       0,   -90,     0,     0,   135,   -90,     0,     0,     0,     0,
       0,     0,   386,     0,     0,     0,     0,   454,     0,     0,
       0,   457,     0,   252,     0,     0,   268,     0,   252,     0,
       0,     0,    70,    71,     0,   135,   404,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   479,     0,     0,   268,
       0,     0,   419,   -59,   -97,   -97,   -97,   -97,   -97,     0,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,
       0,     0,   437,   -97,     0,     0,     0,   -97,     0,   -98,
     -98,   -98,   -98,   -98,     0,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   455,   456,     0,   458,     0,   -98,     0,
     135,   462,   -98,   -99,   -99,   -99,   -99,   -99,     0,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,     0,     0,     0,
       0,     0,   -99,   135,     0,     0,   -99,   -63,   -63,   368,
     369,   370,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   487,     0,     0,     0,     0,   -63,     0,     0,     0,
     -63,     0,     0,     0,     0,     0,     0,     0,     0,   491,
       0,     0,     0,   296,     0,   296,     0,     0,   296,     0,
       0,   296,     0,   296,     0,   296,     0,   296,     0,     0,
       0,     0,   296,     0,   502,   296,     0,   366,   367,     0,
       0,   296,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,     0,   503,     0,     0,   504,   -61,     0,     0,   507,
     -61,     0,     0,   510,     0,   511,     0,   512,     0,     0,
     513,     0,     0,     0,     0,     0,   520,     0,     0,   523,
       0,     0,     0,     0,     0,   532,     0,   533,     0,   534,
       0,     0,   537,     0,     0,   540,     0,   541,     0,   542,
       0,   543,     0,     0,     0,     0,   548,     0,     0,   550,
       0,     0,     0,     0,     0,   555,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,    70,    71,
       0,     0,   -31,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -31,     0,     0,   -31,     0,     0,     0,   -61,
       0,     0,   -31,   -31,   -31,   -66,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,   -66,     0,     0,     0,   -66,   -70,
     -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,   -70,     0,
       0,     0,   -70,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,     0,   -75,     0,     0,     0,   -75,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,     0,   -74,     0,     0,     0,
     -74,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,
     -73,     0,     0,     0,   -73,   -71,   -71,   -71,   -71,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,   -71,     0,     0,     0,   -71,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,   -76,   -72,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,   -72,     0,     0,     0,   -72,   -64,   -64,   368,
     369,   370,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,     0,     0,   -64,     0,     0,     0,
     -64,   -65,   -65,   368,   369,   370,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,
     -65,     0,     0,     0,   -65,   -67,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,     0,   -67,     0,     0,     0,   -67,   -68,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,   -68,     0,
       0,     0,   -68,   -69,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,     0,   -69,     0,     0,     0,   -69,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,   -81,     0,     0,     0,
     -81,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
     -78,     0,     0,     0,   -78,   -79,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,     0,   -79,     0,     0,     0,   -79,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,   -80,     0,
       0,     0,   -80,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,   332,
     -77,   333,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,   316,     0,   317,   -77,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,   374,     0,    57,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,   381,   -77,
     382,     0,     0,     0,   -77,   -78,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,   -78,     0,     0,   -78,     0,   -78,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,   -79,     0,     0,   -79,     0,
     -79,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,   -80,     0,
       0,   -80,     0,   -80,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,   -76,     0,     0,    90,   -76,   -76,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,   -76,   375,
     -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,   -76,     0,     0,
       0,     0,   400,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,     0,   -78,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,   -78,     0,     0,     0,
       0,   -78,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
       0,   -79,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,   -79,     0,     0,     0,     0,
     -79,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
     -80,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,   -80,     0,     0,     0,     0,   -80,
     -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,    56,     0,    57,     0,
       0,   -77,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -86,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,   -88,   -88,   -88,   -88,   -88,   -87,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -88,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,   -90,   -90,   -90,   -90,
     -90,   -89,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,   -63,   -63,    72,    73,    74,   -90,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -63,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,   -70,   -70,   -70,   -70,   -70,   -66,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -70,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -76,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -75,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -74,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -71,   -71,   -71,   -71,   -71,   -73,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -71,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,   -64,   -64,    72,    73,
      74,   -72,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,   -65,   -65,    72,    73,    74,   -64,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -65,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,   -68,   -68,   -68,   -68,   -68,   -67,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -68,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -69,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -78,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -81,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,   -80,   -80,   -80,   -80,   -80,   -79,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
     -97,   -97,   -97,   -97,   -97,   -80,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,     0,     0,   -98,   -98,   -98,   -98,
     -98,   -97,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
       0,     0,   -99,   -99,   -99,   -99,   -99,   -98,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -99,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,   421,   -77,   333,     0,   -77,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,   -86,     0,     0,   -86,
     -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,   -87,     0,     0,
     -87,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,   -88,     0,
       0,   -88,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,   -89,
       0,     0,   -89,   -90,   -90,   -90,   -90,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,
     -90,     0,     0,   -90,   -97,   -97,   -97,   -97,   -97,     0,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,
       0,   -97,     0,     0,   -97,   -98,   -98,   -98,   -98,   -98,
       0,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,     0,
       0,     0,   -98,     0,     0,   -98,   -99,   -99,   -99,   -99,
     -99,     0,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
       0,     0,     0,   -99,     0,     0,   -99,   -63,   -63,   348,
     349,   350,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,   -63,     0,     0,   -63,   -66,   -66,
     -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,   -66,     0,     0,   -66,   -70,
     -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,   -70,     0,     0,   -70,
     -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,   -75,     0,     0,
     -75,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,   -74,     0,
       0,   -74,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,   -73,
       0,     0,   -73,   -71,   -71,   -71,   -71,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
     -71,     0,     0,   -71,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,   -76,     0,     0,   -76,   -72,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,   -72,     0,     0,   -72,   -64,   -64,   348,   349,
     350,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,   -64,     0,     0,   -64,   -65,   -65,   348,
     349,   350,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,   -65,     0,     0,   -65,   -67,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,   -67,     0,     0,   -67,   -68,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,   -68,     0,     0,   -68,
     -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,   -69,     0,     0,
     -69,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,   -81,     0,
       0,   -81,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,   -78,
       0,     0,   -78,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
     -79,     0,     0,   -79,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   346,
     347,   -80,     0,     0,   -80,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,     0,   346,   347,   -60,     0,     0,   -60,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,   346,
     347,   -62,     0,     0,   -62,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,   346,   347,   -59,     0,     0,   -59,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
       0,   -61,     0,     0,   -61,   -77,   -77,   -77,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,   373,     0,   317,   -77,   -86,   -86,   -86,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
     -87,   -87,   -87,   -87,   -86,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -87,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,
     -89,   -89,   -88,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -90,   -90,   -90,   -90,   -90,   -89,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -97,   -97,   -97,   -97,   -97,
     -90,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -98,
     -98,   -98,   -98,   -98,   -97,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -99,   -99,   -99,   -99,   -99,   -98,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -63,   -63,   329,
     330,   331,   -99,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -66,   -66,   -66,   -66,   -66,   -63,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -70,   -70,   -70,   -70,   -70,
     -66,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -75,
     -75,   -75,   -75,   -75,   -70,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -74,   -74,   -74,   -74,   -74,   -75,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -73,   -73,   -73,
     -73,   -73,   -74,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -76,   -76,   -76,   -76,   -76,   -73,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -71,   -71,   -71,   -71,   -71,
     -76,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,
     -72,   -72,   -72,   -72,   -71,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -64,   -64,   329,   330,   331,   -72,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -65,   -65,   329,
     330,   331,   -64,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -67,   -67,   -67,   -67,   -67,   -65,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -67,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,
     -69,   -69,   -69,   -69,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -81,   -81,   -81,   -81,   -81,   -69,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -78,   -78,   -78,
     -78,   -78,   -81,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -79,   -79,   -79,   -79,   -79,   -78,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -80,   -80,   -80,   -80,   -80,
     -79,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   327,
     328,     0,     0,     0,   -80,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   327,   328,     0,     0,     0,   -58,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   327,   328,     0,
       0,     0,   -60,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   327,   328,     0,     0,     0,   -62,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   327,   328,     0,     0,     0,
     -59,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -77,
     -77,   -77,   -77,   -77,   -61,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,   464,   -77,   382,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,   -86,   -87,   -87,   -87,   -87,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,   -87,   -88,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,   -88,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,   -89,
     -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,     0,     0,   -90,   -97,   -97,
     -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,     0,     0,     0,   -97,   -98,   -98,   -98,   -98,
     -98,     0,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
       0,     0,     0,   -98,   -99,   -99,   -99,   -99,   -99,     0,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,     0,     0,
       0,   -99,   -63,   -63,   397,   398,   399,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -63,
     -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,   -66,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,   -70,   -75,   -75,   -75,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,   -75,   -74,   -74,   -74,   -74,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,   -74,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,   -73,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,   -71,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,   -76,   -72,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,   -72,   -64,   -64,   397,   398,   399,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,   -64,   -65,   -65,   397,   398,   399,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,
     -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,   -67,   -68,   -68,
     -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,   -68,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,   -69,   -81,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,   -81,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,   -78,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,   -79,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   395,   396,     0,   -80,     0,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   395,   396,     0,   -58,
       0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     395,   396,     0,   -60,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   395,   396,     0,   -62,     0,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   395,   396,
       0,   -59,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,   -61,   362,   363,   364,   365,
     -56,   -56,   -56,   -56,     0,     0,     0,     0,     0,   -56,
       0,     0,     0,   -56
};

static const yytype_int16 yycheck[] =
{
       0,   129,     0,   284,     3,    36,    37,     5,   159,    34,
      35,    36,    37,    11,    45,   317,   110,     0,    43,    45,
      17,    18,    19,    20,    24,    22,    23,   178,    11,    36,
      37,   333,    36,    37,   315,    35,    36,     3,    45,    43,
      34,    35,    36,    37,    43,    36,    43,    39,    47,    43,
      36,   353,    36,    47,    45,    47,    54,    57,   152,    45,
       3,    45,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   377,    40,   171,    42,   173,
     382,    45,    46,     0,     3,     4,     5,     6,     7,     8,
      90,    45,    46,   187,     3,     4,     5,     6,     7,     8,
      17,    18,    19,    20,    21,    22,    23,    36,   108,     3,
      29,     3,    41,   111,    36,   115,    34,    35,    36,    37,
      29,    43,     3,    42,   124,    47,    45,    45,    36,   129,
      49,    50,    51,    42,    43,    43,    34,    35,    36,    37,
      49,    50,    51,   143,     3,   145,   144,    45,   148,    39,
      17,    18,    19,    20,    21,    22,    23,    47,   158,    45,
      46,     3,     4,     5,     6,     7,     8,     9,    10,    38,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    49,    50,    51,    41,     3,    29,    44,    30,
      31,    32,    33,    34,    35,    36,    37,    39,   198,   199,
      42,     3,    43,    36,    37,    39,    47,    49,    50,    51,
      43,    47,    48,    47,    47,     3,     4,     5,     6,     7,
       8,     9,    10,    48,    12,   225,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    39,    34,    35,    36,
      37,    29,    47,    48,    47,    39,    43,   247,   248,     0,
      47,    39,   380,    47,    42,     3,     4,     5,     6,     7,
       8,    49,    50,    51,   264,    39,    17,    18,    19,    20,
      21,    22,    23,    47,    41,   403,   276,    44,    36,    37,
      39,    29,    36,    37,   284,    43,    36,    41,    47,    47,
      44,   291,   292,    43,    42,    47,    48,    47,    39,    36,
      37,    49,    50,    51,    41,    40,    47,    44,     3,     4,
       5,     6,     7,     8,    36,   315,    45,   317,     0,    41,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,    42,   333,    29,    17,    18,    19,    20,    21,
      22,    23,    34,    35,    36,    37,    45,    42,    41,    41,
      36,    37,    44,   353,    49,    50,    51,    43,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,    24,    36,    41,   375,     8,   377,    41,    36,
     380,    44,   382,    35,    36,    43,    43,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,    36,    40,   403,    38,    57,    41,    45,    46,    44,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     4,     5,     6,     7,     8,     3,     4,
       5,     6,     7,     8,     9,    10,     3,    12,    90,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    43,
      34,    35,    36,    37,    29,    43,   108,    41,    43,    47,
      44,     0,    47,   115,    39,    36,    37,    42,    36,    37,
      41,    43,   124,    41,    49,    50,    51,   129,    17,    18,
      19,    20,    21,    22,    23,    34,    35,    36,    37,    41,
      45,   143,    44,   145,    43,    43,   148,    41,    44,    47,
      44,    24,    25,    26,    27,    28,   158,    30,    31,    32,
      33,    34,    35,    36,    37,    41,     8,   517,    44,   519,
      43,    42,   522,    46,    47,   525,    43,   527,    42,   529,
      47,   531,    17,    18,    19,    20,   536,    22,    23,   539,
      42,    34,    35,    36,    37,   545,   198,   199,    41,    45,
      46,     3,     4,     5,     6,     7,     8,     9,    10,    42,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   224,   225,    43,    45,    46,    29,    47,    30,
      31,    32,    33,    34,    35,    36,    37,    39,    43,    43,
      42,    38,    47,    47,    45,   247,   248,    49,    50,    51,
      45,    46,     3,     4,     5,     6,     7,     8,     9,    10,
      42,    12,   264,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    43,   276,    43,    43,    47,    29,    47,
      47,    43,   284,    43,     0,    47,    45,    47,    39,   291,
     292,    42,     4,     5,     6,     7,     8,    45,    49,    50,
      51,    17,    18,    19,    20,    21,    22,    23,    45,    34,
      35,    36,    37,   315,    41,   317,    41,    44,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
      43,   333,    41,     3,    47,    44,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
      43,   353,    41,    43,    47,    44,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
      43,    45,    43,   375,    47,   377,    47,    43,   380,    41,
     382,    47,    44,    42,     3,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,    43,
       3,   403,    24,    25,    26,    27,    28,    24,    30,    31,
      32,    33,    34,    35,    36,    37,     0,    43,    35,    36,
      40,    43,    42,    43,    46,    47,    41,    41,    41,    44,
      44,    44,    49,    17,    18,    19,    20,    21,    22,    23,
      57,    41,    43,    41,    44,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    41,    41,
      45,    44,    44,     3,     4,     5,     6,     7,     8,     9,
      10,    43,    12,    90,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    41,    43,    42,    44,   105,    29,
      41,   108,    41,    44,    41,    44,    38,    44,   115,    39,
      41,    45,    42,    44,    11,    41,    45,   124,    44,    49,
      50,    51,   129,    41,     3,   517,    44,   519,    43,    43,
     522,    43,    43,   525,    43,   527,   143,   529,   145,   531,
      43,   148,    43,    43,   536,    43,    11,   539,    43,    43,
      43,   158,   159,   545,    43,    43,    43,     3,     4,     5,
       6,     7,     8,     3,     4,     5,     6,     7,     8,     9,
      10,   178,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    43,    43,    43,    43,    43,    29,
      43,   198,   199,    43,    43,    43,    42,    41,    43,    39,
      43,    43,    42,    49,    50,    51,    41,    41,    41,    49,
      50,    51,    41,    41,    41,    41,    41,    41,   225,     3,
       4,     5,     6,     7,     8,     9,    10,   111,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     247,   248,   115,    -1,    -1,    29,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    39,    -1,   264,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    -1,   276,
      -1,    -1,    -1,    29,    -1,    -1,    -1,   284,    -1,    -1,
      -1,    -1,    -1,    -1,   291,   292,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,   314,   315,    -1,
     317,     0,    -1,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,    -1,   333,    29,    17,    18,
      19,    20,    21,    22,    23,    -1,    17,    18,    19,    20,
      42,    22,    23,    -1,    -1,    -1,   353,    49,    50,    51,
      -1,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,    24,    -1,    -1,   375,    -1,
     377,    -1,    -1,   380,    -1,   382,    35,    36,    -1,    -1,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,    -1,    -1,   403,    -1,    57,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    90,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,   108,
       3,     4,     5,     6,     7,     8,   115,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,   124,    -1,    49,    50,    51,
     129,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,    -1,   145,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    24,    25,    49,    50,    51,   158,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
     517,    -1,   519,    43,    -1,   522,    -1,    47,   525,    -1,
     527,    -1,   529,    -1,   531,    -1,    -1,    -1,    -1,   536,
      -1,    -1,   539,    -1,    -1,    -1,    -1,    -1,   545,   198,
     199,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   224,   225,    -1,    -1,    -1,
      29,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,   247,   248,
      49,    50,    51,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,   264,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,   276,    -1,    -1,
      -1,    29,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,
      -1,    39,   291,   292,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,   315,    -1,   317,     0,
      -1,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    -1,   333,    29,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    42,   348,
     349,   350,    -1,    -1,   353,    49,    50,    51,    -1,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,    24,    -1,    -1,   375,    -1,   377,    -1,
      -1,   380,    -1,   382,    35,    36,    -1,    -1,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,    -1,    -1,   403,    -1,    57,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    90,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    29,    -1,   108,    -1,    -1,
      -1,    -1,     0,    -1,   115,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,   124,    -1,    49,    50,    51,   129,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,   143,    -1,   145,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,   158,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,   517,    -1,
     519,    43,    -1,   522,    46,    47,   525,    -1,   527,    -1,
     529,    -1,   531,    -1,    -1,    -1,    -1,   536,    -1,    -1,
     539,    -1,    -1,    -1,    -1,    -1,   545,   198,   199,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,   225,    -1,    -1,    -1,    29,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,   247,   248,    49,    50,
      51,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,   264,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,   276,    -1,    -1,    -1,    29,
      -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,    39,
     291,   292,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,   315,    -1,   317,     0,    -1,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,    -1,   333,    29,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,   353,    49,    50,    51,    -1,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,    24,    -1,    -1,   375,    -1,   377,    -1,    -1,   380,
      -1,   382,    35,    36,    -1,    -1,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
      -1,    -1,   403,    -1,    57,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    90,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   108,    -1,    -1,    -1,    -1,
       0,    -1,   115,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,   124,    -1,    49,    50,    51,   129,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
     143,    -1,   145,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,   158,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,   517,    -1,   519,    43,
      -1,   522,    46,    47,   525,    -1,   527,    -1,   529,    -1,
     531,    -1,    -1,    -1,    -1,   536,    -1,    -1,   539,    -1,
      -1,    -1,    -1,    -1,   545,   198,   199,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,   225,    -1,    -1,    -1,    29,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    39,    -1,    -1,    42,
      -1,    -1,    -1,    45,   247,   248,    49,    50,    51,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,   264,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,   276,    -1,    -1,    -1,    29,    -1,    -1,
      -1,   284,    -1,    -1,    -1,    -1,    -1,    39,   291,   292,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,   315,    -1,   317,    -1,    -1,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    -1,
     333,    29,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    42,    -1,    -1,    -1,    45,    -1,
     353,    49,    50,    51,    -1,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,    24,
      -1,    -1,   375,    -1,   377,    -1,    -1,   380,    -1,   382,
      -1,    36,    -1,    -1,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,    -1,    -1,
     403,    -1,    57,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    90,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    29,    -1,   108,     3,     4,     5,     6,     7,     8,
     115,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,   124,
      -1,    49,    50,    51,   129,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,
     145,    -1,    -1,    42,    -1,    -1,    -1,    -1,    24,    25,
      49,    50,    51,   158,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,   517,    -1,   519,    43,    -1,   522,
      -1,    47,   525,    -1,   527,    -1,   529,    -1,   531,    -1,
      -1,    -1,    -1,   536,    -1,    -1,   539,    -1,    -1,    -1,
      -1,    -1,   545,    -1,   199,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
     225,    -1,    -1,    -1,    29,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    39,    -1,    -1,    42,    -1,    43,
      -1,    -1,    -1,   248,    49,    50,    51,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,   264,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,   276,    -1,    -1,    -1,    29,    -1,    -1,    -1,   284,
      -1,    -1,    -1,    -1,    -1,    39,    -1,   292,    42,    -1,
      -1,    -1,    24,    25,    -1,    49,    50,    51,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
     315,    -1,   317,    45,    -1,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    24,    25,    -1,    -1,   333,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,   346,   347,    43,    -1,    -1,    -1,    47,   353,    -1,
      -1,    -1,    -1,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,    -1,    24,    -1,   371,    -1,    -1,    -1,
     375,    -1,   377,    -1,    -1,   380,    36,   382,    -1,    -1,
      -1,    -1,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,    -1,    -1,    -1,   400,    -1,    57,   403,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      90,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    29,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,   124,    -1,    49,    50,    51,   129,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      24,    25,    -1,   143,    43,   145,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,   158,    43,
      -1,    -1,    -1,    47,    30,    31,    32,    33,    34,    35,
      36,    37,   517,    -1,   519,    41,    -1,   522,    44,    -1,
     525,    -1,   527,    -1,   529,    -1,   531,    -1,    -1,    -1,
      -1,   536,    -1,    -1,   539,    -1,    -1,    -1,    -1,   199,
     545,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,   225,    -1,    -1,    -1,    29,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    39,
      -1,    -1,    42,    -1,    43,    -1,    -1,    -1,   248,    49,
      50,    51,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,   264,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,   276,    -1,    -1,    -1,
      29,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,
      39,    -1,   292,    42,    -1,    -1,    -1,    24,    25,    -1,
      49,    50,    51,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,   315,    -1,   317,    45,    -1,
     320,   321,   322,   323,   324,   325,   326,    -1,    24,    25,
      26,    27,    28,   333,    30,    31,    32,    33,    34,    35,
      36,    37,   342,   343,   344,   345,    -1,    43,    -1,    -1,
      -1,    47,    -1,   353,    -1,    -1,    -1,    -1,   358,   359,
     360,   361,   362,   363,   364,   365,    24,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,   375,    -1,   377,    36,    -1,
     380,    -1,   382,    -1,    -1,    -1,    -1,   387,   388,   389,
     390,   391,   392,   393,   394,    -1,    -1,    -1,    -1,    57,
     400,    -1,    -1,   403,    62,    63,    64,    65,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    90,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    24,    -1,    -1,    -1,    29,    -1,
     108,    -1,    -1,    -1,    -1,    -1,    36,   115,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,   124,    -1,    49,    50,
      51,   129,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,   143,    -1,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
     158,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      90,    40,    -1,    42,    43,    -1,    -1,   517,    47,   519,
      -1,    -1,   522,    -1,    -1,   525,    -1,   527,   108,   529,
      -1,   531,    -1,    -1,    -1,   115,   536,    -1,    -1,   539,
      -1,   199,    -1,    -1,   124,   545,    24,    -1,    -1,   129,
      30,    31,    32,    33,    34,    35,    36,    37,    36,    -1,
      -1,    41,    -1,   143,    44,   145,    -1,   225,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,   158,    57,
      41,    -1,    -1,    44,    62,    24,    25,    26,    27,    28,
     248,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    42,    43,    -1,   264,    46,    47,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,   276,   199,
      -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,
     108,    -1,    -1,    -1,   292,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,   124,    -1,    -1,    -1,
      -1,   129,    -1,    -1,    -1,    -1,    -1,   315,    -1,   317,
      -1,    -1,   320,   321,   322,   143,    -1,   145,   248,    -1,
      -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,
     158,    -1,   340,   341,   264,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,   353,   276,    41,    -1,    -1,
     358,   359,   360,   361,   284,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   292,   371,    -1,    -1,    -1,   375,    -1,   377,
      -1,   199,   380,    -1,   382,    -1,    -1,    -1,    -1,   387,
     388,   389,   390,    -1,    -1,   315,    -1,   317,    -1,    -1,
     320,    -1,   400,    -1,    -1,   403,    -1,   225,    -1,    -1,
      -1,    -1,    -1,   333,    24,    25,    26,    27,    28,   339,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
     248,    41,    -1,   353,    44,    -1,    46,    -1,   358,   359,
      -1,    -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,   375,    -1,   377,   276,    -1,
     380,    -1,   382,    -1,    -1,    -1,   284,   387,   388,    -1,
      24,    -1,    -1,    -1,   292,    -1,    -1,    -1,    24,    25,
     400,    -1,    36,   403,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,   315,    44,   317,
      -1,    24,    25,    57,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,   333,    -1,    -1,    -1,   517,
     338,   519,    45,    -1,   522,    -1,    -1,   525,    -1,   527,
      -1,   529,    -1,   531,    -1,   353,    90,    -1,   536,    -1,
     358,   539,    -1,    -1,    -1,    -1,    -1,   545,    -1,    -1,
      -1,    -1,    -1,   371,   108,    -1,    36,   375,    -1,   377,
      -1,   115,   380,    -1,   382,    -1,    -1,    -1,    -1,   387,
     124,    -1,    -1,    -1,    -1,   129,    56,    -1,    -1,    -1,
      -1,    -1,   400,    -1,    -1,   403,    -1,    -1,    -1,   143,
      -1,   145,    -1,    -1,    -1,    -1,    -1,   517,    -1,   519,
      -1,    -1,   522,    -1,   158,   525,    -1,   527,    -1,   529,
      -1,   531,    -1,    -1,    -1,    -1,   536,    -1,    -1,   539,
      -1,    -1,    -1,    -1,    -1,   545,    -1,    -1,   108,    24,
      25,    26,    27,    28,   114,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,   124,   199,    -1,    -1,    43,   129,
      -1,    -1,    47,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,   143,    -1,   145,    43,    -1,    -1,    -1,
      47,   225,    -1,    24,    25,    26,    27,    28,   158,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    43,    -1,   248,    -1,    47,    -1,    -1,   517,
      -1,   519,    -1,    -1,   522,    -1,    -1,   525,    -1,   527,
      -1,   529,    -1,   531,    -1,    -1,    -1,    -1,   536,   199,
      -1,   539,   276,    -1,    -1,    -1,    -1,   545,    -1,    -1,
     284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,   315,    -1,   317,    -1,    43,    -1,    -1,   248,    47,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,   333,
      -1,    41,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,   276,   351,    -1,   353,
      -1,    43,    -1,    -1,   284,    47,    -1,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,   375,    -1,   377,    -1,    -1,   380,    -1,   382,    -1,
      -1,    -1,    24,    25,    -1,   315,   316,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,   400,    -1,    -1,   403,
      -1,    -1,   332,    45,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,   352,    43,    -1,    -1,    -1,    47,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,   373,   374,    -1,   376,    -1,    43,    -1,
     380,   381,    47,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    43,   403,    -1,    -1,    47,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,   421,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   439,
      -1,    -1,    -1,   517,    -1,   519,    -1,    -1,   522,    -1,
      -1,   525,    -1,   527,    -1,   529,    -1,   531,    -1,    -1,
      -1,    -1,   536,    -1,   464,   539,    -1,    24,    25,    -1,
      -1,   545,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,   482,    -1,    -1,   485,    43,    -1,    -1,   489,
      47,    -1,    -1,   493,    -1,   495,    -1,   497,    -1,    -1,
     500,    -1,    -1,    -1,    -1,    -1,   506,    -1,    -1,   509,
      -1,    -1,    -1,    -1,    -1,   515,    -1,   517,    -1,   519,
      -1,    -1,   522,    -1,    -1,   525,    -1,   527,    -1,   529,
      -1,   531,    -1,    -1,    -1,    -1,   536,    -1,    -1,   539,
      -1,    -1,    -1,    -1,    -1,   545,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    24,    25,
      -1,    -1,    29,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    39,    -1,    -1,    42,    -1,    -1,    -1,    45,
      -1,    -1,    49,    50,    51,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      47,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      47,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      47,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,    -1,    44,    -1,    46,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    42,    43,    -1,    -1,    46,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    42,    -1,    -1,
      45,    46,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      42,    -1,    -1,    -1,    46,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    -1,    -1,    44,    -1,    46,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,
      46,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,
      -1,    44,    -1,    46,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    46,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    46,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    46,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    46,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    46,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      46,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    46,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    42,    -1,
      -1,    45,    24,    25,    26,    27,    28,    -1,    30,    31,
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
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,
      -1,    44,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,    -1,    44,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    -1,    -1,    44,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    24,
      25,    41,    -1,    -1,    44,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    24,    25,    41,    -1,    -1,    44,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    24,
      25,    41,    -1,    -1,    44,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    24,    25,    41,    -1,    -1,    44,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,    -1,    44,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    42,    43,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    24,
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
      33,    34,    35,    36,    37,    24,    25,    -1,    -1,    -1,
      43,    30,    31,    32,    33,    34,    35,    36,    37,    24,
      25,    26,    27,    28,    43,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,    42,    24,    25,
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
      36,    37,    24,    25,    -1,    41,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    24,    25,    -1,    41,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      24,    25,    -1,    41,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    24,    25,    -1,    41,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    24,    25,
      -1,    41,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    18,    19,    20,    21,    22,    23,    49,    50,
      51,    53,    54,    55,    56,    57,    59,    64,    89,    90,
      89,     0,    54,    45,    46,    46,    46,     3,     3,     3,
       4,     5,     6,     7,     8,    29,    42,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    88,    90,    38,
      58,    48,    60,    40,    42,    40,    40,    42,    82,    75,
      76,    84,    36,    37,    34,    35,    30,    31,    32,    33,
      24,    25,    26,    27,    28,    61,    88,    42,    41,    23,
      43,    65,    66,    89,    41,    75,    75,    86,    87,    43,
      46,    77,    78,    79,    79,    80,    80,    80,    80,    81,
      81,    82,    82,    82,    39,    47,     8,    62,    38,    67,
      43,    47,     3,    41,    44,    47,    43,    76,    88,    43,
      47,     9,    10,    12,    14,    15,    16,    39,    55,    68,
      69,    70,    71,    72,    74,    75,    89,    67,    66,    75,
      87,    44,     8,    42,    42,    42,    75,    42,    42,    45,
      39,    69,    13,    73,    45,    45,     3,    41,    44,    42,
      63,    75,    89,    75,     3,    83,    67,    75,    61,    47,
      48,    43,     3,    43,    43,    43,    41,    43,    42,    67,
      43,    67,    45,    45,    61,    11,    43,     3,    67,    49,
      50,    51,     3,     4,     5,     6,     7,     8,    29,    42,
      49,    50,    51,    77,    78,    79,    80,    81,    82,    83,
      85,    88,    90,     4,     5,     6,     7,     8,     3,     4,
       5,     6,     7,     8,    29,    42,    49,    50,    51,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    88,
      90,     3,     4,     5,     6,     7,     8,    29,    42,    49,
      50,    51,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    88,    90,    36,     3,    84,     3,    76,    84,
       3,     4,     5,     6,     7,     8,    42,    49,    50,    51,
      84,    85,    88,    90,    38,     3,     4,     5,     6,     7,
       8,    29,    42,    49,    50,    51,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    88,    90,     4,     5,
       6,     7,     8,    88,    47,    38,    40,    42,    82,    75,
      37,    34,    35,    30,    31,    32,    33,    24,    25,    26,
      27,    28,    40,    42,     3,    82,    84,    75,    36,    37,
      34,    35,    30,    31,    32,    33,    24,    25,    26,    27,
      28,    46,    40,    42,     3,    82,    84,    75,    36,    37,
      34,    35,    30,    31,    32,    33,    24,    25,    26,    27,
      28,    46,    77,    40,    40,    46,    40,    42,    75,    39,
      68,    40,    42,     3,    82,    84,    75,    36,    37,    34,
      35,    30,    31,    32,    33,    24,    25,    26,    27,    28,
      46,    88,    39,    68,    75,    86,    43,    78,    79,    79,
      80,    80,    80,    80,    81,    81,    82,    82,    82,    75,
      86,    40,    43,    77,    78,    79,    79,    80,    80,    80,
      80,    81,    81,    82,    82,    82,    76,    75,    86,    40,
      43,    77,    78,    79,    79,    80,    80,    80,    80,    81,
      81,    82,    82,    82,    76,    75,    75,    76,    75,    86,
      43,    39,    75,    86,    40,    43,    77,    78,    79,    79,
      80,    80,    80,    80,    81,    81,    82,    82,    82,    76,
      39,    41,    44,    43,    41,    44,    43,    75,    41,    44,
      43,    75,    41,    44,    41,    44,    41,    44,    43,    41,
      44,    43,    75,    75,    75,    41,    44,    75,    41,    44,
      75,    75,    75,    75,    41,    44,    41,    44,    41,    44,
      75,    41,    44,    75,    41,    44,    41,    44,    41,    44,
      41,    44,    75,    75,    75,    41,    44,    75,    41,    44,
      75,    75,    75,    75,    41,    44,    41,    41,    75,    41,
      75,    41,    41,    41,    41,    75,    41,    41,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    53,    54,    54,    55,    55,    55,
      55,    55,    55,    56,    57,    58,    59,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    71,    72,    73,    73,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    78,    79,    79,
      79,    79,    79,    80,    80,    80,    81,    81,    81,    81,
      82,    82,    83,    83,    83,    83,    83,    84,    84,    84,
      84,    85,    86,    86,    87,    87,    88,    88,    88,    88,
      88,    89,    89,    89,    89,    89,    89,    90,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,     3,     1,
       3,     1,     3,     2,     4,     3,     5,     7,     1,     3,
       1,     3,     3,     5,     6,     5,     1,     3,     2,     1,
       2,     3,     1,     2,     2,     2,     1,     1,     2,     5,
       5,     5,     8,     2,     5,     2,     0,     1,     2,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     3,     1,     1,     1,     1,     1,     4,     6,
       8,     4,     1,     0,     3,     1,     1,     1,     1,     1,
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
#line 115 "flex_bison/porygon_syntax.y"
                                                    {printf("Found declaration.\n");}
#line 2868 "src/parser.c"
    break;

  case 3:
#line 116 "flex_bison/porygon_syntax.y"
                                                    {printf("Found recursive declaration.\n");}
#line 2874 "src/parser.c"
    break;

  case 5:
#line 121 "flex_bison/porygon_syntax.y"
                                                    {printf("Found varDeclaration\n");}
#line 2880 "src/parser.c"
    break;

  case 6:
#line 122 "flex_bison/porygon_syntax.y"
                                                    {printf("Found functDelcaration\n");}
#line 2886 "src/parser.c"
    break;

  case 7:
#line 126 "flex_bison/porygon_syntax.y"
                                                    {printf("Found varSimpleDeclaration\n");}
#line 2892 "src/parser.c"
    break;

  case 8:
#line 127 "flex_bison/porygon_syntax.y"
                                                    {printf("Found varSimpleDeclaration with Definition\n");}
#line 2898 "src/parser.c"
    break;

  case 9:
#line 128 "flex_bison/porygon_syntax.y"
                                                    {printf("Found arrayDeclaration\n");}
#line 2904 "src/parser.c"
    break;

  case 10:
#line 129 "flex_bison/porygon_syntax.y"
                                                    {printf("Found arrayDeclaration with Definition\n");}
#line 2910 "src/parser.c"
    break;

  case 11:
#line 130 "flex_bison/porygon_syntax.y"
                                                    {printf("Found tableDeclaration\n");}
#line 2916 "src/parser.c"
    break;

  case 12:
#line 131 "flex_bison/porygon_syntax.y"
                                                    {printf("Found tableDeclaration with Definition\n");}
#line 2922 "src/parser.c"
    break;

  case 13:
#line 136 "flex_bison/porygon_syntax.y"
                                                    {printf("[varSimpleDec] Found type specifier and ID\n");}
#line 2928 "src/parser.c"
    break;

  case 14:
#line 140 "flex_bison/porygon_syntax.y"
                                                    {printf("[arrayDec] Found ARR type specifier and ID []\n");}
#line 2934 "src/parser.c"
    break;

  case 15:
#line 144 "flex_bison/porygon_syntax.y"
                                                  {printf("Found ARR DEF { }\n");}
#line 2940 "src/parser.c"
    break;

  case 16:
#line 148 "flex_bison/porygon_syntax.y"
                                                            {printf("Found table type with type specification ID[]\n");}
#line 2946 "src/parser.c"
    break;

  case 17:
#line 152 "flex_bison/porygon_syntax.y"
                                                                         {printf("Table definition with PIPES\n");}
#line 2952 "src/parser.c"
    break;

  case 18:
#line 156 "flex_bison/porygon_syntax.y"
                                                    {printf("Found a constant\n");}
#line 2958 "src/parser.c"
    break;

  case 19:
#line 157 "flex_bison/porygon_syntax.y"
                                                      {printf("Found a recursive constant list\n");}
#line 2964 "src/parser.c"
    break;

  case 20:
#line 161 "flex_bison/porygon_syntax.y"
                                                    {printf("Found a string constant\n");}
#line 2970 "src/parser.c"
    break;

  case 21:
#line 162 "flex_bison/porygon_syntax.y"
                                                         {printf("Found a recursive definition of string\n");}
#line 2976 "src/parser.c"
    break;

  case 22:
#line 166 "flex_bison/porygon_syntax.y"
                                                    {printf("Found a definition of column\n");}
#line 2982 "src/parser.c"
    break;

  case 23:
#line 167 "flex_bison/porygon_syntax.y"
                                                              {printf("Found a multiple column definition.\n");}
#line 2988 "src/parser.c"
    break;

  case 24:
#line 171 "flex_bison/porygon_syntax.y"
                                                                                    {printf("Found a complete function delcaration.\n");}
#line 2994 "src/parser.c"
    break;

  case 25:
#line 172 "flex_bison/porygon_syntax.y"
                                                                      {printf("Found a no parameters function delcaration.\n");}
#line 3000 "src/parser.c"
    break;

  case 26:
#line 176 "flex_bison/porygon_syntax.y"
                                                    {printf("Found a parameter declaration\n");}
#line 3006 "src/parser.c"
    break;

  case 27:
#line 177 "flex_bison/porygon_syntax.y"
                                                   {printf("Found a multiple parameter declaration\n");}
#line 3012 "src/parser.c"
    break;

  case 28:
#line 181 "flex_bison/porygon_syntax.y"
                                                    {printf("[paramDec] Found a type specifier and Identifier");}
#line 3018 "src/parser.c"
    break;

  case 29:
#line 182 "flex_bison/porygon_syntax.y"
                                                    {printf("[paramDec] Found a VOID");}
#line 3024 "src/parser.c"
    break;

  case 30:
#line 186 "flex_bison/porygon_syntax.y"
                                                {printf("Found {}\n");}
#line 3030 "src/parser.c"
    break;

  case 31:
#line 187 "flex_bison/porygon_syntax.y"
                                                {printf("Found a compoundStmt with Statements\n");}
#line 3036 "src/parser.c"
    break;

  case 32:
#line 191 "flex_bison/porygon_syntax.y"
                                                    {printf("Found statement\n");}
#line 3042 "src/parser.c"
    break;

  case 33:
#line 192 "flex_bison/porygon_syntax.y"
                                                    {printf("Found a recursive statement list\n");}
#line 3048 "src/parser.c"
    break;

  case 34:
#line 196 "flex_bison/porygon_syntax.y"
                                                    {printf("[State] Found a varDeclaration\n");}
#line 3054 "src/parser.c"
    break;

  case 35:
#line 197 "flex_bison/porygon_syntax.y"
                                                    {printf("[State] Found a expression\n");}
#line 3060 "src/parser.c"
    break;

  case 36:
#line 198 "flex_bison/porygon_syntax.y"
                                                    {printf("[State] Found a iterationStmt\n");}
#line 3066 "src/parser.c"
    break;

  case 37:
#line 199 "flex_bison/porygon_syntax.y"
                                                    {printf("[State] Found a conditionalStmt\n");}
#line 3072 "src/parser.c"
    break;

  case 38:
#line 200 "flex_bison/porygon_syntax.y"
                                                    {printf("[State] Found a returnStmt\n");}
#line 3078 "src/parser.c"
    break;

  case 39:
#line 201 "flex_bison/porygon_syntax.y"
                                                             {printf("[State] Found a read statement");}
#line 3084 "src/parser.c"
    break;

  case 40:
#line 202 "flex_bison/porygon_syntax.y"
                                                             {printf("[State] Found a write statement");}
#line 3090 "src/parser.c"
    break;

  case 41:
#line 206 "flex_bison/porygon_syntax.y"
                                                                 {printf("While\n");}
#line 3096 "src/parser.c"
    break;

  case 42:
#line 207 "flex_bison/porygon_syntax.y"
                                                                                              {printf("For\n");}
#line 3102 "src/parser.c"
    break;

  case 43:
#line 211 "flex_bison/porygon_syntax.y"
                                                    {printf("Conditional Statement\n");}
#line 3108 "src/parser.c"
    break;

  case 44:
#line 215 "flex_bison/porygon_syntax.y"
                                                              {printf("[CondStmt] If expr");}
#line 3114 "src/parser.c"
    break;

  case 45:
#line 219 "flex_bison/porygon_syntax.y"
                                                    {printf("[CondStmt] Else expr");}
#line 3120 "src/parser.c"
    break;

  case 46:
#line 220 "flex_bison/porygon_syntax.y"
                                                    {printf("[Condstmt] Empty else");}
#line 3126 "src/parser.c"
    break;

  case 47:
#line 224 "flex_bison/porygon_syntax.y"
                                                    {printf("Return\n");}
#line 3132 "src/parser.c"
    break;

  case 48:
#line 225 "flex_bison/porygon_syntax.y"
                                                    {printf("Return with expr\n");}
#line 3138 "src/parser.c"
    break;

  case 49:
#line 229 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] logicalOrExp\n");}
#line 3144 "src/parser.c"
    break;

  case 50:
#line 230 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] logicalOrExp with mutable\n");}
#line 3150 "src/parser.c"
    break;

  case 51:
#line 234 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] logicalAndExp\n");}
#line 3156 "src/parser.c"
    break;

  case 52:
#line 235 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] || \n");}
#line 3162 "src/parser.c"
    break;

  case 53:
#line 239 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] equalityExp\n");}
#line 3168 "src/parser.c"
    break;

  case 54:
#line 240 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] && \n");}
#line 3174 "src/parser.c"
    break;

  case 55:
#line 244 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] relationExp\n");}
#line 3180 "src/parser.c"
    break;

  case 56:
#line 245 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] == \n");}
#line 3186 "src/parser.c"
    break;

  case 57:
#line 246 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] != \n");}
#line 3192 "src/parser.c"
    break;

  case 58:
#line 250 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] sumExp\n");}
#line 3198 "src/parser.c"
    break;

  case 59:
#line 251 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] > \n");}
#line 3204 "src/parser.c"
    break;

  case 60:
#line 252 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] < \n");}
#line 3210 "src/parser.c"
    break;

  case 61:
#line 253 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] >= \n");}
#line 3216 "src/parser.c"
    break;

  case 62:
#line 254 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] <= \n");}
#line 3222 "src/parser.c"
    break;

  case 63:
#line 258 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] multExp\n");}
#line 3228 "src/parser.c"
    break;

  case 64:
#line 259 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] + \n");}
#line 3234 "src/parser.c"
    break;

  case 65:
#line 260 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] - \n");}
#line 3240 "src/parser.c"
    break;

  case 66:
#line 264 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] unaryExp\n");}
#line 3246 "src/parser.c"
    break;

  case 67:
#line 265 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] * \n");}
#line 3252 "src/parser.c"
    break;

  case 68:
#line 266 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] / \n");}
#line 3258 "src/parser.c"
    break;

  case 69:
#line 267 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] rem \n");}
#line 3264 "src/parser.c"
    break;

  case 70:
#line 271 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] baseValue\n");}
#line 3270 "src/parser.c"
    break;

  case 71:
#line 272 "flex_bison/porygon_syntax.y"
                                                    {printf("[Expr] ! \n");}
#line 3276 "src/parser.c"
    break;

  case 72:
#line 276 "flex_bison/porygon_syntax.y"
                                                    {printf("[baseValue] Expr in parentheses\n");}
#line 3282 "src/parser.c"
    break;

  case 74:
#line 278 "flex_bison/porygon_syntax.y"
                                                    {printf("[baseValue] Constant\n");}
#line 3288 "src/parser.c"
    break;

  case 75:
#line 279 "flex_bison/porygon_syntax.y"
                                                    {printf("[baseValue] Function Call\n");}
#line 3294 "src/parser.c"
    break;

  case 76:
#line 280 "flex_bison/porygon_syntax.y"
                                                    {printf("[baseValue] Mutable\n");}
#line 3300 "src/parser.c"
    break;

  case 77:
#line 284 "flex_bison/porygon_syntax.y"
                                                    {printf("Found Identifier\n");}
#line 3306 "src/parser.c"
    break;

  case 78:
#line 285 "flex_bison/porygon_syntax.y"
                                                    {printf("Found Identifier []\n");}
#line 3312 "src/parser.c"
    break;

  case 79:
#line 286 "flex_bison/porygon_syntax.y"
                                                               {printf("Found Identifier []\n");}
#line 3318 "src/parser.c"
    break;

  case 80:
#line 287 "flex_bison/porygon_syntax.y"
                                                                                 {printf("Found Identifier []\n");}
#line 3324 "src/parser.c"
    break;

  case 81:
#line 291 "flex_bison/porygon_syntax.y"
                                                    {printf("Function call\n");}
#line 3330 "src/parser.c"
    break;

  case 82:
#line 295 "flex_bison/porygon_syntax.y"
                                                    {printf("argList\n");}
#line 3336 "src/parser.c"
    break;

  case 83:
#line 296 "flex_bison/porygon_syntax.y"
                                                    {printf("Empty argument list\n");}
#line 3342 "src/parser.c"
    break;

  case 84:
#line 300 "flex_bison/porygon_syntax.y"
                                                    {printf("Multiple arguments list\n");}
#line 3348 "src/parser.c"
    break;

  case 85:
#line 301 "flex_bison/porygon_syntax.y"
                                                    {printf("Single arguments list\n");}
#line 3354 "src/parser.c"
    break;

  case 86:
#line 305 "flex_bison/porygon_syntax.y"
                                                    {printf("INTCONST\n");}
#line 3360 "src/parser.c"
    break;

  case 87:
#line 306 "flex_bison/porygon_syntax.y"
                                                    {printf("FLOATCONST\n");}
#line 3366 "src/parser.c"
    break;

  case 88:
#line 307 "flex_bison/porygon_syntax.y"
                                                    {printf("BOOLEANCONST\n");}
#line 3372 "src/parser.c"
    break;

  case 89:
#line 308 "flex_bison/porygon_syntax.y"
                                                    {printf("CHARCONST\n");}
#line 3378 "src/parser.c"
    break;

  case 90:
#line 309 "flex_bison/porygon_syntax.y"
                                                    {printf("STRINGCONST\n");}
#line 3384 "src/parser.c"
    break;

  case 91:
#line 313 "flex_bison/porygon_syntax.y"
                                                    {printf("CHAR_TYPE\n");}
#line 3390 "src/parser.c"
    break;

  case 92:
#line 314 "flex_bison/porygon_syntax.y"
                                                    {printf("INT_TYPE\n");}
#line 3396 "src/parser.c"
    break;

  case 93:
#line 315 "flex_bison/porygon_syntax.y"
                                                    {printf("FLOAT_TYPE\n");}
#line 3402 "src/parser.c"
    break;

  case 94:
#line 316 "flex_bison/porygon_syntax.y"
                                                    {printf("BOOL_TYPE\n");}
#line 3408 "src/parser.c"
    break;

  case 95:
#line 317 "flex_bison/porygon_syntax.y"
                                                    {printf("STRING_TYPE\n");}
#line 3414 "src/parser.c"
    break;

  case 96:
#line 318 "flex_bison/porygon_syntax.y"
                                                    {printf("VOID_TYPE\n");}
#line 3420 "src/parser.c"
    break;

  case 97:
#line 322 "flex_bison/porygon_syntax.y"
                                                    {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Invalid Identifier (size bigger than 32 characters). Line: %d Column: %d\n", line_num, column_num);
                                                        reset_pcolor();
                                                    }
#line 3430 "src/parser.c"
    break;

  case 98:
#line 327 "flex_bison/porygon_syntax.y"
                                                    {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Invalid char (more than one character). Line: %d Column: %d\n", line_num, column_num);
                                                        reset_pcolor();
                                                    }
#line 3440 "src/parser.c"
    break;

  case 99:
#line 332 "flex_bison/porygon_syntax.y"
                                                    {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Unknown Token. Line: %d Column: %d\n", line_num, column_num);
                                                        reset_pcolor();
                                                    }
#line 3450 "src/parser.c"
    break;


#line 3454 "src/parser.c"

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
#line 339 "flex_bison/porygon_syntax.y"


void yyerror(char const *msg) {
    red_print();
    printf("[ERR] (Line: %d, Column: %d) Found error %s\n", line_num, column_num, msg);
    reset_pcolor();
}
