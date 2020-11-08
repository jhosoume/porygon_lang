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

#line 104 "src/parser.c"

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
#line 127 "flex_bison/porygon_syntax.y"

int yylex(void);

#line 142 "src/parser.c"


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
#define YYLAST   6478

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  540

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
       0,   135,   135,   139,   140,   150,   151,   152,   156,   157,
     164,   165,   172,   173,   184,   195,   206,   210,   221,   231,
     232,   243,   244,   254,   255,   265,   275,   287,   288,   298,
     306,   310,   315,   319,   320,   330,   331,   332,   333,   334,
     335,   341,   347,   351,   358,   370,   380,   390,   396,   404,
     409,   418,   419,   429,   430,   440,   441,   451,   452,   459,
     469,   470,   477,   484,   491,   501,   502,   509,   519,   520,
     527,   534,   544,   545,   554,   555,   556,   557,   558,   562,
     566,   573,   581,   593,   603,   604,   612,   619,   623,   624,
     625,   626,   627,   631,   632,   633,   634,   635,   636
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

#define YYPACT_NINF (-283)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-99)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     376,   644,    14,    16,    34,    84,   527,    86,   102,     7,
     867,   891,    62,   -10,     8,    91,   976,   107,   118,  -283,
    1190,  1308,   123,   116,   130,   437,   126,  1137,  4626,  1469,
    4648,  4664,  4680,  4696,   123,   138,    64,    37,    43,  1302,
    1894,  4712,  4728,  4744,  4760,  4776,  4792,   501,   162,   141,
     181,   197,   201,   229,   156,   111,  4808,   251,   136,  3080,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   -38,   204,   306,   223,    20,   328,   248,
     268,   387,   374,   151,   288,   359,   388,  4824,   183,   177,
      58,  1596,  2736,  1958,  2099,  2221,  2439,  4840,  4856,  4872,
    4888,  4904,   400,   501,   342,   375,   420,  1456,   328,   571,
     424,  4920,   156,   198,  4936,   192,   231,   413,   439,  3353,
     432,   438,   443,    54,   449,   452,  1522,   454,   509,   752,
     808,  1084,   553,   456,   466,   462,  1576,   450,   252,   477,
     495,   453,   138,   527,   138,   508,   574,    23,  1416,  1602,
    1747,   560,  1803,  1878,  2074,   298,  4952,   596,   610,    21,
     562,   657,   627,   638,   655,  2205,   587,   496,   640,   631,
     560,   691,   697,   705,   707,  4968,   539,   610,  2387,   689,
     917,  2590,  3152,   563,   760,   662,   560,  3470,  5508,  3309,
    5522,  5536,  5550,  5564,  5578,   183,   138,   139,   213,  2698,
    2455,  5592,  5606,  5620,  5634,  5648,   337,   340,   403,   405,
     423,  5005,  1632,  5026,  5047,  5068,  5089,  5110,   629,   138,
     347,   296,   114,  3221,  2524,  5131,  5152,  5173,  4281,  5194,
    5215,  3729,  1920,  3753,  3777,  3801,  3825,  3849,   875,   138,
     -25,    61,   134,  2388,   228,  3873,  3897,  3921,  2284,  3945,
    3969,   183,  5488,  5662,  2962,    66,  4373,   749,   361,   750,
     753,   754,   755,   756,   138,   758,   759,   761,  3510,  5891,
    2127,  5909,  5927,  5945,  5963,  5981,   961,   138,   -16,    97,
     174,  6413,  1839,  5999,  6017,  6035,  4396,  6053,  6071,   564,
     565,   576,   577,   584,   625,   610,  3550,   156,   111,  5676,
     763,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   156,   111,  4984,  5236,  5257,   764,   629,
     629,   629,   629,   629,   629,   629,   629,   629,   629,   629,
     629,   629,   629,   156,   111,  2247,  3993,  4017,   765,   875,
     875,   875,   875,   875,   875,   875,   875,   875,   875,   875,
     875,   875,   875,   157,   156,   156,   123,   156,   111,   767,
    3590,  3630,   156,   111,  5872,  6089,  6107,   789,   961,   961,
     961,   961,   961,   961,   961,   961,   961,   961,   961,   961,
     961,   961,   626,  1217,  3670,   272,   790,  5690,   499,  6385,
    6399,  2679,  5830,  5844,  5858,  5704,  5718,  5732,  5746,  5760,
     301,   792,   156,  5278,   324,   419,  6355,  6370,  2618,  2713,
    3165,  3369,  5299,  5320,  5341,  5362,  5383,   425,   431,   793,
     156,  4041,   230,   196,  2979,  3101,   339,  1111,  1233,  1257,
    4065,  4089,  4113,  4137,  4161,    28,   511,   585,    87,   598,
     795,   796,  3710,   633,   797,   156,  6125,   200,   544,  6425,
    6437,  6301,  6315,  6329,  6343,  6143,  6161,  6179,  6197,  6215,
      49,  1549,  4419,   156,  5774,  4304,   156,  5404,   634,  2850,
     156,  4185,   639,  5788,   156,  4442,   156,   798,   156,   799,
    4465,   156,  6233,   661,   663,   686,  5425,   156,   687,  4209,
     156,   692,   710,   735,   736,  6251,   156,  4488,   596,  4327,
     596,   741,  3202,   596,   743,  5802,   596,  4511,   596,   801,
     596,  4534,   596,   745,   737,   747,  5446,   596,   762,  4233,
     596,   805,   811,   813,   815,  6269,   596,  4557,  4350,   817,
    3285,   818,  5816,  4580,   806,  4603,   819,  5467,  4257,  6287
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -283,  -283,  -283,   785,     5,  -283,  -283,  -283,  -283,  -283,
    -156,  -283,  -283,  -283,  -283,   757,  -100,  -262,  -127,  -283,
    -283,  -283,  -283,  -283,  2946,  2766,  2705,  2422,  2324,  1999,
    1672,   677,  1009,   -22,  1341,  -282,   748,   345,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,   127,    13,    14,    48,    15,    50,
      73,   105,   159,    16,    79,    80,   107,   128,   129,   130,
     131,   132,   152,   133,    84,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    85,    86,   230,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   150,   167,   102,    17,    12,   361,    19,   136,   103,
      18,   339,    44,    59,    17,    12,   386,   -93,   -51,   -94,
     368,   183,   -51,   -98,   257,   -51,   258,   259,   260,   261,
     262,   263,   401,   248,   384,    -8,    22,   -95,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,   165,   419,   -10,    23,    27,    81,   254,    29,    30,
      31,    32,    33,   -30,   339,   264,   253,   -30,   168,   169,
     178,   -52,   180,   -53,    61,   -52,   440,    62,    63,   -55,
     -55,   444,   -53,    34,   256,   368,   187,   -97,   -55,   -96,
     -52,   248,    62,    63,   -56,   -56,    35,   -53,   340,   -49,
      60,   256,    60,   -56,   -53,   -98,   256,    21,   -53,    -9,
      25,   -51,   231,    81,   232,   233,   234,   235,   236,   237,
      59,    26,    59,    60,    27,   265,    28,    29,    30,    31,
      32,    33,   -52,   -53,   369,   286,   -12,    24,   -53,   188,
     238,   189,   190,   191,   192,   193,   194,   161,   321,   322,
     -55,   -55,    34,   239,   -85,   -55,    47,   211,   -55,   212,
     213,   214,   215,   216,   217,    35,    53,   195,   341,   342,
     -55,   -55,   251,   253,    59,   -53,   301,   -55,    49,   -51,
     196,   -55,   -53,    75,   188,   218,   252,   190,   191,   192,
     193,   194,   111,   -54,   301,   112,   317,    59,   219,   231,
     -54,   232,   233,   234,   235,   236,   237,   -11,   370,   371,
     -55,   -55,   195,   -54,    61,   -55,   337,    59,     2,     3,
       4,     5,   -54,     7,    77,   196,   -13,   238,   251,   253,
     341,   342,   -56,   -56,   150,   -52,   -54,   369,    76,   -56,
     239,   -54,    59,   -56,    78,   -19,   256,   302,   303,   -55,
     -55,   -19,   347,   348,   366,    59,   -55,   150,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -54,   340,   -15,   -15,
      82,   -60,   -20,   -54,   256,   -60,   248,   -54,   -20,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   108,   248,   156,    87,   109,   157,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   -27,   248,   462,   104,   -27,   463,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   -87,   -53,   320,    44,   113,   248,   -53,    51,   256,
     -53,   248,   465,   -14,   -14,   466,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     -54,   320,   256,   347,   348,   -54,   106,    46,   -54,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     1,   -88,    46,
     205,   -89,   -62,   319,   -88,   -21,   -62,   -89,   -51,   -21,
     110,   -51,    74,     2,     3,     4,     5,     6,     7,     8,
     250,   357,   114,   358,   -79,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,   117,   -17,
     -17,   119,   118,   254,    29,    30,    31,    32,    33,   120,
     121,   -84,   122,   205,   123,   124,   125,     2,     3,     4,
       5,     6,     7,     8,   -90,   -16,   -91,   141,   116,    34,
     -90,    46,   -91,   321,   322,   -56,   -56,   140,   250,   126,
     -56,   319,    35,   -56,   -92,   155,   -52,   -29,    46,   -52,
     -92,   -29,   469,    46,   142,   470,   286,    51,   286,    52,
     143,   286,   -14,   -14,   286,   144,   286,   205,   286,   205,
     286,   146,   267,   -28,   147,   286,   -22,   -28,   286,   148,
     -22,   153,   288,   294,   286,   206,   207,   208,   209,   210,
     119,   154,   254,    29,    30,    31,    32,    33,   120,   121,
     -86,   122,   294,   123,   124,   125,     2,     3,     4,     5,
       6,     7,     8,   302,   303,   -56,   -56,   158,    34,   176,
     205,   205,   -56,   295,     2,     3,     4,     5,   149,     7,
       8,    35,   473,   -50,   -48,   474,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   205,   -48,   151,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   163,   370,   371,
     -56,   -56,   -48,   250,   205,   -56,   -23,   -23,     2,     3,
       4,     5,   -48,     7,    77,   -48,   205,   269,   268,   270,
     271,   272,   273,   274,   275,   170,   185,   -88,   -89,   205,
     295,   -88,   -89,    46,   289,   290,   291,   292,   293,   -90,
     -91,   288,   205,   -90,   -91,   276,   475,   -92,   175,   476,
     211,   -92,   315,   213,   214,   215,   216,   217,   277,   477,
     382,    46,   478,   250,    -7,    -7,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   218,   250,
     171,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   -19,   -20,
     172,   219,   -19,   -20,   480,   486,   -18,   481,   487,   250,
     489,   173,   177,   490,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   174,    42,
     184,    46,   495,   250,   497,   496,    46,   498,   250,   -24,
     -24,    56,   202,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   499,   502,    46,
     500,   503,   246,   505,   179,   296,   506,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    99,   100,   101,
     181,   507,   182,   -33,   508,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   186,   -33,   202,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   509,   511,   527,   510,
     512,   -33,   516,    42,   519,   517,   525,   520,   528,   526,
     246,   -33,   -75,   -88,   -33,    20,   -89,   -90,   -91,   -92,
      42,   -78,   -77,   530,   -76,    42,   387,   403,   421,   -37,
     441,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   202,
     -37,   202,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   446,   464,   284,   467,   471,   -37,   479,   -74,
     482,   -80,   -83,   288,   -81,   288,   532,   -37,   288,   -82,
     -37,   288,   533,   288,   534,   288,   535,   288,   537,   538,
     539,   139,   288,     0,     0,   288,   137,    -2,     1,     0,
       0,   288,   299,   202,     0,     0,   231,     0,   335,   233,
     234,   235,   236,   237,     2,     3,     4,     5,     6,     7,
       8,    -3,    -3,     0,     0,   316,   202,     0,     0,     0,
       0,     0,     0,     0,   238,     0,     0,     0,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,   336,   202,   239,   -46,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   202,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   202,     0,     0,     0,    42,   -46,     0,     0,     0,
       0,     0,     0,   365,   202,     0,   -46,     0,     0,   -46,
       0,     0,   269,     0,   364,   271,   272,   273,   274,   275,
       0,     0,     0,    42,     0,   246,    -6,    -6,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   397,   398,   399,
     276,   246,     0,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
       0,     0,     0,   277,     0,     0,   414,   415,   416,     0,
       0,   246,     0,     0,     0,     0,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   432,   433,   434,   246,
       0,    43,     0,    42,     0,   246,     0,     0,    42,     0,
     246,     0,     0,    43,   203,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   457,   458,   459,   284,     0,
       0,    42,     0,     0,   247,     0,     0,     0,     0,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,     0,     0,     0,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   203,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,     0,     0,   -38,     0,    43,     0,     0,     0,     0,
       0,     0,   247,   -38,     0,     0,   -38,     0,     0,     0,
       0,     0,    43,     0,     0,   347,   348,    43,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,   203,     0,   203,   -64,     0,   164,     0,   -64,     0,
       0,   -75,   -75,   -75,   -75,   -75,   285,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   284,     0,   284,     0,     0,
     284,     0,   -75,   284,     0,   284,     0,   284,     0,   284,
      -4,    -4,     0,     0,   284,     0,     0,   284,     0,     0,
       0,     0,     0,   284,   203,   203,     0,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,     0,     0,     0,     0,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   203,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,     0,   -31,   247,   203,     0,
       0,     0,     0,     0,     0,     0,   -31,   347,   348,   -31,
     203,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,     0,     0,   203,     0,     0,   -61,    43,     0,     0,
     -61,   347,   348,     0,     0,   285,   203,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,
     -63,     0,     0,     0,   -63,    43,     0,   247,    -5,    -5,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,     0,   247,     0,    -5,    -5,    -5,    -5,    -5,
      -5,    -5,    64,    65,    66,    67,   -57,   -57,   -57,   -57,
       0,     0,     0,   247,     0,     0,     0,   -57,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,     0,    45,     0,    43,     0,   247,     0,     0,
      43,     0,   247,     0,     0,    45,   204,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,     0,     0,    43,     0,     0,   249,     0,     0,     0,
       0,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,     0,     0,     0,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   204,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,   -35,     0,    45,     0,     0,
       0,     0,     0,     0,   249,   -35,   -26,   -26,   -35,     0,
       0,     0,     0,     0,    45,     0,     0,     0,     0,    45,
       0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,   204,     0,   204,     0,     0,   266,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   287,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   285,     0,   285,
       0,     0,   285,     0,   -88,   285,     0,   285,     0,   285,
       0,   285,   -31,   -31,     0,     0,   285,     0,     0,   285,
       0,     0,     0,     0,     0,   285,   204,   204,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     204,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,     0,   -25,   -25,   -32,   249,
     204,     0,     0,     0,     0,     0,     0,     0,   -32,     0,
       0,   -32,   204,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,   -32,   -32,     0,   204,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     0,     0,   287,   204,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,    64,    65,    66,    67,
     -59,   -59,   -59,   -59,     0,     0,     0,    45,     0,   249,
       0,   -59,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,     0,   249,   -79,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,   313,   -79,   314,   249,   -79,     0,   -79,     0,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,    41,     0,     0,    45,     0,   249,
       0,     0,    45,     0,   249,     0,     0,   201,     0,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,     0,     0,    45,     0,   245,     0,     0,
       0,     0,    41,    41,    41,    41,    41,    41,    41,    41,
      97,    98,     0,     0,     0,     0,     0,     0,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     201,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,   -34,     0,    41,     0,
       0,     0,     0,     0,     0,   245,   -34,     0,     0,   -34,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
      41,     0,     0,     0,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   201,   -45,   201,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,   283,
       0,     0,   -45,     0,     0,     0,     0,     0,     0,   287,
       0,   287,   -45,     0,   287,   -45,     0,   287,     0,   287,
       0,   287,     0,   287,     0,     0,     0,     0,   287,     0,
       0,   287,     0,   376,   377,     0,     0,   287,   201,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,   -39,
     -60,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   201,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,     0,   -39,     0,     0,
       0,   201,     0,     0,     0,     0,     0,   -39,    68,    69,
     -39,     0,     0,   201,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,   201,     0,     0,   -60,
      41,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   201,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
     333,     0,   334,   -79,     0,     0,   -79,   -79,    41,     0,
     245,     0,     0,   201,   201,   201,   201,   201,   201,   201,
     395,   396,    68,    69,     0,     0,   245,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,   412,
     413,     0,     0,   -62,     0,     0,   245,     0,     0,     0,
       0,   245,   245,   245,   245,   245,   245,   245,   245,   430,
     431,    40,     0,     0,   245,     0,     0,     0,    41,     0,
     245,     0,     0,    41,   200,   245,     0,     0,     0,     0,
     283,   283,   283,   283,   283,   283,   283,   283,   455,   456,
       0,     0,     0,   283,   244,     0,    41,     0,     0,    40,
      40,    40,    40,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   200,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,     0,   -36,     0,    40,     0,     0,     0,     0,
       0,     0,   244,   -36,     0,     0,   -36,     0,     0,     0,
       0,     0,    40,    68,    69,     0,     0,    40,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,   200,     0,   200,   -64,     0,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   282,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   362,   -79,   363,
     283,     0,   283,   -79,     0,   283,     0,     0,   283,     0,
     283,     0,   283,     0,   283,     0,     0,     0,     0,   283,
       0,     0,   283,     0,     0,   200,     0,     0,   283,     0,
       0,     0,     0,     0,     0,     0,   -47,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,   200,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,
       0,     0,     0,     0,   -47,     0,     0,     0,   200,     0,
       0,     0,     0,     0,   -47,    68,    69,   -47,     0,     0,
     200,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,     0,   200,     0,     0,   -61,    40,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   200,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   420,     0,   334,
     -79,     0,     0,     0,   -79,    40,     0,   244,     0,     0,
     200,   200,   200,   391,   392,   393,   394,     0,   -78,   -78,
     -78,   -78,   -78,   244,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   408,   409,   410,   411,     0,   -78,     0,     0,
     352,   -78,     0,   244,     0,     0,     0,     0,   244,   244,
     244,   244,   426,   427,   428,   429,    39,     0,     0,     0,
       0,   244,     0,     0,     0,    40,     0,   244,     0,   199,
      40,     0,   244,     0,     0,     0,     0,   282,   282,   282,
     282,   451,   452,   453,   454,     0,     0,     0,     0,   243,
     282,     0,     0,    40,    39,    39,    91,    92,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,   199,     0,     0,     0,   -43,     0,   343,   344,
     345,   346,   -57,   -57,   -57,   -57,   -43,     0,     0,   -43,
      39,   -57,     0,     0,     0,   -57,     0,   243,     0,     0,
       0,     0,     0,     0,    38,     0,     0,    39,     0,     0,
       0,     0,    39,     0,     0,     0,     0,   198,     0,     0,
       0,     0,     0,    68,    69,     0,   199,     0,   199,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   242,     0,   308,
     309,   281,    38,    90,   -63,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,   282,   -60,   282,
       0,     0,   282,     0,     0,   282,     0,   282,     0,   282,
     198,   282,     0,     0,     0,     0,   282,     0,     0,   282,
     199,     0,     0,     0,     0,   282,     0,     0,    38,     0,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,   199,     0,    38,     0,     0,   327,   328,
      38,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,   199,   198,   -60,   198,     0,   -60,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   280,
       0,     0,     0,     0,     0,     0,     0,     0,   199,     0,
       0,   -40,    39,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   199,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,   198,   -40,
      39,     0,   243,     0,     0,   199,   389,   390,     0,   -40,
       0,     0,   -40,     0,     0,     0,     0,     0,   243,     0,
       0,   198,   327,   328,     0,   406,   407,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   243,   -62,
       0,   198,   -62,   243,   243,   424,   425,     0,     0,     0,
       0,     0,     0,   198,     0,     0,   243,     0,     0,     0,
      39,     0,   243,     0,     0,    39,   198,   243,     0,     0,
      38,     0,   281,   281,   449,   450,     0,     0,     0,   198,
       0,     0,     0,   308,   309,   281,     0,     0,    39,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,    38,     0,
     242,     0,   -62,   388,     0,     0,     0,    37,   304,   305,
     306,   307,   -57,   -57,   -57,   -57,   242,   327,   328,     0,
     197,   -57,   405,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,   -64,     0,   242,   -64,     0,     0,
     241,   242,   423,     0,     0,    89,    64,    65,    66,    67,
     -58,   -58,   -58,   -58,   242,     0,     0,     0,    38,     0,
     242,   -58,     0,    38,     0,   242,     0,     0,    36,     0,
     280,   448,     0,   197,     0,     0,     0,     0,     0,     0,
       0,    58,     0,   280,     0,     0,    38,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,   241,     0,
       0,   240,   281,     0,   281,     0,     0,   281,    37,     0,
     281,     0,   281,    37,   281,     0,   281,     0,     0,     0,
       0,   281,     0,     0,   281,     0,     0,   197,     0,   197,
     281,     0,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,   279,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,     0,   -80,   -80,   -80,   -80,   -80,   240,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   255,
       0,     0,     0,   -80,   255,     0,   -80,   -80,     0,     0,
       0,   197,     0,     0,     0,     0,     0,     0,    58,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     280,     0,   280,   278,   197,   280,     0,     0,   280,     0,
     280,     0,   280,     0,   280,     0,     0,     0,     0,   280,
       0,     0,   280,     0,   197,     0,     0,     0,   280,     0,
       0,     0,     0,     0,     0,     0,   353,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,   197,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,    57,   197,     0,     0,    58,   -79,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
      83,    37,   355,   241,    55,    58,     0,   -79,   -79,   343,
     344,   345,   346,   -59,   -59,   -59,   -59,     0,     0,   241,
       0,     0,   -59,     0,   404,     0,   -59,     0,     0,     0,
      58,     0,     0,     0,   255,     0,     0,     0,     0,   241,
       0,     0,     0,    58,   422,     0,     0,     0,     0,     0,
       0,     0,   134,     0,     0,     0,     0,   241,   138,     0,
       0,    37,   255,   241,   240,     0,    37,     0,   241,   145,
       0,     0,     0,   447,   134,     0,     0,     0,     0,     0,
     240,     0,     0,     0,     0,     0,   279,     0,   160,    37,
     162,     0,     0,     0,     0,     0,     0,     0,   417,     0,
     240,     0,     0,   166,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   435,     0,
       0,     0,   438,   -78,   240,     0,    88,   255,     0,   240,
       0,   343,   344,   345,   346,   -58,   -58,   -58,   -58,     0,
       0,     0,   300,     0,   -58,     0,     0,   460,   -58,     0,
     255,     0,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   318,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,
       0,   -41,     0,     0,     0,   338,     0,     0,     0,   327,
     328,   -41,     0,     0,   -41,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   279,     0,   279,   -61,     0,   279,   -61,
     359,   279,     0,   279,   134,   279,     0,   279,     0,     0,
       0,     0,   279,   367,     0,   279,   -81,   -81,   -81,   -81,
     -81,   279,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,   134,   385,     0,   -81,     0,     0,   -81,   -81,
       0,   323,   324,   325,   326,   -57,   -57,   -57,   -57,   400,
       0,     0,   -57,     0,   278,   -57,   278,     0,     0,   278,
       0,     0,   278,     0,   278,     0,   278,     0,   278,   418,
       0,     0,     0,   278,     0,     0,   278,     0,     0,     0,
       0,     0,   278,     0,     0,     0,     0,     0,     0,     0,
     436,   437,     0,   439,     0,     0,     0,   134,   443,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,   -82,     0,
     134,   -82,   -82,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   468,   297,
       0,   298,   -79,     0,   -42,   -79,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   472,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -75,   -75,   -75,
     -75,   -75,   -42,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   483,   -42,   327,   328,   -42,     0,     0,   -75,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   484,
     -63,     0,   485,   -63,     0,     0,   488,     0,     0,     0,
     491,     0,   492,     0,   493,     0,     0,   494,     0,     0,
       0,     0,     0,   501,     0,     0,   504,     0,     0,     0,
       0,     0,   513,     0,   514,     0,   515,     0,     0,   518,
       0,     0,   521,     0,   522,     0,   523,     0,   524,     0,
       0,     0,     0,   529,     0,     0,   531,     0,     0,     0,
       0,   -44,   536,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,   -44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -44,
       0,   119,   -44,   254,    29,    30,    31,    32,    33,   120,
     121,     0,   122,     0,   123,   124,   125,     2,     3,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
       0,   119,    35,   254,    29,    30,    31,    32,    33,   120,
     121,     0,   122,     0,   123,   124,   125,     2,     3,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   383,
       0,   -31,    35,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,   -31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -31,
       0,   119,   -31,   254,    29,    30,    31,    32,    33,   120,
     121,     0,   122,     0,   123,   124,   125,     2,     3,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   442,
       0,   119,    35,   254,    29,    30,    31,    32,    33,   120,
     121,     0,   122,     0,   123,   124,   125,     2,     3,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   461,
       0,   -32,    35,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -32,
       0,     0,   -32,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,     0,   -75,     0,     0,     0,   -75,   -88,   -88,   -88,
     -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,     0,   -88,     0,     0,     0,
     -88,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,
     -89,     0,     0,     0,   -89,   -90,   -90,   -90,   -90,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,     0,     0,   -90,     0,     0,     0,   -90,   -91,
     -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,     0,     0,     0,   -91,     0,
       0,     0,   -91,   -92,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
       0,     0,   -92,     0,     0,     0,   -92,   -65,   -65,   349,
     350,   351,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,     0,   -65,     0,     0,     0,
     -65,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,
     -68,     0,     0,     0,   -68,   -72,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,   -72,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,   -77,     0,
       0,     0,   -77,   -76,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,   -76,     0,     0,     0,   -76,   -73,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,     0,   -73,     0,     0,     0,
     -73,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
     -78,     0,     0,     0,   -78,   -74,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,   -74,     0,     0,     0,   -74,   -66,
     -66,   349,   350,   351,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,   -66,     0,
       0,     0,   -66,   -67,   -67,   349,   350,   351,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,   -67,     0,     0,     0,   -67,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,     0,   -69,     0,     0,     0,
     -69,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
     -70,     0,     0,     0,   -70,   -71,   -71,   -71,   -71,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,   -71,     0,     0,     0,   -71,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,     0,   -83,     0,
       0,     0,   -83,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,   -80,     0,     0,     0,   -80,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,   -81,     0,     0,     0,
     -81,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
     -82,     0,     0,     0,   -82,   -78,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,   -78,     0,     0,   -78,     0,   332,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,   -80,     0,     0,   -80,     0,
     -80,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,   -81,     0,
       0,   -81,     0,   -81,   -82,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,   -82,     0,     0,   -82,     0,   -82,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,     0,     0,     0,   -78,   356,
     -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,   -78,     0,     0,
       0,     0,   381,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,   -80,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,   -80,     0,     0,     0,
       0,   -80,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,   -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,   -81,     0,     0,     0,     0,
     -81,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
     -82,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,   -82,     0,     0,     0,     0,   -82,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,    54,     0,    55,     0,
       0,   -79,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -89,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,     0,     0,   -91,   -91,   -91,   -91,   -91,   -90,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
     -92,   -92,   -92,   -92,   -92,   -91,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,     0,   -65,   -65,    70,    71,
      72,   -92,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -65,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -68,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,   -78,   -78,   -78,   -78,   -78,   -72,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -78,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -77,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -76,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -73,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,   -66,   -66,    70,    71,    72,   -74,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -67,   -67,    70,    71,    72,   -66,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -67,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -69,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -70,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,   -80,   -80,   -80,   -80,   -80,   -71,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -80,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -83,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -81,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -82,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,   402,   -79,   314,     0,   -79,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,   -75,     0,     0,   -75,
     -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,     0,   -88,     0,     0,
     -88,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,     0,     0,   -89,     0,
       0,   -89,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,   -90,
       0,     0,   -90,   -91,   -91,   -91,   -91,   -91,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,
     -91,     0,     0,   -91,   -92,   -92,   -92,   -92,   -92,     0,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
       0,   -92,     0,     0,   -92,   -65,   -65,   329,   330,   331,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,   -65,     0,     0,   -65,   -68,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,   -68,     0,     0,   -68,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,   -72,     0,     0,   -72,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,   -77,     0,     0,   -77,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,   -76,     0,     0,   -76,
     -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,   -73,     0,     0,
     -73,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,   -78,     0,
       0,   -78,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,   -74,
       0,     0,   -74,   -66,   -66,   329,   330,   331,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
     -66,     0,     0,   -66,   -67,   -67,   329,   330,   331,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,   -67,     0,     0,   -67,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,   -69,     0,     0,   -69,   -70,   -70,   -70,   -70,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,   -70,     0,     0,   -70,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,   -71,     0,     0,   -71,   -83,   -83,
     -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,   -83,     0,     0,   -83,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,   -80,     0,     0,   -80,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,   -81,     0,     0,
     -81,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,   -82,     0,
       0,   -82,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   354,     0,
     298,   -79,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -88,   -88,   -88,   -88,
     -88,   -75,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -89,   -89,   -89,   -89,   -89,   -88,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -90,   -90,   -90,   -90,   -90,   -89,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -91,   -91,
     -91,   -91,   -91,   -90,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -92,   -92,   -92,   -92,   -92,   -91,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -65,   -65,   310,   311,
     312,   -92,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -68,   -68,   -68,   -68,   -68,   -65,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -72,   -72,   -72,   -72,   -72,   -68,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -77,   -77,
     -77,   -77,   -77,   -72,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -76,   -76,   -76,   -76,   -76,   -77,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -78,   -78,   -78,   -78,
     -78,   -76,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -73,   -73,   -73,   -73,   -73,   -78,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,   -73,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -66,   -66,
     310,   311,   312,   -74,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -67,   -67,   310,   311,   312,   -66,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -69,   -69,   -69,   -69,
     -69,   -67,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -70,   -70,   -70,   -70,   -70,   -69,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,   -71,   -70,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -83,   -83,
     -83,   -83,   -83,   -71,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -80,   -80,   -80,   -80,   -80,   -83,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -81,   -81,   -81,   -81,
     -81,   -80,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -82,   -82,   -82,   -82,   -82,   -81,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   308,   309,     0,     0,     0,   -82,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   308,   309,
       0,     0,     0,   -64,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   308,   309,     0,     0,     0,   -61,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -79,   -79,   -79,   -79,
     -79,   -63,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,   445,   -79,   363,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,   -75,   -88,   -88,   -88,   -88,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
     -88,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,     0,     0,   -89,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,   -90,   -91,   -91,   -91,
     -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,     0,     0,   -91,   -92,   -92,   -92,   -92,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,
       0,     0,   -92,   -65,   -65,   378,   379,   380,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
     -65,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,   -68,   -72,
     -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,   -72,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,   -77,   -76,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,   -76,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
     -73,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,   -78,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,   -74,   -66,   -66,   378,
     379,   380,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,     0,   -66,   -67,   -67,   378,   379,   380,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,   -67,   -69,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
     -69,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,   -70,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,   -71,   -83,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,   -83,   -80,   -80,   -80,   -80,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,   -80,   -81,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
     -81,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   376,   377,     0,   -82,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   376,
     377,     0,   -62,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   376,   377,     0,   -64,     0,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   376,   377,     0,
     -61,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,   -63,   323,   324,   325,   326,   -59,
     -59,   -59,   -59,     0,     0,     0,   -59,     0,     0,   -59,
     323,   324,   325,   326,   -58,   -58,   -58,   -58,     0,     0,
       0,   -58,     0,     0,   -58,   304,   305,   306,   307,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,   -59,   304,
     305,   306,   307,   -58,   -58,   -58,   -58,     0,     0,     0,
       0,     0,   -58,   372,   373,   374,   375,   -57,   -57,   -57,
     -57,     0,     0,     0,   -57,   372,   373,   374,   375,   -59,
     -59,   -59,   -59,     0,     0,     0,   -59,   372,   373,   374,
     375,   -58,   -58,   -58,   -58,     0,     0,     0,   -58
};

