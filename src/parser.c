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

/* Pointer to symbol table initilized in the main*/
extern struct st_entry *symbol_table;

/* Pointer to struct that holds a list of the ast nodes*/
extern struct node_list *ast_tree_list;

/* Pointer to ast tree root (Program start)*/
extern struct tree_node *ast_root;

extern int line_num;
extern int column_num;

extern int cur_scope;

extern scope_stack *sp_stack;

#line 98 "src/parser.c"

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
#line 120 "flex_bison/porygon_syntax.y"

int yylex(void);

#line 136 "src/parser.c"


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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6985

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  561

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
       0,   128,   128,   132,   133,   139,   143,   144,   145,   149,
     150,   156,   157,   163,   164,   174,   183,   192,   196,   205,
     214,   215,   225,   226,   235,   236,   245,   258,   273,   274,
     283,   295,   299,   303,   307,   308,   317,   318,   319,   320,
     321,   322,   327,   335,   341,   351,   360,   369,   374,   381,
     385,   393,   394,   403,   404,   413,   414,   423,   424,   430,
     439,   440,   446,   452,   458,   467,   468,   474,   483,   484,
     490,   496,   505,   506,   514,   515,   516,   517,   518,   522,
     523,   529,   536,   547,   556,   557,   564,   570,   574,   575,
     576,   577,   578,   582,   583,   584,   585,   586,   587,   591,
     596,   601
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