static const yytype_int16 yycheck[] =
{
      22,   128,   158,    41,     0,     0,   268,     0,   108,    47,
       6,    36,    34,    35,    10,    10,   298,     3,    43,     3,
      36,   177,    47,     3,     1,    41,     3,     4,     5,     6,
       7,     8,   314,    55,   296,    45,    46,     3,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   151,   334,    45,    46,     1,    52,     3,     4,     5,
       6,     7,     8,    43,    36,    42,    88,    47,    47,    48,
     170,    43,   172,    36,    37,    47,   358,    34,    35,    36,
      37,   363,    45,    29,   106,    36,   186,     3,    45,     3,
      41,   113,    34,    35,    36,    37,    42,    36,    37,    45,
      36,   123,    36,    45,    43,     3,   128,    45,    47,    45,
       3,    45,     1,   109,     3,     4,     5,     6,     7,     8,
     142,     3,   144,    36,     1,   147,     3,     4,     5,     6,
       7,     8,    45,    36,    37,   157,    45,    46,    41,     1,
      29,     3,     4,     5,     6,     7,     8,   143,    34,    35,
      36,    37,    29,    42,    43,    41,    40,     1,    44,     3,
       4,     5,     6,     7,     8,    42,    40,    29,    34,    35,
      36,    37,    36,   195,   196,    36,    37,    43,    48,    43,
      42,    47,    43,    42,     1,    29,     3,     4,     5,     6,
       7,     8,    41,    36,    37,    44,   218,   219,    42,     1,
      43,     3,     4,     5,     6,     7,     8,    45,    34,    35,
      36,    37,    29,    36,    37,    41,   238,   239,    17,    18,
      19,    20,    45,    22,    23,    42,    45,    29,    36,   251,
      34,    35,    36,    37,   361,    43,    36,    37,    41,    43,
      42,    41,   264,    47,    43,    41,   268,    34,    35,    36,
      37,    47,    24,    25,   276,   277,    43,   384,    30,    31,
      32,    33,    34,    35,    36,    37,    36,    37,    45,    46,
      41,    43,    41,    43,   296,    47,   298,    47,    47,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,    43,   314,    41,    43,    47,    44,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    43,   334,    41,     8,    47,    44,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,    43,    36,    37,   356,    47,   358,    41,    40,   361,
      44,   363,    41,    45,    46,    44,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
      36,    37,   384,    24,    25,    41,    38,    22,    44,    30,
      31,    32,    33,    34,    35,    36,    37,     1,    41,    34,
      35,    41,    43,    36,    47,    43,    47,    47,    41,    47,
       3,    44,    47,    17,    18,    19,    20,    21,    22,    23,
      55,    40,    43,    42,    43,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    43,    45,
      46,     1,    47,     3,     4,     5,     6,     7,     8,     9,
      10,    43,    12,    88,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    41,    45,    41,     8,   103,    29,
      47,   106,    47,    34,    35,    36,    37,    44,   113,    39,
      41,    36,    42,    44,    41,     3,    41,    43,   123,    44,
      47,    47,    41,   128,    42,    44,   498,    40,   500,    42,
      42,   503,    45,    46,   506,    42,   508,   142,   510,   144,
     512,    42,   147,    43,    42,   517,    43,    47,   520,    45,
      47,    45,   157,   158,   526,     4,     5,     6,     7,     8,
       1,    45,     3,     4,     5,     6,     7,     8,     9,    10,
      43,    12,   177,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    34,    35,    36,    37,    42,    29,    43,
     195,   196,    43,    47,    17,    18,    19,    20,    39,    22,
      23,    42,    41,    45,     1,    44,     3,     4,     5,     6,
       7,     8,     9,    10,   219,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     3,    34,    35,
      36,    37,    29,   238,   239,    41,    47,    48,    17,    18,
      19,    20,    39,    22,    23,    42,   251,     1,    38,     3,
       4,     5,     6,     7,     8,    43,    43,    43,    43,   264,
      47,    47,    47,   268,     4,     5,     6,     7,     8,    43,
      43,   276,   277,    47,    47,    29,    41,    43,    41,    44,
       1,    47,     3,     4,     5,     6,     7,     8,    42,    41,
     295,   296,    44,   298,     0,     1,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,    29,   314,
       3,    17,    18,    19,    20,    21,    22,    23,    43,    43,
      43,    42,    47,    47,    41,    41,    45,    44,    44,   334,
      41,    43,    42,    44,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,    43,    22,
      11,   356,    41,   358,    41,    44,   361,    44,   363,    47,
      48,    34,    35,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,    41,    41,   384,
      44,    44,    55,    41,    43,    38,    44,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      45,    41,    45,     1,    44,     3,     4,     5,     6,     7,
       8,     9,    10,     3,    12,    88,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    41,    41,    41,    44,
      44,    29,    41,   106,    41,    44,    41,    44,    41,    44,
     113,    39,    43,    43,    42,    10,    43,    43,    43,    43,
     123,    43,    43,    41,    43,   128,    43,    43,    43,     1,
      43,     3,     4,     5,     6,     7,     8,     9,    10,   142,
      12,   144,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    43,    43,   157,    43,    43,    29,    43,    43,
      43,    43,    43,   498,    43,   500,    41,    39,   503,    43,
      42,   506,    41,   508,    41,   510,    41,   512,    41,    41,
      41,   113,   517,    -1,    -1,   520,   109,     0,     1,    -1,
      -1,   526,   195,   196,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    17,    18,    19,    20,    21,    22,
      23,     0,     1,    -1,    -1,   218,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,   238,   239,    42,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,   251,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   264,    -1,    -1,    -1,   268,    29,    -1,    -1,    -1,
      -1,    -1,    -1,   276,   277,    -1,    39,    -1,    -1,    42,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,   296,    -1,   298,     0,     1,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
      29,   314,    -1,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    42,    -1,    -1,   329,   330,   331,    -1,
      -1,   334,    -1,    -1,    -1,    -1,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
      -1,    22,    -1,   356,    -1,   358,    -1,    -1,   361,    -1,
     363,    -1,    -1,    34,    35,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,    -1,
      -1,   384,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    88,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    24,    25,   128,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,   142,    -1,   144,    43,    -1,   147,    -1,    47,    -1,
      -1,    24,    25,    26,    27,    28,   157,    30,    31,    32,
      33,    34,    35,    36,    37,   498,    -1,   500,    -1,    -1,
     503,    -1,    45,   506,    -1,   508,    -1,   510,    -1,   512,
       0,     1,    -1,    -1,   517,    -1,    -1,   520,    -1,    -1,
      -1,    -1,    -1,   526,   195,   196,    -1,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,   219,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    29,   238,   239,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    24,    25,    42,
     251,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,   264,    -1,    -1,    43,   268,    -1,    -1,
      47,    24,    25,    -1,    -1,   276,   277,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,   296,    -1,   298,     0,     1,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,    -1,   314,    -1,    17,    18,    19,    20,    21,
      22,    23,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    45,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,    -1,    22,    -1,   356,    -1,   358,    -1,    -1,
     361,    -1,   363,    -1,    -1,    34,    35,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,    -1,    -1,   384,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    88,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    29,    -1,   106,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    39,     0,     1,    42,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,   142,    -1,   144,    -1,    -1,   147,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,   157,    30,
      31,    32,    33,    34,    35,    36,    37,   498,    -1,   500,
      -1,    -1,   503,    -1,    45,   506,    -1,   508,    -1,   510,
      -1,   512,     0,     1,    -1,    -1,   517,    -1,    -1,   520,
      -1,    -1,    -1,    -1,    -1,   526,   195,   196,    -1,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
     219,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,     0,     1,    29,   238,
     239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    42,   251,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,     0,     1,    -1,   264,    -1,    -1,    -1,   268,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   276,   277,    17,
      18,    19,    20,    21,    22,    23,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,   296,    -1,   298,
      -1,    45,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,    -1,   314,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,    42,   334,    44,    -1,    46,    -1,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,    22,    -1,    -1,   356,    -1,   358,
      -1,    -1,   361,    -1,   363,    -1,    -1,    35,    -1,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,    -1,    -1,   384,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      88,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    29,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
     128,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,   142,    12,   144,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,   157,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,   498,
      -1,   500,    39,    -1,   503,    42,    -1,   506,    -1,   508,
      -1,   510,    -1,   512,    -1,    -1,    -1,    -1,   517,    -1,
      -1,   520,    -1,    24,    25,    -1,    -1,   526,   196,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,     1,
      41,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,   219,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,   239,    -1,    -1,    -1,    -1,    -1,    39,    24,    25,
      42,    -1,    -1,   251,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,   264,    -1,    -1,    45,
     268,    -1,    -1,    -1,    24,    25,    26,    27,    28,   277,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    42,    43,    -1,    -1,    46,    47,   296,    -1,
     298,    -1,    -1,   301,   302,   303,   304,   305,   306,   307,
     308,   309,    24,    25,    -1,    -1,   314,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,   327,
     328,    -1,    -1,    45,    -1,    -1,   334,    -1,    -1,    -1,
      -1,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,    22,    -1,    -1,   352,    -1,    -1,    -1,   356,    -1,
     358,    -1,    -1,   361,    35,   363,    -1,    -1,    -1,    -1,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
      -1,    -1,    -1,   381,    55,    -1,   384,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    88,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,   123,    24,    25,    -1,    -1,   128,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,   142,    -1,   144,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,   157,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,    42,
     498,    -1,   500,    46,    -1,   503,    -1,    -1,   506,    -1,
     508,    -1,   510,    -1,   512,    -1,    -1,    -1,    -1,   517,
      -1,    -1,   520,    -1,    -1,   196,    -1,    -1,   526,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,   219,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,   239,    -1,
      -1,    -1,    -1,    -1,    39,    24,    25,    42,    -1,    -1,
     251,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,   264,    -1,    -1,    45,   268,    -1,    -1,
      -1,    24,    25,    26,    27,    28,   277,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    42,
      43,    -1,    -1,    -1,    47,   296,    -1,   298,    -1,    -1,
     301,   302,   303,   304,   305,   306,   307,    -1,    24,    25,
      26,    27,    28,   314,    30,    31,    32,    33,    34,    35,
      36,    37,   323,   324,   325,   326,    -1,    43,    -1,    -1,
      46,    47,    -1,   334,    -1,    -1,    -1,    -1,   339,   340,
     341,   342,   343,   344,   345,   346,    22,    -1,    -1,    -1,
      -1,   352,    -1,    -1,    -1,   356,    -1,   358,    -1,    35,
     361,    -1,   363,    -1,    -1,    -1,    -1,   368,   369,   370,
     371,   372,   373,   374,   375,    -1,    -1,    -1,    -1,    55,
     381,    -1,    -1,   384,    60,    61,    62,    63,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    88,    -1,    -1,    -1,    29,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    39,    -1,    -1,    42,
     106,    43,    -1,    -1,    -1,    47,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,   123,    -1,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,   142,    -1,   144,    30,
      31,    32,    33,    34,    35,    36,    37,    55,    -1,    24,
      25,   157,    60,    61,    45,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,   498,    43,   500,
      -1,    -1,   503,    -1,    -1,   506,    -1,   508,    -1,   510,
      88,   512,    -1,    -1,    -1,    -1,   517,    -1,    -1,   520,
     196,    -1,    -1,    -1,    -1,   526,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,    -1,   123,    -1,    -1,    24,    25,
     128,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,   239,   142,    41,   144,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,    -1,
      -1,     1,   268,     3,     4,     5,     6,     7,     8,     9,
      10,   277,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,   196,    29,
     296,    -1,   298,    -1,    -1,   301,   302,   303,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,   314,    -1,
      -1,   219,    24,    25,    -1,   321,   322,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,   334,    41,
      -1,   239,    44,   339,   340,   341,   342,    -1,    -1,    -1,
      -1,    -1,    -1,   251,    -1,    -1,   352,    -1,    -1,    -1,
     356,    -1,   358,    -1,    -1,   361,   264,   363,    -1,    -1,
     268,    -1,   368,   369,   370,   371,    -1,    -1,    -1,   277,
      -1,    -1,    -1,    24,    25,   381,    -1,    -1,   384,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,   296,    -1,
     298,    -1,    43,   301,    -1,    -1,    -1,    22,    30,    31,
      32,    33,    34,    35,    36,    37,   314,    24,    25,    -1,
      35,    43,   320,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    -1,   334,    44,    -1,    -1,
      55,   339,   340,    -1,    -1,    60,    30,    31,    32,    33,
      34,    35,    36,    37,   352,    -1,    -1,    -1,   356,    -1,
     358,    45,    -1,   361,    -1,   363,    -1,    -1,    22,    -1,
     368,   369,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,   381,    -1,    -1,   384,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,    55,   498,    -1,   500,    -1,    -1,   503,   123,    -1,
     506,    -1,   508,   128,   510,    -1,   512,    -1,    -1,    -1,
      -1,   517,    -1,    -1,   520,    -1,    -1,   142,    -1,   144,
     526,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    24,    25,    26,    27,    28,   113,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,   123,
      -1,    -1,    -1,    43,   128,    -1,    46,    47,    -1,    -1,
      -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     498,    -1,   500,   157,   219,   503,    -1,    -1,   506,    -1,
     508,    -1,   510,    -1,   512,    -1,    -1,    -1,    -1,   517,
      -1,    -1,   520,    -1,   239,    -1,    -1,    -1,   526,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   264,
      -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,   277,    -1,    -1,   219,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      54,   296,    40,   298,    42,   239,    -1,    45,    46,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,   314,
      -1,    -1,    43,    -1,   319,    -1,    47,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,   277,   339,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   352,   112,    -1,
      -1,   356,   296,   358,   298,    -1,   361,    -1,   363,   123,
      -1,    -1,    -1,   368,   128,    -1,    -1,    -1,    -1,    -1,
     314,    -1,    -1,    -1,    -1,    -1,   381,    -1,   142,   384,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,
     334,    -1,    -1,   157,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,   352,    -1,
      -1,    -1,   356,    43,   358,    -1,    46,   361,    -1,   363,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,   196,    -1,    43,    -1,    -1,   381,    47,    -1,
     384,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,   219,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,   239,    -1,    -1,    -1,    24,
      25,    39,    -1,    -1,    42,    30,    31,    32,    33,    34,
      35,    36,    37,   498,    -1,   500,    41,    -1,   503,    44,
     264,   506,    -1,   508,   268,   510,    -1,   512,    -1,    -1,
      -1,    -1,   517,   277,    -1,   520,    24,    25,    26,    27,
      28,   526,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,   296,   297,    -1,    43,    -1,    -1,    46,    47,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,   313,
      -1,    -1,    41,    -1,   498,    44,   500,    -1,    -1,   503,
      -1,    -1,   506,    -1,   508,    -1,   510,    -1,   512,   333,
      -1,    -1,    -1,   517,    -1,    -1,   520,    -1,    -1,    -1,
      -1,    -1,   526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     354,   355,    -1,   357,    -1,    -1,    -1,   361,   362,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,
     384,    46,    47,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,   402,    40,
      -1,    42,    43,    -1,     1,    46,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,   420,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,   445,    39,    24,    25,    42,    -1,    -1,    45,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,   463,
      41,    -1,   466,    44,    -1,    -1,   470,    -1,    -1,    -1,
     474,    -1,   476,    -1,   478,    -1,    -1,   481,    -1,    -1,
      -1,    -1,    -1,   487,    -1,    -1,   490,    -1,    -1,    -1,
      -1,    -1,   496,    -1,   498,    -1,   500,    -1,    -1,   503,
      -1,    -1,   506,    -1,   508,    -1,   510,    -1,   512,    -1,
      -1,    -1,    -1,   517,    -1,    -1,   520,    -1,    -1,    -1,
      -1,     1,   526,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,     1,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,     1,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,     1,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,     1,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,     1,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,     1,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    42,    24,    25,    26,    27,    28,    -1,    30,
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
      -1,    -1,    41,    -1,    -1,    44,    -1,    46,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,
      46,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,
      -1,    44,    -1,    46,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,    -1,    44,    -1,    46,    24,    25,    26,
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
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
      42,    43,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    24,    25,    26,    27,
      28,    43,    30,    31,    32,    33,    34,    35,    36,    37,
      24,    25,    26,    27,    28,    43,    30,    31,    32,    33,
      34,    35,    36,    37,    24,    25,    26,    27,    28,    43,
      30,    31,    32,    33,    34,    35,    36,    37,    24,    25,
      26,    27,    28,    43,    30,    31,    32,    33,    34,    35,
      36,    37,    24,    25,    26,    27,    28,    43,    30,    31,
      32,    33,    34,    35,    36,    37,    24,    25,    26,    27,
      28,    43,    30,    31,    32,    33,    34,    35,    36,    37,
      24,    25,    26,    27,    28,    43,    30,    31,    32,    33,
      34,    35,    36,    37,    24,    25,    26,    27,    28,    43,
      30,    31,    32,    33,    34,    35,    36,    37,    24,    25,
      26,    27,    28,    43,    30,    31,    32,    33,    34,    35,
      36,    37,    24,    25,    26,    27,    28,    43,    30,    31,
      32,    33,    34,    35,    36,    37,    24,    25,    26,    27,
      28,    43,    30,    31,    32,    33,    34,    35,    36,    37,
      24,    25,    26,    27,    28,    43,    30,    31,    32,    33,
      34,    35,    36,    37,    24,    25,    26,    27,    28,    43,
      30,    31,    32,    33,    34,    35,    36,    37,    24,    25,
      26,    27,    28,    43,    30,    31,    32,    33,    34,    35,
      36,    37,    24,    25,    26,    27,    28,    43,    30,    31,
      32,    33,    34,    35,    36,    37,    24,    25,    26,    27,
      28,    43,    30,    31,    32,    33,    34,    35,    36,    37,
      24,    25,    26,    27,    28,    43,    30,    31,    32,    33,
      34,    35,    36,    37,    24,    25,    26,    27,    28,    43,
      30,    31,    32,    33,    34,    35,    36,    37,    24,    25,
      26,    27,    28,    43,    30,    31,    32,    33,    34,    35,
      36,    37,    24,    25,    26,    27,    28,    43,    30,    31,
      32,    33,    34,    35,    36,    37,    24,    25,    26,    27,
      28,    43,    30,    31,    32,    33,    34,    35,    36,    37,
      24,    25,    26,    27,    28,    43,    30,    31,    32,    33,
      34,    35,    36,    37,    24,    25,    -1,    -1,    -1,    43,
      30,    31,    32,    33,    34,    35,    36,    37,    24,    25,
      -1,    -1,    -1,    43,    30,    31,    32,    33,    34,    35,
      36,    37,    24,    25,    -1,    -1,    -1,    43,    30,    31,
      32,    33,    34,    35,    36,    37,    24,    25,    26,    27,
      28,    43,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,    42,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    24,    25,    -1,    41,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    24,
      25,    -1,    41,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    24,    25,    -1,    41,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    24,    25,    -1,
      41,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,    -1,    44,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    43,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    17,    18,    19,    20,    21,    22,    23,    53,
      54,    55,    56,    57,    58,    60,    65,    90,    90,     0,
      55,    45,    46,    46,    46,     3,     3,     1,     3,     4,
       5,     6,     7,     8,    29,    42,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    89,    40,    59,    48,
      61,    40,    42,    40,    40,    42,    83,    76,    77,    85,
      36,    37,    34,    35,    30,    31,    32,    33,    24,    25,
      26,    27,    28,    62,    89,    42,    41,    23,    43,    66,
      67,    90,    41,    76,    76,    87,    88,    43,    46,    78,
      79,    80,    80,    81,    81,    81,    81,    82,    82,    83,
      83,    83,    41,    47,     8,    63,    38,    68,    43,    47,
       3,    41,    44,    47,    43,    77,    89,    43,    47,     1,
       9,    10,    12,    14,    15,    16,    39,    56,    69,    70,
      71,    72,    73,    75,    76,    90,    68,    67,    76,    88,
      44,     8,    42,    42,    42,    76,    42,    42,    45,    39,
      70,    13,    74,    45,    45,     3,    41,    44,    42,    64,
      76,    90,    76,     3,    84,    68,    76,    62,    47,    48,
      43,     3,    43,    43,    43,    41,    43,    42,    68,    43,
      68,    45,    45,    62,    11,    43,     3,    68,     1,     3,
       4,     5,     6,     7,     8,    29,    42,    78,    79,    80,
      81,    82,    83,    84,    86,    89,     4,     5,     6,     7,
       8,     1,     3,     4,     5,     6,     7,     8,    29,    42,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      89,     1,     3,     4,     5,     6,     7,     8,    29,    42,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      89,    36,     3,    85,     3,    77,    85,     1,     3,     4,
       5,     6,     7,     8,    42,    85,    86,    89,    38,     1,
       3,     4,     5,     6,     7,     8,    29,    42,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    89,     4,
       5,     6,     7,     8,    89,    47,    38,    40,    42,    83,
      76,    37,    34,    35,    30,    31,    32,    33,    24,    25,
      26,    27,    28,    40,    42,     3,    83,    85,    76,    36,
      37,    34,    35,    30,    31,    32,    33,    24,    25,    26,
      27,    28,    46,    40,    42,     3,    83,    85,    76,    36,
      37,    34,    35,    30,    31,    32,    33,    24,    25,    26,
      27,    28,    46,    78,    40,    40,    46,    40,    42,    76,
      39,    69,    40,    42,     3,    83,    85,    76,    36,    37,
      34,    35,    30,    31,    32,    33,    24,    25,    26,    27,
      28,    46,    89,    39,    69,    76,    87,    43,    79,    80,
      80,    81,    81,    81,    81,    82,    82,    83,    83,    83,
      76,    87,    40,    43,    78,    79,    80,    80,    81,    81,
      81,    81,    82,    82,    83,    83,    83,    77,    76,    87,
      40,    43,    78,    79,    80,    80,    81,    81,    81,    81,
      82,    82,    83,    83,    83,    77,    76,    76,    77,    76,
      87,    43,    39,    76,    87,    40,    43,    78,    79,    80,
      80,    81,    81,    81,    81,    82,    82,    83,    83,    83,
      77,    39,    41,    44,    43,    41,    44,    43,    76,    41,
      44,    43,    76,    41,    44,    41,    44,    41,    44,    43,
      41,    44,    43,    76,    76,    76,    41,    44,    76,    41,
      44,    76,    76,    76,    76,    41,    44,    41,    44,    41,
      44,    76,    41,    44,    76,    41,    44,    41,    44,    41,
      44,    41,    44,    76,    76,    76,    41,    44,    76,    41,
      44,    76,    76,    76,    76,    41,    44,    41,    41,    76,
      41,    76,    41,    41,    41,    41,    76,    41,    41,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    57,    58,    59,    60,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    71,    72,    73,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    79,
      80,    80,    80,    80,    80,    81,    81,    81,    82,    82,
      82,    82,    83,    83,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    86,    87,    87,    88,    88,    89,    89,
      89,    89,    89,    90,    90,    90,    90,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     1,     3,
       1,     3,     1,     3,     2,     4,     3,     5,     7,     1,
       3,     1,     3,     3,     5,     6,     5,     1,     3,     2,
       1,     2,     3,     1,     2,     2,     2,     1,     1,     2,
       5,     5,     1,     5,     8,     2,     5,     2,     0,     1,
       2,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     3,     1,     1,     1,     1,     1,
       4,     6,     8,     4,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 135 "flex_bison/porygon_syntax.y"
                                                    {ast_root = (yyvsp[0].tree_node);}
#line 2802 "src/parser.c"
    break;

  case 3:
#line 139 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2808 "src/parser.c"
    break;

  case 4:
#line 140 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, DECLARATION_LIST, "declarationList", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2820 "src/parser.c"
    break;

  case 5:
#line 150 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 2826 "src/parser.c"
    break;

  case 6:
#line 151 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2832 "src/parser.c"
    break;

  case 7:
#line 152 "flex_bison/porygon_syntax.y"
                                                    {++synt_errors;}
#line 2838 "src/parser.c"
    break;

  case 8:
#line 156 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2844 "src/parser.c"
    break;

  case 9:
#line 157 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, VAR_DECLARATION, "varDeclaration",  2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2856 "src/parser.c"
    break;

  case 10:
#line 164 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2862 "src/parser.c"
    break;

  case 11:
#line 165 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ARRAY_DECLARATION_DEFINITION, "arrayDeclarationDefinition", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2874 "src/parser.c"
    break;

  case 12:
#line 172 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2880 "src/parser.c"
    break;

  case 13:
#line 173 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, TABLE_DECLARATION_DEFINITION, "tableDeclarationDefinition", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2892 "src/parser.c"
    break;

  case 14:
#line 184 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, VAR_SIMPLE_DECLARATION, "varSimpleDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                        add_entry((yyvsp[0].tree_node)->name, (yyvsp[-1].tree_node)->type, (yyvsp[-1].tree_node)->name, VARIABLE, cur_scope, SIMPLE, 0, line_num, strlen((yyvsp[0].tree_node)->name));
                                                    }
#line 2905 "src/parser.c"
    break;

  case 15:
#line 195 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ARRAY_DECLARATION, "arrayDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                        add_entry((yyvsp[-2].tree_node)->name, (yyvsp[-3].tree_node)->type, (yyvsp[-3].tree_node)->name, VARIABLE, cur_scope, ARRAY, 0, line_num, strlen((yyvsp[-2].tree_node)->name));
                                                    }
#line 2918 "src/parser.c"
    break;

  case 16:
#line 206 "flex_bison/porygon_syntax.y"
                                                     {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 2924 "src/parser.c"
    break;

  case 17:
#line 210 "flex_bison/porygon_syntax.y"
                                                            {
                                                                struct tree_node *node = create_node(ast_tree_list, TABLE_DECLARATION, "tableDeclaration", 2);
                                                                add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                                add_leaf(node, (yyvsp[-2].tree_node), 1);
                                                                check_type(node);
                                                                (yyval.tree_node) = node;
                                                                add_entry((yyvsp[-2].tree_node)->name, (yyvsp[-3].tree_node)->type, (yyvsp[-3].tree_node)->name, VARIABLE, cur_scope, TABLE, 0, line_num, strlen((yyvsp[-3].tree_node)->name));
                                                            }
#line 2937 "src/parser.c"
    break;

  case 18:
#line 221 "flex_bison/porygon_syntax.y"
                                                                         {
                                                                            struct tree_node *node = create_node(ast_tree_list, TABLE_DEFINITION, "tableDefinition", 2);
                                                                            add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                            add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                                            check_type(node);
                                                                            (yyval.tree_node) = node;
                                                                         }
#line 2949 "src/parser.c"
    break;

  case 19:
#line 231 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2955 "src/parser.c"
    break;

  case 20:
#line 232 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, CONST_LIST, "constList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;

                                                    }