#define YYTABLE_NINF (-102)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     172,    32,    44,   125,   143,   920,   185,   258,    83,   118,
     153,   109,   161,   196,     6,    16,    62,   141,   220,   260,
     262,   298,  -303,   287,   410,   426,   292,    42,    71,   490,
     104,  4944,  4966,  4982,  4998,  5014,  5030,   292,  1189,   -25,
      18,    54,   199,   623,  5046,  5062,  5078,  5094,  5110,  5126,
    5142,   284,   257,   261,   299,   346,     5,   347,  1388,   986,
    5158,   382,   123,  4668,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   -34,    10,   431,
     163,     3,   403,    51,    82,   460,   180,   207,   181,   421,
     437,  5174,  1736,    85,   120,   223,  1041,  2745,  3289,  3620,
    3974,  5190,  5206,  5222,  5238,  5254,   436,   284,   271,   419,
     601,   434,   403,  1197,   435,  5270,  1388,  2084,  5286,   231,
     138,   463,   514,   486,   508,   516,  1040,   522,   537,   450,
     549,   812,  1160,  1334,  1508,   902,   550,   557,   598,   494,
     499,   313,   569,   591,   530,  1189,   920,  1189,   590,   641,
      36,  1682,   534,  1856,   608,  1979,  2030,  2204,   446,  5302,
    2233,   806,    49,   626,   660,   642,   662,   680,  2327,   683,
     533,   693,   684,   608,   691,   713,   707,   723,  5318,   116,
     806,  2378,   763,   958,  2549,  2672,   553,   772,   229,   608,
    2723,  5334,  5350,  5366,  4530,  5999,  6013,  6027,  6041,  6055,
    1736,  1189,  6069,  6083,  6097,   106,   453,  1284,  4023,  6111,
    6125,  6139,  6153,  6167,  6181,   158,   159,   160,   225,   226,
    4507,  5403,  5424,  5445,  5466,  5487,  2427,  1189,  5508,  5529,
    5550,   461,   339,   744,  1738,   315,  5571,  5592,  5613,  3202,
    5634,  5655,  5676,  3033,  2776,  3417,  3461,  3534,  3570,  2433,
    1189,  3642,  3667,  3691,     9,   -28,    77,   556,  1212,  3715,
    4099,  4123,   535,  4147,  4171,  4195,  1736,  5979,  6195,  4553,
     -15,  4691,   497,   739,   780,   794,   799,   801,  1189,   810,
     813,   815,   823,   833,   845,   847,  2891,  4576,  6424,  6442,
    6460,  6478,  6496,  2578,  1189,  6514,  6532,  6550,   317,    -5,
     401,  2850,  6888,  6568,  6586,  6604,  4714,  6622,  6640,  6658,
     582,   584,   585,   619,   639,   659,   806,  3875,  1388,   986,
    6209,   848,  1736,  1736,  1736,  1736,  1736,  1736,  1736,  1736,
    1736,  1736,  1736,  1736,  1388,   986,  5382,  5697,  5718,   849,
    2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,
    2427,  2427,  2427,  2427,  1388,   986,  2943,  4219,  4243,   857,
    2433,  2433,  2433,  2433,  2433,  2433,  2433,  2433,  2433,  2433,
    2433,  2433,  2433,  2433,   467,  1388,  1388,   292,  1388,   986,
     858,  3924,  3973,  1388,   986,  6405,  6676,  6694,   859,  2578,
    2578,  2578,  2578,  2578,  2578,  2578,  2578,  2578,  2578,  2578,
    2578,  2578,  2578,   679,  1283,  4022,   337,   861,  6223,   892,
    1391,  1632,  4072,  6363,  6377,  6391,  6237,  6251,  6265,  6279,
    6293,   365,   887,  1388,  5739,   367,   811,  2086,  3011,  2601,
    3266,  5943,  5958,  5760,  5781,  5802,  5823,  5844,   482,   465,
     889,  1388,  4267,   115,   602,  1534,  1882,  2256,  3775,  3876,
    3925,  4291,  4315,  4339,  4363,  4387,    80,   620,   643,    48,
     663,   893,   903,  4071,   687,   904,  1388,  6712,   279,   862,
    3128,  3435,  6902,  6916,  6930,  6944,  6730,  6748,  6766,  6784,
    6802,   484,  1631,  4737,  1388,  6307,  4599,  1388,  5865,   692,
     730,  1388,  4411,   728,  6321,  1388,  4760,  1388,   905,  1388,
     906,  4783,  1388,  6820,   742,   746,   750,  5886,  1388,   752,
    4435,  1388,   795,   816,   824,   829,  6838,  1388,  4806,  2233,
    4622,  2233,   830,  1560,  2233,   841,  6335,  2233,  4829,  2233,
     907,  2233,  4852,  2233,   843,   748,   754,  5907,  2233,   797,
    4459,  2233,   808,   913,   914,   915,  6856,  2233,  4875,  4645,
     916,  1908,   917,  6349,  4898,   926,  4921,   918,  5928,  4483,
    6874
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -303,  -303,  -303,   933,     4,  -303,  -303,  -303,  -303,  -303,
    -151,  -303,  -303,  -303,  -303,   871,   -94,  -283,  -130,  -303,
    -303,  -303,  -303,  -303,  3330,  3256,  2992,  2890,  2812,  2470,
    2125,  1081,  1429,   348,  1777,  -302,   868,   733,     2,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,   130,    15,    16,    52,    17,    54,
      77,   109,   162,    18,    83,    84,   111,   131,   132,   133,
     134,   135,   155,   136,    88,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,    89,    90,   241,   138,   242
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,   153,    19,   382,    14,   106,   -98,    21,   -53,   361,
     170,    64,    24,   107,    19,   -53,    14,   407,   139,   -53,
     -10,    64,     1,     2,     3,     4,    50,     6,    81,   186,
     -51,   -53,   390,   422,   405,   -93,   -53,    50,   214,   272,
     273,   274,   275,   276,   277,   360,   -31,   -94,    82,   -20,
     -31,    25,   -51,   440,   -53,    65,   -51,   -20,    85,   265,
     168,    -9,    26,   -53,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,   461,   278,   181,
      51,   183,   465,   -99,    64,   279,   280,   281,    66,    67,
     -55,   -55,   214,   -52,   112,   190,   171,   172,   113,   -55,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -11,    27,    22,
      50,   362,   363,   -55,   -55,    85,   360,   265,  -100,    53,
     -55,   -54,    65,   -52,   -55,   -28,    50,   -52,   -95,   -28,
     -54,    50,   -99,   -99,   -99,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,   -53,   322,    57,   214,   -97,   214,   164,   -53,
     285,   -54,   361,  -101,    66,    67,   -56,   -56,   -54,   266,
     309,    -2,   -54,   -24,   -24,   -56,   -51,  -100,  -100,  -100,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,   -21,     1,     2,
       3,     4,     5,     6,     7,   -21,   -13,    28,   -96,     1,
       2,     3,     4,     5,     6,     7,    -3,   -88,   -89,   -90,
     214,   214,  -101,  -101,  -101,   -88,   -89,   -90,   -16,   -16,
       8,     9,    10,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -7,     8,     9,    10,   -87,   -18,   -18,   214,   117,    68,
      69,    70,    71,   -57,   -57,   -57,   -57,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   -57,    -3,    -3,    -3,   115,   265,
     214,   116,   153,    68,    69,    70,    71,   -59,   -59,   -59,
     -59,   -98,    -5,    29,   -91,   -92,   214,   266,   -59,    -7,
      -7,    -7,   -91,   -92,   -52,   153,   -25,   -25,   214,    -5,
      -5,    -5,    -5,    -5,    -5,    -5,    50,    -4,   215,   216,
     217,   218,   219,   309,   214,    31,    32,    33,    34,    35,
      36,    30,   -12,    79,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -5,    -5,    -5,   -22,   -54,   390,    50,   -22,   265,
     -54,    37,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,    38,   265,    -4,    -4,    -4,   348,
     349,   191,   192,   193,   -14,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   389,   159,   265,   -60,   160,   -51,   -60,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,    47,   -53,   341,    50,   483,   265,
     -53,   484,    50,   -53,   265,    47,    63,    80,    86,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   -54,   341,    50,   486,   262,   -54,   487,
      -8,   -54,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    91,    -6,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,   -27,   391,   392,   -55,   -55,   108,
     268,   110,   -55,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
     -32,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   271,    -8,
      -8,    -8,   121,   114,   118,   262,   122,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   271,    -6,    -6,    -6,   -30,   271,
     -84,   -17,   -30,   -27,   -27,   -27,    55,   323,   324,   -55,
     -55,   -15,   -15,    63,   -26,    63,   -55,   340,   282,   -32,
     -32,   -32,   -51,   -54,   322,   -51,   490,   143,   306,   491,
     -54,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   340,   309,
     389,   309,   144,   -52,   309,   -52,   -52,   309,   145,   309,
      55,   309,    56,   309,   -33,   -15,   -15,   378,   309,   379,
     -79,   309,   -29,   -26,   -26,   -26,   -29,   309,   268,    63,
     146,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   147,   -78,
     -78,   -78,   -78,   -78,   149,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -23,   338,    63,   179,   -23,   -78,   150,
     316,   373,   -78,   -33,   -33,   -33,   364,   365,   366,   367,
     -57,   -57,   -57,   -57,   151,   156,   188,   358,    63,   -57,
     316,   158,   157,   -57,   269,    32,    33,    34,    35,    36,
     123,   124,   -86,   125,   268,   126,   127,   128,     1,     2,
       3,     4,     5,     6,     7,   -88,    63,   -89,   -90,   -88,
      37,   -89,   -90,   161,   271,   -50,   362,   363,   -56,   -56,
     129,   387,    63,    38,   166,   -56,   286,    72,    73,   -56,
     191,   192,   193,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   494,   -91,   174,   495,   271,   -91,   262,   -60,   173,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   -92,   262,   496,   175,   -92,   497,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   -20,   262,   498,   176,   -20,   499,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   -21,   177,   178,    47,   -21,   262,   501,   -19,
     271,   502,   262,   507,   182,   180,   508,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   317,   184,   271,   -80,   -80,   -80,   -80,   -80,    49,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   185,   510,
      49,   213,   511,   -80,   187,   189,   -80,   -80,   342,   343,
     -55,   -55,   -88,   516,    78,   -55,   517,   518,   -55,   548,
     519,   520,   264,   523,   521,   549,   524,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
     310,   311,   312,   313,   314,   269,    32,    33,    34,    35,
      36,   123,   124,   -89,   125,   213,   126,   127,   128,     1,
       2,     3,     4,     5,     6,     7,   526,   -90,   551,   527,
     120,    37,   -91,    49,   -92,   342,   343,   -56,   -56,   553,
     264,   152,   -56,   -99,    38,   -56,  -100,   528,  -101,    49,
     529,   191,   192,   193,    49,   530,   -78,   306,   531,   306,
     532,   537,   306,   533,   538,   306,   -77,   306,   213,   306,
     213,   306,   540,   284,   546,   541,   306,   547,   -76,   306,
     -75,   408,   424,   308,   315,   306,   391,   392,   -56,   -56,
     442,   462,   467,   -56,   485,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   315,   -48,   154,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   323,   324,   -56,   -56,
     488,   -48,   492,   213,   213,   -56,   500,     1,     2,     3,
       4,   -48,     6,     7,   -48,    23,   -74,   503,   -80,   -83,
     -81,   -48,   -48,   -48,   554,   555,   556,   558,   559,   560,
     213,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -82,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   264,   213,   140,   142,     0,   -46,     0,   243,
     244,   245,   246,   247,   248,     0,     0,   -46,     0,   213,
     -46,     0,     0,     0,     0,     0,     0,   -46,   -46,   -46,
       0,   213,     0,     0,     0,   249,     0,     0,     0,    49,
       0,     0,     0,     0,     0,     0,   308,   213,   250,   -85,
       0,     0,     0,     0,     0,   251,   252,   253,     0,     0,
       0,     0,     0,   269,    32,    33,    34,    35,    36,   403,
      49,     0,   264,     0,     0,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,     0,   264,    37,
       0,    68,    69,    70,    71,   -58,   -58,   -58,   -58,     0,
       0,     0,    38,     0,     0,   -49,   -58,     0,   264,   191,
     192,   193,     0,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,    45,     0,     0,
      49,     0,   264,     0,     0,    49,     0,   264,    60,   210,
       0,     0,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,     0,     0,    49,     0,
     260,     0,     0,     0,     0,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,   103,   104,   105,     0,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   210,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,
       0,    45,   194,   195,   196,   197,   198,   199,   260,   -34,
       0,     0,   -34,     0,     0,     0,     0,    45,     0,   -34,
     -34,   -34,    45,     0,     1,     2,     3,     4,   200,     6,
      81,     0,     0,     0,     0,     0,   210,     0,   210,     0,
       0,   201,     0,     0,     0,     0,   368,   369,   202,   203,
     204,   304,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
       0,     0,   308,     0,   308,   -60,     0,   308,     0,   -60,
     308,     0,   308,     0,   308,     0,   308,     0,     0,     0,
       0,   308,     0,     0,   308,     0,     0,     0,     0,     0,
     308,   320,   210,     0,     0,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   337,   210,     0,
       0,     0,   -32,     0,   325,   326,   327,   328,   -57,   -57,
     -57,   -57,   -32,     0,     0,   -32,     0,   -57,     0,     0,
     357,   210,   -32,   -32,   -32,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   210,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   210,
       0,     0,     0,   -38,     0,     0,     0,    45,     0,     0,
       0,     0,     0,   -38,   386,   210,   -38,     0,     0,     0,
       0,     0,     0,   -38,   -38,   -38,     0,     0,     0,     0,
       0,   220,   221,   222,   223,   224,   225,     0,    45,     0,
     260,     0,     0,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   418,   419,   420,     0,   260,   226,     0,     0,
       0,   325,   326,   327,   328,   -59,   -59,   -59,   -59,     0,
     227,   435,   436,   437,   -59,     0,   260,   228,   229,   230,
       0,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   453,   454,   455,   260,    46,     0,     0,    45,     0,
     260,     0,     0,    45,     0,   260,    46,   211,     0,     0,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     478,   479,   480,   304,     0,     0,    45,     0,   261,     0,
       0,     0,     0,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,     0,     0,     0,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   211,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,     0,   -39,     0,    46,
       0,     0,     0,     0,     0,     0,   261,   -39,     0,     0,
     -39,     0,     0,     0,     0,    46,     0,   -39,   -39,   -39,
      46,     0,     0,     0,   364,   365,   366,   367,   -59,   -59,
     -59,   -59,     0,     0,   211,     0,   211,   -59,     0,   167,
       0,   -59,     0,     0,   -81,   -81,   -81,   -81,   -81,   305,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
     304,     0,   304,   -81,     0,   304,   -81,   -81,   304,     0,
     304,     0,   304,     0,   304,     0,     0,     0,     0,   304,
       0,     0,   304,     0,     0,     0,     0,     0,   304,   211,
     211,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   211,     0,     0,     0,
     -33,     0,   325,   326,   327,   328,   -58,   -58,   -58,   -58,
     -33,     0,     0,   -33,     0,   -58,     0,     0,   261,   211,
     -33,   -33,   -33,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   211,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   211,     0,     0,
       0,   -36,     0,     0,     0,    46,     0,     0,     0,     0,
       0,   -36,   305,   211,   -36,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,     0,     0,     0,     0,     0,   267,
     195,   196,   197,   198,   199,     0,    46,     0,   261,     0,
       0,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,     0,   261,   200,     0,     0,   344,   345,
     346,   347,   -57,   -57,   -57,   -57,     0,     0,   201,   -57,
       0,     0,   -57,     0,   261,   202,   203,   204,     0,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,    48,     0,     0,    46,     0,   261,     0,
       0,    46,     0,   261,    48,   212,     0,     0,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,     0,     0,    46,     0,   263,     0,     0,     0,
       0,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   212,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,   -35,     0,    48,     0,     0,
       0,     0,     0,     0,   263,   -35,     0,     0,   -35,     0,
       0,     0,     0,    48,     0,   -35,   -35,   -35,    48,     0,
       0,     0,   364,   365,   366,   367,   -58,   -58,   -58,   -58,
       0,     0,   212,     0,   212,   -58,     0,   283,     0,   -58,
       0,     0,   -82,   -82,   -82,   -82,   -82,   307,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   305,     0,
     305,   -82,     0,   305,   -82,   -82,   305,     0,   305,     0,
     305,     0,   305,     0,     0,     0,     0,   305,     0,     0,
     305,     0,     0,     0,     0,     0,   305,   212,   212,     0,
       0,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,   212,     0,     0,     0,   -45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -45,     0,
       0,   -45,     0,     0,     0,     0,   263,   212,   -45,   -45,
     -45,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,     0,   -40,   212,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,   212,     0,     0,     0,   -40,
       0,     0,     0,    48,     0,     0,     0,     0,     0,   -40,
     307,   212,   -40,     0,     0,     0,     0,     0,     0,   -40,
     -40,   -40,     0,     0,     0,     0,     0,   243,   244,   245,
     246,   247,   248,     0,    48,     0,   263,     0,     0,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,     0,   263,   249,     0,     0,   344,   345,   346,   347,
     -59,   -59,   -59,   -59,     0,     0,   250,   -59,     0,     0,
     -59,     0,   263,   251,   252,   253,     0,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,    44,     0,     0,    48,     0,   263,     0,     0,    48,
       0,   263,     0,   209,     0,     0,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
       0,     0,    48,     0,   259,     0,     0,     0,     0,    44,
      44,    44,    44,    44,    44,    44,    44,   101,   102,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   209,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,     0,   -37,     0,    44,   287,   288,   289,   290,
     291,   292,   259,   -37,     0,     0,   -37,     0,     0,     0,
       0,    44,     0,   -37,   -37,   -37,    44,     0,     0,     0,
       0,     0,   293,     0,     0,     0,     0,     0,     0,     0,
     209,     0,   209,     0,     0,   294,     0,     0,     0,     0,
     368,   369,   295,   296,   297,   303,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,   307,     0,   307,   -62,
       0,   307,     0,   -62,   307,     0,   307,     0,   307,     0,
     307,     0,     0,     0,     0,   307,     0,     0,   307,     0,
       0,     0,     0,     0,   307,     0,   209,     0,     0,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   209,     0,     0,     0,   -47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -47,     0,     0,   -47,
       0,     0,     0,     0,     0,   209,   -47,   -47,   -47,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   209,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   209,     0,     0,     0,   -43,     0,     0,
       0,    44,     0,     0,     0,     0,     0,   -43,     0,   209,
     -43,     0,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     336,   221,   222,   223,   224,   225,   356,   244,   245,   246,
     247,   248,    44,     0,   259,     0,     0,   209,   209,   209,
     209,   209,   209,   209,   416,   417,   226,     0,     0,     0,
     259,     0,   249,     0,     0,     0,     0,     0,     0,   227,
       0,     0,     0,   433,   434,   250,   228,   229,   230,     0,
     259,     0,   251,   252,   253,   259,   259,   259,   259,   259,
     259,   259,   259,   451,   452,     0,    43,     0,   259,     0,
       0,     0,    44,     0,   259,     0,     0,    44,   208,   259,
       0,     0,     0,     0,   303,   303,   303,   303,   303,   303,
     303,   303,   476,   477,     0,     0,     0,   303,     0,   258,
      44,     0,     0,     0,    43,    43,    43,    43,    97,    98,
      99,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   208,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,   -41,     0,
      43,   385,   288,   289,   290,   291,   292,   258,   -41,     0,
       0,   -41,     0,     0,     0,     0,    43,     0,   -41,   -41,
     -41,    43,     0,     0,     0,     0,     0,   293,     0,     0,
       0,     0,     0,     0,     0,   208,     0,   208,     0,     0,
     294,     0,     0,     0,     0,   348,   349,   295,   296,   297,
     302,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,
       0,     0,   -62,     0,   303,   -62,   303,     0,     0,   303,
       0,     0,   303,     0,   303,     0,   303,     0,   303,     0,
       0,     0,     0,   303,     0,     0,   303,     0,     0,     0,
       0,   208,   303,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   208,     0,     0,
       0,   -42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -42,     0,     0,   -42,     0,     0,     0,     0,     0,
     208,   -42,   -42,   -42,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   208,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   208,     0,
       0,     0,   -44,     0,     0,     0,    43,     0,     0,     0,
       0,     0,   -44,     0,   208,   -44,     0,     0,     0,    72,
      73,     0,   -44,   -44,   -44,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,    43,     0,   258,
     -62,     0,   208,   208,   208,   412,   413,   414,   415,     0,
     -88,   -88,   -88,   -88,   -88,   258,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   429,   430,   431,   432,     0,   -88,
       0,     0,     0,   -88,     0,   258,     0,     0,     0,     0,
     258,   258,   258,   258,   447,   448,   449,   450,    42,     0,
       0,     0,     0,   258,     0,     0,     0,    43,     0,   258,
     207,     0,    43,     0,   258,     0,     0,     0,     0,   302,
     302,   302,   302,   472,   473,   474,   475,     0,     0,     0,
       0,   257,   302,     0,     0,    43,    42,    42,    95,    96,
     393,   394,   395,   396,   -57,   -57,   -57,   -57,     0,     0,
       0,   -57,     0,     0,   269,    32,    33,    34,    35,    36,
     123,   124,     0,   125,   207,   126,   127,   128,     1,     2,
       3,     4,     5,     6,     7,     0,    41,     0,     0,     0,
      37,     0,    42,     0,     0,     0,     0,     0,   206,   257,
     381,     0,     0,    38,     0,     0,     0,     0,    42,     0,
     191,   192,   193,    42,     0,     0,     0,     0,     0,   256,
       0,     0,     0,     0,    41,    94,     0,   207,     0,   207,
       0,     0,     0,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   301,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   206,   441,     0,   355,   -79,     0,     0,   302,
     -79,   302,     0,     0,   302,     0,     0,   302,     0,   302,
      41,   302,     0,   302,     0,     0,     0,   256,   302,     0,
       0,   302,     0,   207,     0,     0,    41,   302,    40,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
     205,     0,     0,     0,     0,   206,     0,   206,     0,   207,
       0,   344,   345,   346,   347,   -58,   -58,   -58,   -58,     0,
     300,   255,   -58,     0,     0,   -58,    93,   -79,   -79,   -79,
     -79,   -79,   207,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,   354,     0,   355,   -79,     0,   207,   -79,
     -79,     0,     0,     0,   205,     0,     0,     0,     0,     0,
     207,   206,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,    40,     0,     0,     0,   207,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,   206,    40,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,    42,
       0,   257,     0,     0,   207,   410,   411,   205,     0,   205,
     206,     0,     0,     0,     0,     0,     0,   257,     0,     0,
       0,     0,   299,     0,   427,   428,   206,     0,   393,   394,
     395,   396,   -59,   -59,   -59,   -59,     0,   257,   206,   -59,
       0,     0,   257,   257,   445,   446,    41,     0,     0,     0,
       0,     0,     0,     0,   206,   257,     0,     0,     0,    42,
       0,   257,     0,   205,    42,     0,   257,     0,     0,     0,
       0,   301,   301,   470,   471,     0,     0,    41,     0,   256,
       0,     0,   409,     0,   301,     0,     0,    42,     0,   205,
       0,     0,     0,     0,     0,   256,   -78,   -78,   -78,   -78,
     -78,   426,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   205,   -78,     0,   256,   -78,     0,   353,     0,
     256,   444,     0,     0,     0,     0,     0,     0,   374,     0,
       0,     0,     0,   256,     0,     0,     0,    41,     0,   256,
     205,     0,    41,     0,   256,     0,     0,     0,    40,   300,
     469,     0,    39,     0,     0,     0,   205,     0,     0,     0,
     348,   349,   300,     0,    62,    41,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,   -64,     0,    40,
     -64,   255,     0,    72,    73,   254,     0,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   255,     0,     0,
       0,   301,   425,   301,   -64,     0,   301,     0,     0,   301,
       0,   301,     0,   301,     0,   301,     0,   255,   119,     0,
     301,     0,   443,   301,     0,     0,     0,     0,     0,   301,
       0,     0,     0,     0,     0,   255,   270,     0,    61,    40,
       0,   255,     0,   254,    40,     0,   255,     0,     0,     0,
       0,   468,   270,     0,     0,     0,     0,   270,    87,     0,
       0,     0,     0,     0,   299,     0,     0,    40,     0,     0,
       0,    62,     0,    62,     0,     0,     0,     0,     0,   300,
       0,   300,     0,     0,   300,     0,   298,   300,     0,   300,
       0,   300,     0,   300,     0,     0,     0,     0,   300,     0,
       0,   300,     0,     0,     0,     0,     0,   300,     0,     0,
     137,   -89,   -89,   -89,   -89,   -89,   141,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,   148,    62,     0,     0,
     -89,   137,     0,     0,   -89,   393,   394,   395,   396,   -58,
     -58,   -58,   -58,     0,     0,   163,   -58,   165,     0,     0,
       0,     0,     0,    62,     0,   -90,   -90,   -90,   -90,   -90,
     169,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,     0,     0,   -90,     0,    62,     0,   -90,     0,
       0,   299,     0,   299,     0,     0,   299,     0,     0,   299,
       0,   299,     0,   299,     0,   299,     0,     0,     0,     0,
     299,   321,     0,   299,    62,     0,     0,     0,     0,   299,
       0,     0,   270,     0,     0,     0,     0,     0,     0,     0,
      62,     0,     0,     0,     0,     0,     0,   339,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,   270,     0,   254,     0,   -91,     0,     0,
     359,   -91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   254,     0,     0,   -92,   -92,   -92,   -92,   -92,     0,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   380,   438,
       0,   254,     0,   -92,     0,     0,   137,   -92,     0,     0,
       0,     0,     0,     0,   388,     0,     0,     0,     0,   456,
       0,     0,     0,   459,     0,   254,     0,     0,   270,     0,
     254,     0,     0,     0,    72,    73,     0,   137,   406,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   481,     0,
       0,   270,     0,     0,   421,   -61,   -99,   -99,   -99,   -99,
     -99,     0,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
       0,     0,     0,     0,   439,   -99,     0,     0,     0,   -99,
       0,  -100,  -100,  -100,  -100,  -100,     0,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,   457,   458,     0,   460,     0,
    -100,     0,   137,   464,  -100,  -101,  -101,  -101,  -101,  -101,
       0,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,     0,
       0,     0,     0,     0,  -101,   137,     0,     0,  -101,   -65,
     -65,   370,   371,   372,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   489,     0,     0,     0,     0,   -65,     0,
       0,     0,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   493,     0,     0,     0,   298,     0,   298,     0,     0,
     298,     0,     0,   298,     0,   298,     0,   298,     0,   298,
       0,     0,     0,     0,   298,     0,   504,   298,     0,   368,
     369,     0,     0,   298,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,   505,     0,     0,   506,   -64,     0,
       0,   509,   -64,     0,     0,   512,     0,   513,     0,   514,
       0,     0,   515,     0,     0,     0,     0,     0,   522,     0,
       0,   525,     0,     0,     0,     0,     0,   534,     0,   535,
       0,   536,     0,     0,   539,     0,     0,   542,     0,   543,
       0,   544,     0,   545,     0,     0,     0,     0,   550,     0,
       0,   552,     0,     0,     0,     0,     0,   557,   269,    32,
      33,    34,    35,    36,   123,   124,     0,   125,     0,   126,
     127,   128,     1,     2,     3,     4,     5,     6,     7,     0,
     368,   369,     0,     0,    37,     0,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   404,     0,     0,    38,     0,   -61,
       0,     0,     0,   -61,   191,   192,   193,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   368,
     369,     0,     0,   -32,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -32,     0,     0,   -32,     0,   -63,     0,
       0,     0,   -63,   -32,   -32,   -32,   269,    32,    33,    34,
      35,    36,   123,   124,     0,   125,     0,   126,   127,   128,
       1,     2,     3,     4,     5,     6,     7,     0,    72,    73,
       0,     0,    37,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   463,     0,     0,    38,     0,     0,     0,   -63,
       0,     0,   191,   192,   193,   269,    32,    33,    34,    35,
      36,   123,   124,     0,   125,     0,   126,   127,   128,     1,
       2,     3,     4,     5,     6,     7,     0,   329,   330,     0,
       0,    37,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   482,     0,     0,    38,     0,   -60,     0,     0,     0,
       0,   191,   192,   193,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   329,   330,     0,     0,
     -33,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -33,     0,     0,   -33,     0,   -62,     0,     0,     0,     0,
     -33,   -33,   -33,   -68,   -68,   -68,   -68,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,   -68,     0,     0,     0,   -68,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
     -72,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,
     -77,     0,     0,     0,   -77,   -76,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,   -76,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,   -75,     0,
       0,     0,   -75,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,   -73,     0,     0,     0,   -73,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,     0,   -78,     0,     0,     0,
     -78,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,
     -74,     0,     0,     0,   -74,   -66,   -66,   370,   371,   372,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,   -66,     0,     0,     0,   -66,   -67,
     -67,   370,   371,   372,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,   -67,     0,
       0,     0,   -67,   -69,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,     0,   -69,     0,     0,     0,   -69,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,     0,   -70,     0,     0,     0,
     -70,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
     -71,     0,     0,     0,   -71,   -83,   -83,   -83,   -83,   -83,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,     0,   -83,     0,     0,     0,   -83,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,   -80,     0,
       0,     0,   -80,   -81,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,   -81,     0,     0,     0,   -81,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,   -82,     0,     0,     0,
     -82,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   334,   -79,   335,
       0,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
     318,     0,   319,   -79,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,   376,     0,    59,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,   383,   -79,   384,     0,
       0,     0,   -79,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
     -80,     0,     0,   -80,     0,   -80,   -81,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,   -81,     0,     0,   -81,     0,   -81,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,   -82,     0,     0,   -82,
       0,   -82,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
       0,   -78,     0,     0,    92,   -78,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,   -78,   377,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,   -78,     0,     0,     0,     0,
     402,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
     -80,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,   -80,     0,     0,     0,     0,   -80,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,   -81,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,   -81,     0,     0,     0,     0,   -81,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,   -82,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,   -82,     0,     0,     0,     0,   -82,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,    58,     0,    59,     0,     0,   -79,
     -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -88,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -89,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,   -91,   -91,
     -91,   -91,   -91,   -90,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,     0,   -92,   -92,   -92,   -92,   -92,   -91,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
     -65,   -65,    74,    75,    76,   -92,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -65,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -68,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -72,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,   -77,   -77,   -77,   -77,   -77,   -78,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -77,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -76,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -75,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -73,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,   -66,   -66,    74,    75,    76,   -74,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -67,   -67,    74,    75,    76,   -66,   -67,   -67,   -67,   -67,
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
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   -99,   -99,
     -99,   -99,   -99,   -82,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,     0,     0,  -100,  -100,  -100,  -100,  -100,   -99,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,     0,     0,
    -101,  -101,  -101,  -101,  -101,  -100,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,     0,     0,   -79,   -79,   -79,   -79,
     -79,  -101,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,   423,   -79,   335,     0,   -79,   -88,   -88,   -88,
     -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,   -88,     0,     0,   -88,   -89,   -89,
     -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,   -89,     0,     0,   -89,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,   -90,     0,     0,   -90,
     -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,     0,   -91,     0,     0,
     -91,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,     0,   -92,     0,
       0,   -92,   -99,   -99,   -99,   -99,   -99,     0,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,     0,     0,     0,   -99,
       0,     0,   -99,  -100,  -100,  -100,  -100,  -100,     0,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,     0,     0,     0,
    -100,     0,     0,  -100,  -101,  -101,  -101,  -101,  -101,     0,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,     0,     0,
       0,  -101,     0,     0,  -101,   -65,   -65,   350,   351,   352,
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
     -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,   -75,     0,     0,
     -75,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,   -73,     0,
       0,   -73,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,   -78,
       0,     0,   -78,   -74,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
     -74,     0,     0,   -74,   -66,   -66,   350,   351,   352,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,   -66,     0,     0,   -66,   -67,   -67,   350,   351,   352,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,   -67,     0,     0,   -67,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,   -69,     0,     0,   -69,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,   -70,     0,     0,   -70,   -71,   -71,
     -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,   -71,     0,     0,   -71,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,   -83,     0,     0,   -83,
     -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,   -80,     0,     0,
     -80,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,   -81,     0,
       0,   -81,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   348,   349,   -82,
       0,     0,   -82,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,     0,   348,   349,   -61,     0,     0,   -61,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -63,
       0,     0,   -63,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   375,
       0,   319,   -79,   -88,   -88,   -88,   -88,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,
     -89,   -89,   -88,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -90,   -90,   -90,   -90,   -90,   -89,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -91,   -91,   -91,   -91,   -91,
     -90,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -92,
     -92,   -92,   -92,   -92,   -91,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -99,   -99,   -99,   -99,   -99,   -92,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,  -100,  -100,  -100,
    -100,  -100,   -99,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -101,  -101,  -101,  -101,  -101,  -100,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,   -65,   -65,   331,   332,   333,
    -101,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -68,
     -68,   -68,   -68,   -68,   -65,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -72,   -72,   -72,   -72,   -72,   -68,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -77,   -77,   -77,
     -77,   -77,   -72,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -76,   -76,   -76,   -76,   -76,   -77,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -75,   -75,   -75,   -75,   -75,
     -76,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -78,
     -78,   -78,   -78,   -78,   -75,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -73,   -73,   -73,   -73,   -73,   -78,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,
     -74,   -74,   -73,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -66,   -66,   331,   332,   333,   -74,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   331,   332,   333,
     -66,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -69,
     -69,   -69,   -69,   -69,   -67,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,   -69,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,
     -71,   -71,   -70,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -83,   -83,   -83,   -83,   -83,   -71,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -80,   -80,   -80,   -80,   -80,
     -83,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -81,
     -81,   -81,   -81,   -81,   -80,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -82,   -82,   -82,   -82,   -82,   -81,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   329,   330,     0,
       0,     0,   -82,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   329,   330,     0,     0,     0,   -64,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   329,   330,     0,     0,     0,
     -61,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -79,
     -79,   -79,   -79,   -79,   -63,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,   466,   -79,   384,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,   -88,   -89,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,   -89,   -90,   -90,   -90,   -90,   -90,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,   -90,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,   -91,
     -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,     0,     0,   -92,   -99,   -99,
     -99,   -99,   -99,     0,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,     0,     0,     0,   -99,  -100,  -100,  -100,  -100,
    -100,     0,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
       0,     0,     0,  -100,  -101,  -101,  -101,  -101,  -101,     0,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,     0,     0,
       0,  -101,   -65,   -65,   399,   400,   401,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,
     -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,   -68,   -72,   -72,
     -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,   -72,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,   -77,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,   -76,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,   -75,
     -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,   -73,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,   -78,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,   -74,   -66,   -66,   399,   400,   401,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,   -66,   -67,   -67,   399,   400,   401,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,   -67,
     -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,   -69,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,   -70,   -71,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,   -71,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,   -83,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,   -80,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,   -81,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   397,   398,     0,   -82,     0,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   397,   398,     0,   -60,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     397,   398,     0,   -62,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   397,   398,     0,   -64,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   397,   398,
       0,   -61,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,   -63
};