#line 2968 "src/parser.c"
    break;

  case 21:
#line 243 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2974 "src/parser.c"
    break;

  case 22:
#line 244 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, STRING_LIST, "stringList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2986 "src/parser.c"
    break;

  case 23:
#line 254 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 2992 "src/parser.c"
    break;

  case 24:
#line 255 "flex_bison/porygon_syntax.y"
                                                              {
                                                                struct tree_node *node = create_node(ast_tree_list, COLUMN_CONTENT, "columnContent", 2);
                                                                add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                                check_type(node);
                                                                (yyval.tree_node) = node;
                                                              }
#line 3004 "src/parser.c"
    break;

  case 25:
#line 265 "flex_bison/porygon_syntax.y"
                                                                                    {
                                                                                        struct tree_node *node = create_node(ast_tree_list, FUNCT_DECLARATION, "functDeclaration", 4);
                                                                                        add_leaf(node, (yyvsp[-5].tree_node), 0);
                                                                                        add_leaf(node, (yyvsp[-4].tree_node), 1);
                                                                                        add_leaf(node, (yyvsp[-2].tree_node), 2);
                                                                                        add_leaf(node, (yyvsp[0].tree_node), 3);
                                                                                        check_type(node);
                                                                                        (yyval.tree_node) = node;
                                                                                        add_entry((yyvsp[-4].tree_node)->name, (yyvsp[-5].tree_node)->type, (yyvsp[-5].tree_node)->name, FUNCTION, cur_scope, SIMPLE, 0, line_num, strlen((yyvsp[-4].tree_node)->name));
                                                                                    }
#line 3019 "src/parser.c"
    break;

  case 26:
#line 275 "flex_bison/porygon_syntax.y"
                                                                      {
                                                                            struct tree_node *node = create_node(ast_tree_list, FUNCT_DECLARATION, "functDeclaration", 3);
                                                                            add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                            add_leaf(node, (yyvsp[-3].tree_node), 1);
                                                                            add_leaf(node, (yyvsp[0].tree_node), 2);
                                                                            check_type(node);
                                                                            (yyval.tree_node) = node;
                                                                            add_entry((yyvsp[-3].tree_node)->name, (yyvsp[-4].tree_node)->type, (yyvsp[-4].tree_node)->name, FUNCTION, cur_scope, SIMPLE, 0, line_num, strlen((yyvsp[-3].tree_node)->name));
                                                                      }
#line 3033 "src/parser.c"
    break;

  case 27:
#line 287 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3039 "src/parser.c"
    break;

  case 28:
#line 288 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, PARAMETER_LIST, "parameterList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3051 "src/parser.c"
    break;

  case 29:
#line 298 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, PARAMETER_DECLARATION, "parameterDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                        add_entry((yyvsp[0].tree_node)->name, (yyvsp[-1].tree_node)->type, (yyvsp[-1].tree_node)->name, VARIABLE, count_scope + 1, SIMPLE, 0, line_num, strlen((yyvsp[0].tree_node)->name));
                                                    }