static const yytype_int16 yycheck[] =
{
       0,   131,     0,   286,     0,    39,     3,     5,    36,    37,
     161,    36,    12,    47,    12,    43,    12,   319,   112,    47,
      45,    36,    17,    18,    19,    20,    26,    22,    23,   180,
      45,    36,    37,   335,   317,     3,    41,    37,    38,     3,
       4,     5,     6,     7,     8,    36,    43,     3,    43,    39,
      47,    45,    43,   355,    36,    37,    47,    47,    56,    59,
     154,    45,    46,    45,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,   379,    42,   173,
      38,   175,   384,     0,    36,    49,    50,    51,    34,    35,
      36,    37,    92,    45,    43,   189,    47,    48,    47,    45,
      17,    18,    19,    20,    21,    22,    23,    45,    46,     0,
     110,    34,    35,    36,    37,   113,    36,   117,     0,    48,
      43,    36,    37,    43,    47,    43,   126,    47,     3,    47,
      45,   131,    49,    50,    51,    17,    18,    19,    20,    21,
      22,    23,    36,    37,    40,   145,     3,   147,   146,    43,
     150,    36,    37,     0,    34,    35,    36,    37,    43,    36,
     160,     0,    47,    47,    48,    45,    43,    49,    50,    51,
      17,    18,    19,    20,    21,    22,    23,    39,    17,    18,
      19,    20,    21,    22,    23,    47,    45,    46,     3,    17,
      18,    19,    20,    21,    22,    23,     0,    39,    39,    39,
     200,   201,    49,    50,    51,    47,    47,    47,    45,    46,
      49,    50,    51,    17,    18,    19,    20,    21,    22,    23,
       0,    49,    50,    51,    43,    45,    46,   227,    47,    30,
      31,    32,    33,    34,    35,    36,    37,    17,    18,    19,
      20,    21,    22,    23,    45,    49,    50,    51,    41,   249,
     250,    44,   382,    30,    31,    32,    33,    34,    35,    36,
      37,     3,     0,     3,    39,    39,   266,    36,    45,    49,
      50,    51,    47,    47,    43,   405,    47,    48,   278,    17,
      18,    19,    20,    21,    22,    23,   286,     0,     4,     5,
       6,     7,     8,   293,   294,     3,     4,     5,     6,     7,
       8,     3,    45,    42,    17,    18,    19,    20,    21,    22,
      23,    49,    50,    51,    43,    36,    37,   317,    47,   319,
      41,    29,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,    42,   335,    49,    50,    51,    24,
      25,    49,    50,    51,    45,    30,    31,    32,    33,    34,
      35,    36,    37,    36,    41,   355,    41,    44,    41,    44,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,    26,    36,    37,   377,    41,   379,
      41,    44,   382,    44,   384,    37,    38,    41,    41,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,    36,    37,   405,    41,    59,    41,    44,
       0,    44,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    43,     0,    17,    18,    19,
      20,    21,    22,    23,     0,    34,    35,    36,    37,     8,
      92,    38,    41,    17,    18,    19,    20,    21,    22,    23,
       0,    17,    18,    19,    20,    21,    22,    23,   110,    49,
      50,    51,    43,     3,    43,   117,    47,    17,    18,    19,
      20,    21,    22,    23,   126,    49,    50,    51,    43,   131,
      43,    45,    47,    49,    50,    51,    40,    34,    35,    36,
      37,    45,    46,   145,     0,   147,    43,    36,   150,    49,
      50,    51,    41,    36,    37,    44,    41,    44,   160,    44,
      43,    17,    18,    19,    20,    21,    22,    23,    36,   519,
      36,   521,     8,    41,   524,    41,    44,   527,    42,   529,
      40,   531,    42,   533,     0,    45,    46,    40,   538,    42,
      43,   541,    43,    49,    50,    51,    47,   547,   200,   201,
      42,    17,    18,    19,    20,    21,    22,    23,    42,    24,
      25,    26,    27,    28,    42,    30,    31,    32,    33,    34,
      35,    36,    37,    43,   226,   227,    43,    47,    43,    42,
      47,    46,    47,    49,    50,    51,    30,    31,    32,    33,
      34,    35,    36,    37,    45,    45,    43,   249,   250,    43,
      47,     3,    45,    47,     3,     4,     5,     6,     7,     8,
       9,    10,    43,    12,   266,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    43,   278,    43,    43,    47,
      29,    47,    47,    42,   286,    45,    34,    35,    36,    37,
      39,   293,   294,    42,     3,    43,    38,    24,    25,    47,
      49,    50,    51,    30,    31,    32,    33,    34,    35,    36,
      37,    41,    43,     3,    44,   317,    47,   319,    45,    43,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,    43,   335,    41,    43,    47,    44,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,    43,   355,    41,    43,    47,    44,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,    43,    43,    41,   377,    47,   379,    41,    45,
     382,    44,   384,    41,    43,    42,    44,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,    38,    45,   405,    24,    25,    26,    27,    28,    26,
      30,    31,    32,    33,    34,    35,    36,    37,    45,    41,
      37,    38,    44,    43,    11,     3,    46,    47,    34,    35,
      36,    37,    43,    41,    51,    41,    44,    41,    44,    41,
      44,    41,    59,    41,    44,    41,    44,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       4,     5,     6,     7,     8,     3,     4,     5,     6,     7,
       8,     9,    10,    43,    12,    92,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    41,    43,    41,    44,
     107,    29,    43,   110,    43,    34,    35,    36,    37,    41,
     117,    39,    41,    43,    42,    44,    43,    41,    43,   126,
      44,    49,    50,    51,   131,    41,    43,   519,    44,   521,
      41,    41,   524,    44,    44,   527,    43,   529,   145,   531,
     147,   533,    41,   150,    41,    44,   538,    44,    43,   541,
      43,    43,    43,   160,   161,   547,    34,    35,    36,    37,
      43,    43,    43,    41,    43,     3,     4,     5,     6,     7,
       8,     9,    10,   180,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    34,    35,    36,    37,
      43,    29,    43,   200,   201,    43,    43,    17,    18,    19,
      20,    39,    22,    23,    42,    12,    43,    43,    43,    43,
      43,    49,    50,    51,    41,    41,    41,    41,    41,    41,
     227,     3,     4,     5,     6,     7,     8,     9,    10,    43,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   249,   250,   113,   117,    -1,    29,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    39,    -1,   266,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      -1,   278,    -1,    -1,    -1,    29,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,    42,    43,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,   316,
     317,    -1,   319,    -1,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,    -1,   335,    29,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    42,    -1,    -1,    45,    45,    -1,   355,    49,
      50,    51,    -1,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,    26,    -1,    -1,
     377,    -1,   379,    -1,    -1,   382,    -1,   384,    37,    38,
      -1,    -1,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,    -1,    -1,   405,    -1,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    92,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,   110,     3,     4,     5,     6,     7,     8,   117,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,   126,    -1,    49,
      50,    51,   131,    -1,    17,    18,    19,    20,    29,    22,
      23,    -1,    -1,    -1,    -1,    -1,   145,    -1,   147,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    24,    25,    49,    50,
      51,   160,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,   519,    -1,   521,    43,    -1,   524,    -1,    47,
     527,    -1,   529,    -1,   531,    -1,   533,    -1,    -1,    -1,
      -1,   538,    -1,    -1,   541,    -1,    -1,    -1,    -1,    -1,
     547,   200,   201,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   226,   227,    -1,
      -1,    -1,    29,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    39,    -1,    -1,    42,    -1,    43,    -1,    -1,
     249,   250,    49,    50,    51,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,   266,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,   278,
      -1,    -1,    -1,    29,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,    39,   293,   294,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,   317,    -1,
     319,    -1,    -1,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,    -1,   335,    29,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      42,   350,   351,   352,    43,    -1,   355,    49,    50,    51,
      -1,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,    26,    -1,    -1,   377,    -1,
     379,    -1,    -1,   382,    -1,   384,    37,    38,    -1,    -1,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,    -1,    -1,   405,    -1,    59,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    92,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,   126,    -1,    49,    50,    51,
     131,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,   145,    -1,   147,    43,    -1,   150,
      -1,    47,    -1,    -1,    24,    25,    26,    27,    28,   160,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
     519,    -1,   521,    43,    -1,   524,    46,    47,   527,    -1,
     529,    -1,   531,    -1,   533,    -1,    -1,    -1,    -1,   538,
      -1,    -1,   541,    -1,    -1,    -1,    -1,    -1,   547,   200,
     201,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,   227,    -1,    -1,    -1,
      29,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      39,    -1,    -1,    42,    -1,    43,    -1,    -1,   249,   250,
      49,    50,    51,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,   266,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,   278,    -1,    -1,
      -1,    29,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,    39,   293,   294,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,   317,    -1,   319,    -1,
      -1,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,    -1,   335,    29,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    42,    41,
      -1,    -1,    44,    -1,   355,    49,    50,    51,    -1,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,    26,    -1,    -1,   377,    -1,   379,    -1,
      -1,   382,    -1,   384,    37,    38,    -1,    -1,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,    -1,    -1,   405,    -1,    59,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    92,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    29,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,   117,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,   126,    -1,    49,    50,    51,   131,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,   145,    -1,   147,    43,    -1,   150,    -1,    47,
      -1,    -1,    24,    25,    26,    27,    28,   160,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,   519,    -1,
     521,    43,    -1,   524,    46,    47,   527,    -1,   529,    -1,
     531,    -1,   533,    -1,    -1,    -1,    -1,   538,    -1,    -1,
     541,    -1,    -1,    -1,    -1,    -1,   547,   200,   201,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,   227,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,   249,   250,    49,    50,
      51,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,   266,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,   278,    -1,    -1,    -1,    29,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,    39,
     293,   294,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,   317,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,    -1,   335,    29,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    42,    41,    -1,    -1,
      44,    -1,   355,    49,    50,    51,    -1,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,    26,    -1,    -1,   377,    -1,   379,    -1,    -1,   382,
      -1,   384,    -1,    38,    -1,    -1,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
      -1,    -1,   405,    -1,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    92,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   110,     3,     4,     5,     6,
       7,     8,   117,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,   126,    -1,    49,    50,    51,   131,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,    -1,   147,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      24,    25,    49,    50,    51,   160,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,   519,    -1,   521,    43,
      -1,   524,    -1,    47,   527,    -1,   529,    -1,   531,    -1,
     533,    -1,    -1,    -1,    -1,   538,    -1,    -1,   541,    -1,
      -1,    -1,    -1,    -1,   547,    -1,   201,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,   227,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,   250,    49,    50,    51,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,   266,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,   278,    -1,    -1,    -1,    29,    -1,    -1,
      -1,   286,    -1,    -1,    -1,    -1,    -1,    39,    -1,   294,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
       3,     4,     5,     6,     7,     8,     3,     4,     5,     6,
       7,     8,   317,    -1,   319,    -1,    -1,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    29,    -1,    -1,    -1,
     335,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,   348,   349,    42,    49,    50,    51,    -1,
     355,    -1,    49,    50,    51,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,    -1,    26,    -1,   373,    -1,
      -1,    -1,   377,    -1,   379,    -1,    -1,   382,    38,   384,
      -1,    -1,    -1,    -1,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,    -1,    -1,    -1,   402,    -1,    59,
     405,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    92,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,
     110,     3,     4,     5,     6,     7,     8,   117,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,   126,    -1,    49,    50,
      51,   131,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,   147,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    24,    25,    49,    50,    51,
     160,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    -1,   519,    44,   521,    -1,    -1,   524,
      -1,    -1,   527,    -1,   529,    -1,   531,    -1,   533,    -1,
      -1,    -1,    -1,   538,    -1,    -1,   541,    -1,    -1,    -1,
      -1,   201,   547,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,   227,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
     250,    49,    50,    51,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,   266,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,   278,    -1,
      -1,    -1,    29,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,    39,    -1,   294,    42,    -1,    -1,    -1,    24,
      25,    -1,    49,    50,    51,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,   317,    -1,   319,
      45,    -1,   322,   323,   324,   325,   326,   327,   328,    -1,
      24,    25,    26,    27,    28,   335,    30,    31,    32,    33,
      34,    35,    36,    37,   344,   345,   346,   347,    -1,    43,
      -1,    -1,    -1,    47,    -1,   355,    -1,    -1,    -1,    -1,
     360,   361,   362,   363,   364,   365,   366,   367,    26,    -1,
      -1,    -1,    -1,   373,    -1,    -1,    -1,   377,    -1,   379,
      38,    -1,   382,    -1,   384,    -1,    -1,    -1,    -1,   389,
     390,   391,   392,   393,   394,   395,   396,    -1,    -1,    -1,
      -1,    59,   402,    -1,    -1,   405,    64,    65,    66,    67,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    92,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    26,    -1,    -1,    -1,
      29,    -1,   110,    -1,    -1,    -1,    -1,    -1,    38,   117,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,   126,    -1,
      49,    50,    51,   131,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    64,    65,    -1,   145,    -1,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,   160,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    92,    40,    -1,    42,    43,    -1,    -1,   519,
      47,   521,    -1,    -1,   524,    -1,    -1,   527,    -1,   529,
     110,   531,    -1,   533,    -1,    -1,    -1,   117,   538,    -1,
      -1,   541,    -1,   201,    -1,    -1,   126,   547,    26,    -1,
      -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,   145,    -1,   147,    -1,   227,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
     160,    59,    41,    -1,    -1,    44,    64,    24,    25,    26,
      27,    28,   250,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    42,    43,    -1,   266,    46,
      47,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
     278,   201,    -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,
      -1,    -1,   110,    -1,    -1,    -1,   294,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   126,    -1,
      -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,   317,
      -1,   319,    -1,    -1,   322,   323,   324,   145,    -1,   147,
     250,    -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,
      -1,    -1,   160,    -1,   342,   343,   266,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,   355,   278,    41,
      -1,    -1,   360,   361,   362,   363,   286,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   294,   373,    -1,    -1,    -1,   377,
      -1,   379,    -1,   201,   382,    -1,   384,    -1,    -1,    -1,
      -1,   389,   390,   391,   392,    -1,    -1,   317,    -1,   319,
      -1,    -1,   322,    -1,   402,    -1,    -1,   405,    -1,   227,
      -1,    -1,    -1,    -1,    -1,   335,    24,    25,    26,    27,
      28,   341,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,   250,    41,    -1,   355,    44,    -1,    46,    -1,
     360,   361,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,   373,    -1,    -1,    -1,   377,    -1,   379,
     278,    -1,   382,    -1,   384,    -1,    -1,    -1,   286,   389,
     390,    -1,    26,    -1,    -1,    -1,   294,    -1,    -1,    -1,
      24,    25,   402,    -1,    38,   405,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,   317,
      44,   319,    -1,    24,    25,    59,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,   335,    -1,    -1,
      -1,   519,   340,   521,    45,    -1,   524,    -1,    -1,   527,
      -1,   529,    -1,   531,    -1,   533,    -1,   355,    92,    -1,
     538,    -1,   360,   541,    -1,    -1,    -1,    -1,    -1,   547,
      -1,    -1,    -1,    -1,    -1,   373,   110,    -1,    38,   377,
      -1,   379,    -1,   117,   382,    -1,   384,    -1,    -1,    -1,
      -1,   389,   126,    -1,    -1,    -1,    -1,   131,    58,    -1,
      -1,    -1,    -1,    -1,   402,    -1,    -1,   405,    -1,    -1,
      -1,   145,    -1,   147,    -1,    -1,    -1,    -1,    -1,   519,
      -1,   521,    -1,    -1,   524,    -1,   160,   527,    -1,   529,
      -1,   531,    -1,   533,    -1,    -1,    -1,    -1,   538,    -1,
      -1,   541,    -1,    -1,    -1,    -1,    -1,   547,    -1,    -1,
     110,    24,    25,    26,    27,    28,   116,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,   126,   201,    -1,    -1,
      43,   131,    -1,    -1,    47,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,   145,    41,   147,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    24,    25,    26,    27,    28,
     160,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,   250,    -1,    47,    -1,
      -1,   519,    -1,   521,    -1,    -1,   524,    -1,    -1,   527,
      -1,   529,    -1,   531,    -1,   533,    -1,    -1,    -1,    -1,
     538,   201,    -1,   541,   278,    -1,    -1,    -1,    -1,   547,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     294,    -1,    -1,    -1,    -1,    -1,    -1,   227,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,   317,    -1,   319,    -1,    43,    -1,    -1,
     250,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   335,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,   278,   353,
      -1,   355,    -1,    43,    -1,    -1,   286,    47,    -1,    -1,
      -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,   373,
      -1,    -1,    -1,   377,    -1,   379,    -1,    -1,   382,    -1,
     384,    -1,    -1,    -1,    24,    25,    -1,   317,   318,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,   402,    -1,
      -1,   405,    -1,    -1,   334,    45,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,   354,    43,    -1,    -1,    -1,    47,
      -1,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,   375,   376,    -1,   378,    -1,
      43,    -1,   382,   383,    47,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,   405,    -1,    -1,    47,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,   423,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   441,    -1,    -1,    -1,   519,    -1,   521,    -1,    -1,
     524,    -1,    -1,   527,    -1,   529,    -1,   531,    -1,   533,
      -1,    -1,    -1,    -1,   538,    -1,   466,   541,    -1,    24,
      25,    -1,    -1,   547,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,   484,    -1,    -1,   487,    43,    -1,
      -1,   491,    47,    -1,    -1,   495,    -1,   497,    -1,   499,
      -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,   508,    -1,
      -1,   511,    -1,    -1,    -1,    -1,    -1,   517,    -1,   519,
      -1,   521,    -1,    -1,   524,    -1,    -1,   527,    -1,   529,
      -1,   531,    -1,   533,    -1,    -1,    -1,    -1,   538,    -1,
      -1,   541,    -1,    -1,    -1,    -1,    -1,   547,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      24,    25,    -1,    -1,    29,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    39,    -1,    -1,    42,    -1,    43,
      -1,    -1,    -1,    47,    49,    50,    51,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    24,
      25,    -1,    -1,    29,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    39,    -1,    -1,    42,    -1,    43,    -1,
      -1,    -1,    47,    49,    50,    51,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    24,    25,
      -1,    -1,    29,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    39,    -1,    -1,    42,    -1,    -1,    -1,    45,
      -1,    -1,    49,    50,    51,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    24,    25,    -1,
      -1,    29,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    39,    -1,    -1,    42,    -1,    43,    -1,    -1,    -1,
      -1,    49,    50,    51,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    24,    25,    -1,    -1,
      29,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      39,    -1,    -1,    42,    -1,    43,    -1,    -1,    -1,    -1,
      49,    50,    51,    24,    25,    26,    27,    28,    -1,    30,
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
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,    42,
      -1,    44,    -1,    46,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    42,    43,    -1,    -1,    46,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    42,    -1,    -1,    45,    46,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,    42,    -1,
      -1,    -1,    46,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,    46,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,    -1,    44,    -1,    46,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,
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
      36,    37,    -1,    -1,    24,    25,    26,    27,    28,    45,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      24,    25,    26,    27,    28,    45,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    24,    25,    26,    27,
      28,    45,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,    42,    -1,    44,    24,    25,    26,
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
      32,    33,    34,    35,    36,    37,    -1,    24,    25,    41,
      -1,    -1,    44,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    24,    25,    41,    -1,    -1,    44,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,    -1,    44,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    42,    43,    24,    25,    26,    27,    28,    -1,    30,
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
      25,    26,    27,    28,    43,    30,    31,    32,    33,    34,
      35,    36,    37,    24,    25,    26,    27,    28,    43,    30,
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
      36,    37,    -1,    -1,    -1,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    18,    19,    20,    21,    22,    23,    49,    50,
      51,    53,    54,    55,    56,    57,    58,    60,    65,    90,
      91,    90,     0,    55,    91,    45,    46,    46,    46,     3,
       3,     3,     4,     5,     6,     7,     8,    29,    42,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    89,
      91,    38,    59,    48,    61,    40,    42,    40,    40,    42,
      83,    76,    77,    85,    36,    37,    34,    35,    30,    31,
      32,    33,    24,    25,    26,    27,    28,    62,    89,    42,
      41,    23,    43,    66,    67,    90,    41,    76,    76,    87,
      88,    43,    46,    78,    79,    80,    80,    81,    81,    81,
      81,    82,    82,    83,    83,    83,    39,    47,     8,    63,
      38,    68,    43,    47,     3,    41,    44,    47,    43,    77,
      89,    43,    47,     9,    10,    12,    14,    15,    16,    39,
      56,    69,    70,    71,    72,    73,    75,    76,    90,    68,
      67,    76,    88,    44,     8,    42,    42,    42,    76,    42,
      42,    45,    39,    70,    13,    74,    45,    45,     3,    41,
      44,    42,    64,    76,    90,    76,     3,    84,    68,    76,
      62,    47,    48,    43,     3,    43,    43,    43,    41,    43,
      42,    68,    43,    68,    45,    45,    62,    11,    43,     3,
      68,    49,    50,    51,     3,     4,     5,     6,     7,     8,
      29,    42,    49,    50,    51,    78,    79,    80,    81,    82,
      83,    84,    86,    89,    91,     4,     5,     6,     7,     8,
       3,     4,     5,     6,     7,     8,    29,    42,    49,    50,
      51,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    89,    91,     3,     4,     5,     6,     7,     8,    29,
      42,    49,    50,    51,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    89,    91,    36,     3,    85,     3,
      77,    85,     3,     4,     5,     6,     7,     8,    42,    49,
      50,    51,    85,    86,    89,    91,    38,     3,     4,     5,
       6,     7,     8,    29,    42,    49,    50,    51,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    89,    91,
       4,     5,     6,     7,     8,    89,    47,    38,    40,    42,
      83,    76,    37,    34,    35,    30,    31,    32,    33,    24,
      25,    26,    27,    28,    40,    42,     3,    83,    85,    76,
      36,    37,    34,    35,    30,    31,    32,    33,    24,    25,
      26,    27,    28,    46,    40,    42,     3,    83,    85,    76,
      36,    37,    34,    35,    30,    31,    32,    33,    24,    25,
      26,    27,    28,    46,    78,    40,    40,    46,    40,    42,
      76,    39,    69,    40,    42,     3,    83,    85,    76,    36,
      37,    34,    35,    30,    31,    32,    33,    24,    25,    26,
      27,    28,    46,    89,    39,    69,    76,    87,    43,    79,
      80,    80,    81,    81,    81,    81,    82,    82,    83,    83,
      83,    76,    87,    40,    43,    78,    79,    80,    80,    81,
      81,    81,    81,    82,    82,    83,    83,    83,    77,    76,
      87,    40,    43,    78,    79,    80,    80,    81,    81,    81,
      81,    82,    82,    83,    83,    83,    77,    76,    76,    77,
      76,    87,    43,    39,    76,    87,    40,    43,    78,    79,
      80,    80,    81,    81,    81,    81,    82,    82,    83,    83,
      83,    77,    39,    41,    44,    43,    41,    44,    43,    76,
      41,    44,    43,    76,    41,    44,    41,    44,    41,    44,
      43,    41,    44,    43,    76,    76,    76,    41,    44,    76,
      41,    44,    76,    76,    76,    76,    41,    44,    41,    44,
      41,    44,    76,    41,    44,    76,    41,    44,    41,    44,
      41,    44,    41,    44,    76,    76,    76,    41,    44,    76,
      41,    44,    76,    76,    76,    76,    41,    44,    41,    41,
      76,    41,    76,    41,    41,    41,    41,    76,    41,    41,
      41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    55,    55,    55,    56,
      56,    56,    56,    56,    56,    57,    58,    59,    60,    61,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    71,    71,    72,    73,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    79,
      80,    80,    80,    80,    80,    81,    81,    81,    82,    82,
      82,    82,    83,    83,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    86,    87,    87,    88,    88,    89,    89,
      89,    89,    89,    90,    90,    90,    90,    90,    90,    91,
      91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     1,     1,     1,
       3,     1,     3,     1,     3,     2,     4,     3,     5,     7,
       1,     3,     1,     3,     3,     5,     6,     5,     1,     3,
       2,     1,     2,     3,     1,     2,     2,     2,     1,     1,
       2,     5,     5,     5,     8,     2,     5,     2,     0,     1,
       2,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     3,     1,     1,     1,     1,     1,
       4,     6,     8,     4,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
#line 128 "flex_bison/porygon_syntax.y"
                                                    {ast_root = (yyvsp[0].tree_node);}
#line 2910 "src/parser.c"
    break;

  case 3:
#line 132 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2916 "src/parser.c"
    break;

  case 4:
#line 133 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "declarationList", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2927 "src/parser.c"
    break;

  case 6:
#line 143 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 2933 "src/parser.c"
    break;

  case 7:
#line 144 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2939 "src/parser.c"
    break;

  case 9:
#line 149 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2945 "src/parser.c"
    break;

  case 10:
#line 150 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "varDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2956 "src/parser.c"
    break;

  case 11:
#line 156 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2962 "src/parser.c"
    break;

  case 12:
#line 157 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "arrayDeclarationDefinition", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2973 "src/parser.c"
    break;

  case 13:
#line 163 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2979 "src/parser.c"
    break;

  case 14:
#line 164 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "tableDeclarationDefinition", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2990 "src/parser.c"
    break;

  case 15:
#line 174 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "varSimpleDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3001 "src/parser.c"
    break;

  case 16:
#line 183 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "arrayDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3012 "src/parser.c"
    break;

  case 17:
#line 192 "flex_bison/porygon_syntax.y"
                                                  {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3018 "src/parser.c"
    break;

  case 18:
#line 196 "flex_bison/porygon_syntax.y"
                                                            {
                                                                struct tree_node *node = create_node(ast_tree_list, "tableDeclaration", 2);
                                                                add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                                add_leaf(node, (yyvsp[-2].tree_node), 1);
                                                                (yyval.tree_node) = node;
                                                            }
#line 3029 "src/parser.c"
    break;

  case 19:
#line 205 "flex_bison/porygon_syntax.y"
                                                                         {
                                                                            struct tree_node *node = create_node(ast_tree_list, "tableDefinition", 2);
                                                                            add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                            add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                                            (yyval.tree_node) = node;
                                                                         }
#line 3040 "src/parser.c"
    break;

  case 20:
#line 214 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3046 "src/parser.c"
    break;

  case 21:
#line 215 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "constList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;

                                                    }
#line 3058 "src/parser.c"
    break;

  case 22:
#line 225 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3064 "src/parser.c"
    break;

  case 23:
#line 226 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "stringList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3075 "src/parser.c"
    break;

  case 24:
#line 235 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3081 "src/parser.c"
    break;

  case 25:
#line 236 "flex_bison/porygon_syntax.y"
                                                              {
                                                                struct tree_node *node = create_node(ast_tree_list, "columnContent", 2);
                                                                add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                                (yyval.tree_node) = node;
                                                              }
#line 3092 "src/parser.c"
    break;

  case 26:
#line 245 "flex_bison/porygon_syntax.y"
                                                                                    {
                                                                                        struct tree_node *node = create_node(ast_tree_list, "functDeclaration", 4);
                                                                                        add_leaf(node, (yyvsp[-5].tree_node), 0);
                                                                                        add_leaf(node, (yyvsp[-4].tree_node), 1);
                                                                                        add_leaf(node, (yyvsp[-2].tree_node), 2);
                                                                                        add_leaf(node, (yyvsp[0].tree_node), 3);
                                                                                        (yyval.tree_node) = node;
                                                                                        struct st_entry *entry = find_id((yyvsp[-4].tree_node)->name, cur_scope);
                                                                                        if (entry != NULL) {
                                                                                            entry->id_type = FUNCTION;
                                                                                            strcpy(entry->type, (yyvsp[-5].tree_node)->name);
                                                                                        }
                                                                                    }
#line 3110 "src/parser.c"
    break;

  case 27:
#line 258 "flex_bison/porygon_syntax.y"
                                                                      {
                                                                            struct tree_node *node = create_node(ast_tree_list, "functDeclaration", 3);
                                                                            add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                            add_leaf(node, (yyvsp[-3].tree_node), 1);
                                                                            add_leaf(node, (yyvsp[0].tree_node), 2);
                                                                            (yyval.tree_node) = node;
                                                                            struct st_entry *entry = find_id((yyvsp[-3].tree_node)->name, cur_scope);
                                                                            if (entry != NULL) {
                                                                                entry->id_type = FUNCTION;
                                                                                strcpy(entry->type, (yyvsp[-4].tree_node)->name);
                                                                            }
                                                                      }
#line 3127 "src/parser.c"
    break;

  case 28:
#line 273 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3133 "src/parser.c"
    break;

  case 29:
#line 274 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "parameterList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3144 "src/parser.c"
    break;

  case 30:
#line 283 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "parameterDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                        printf("Im in this scope %d %d\n", cur_scope, count_scope);
                                                        struct st_entry *entry = find_id((yyvsp[0].tree_node)->name, cur_scope);
                                                        if (entry != NULL) {
                                                            entry->id_type = FUNCTION;
                                                            strcpy(entry->type, (yyvsp[-1].tree_node)->name);
                                                        }
                                                    }