#line 3064 "src/parser.c"
    break;

  case 30:
#line 306 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3070 "src/parser.c"
    break;

  case 31:
#line 310 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, EMPTY_COMPOUND_STATEMENT, "emptyCompoundStatement", 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3080 "src/parser.c"
    break;

  case 32:
#line 315 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3086 "src/parser.c"
    break;

  case 33:
#line 319 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3092 "src/parser.c"
    break;

  case 34:
#line 320 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, STATEMENT_LIST, "statementList", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3104 "src/parser.c"
    break;

  case 35:
#line 330 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3110 "src/parser.c"
    break;

  case 36:
#line 331 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3116 "src/parser.c"
    break;

  case 37:
#line 332 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3122 "src/parser.c"
    break;

  case 38:
#line 333 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3128 "src/parser.c"
    break;

  case 39:
#line 334 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3134 "src/parser.c"
    break;

  case 40:
#line 335 "flex_bison/porygon_syntax.y"
                                                             {
                                                                 struct tree_node *node = create_node(ast_tree_list, READ_STMT, "readStmt", 1);
                                                                 add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                 check_type(node);
                                                                 (yyval.tree_node) = node;
                                                             }
#line 3145 "src/parser.c"
    break;

  case 41:
#line 341 "flex_bison/porygon_syntax.y"
                                                             {
                                                                 struct tree_node *node = create_node(ast_tree_list, WRITE_STMT, "writeStmt", 1);
                                                                 add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                 check_type(node);
                                                                 (yyval.tree_node) = node;
                                                             }