#line 3161 "src/parser.c"
    break;

  case 31:
#line 295 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3167 "src/parser.c"
    break;

  case 32:
#line 299 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "emptyCompoundStatement", 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3176 "src/parser.c"
    break;

  case 33:
#line 303 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3182 "src/parser.c"
    break;

  case 34:
#line 307 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3188 "src/parser.c"
    break;

  case 35:
#line 308 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "statementList", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3199 "src/parser.c"
    break;

  case 36:
#line 317 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3205 "src/parser.c"
    break;

  case 37:
#line 318 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3211 "src/parser.c"
    break;

  case 38:
#line 319 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3217 "src/parser.c"
    break;

  case 39:
#line 320 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3223 "src/parser.c"
    break;

  case 40:
#line 321 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3229 "src/parser.c"
    break;

  case 41:
#line 322 "flex_bison/porygon_syntax.y"
                                                             {
                                                                 struct tree_node *node = create_node(ast_tree_list, "readStmt", 1);
                                                                 add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                 (yyval.tree_node) = node;
                                                             }
#line 3239 "src/parser.c"
    break;

  case 42:
#line 327 "flex_bison/porygon_syntax.y"
                                                             {
                                                                 struct tree_node *node = create_node(ast_tree_list, "writeStmt", 1);
                                                                 add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                 (yyval.tree_node) = node;
                                                             }