#line 3156 "src/parser.c"
    break;

  case 42:
#line 347 "flex_bison/porygon_syntax.y"
                                                             {++synt_errors;}
#line 3162 "src/parser.c"
    break;

  case 43:
#line 351 "flex_bison/porygon_syntax.y"
                                                                 {
                                                                     struct tree_node *node = create_node(ast_tree_list, WHILE, "while", 2);
                                                                     add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                     add_leaf(node, (yyvsp[0].tree_node), 1);
                                                                     check_type(node);
                                                                     (yyval.tree_node) = node;
                                                                 }
#line 3174 "src/parser.c"
    break;

  case 44:
#line 358 "flex_bison/porygon_syntax.y"
                                                                                              {
                                                                                                 struct tree_node *node = create_node(ast_tree_list, WHILE, "while",2);
                                                                                                 add_leaf(node, (yyvsp[-5].tree_node), 0);
                                                                                                 add_leaf(node, (yyvsp[-3].tree_node), 1);
                                                                                                 (yyval.tree_node) = node;
                                                                                                 check_type(node);
                                                                                                 add_entry((yyvsp[-4].tree_node)->name, (yyvsp[-5].tree_node)->type, (yyvsp[-5].tree_node)->name, VARIABLE, count_scope + 1, SIMPLE, 0, line_num, strlen((yyvsp[-6].tree_node)->name));
                                                                                             }