#line 3249 "src/parser.c"
    break;

  case 43:
#line 335 "flex_bison/porygon_syntax.y"
                                                                 {
                                                                     struct tree_node *node = create_node(ast_tree_list, "while", 2);
                                                                     add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                     add_leaf(node, (yyvsp[0].tree_node), 1);
                                                                     (yyval.tree_node) = node;
                                                                 }
#line 3260 "src/parser.c"
    break;

  case 44:
#line 341 "flex_bison/porygon_syntax.y"
                                                                                              {
                                                                                                 struct tree_node *node = create_node(ast_tree_list, "while", 2);
                                                                                                 add_leaf(node, (yyvsp[-5].tree_node), 0);
                                                                                                 add_leaf(node, (yyvsp[-3].tree_node), 1);
                                                                                                 (yyval.tree_node) = node;
                                                                                             }
#line 3271 "src/parser.c"
    break;

  case 45:
#line 351 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "conditionalStmt", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3282 "src/parser.c"
    break;

  case 46:
#line 360 "flex_bison/porygon_syntax.y"
                                                                {
                                                                    struct tree_node *node = create_node(ast_tree_list, "ifStmt", 2);
                                                                    add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                    add_leaf(node, (yyvsp[0].tree_node), 1);
                                                                    (yyval.tree_node) = node;
                                                                }