#line 3187 "src/parser.c"
    break;

  case 45:
#line 370 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, CONDITIONAL_STMT, "conditionalStmt", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3199 "src/parser.c"
    break;

  case 46:
#line 380 "flex_bison/porygon_syntax.y"
                                                                {
                                                                    struct tree_node *node = create_node(ast_tree_list, IF_STMT, "ifStmt", 2);
                                                                    add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                    add_leaf(node, (yyvsp[0].tree_node), 1);
                                                                    check_type(node);
                                                                    (yyval.tree_node) = node;
                                                                }
#line 3211 "src/parser.c"
    break;

  case 47:
#line 390 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ELSE_STMT, "elseStmt", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3222 "src/parser.c"
    break;

  case 48:
#line 396 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, EMPTY_ELSE, "emptyElse", 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3232 "src/parser.c"
    break;

  case 49:
#line 404 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, RETURN, "return", 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3242 "src/parser.c"
    break;

  case 50:
#line 409 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, RETURN, "return", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3253 "src/parser.c"
    break;

  case 51:
#line 418 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3259 "src/parser.c"
    break;

  case 52:
#line 419 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ASSIGN, "=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3271 "src/parser.c"
    break;

  case 53:
#line 429 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3277 "src/parser.c"
    break;

  case 54:
#line 430 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, OR, "||", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3289 "src/parser.c"
    break;

  case 55:
#line 440 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3295 "src/parser.c"
    break;

  case 56:
#line 441 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, AND, "&&", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3307 "src/parser.c"
    break;

  case 57:
#line 451 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3313 "src/parser.c"
    break;

  case 58:
#line 452 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, EQUALS, "==", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3325 "src/parser.c"
    break;

  case 59:
#line 459 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, DIFFS, "!=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3337 "src/parser.c"
    break;

  case 60:
#line 469 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3343 "src/parser.c"
    break;

  case 61:
#line 470 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, BIGGER, ">", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3355 "src/parser.c"
    break;

  case 62:
#line 477 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, LESSER, "<", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3367 "src/parser.c"
    break;

  case 63:
#line 484 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, BIGGER_E, ">=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3379 "src/parser.c"
    break;

  case 64:
#line 491 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, LESSER_E, "<=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3391 "src/parser.c"
    break;

  case 65:
#line 501 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3397 "src/parser.c"
    break;

  case 66:
#line 502 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, SUM, "+", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3409 "src/parser.c"
    break;

  case 67:
#line 509 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, MINUS, "-", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3421 "src/parser.c"
    break;

  case 68:
#line 519 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3427 "src/parser.c"
    break;

  case 69:
#line 520 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, MULT, "*", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3439 "src/parser.c"
    break;

  case 70:
#line 527 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, DIV, "/", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3451 "src/parser.c"
    break;

  case 71:
#line 534 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, REM, "%", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3463 "src/parser.c"
    break;

  case 72:
#line 544 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3469 "src/parser.c"
    break;

  case 73:
#line 545 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, NOT, "!", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3480 "src/parser.c"
    break;

  case 74:
#line 554 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3486 "src/parser.c"
    break;

  case 75:
#line 555 "flex_bison/porygon_syntax.y"
                                                    {++synt_errors;}
#line 3492 "src/parser.c"
    break;

  case 76:
#line 556 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3498 "src/parser.c"
    break;

  case 77:
#line 557 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3504 "src/parser.c"
    break;

  case 78:
#line 558 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3510 "src/parser.c"
    break;

  case 79:
#line 562 "flex_bison/porygon_syntax.y"
                                                    {
                                                        (yyval.tree_node) = (yyvsp[0].tree_node);
                                                        check_type((yyval.tree_node));
                                                    }
#line 3519 "src/parser.c"
    break;

  case 80:
#line 566 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, MUTABLE_ONE, "mutable[]", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3531 "src/parser.c"
    break;

  case 81:
#line 573 "flex_bison/porygon_syntax.y"
                                                                {
                                                                    struct tree_node *node = create_node(ast_tree_list, MUTABLE_TWO, "mutable[;]", 3);
                                                                    add_leaf(node, (yyvsp[-5].tree_node), 0);
                                                                    add_leaf(node, (yyvsp[-3].tree_node), 1);
                                                                    add_leaf(node, (yyvsp[-1].tree_node), 2);
                                                                    check_type(node);
                                                                    (yyval.tree_node) = node;
                                                                }
#line 3544 "src/parser.c"
    break;

  case 82:
#line 581 "flex_bison/porygon_syntax.y"
                                                                                {
                                                                                    struct tree_node *node = create_node(ast_tree_list, MUTABLE_THREE, "mutable[;;]", 4);
                                                                                    add_leaf(node, (yyvsp[-7].tree_node), 0);
                                                                                    add_leaf(node, (yyvsp[-5].tree_node), 1);
                                                                                    add_leaf(node, (yyvsp[-3].tree_node), 2);
                                                                                    add_leaf(node, (yyvsp[-1].tree_node), 3);
                                                                                    check_type(node);
                                                                                    (yyval.tree_node) = node;
                                                                                }
#line 3558 "src/parser.c"
    break;

  case 83:
#line 593 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, FUNCT_CALL, "functCall", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3570 "src/parser.c"
    break;

  case 84:
#line 603 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3576 "src/parser.c"
    break;

  case 85:
#line 604 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, EMPTY_ARGS, "emptyArgs", 0);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3586 "src/parser.c"
    break;

  case 86:
#line 612 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ARG_LIST, "argList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        check_type(node);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3598 "src/parser.c"
    break;

  case 87:
#line 619 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3604 "src/parser.c"
    break;

  case 88:
#line 623 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = INT_;}
#line 3610 "src/parser.c"
    break;

  case 89:
#line 624 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = FLOAT_;}
#line 3616 "src/parser.c"
    break;

  case 90:
#line 625 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = BOOL_;}
#line 3622 "src/parser.c"
    break;

  case 91:
#line 626 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = CHAR_;}
#line 3628 "src/parser.c"
    break;

  case 92:
#line 627 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = STRING_;}
#line 3634 "src/parser.c"
    break;

  case 93:
#line 631 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = CHAR_;}
#line 3640 "src/parser.c"
    break;

  case 94:
#line 632 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = INT_;}
#line 3646 "src/parser.c"
    break;

  case 95:
#line 633 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = FLOAT_;}
#line 3652 "src/parser.c"
    break;

  case 96:
#line 634 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = BOOL_;}
#line 3658 "src/parser.c"
    break;

  case 97:
#line 635 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = STRING_;}
#line 3664 "src/parser.c"
    break;

  case 98:
#line 636 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node); (yyval.tree_node)->type = VOID_;}
#line 3670 "src/parser.c"
    break;


#line 3674 "src/parser.c"

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
#line 657 "flex_bison/porygon_syntax.y"


void yyerror(char const *msg) {
    fprintf(stderr, "[ERR] (Line: %d, Column: %d) Found error %s\n", line_num, previous_col, msg);
}