#line 3293 "src/parser.c"
    break;

  case 47:
#line 369 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "elseStmt", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3303 "src/parser.c"
    break;

  case 48:
#line 374 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "emptyElse", 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3312 "src/parser.c"
    break;

  case 49:
#line 381 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "return", 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3321 "src/parser.c"
    break;

  case 50:
#line 385 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "return", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3331 "src/parser.c"
    break;

  case 51:
#line 393 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3337 "src/parser.c"
    break;

  case 52:
#line 394 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3348 "src/parser.c"
    break;

  case 53:
#line 403 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3354 "src/parser.c"
    break;

  case 54:
#line 404 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "||", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3365 "src/parser.c"
    break;

  case 55:
#line 413 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3371 "src/parser.c"
    break;

  case 56:
#line 414 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "&&", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3382 "src/parser.c"
    break;

  case 57:
#line 423 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3388 "src/parser.c"
    break;

  case 58:
#line 424 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "==", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3399 "src/parser.c"
    break;

  case 59:
#line 430 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "!=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3410 "src/parser.c"
    break;

  case 60:
#line 439 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3416 "src/parser.c"
    break;

  case 61:
#line 440 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ">", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3427 "src/parser.c"
    break;

  case 62:
#line 446 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "<", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3438 "src/parser.c"
    break;

  case 63:
#line 452 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ">=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3449 "src/parser.c"
    break;

  case 64:
#line 458 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "<=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3460 "src/parser.c"
    break;

  case 65:
#line 467 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3466 "src/parser.c"
    break;

  case 66:
#line 468 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "+", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3477 "src/parser.c"
    break;

  case 67:
#line 474 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "-", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3488 "src/parser.c"
    break;

  case 68:
#line 483 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3494 "src/parser.c"
    break;

  case 69:
#line 484 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "*", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3505 "src/parser.c"
    break;

  case 70:
#line 490 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "/", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3516 "src/parser.c"
    break;

  case 71:
#line 496 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "%", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3527 "src/parser.c"
    break;

  case 72:
#line 505 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3533 "src/parser.c"
    break;

  case 73:
#line 506 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "!", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3543 "src/parser.c"
    break;

  case 74:
#line 514 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3549 "src/parser.c"
    break;

  case 76:
#line 516 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3555 "src/parser.c"
    break;

  case 77:
#line 517 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3561 "src/parser.c"
    break;

  case 78:
#line 518 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3567 "src/parser.c"
    break;

  case 79:
#line 522 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3573 "src/parser.c"
    break;

  case 80:
#line 523 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "mutable[]", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3584 "src/parser.c"
    break;

  case 81:
#line 529 "flex_bison/porygon_syntax.y"
                                                                {
                                                                    struct tree_node *node = create_node(ast_tree_list, "mutable[;]", 3);
                                                                    add_leaf(node, (yyvsp[-5].tree_node), 0);
                                                                    add_leaf(node, (yyvsp[-3].tree_node), 1);
                                                                    add_leaf(node, (yyvsp[-1].tree_node), 2);
                                                                    (yyval.tree_node) = node;
                                                                }
#line 3596 "src/parser.c"
    break;

  case 82:
#line 536 "flex_bison/porygon_syntax.y"
                                                                                {
                                                                                    struct tree_node *node = create_node(ast_tree_list, "mutable[;:]", 4);
                                                                                    add_leaf(node, (yyvsp[-7].tree_node), 0);
                                                                                    add_leaf(node, (yyvsp[-5].tree_node), 1);
                                                                                    add_leaf(node, (yyvsp[-3].tree_node), 2);
                                                                                    add_leaf(node, (yyvsp[-1].tree_node), 3);
                                                                                    (yyval.tree_node) = node;
                                                                                }
#line 3609 "src/parser.c"
    break;

  case 83:
#line 547 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "functCall", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3620 "src/parser.c"
    break;

  case 84:
#line 556 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3626 "src/parser.c"
    break;

  case 85:
#line 557 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "emptyArgs", 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3635 "src/parser.c"
    break;

  case 86:
#line 564 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "argList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3646 "src/parser.c"
    break;

  case 87:
#line 570 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3652 "src/parser.c"
    break;

  case 88:
#line 574 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3658 "src/parser.c"
    break;

  case 89:
#line 575 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3664 "src/parser.c"
    break;

  case 90:
#line 576 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3670 "src/parser.c"
    break;

  case 91:
#line 577 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3676 "src/parser.c"
    break;

  case 92:
#line 578 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3682 "src/parser.c"
    break;

  case 93:
#line 582 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3688 "src/parser.c"
    break;

  case 94:
#line 583 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3694 "src/parser.c"
    break;

  case 95:
#line 584 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3700 "src/parser.c"
    break;

  case 96:
#line 585 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3706 "src/parser.c"
    break;

  case 97:
#line 586 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3712 "src/parser.c"
    break;

  case 98:
#line 587 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3718 "src/parser.c"
    break;

  case 99:
#line 591 "flex_bison/porygon_syntax.y"
                                                    {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Invalid Identifier (size bigger than 32 characters). Line: %d Column: %d\n", line_num, column_num);
                                                        reset_pcolor();
                                                    }
#line 3728 "src/parser.c"
    break;

  case 100:
#line 596 "flex_bison/porygon_syntax.y"
                                                    {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Invalid char (more than one character). Line: %d Column: %d\n", line_num, column_num);
                                                        reset_pcolor();
                                                    }
#line 3738 "src/parser.c"
    break;

  case 101:
#line 601 "flex_bison/porygon_syntax.y"
                                                    {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Unknown Token. Line: %d Column: %d\n", line_num, column_num);
                                                        reset_pcolor();
                                                    }
#line 3748 "src/parser.c"
    break;


#line 3752 "src/parser.c"

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
#line 608 "flex_bison/porygon_syntax.y"


void yyerror(char const *msg) {
    fprintf(stderr, "[ERR] (Line: %d, Column: %d) Found error %s\n", line_num, column_num, msg);
}
