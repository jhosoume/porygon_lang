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
extern int previous_col;

extern int cur_scope;

extern scope_stack *sp_stack;

extern int lex_errors;

#line 101 "src/parser.c"

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
#line 123 "flex_bison/porygon_syntax.y"

int yylex(void);

#line 139 "src/parser.c"


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
#define YYLAST   6816

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  560

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
       0,   131,   131,   135,   136,   142,   146,   147,   151,   152,
     158,   159,   165,   166,   176,   186,   196,   200,   210,   219,
     220,   230,   231,   240,   241,   250,   259,   270,   271,   280,
     287,   291,   295,   299,   300,   309,   310,   311,   312,   313,
     314,   319,   327,   333,   344,   353,   362,   367,   374,   378,
     386,   387,   396,   397,   406,   407,   416,   417,   423,   432,
     433,   439,   445,   451,   460,   461,   467,   476,   477,   483,
     489,   498,   499,   507,   508,   509,   510,   511,   515,   516,
     522,   529,   540,   549,   550,   557,   563,   567,   568,   569,
     570,   571,   575,   576,   577,   578,   579,   580,   584,   589,
     594
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

#define YYTABLE_NINF (-101)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     134,    35,    42,    48,    57,   516,    76,    90,    84,   250,
     319,   110,   462,   635,   -40,    16,   341,   496,   767,   109,
    1052,   120,  -303,  1295,  1400,    92,   122,   154,   421,   172,
    4774,  4796,  4812,  4828,  4844,  4860,    92,   186,    47,   150,
      -6,   550,  2051,  4876,  4892,  4908,  4924,  4940,  4956,  4972,
     420,   209,   202,   238,   255,     1,   265,   213,     5,  4988,
     290,   -10,  4498,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    98,   111,   339,   505,
       3,   311,   362,   484,   405,   531,    94,   532,   394,   407,
    5004,   253,   168,    83,  1742,  1979,  2399,  2744,  2899,  3288,
    5020,  5036,  5052,  5068,  5084,   413,   420,   546,   547,   426,
    1543,   311,  1060,   581,  5100,   213,   306,  5116,   191,   199,
     408,   483,   457,   480,   487,    82,   501,   518,  1643,   472,
     600,   811,  1159,  1282,   159,   566,   592,   645,  1716,   583,
     276,   617,   692,   584,   186,   516,   186,   659,   681,   895,
    1333,  1748,  1507,   624,  1630,  1681,  1855,   450,  5132,   985,
     639,   424,   679,   732,   707,   708,   730,  1978,   551,   589,
     752,   748,   624,   731,   773,   777,   791,  5148,   554,   639,
    2029,   826,   549,  2203,  2326,   591,   844,   620,   624,  2377,
    5164,  5180,  5196,  4360,  5844,  5858,  5872,  5886,  5900,   253,
     186,  5914,  5928,  5942,   315,   244,  2327,  3875,  5956,  5970,
    5984,  5998,  6012,  6026,   206,   227,   237,   247,   268,  2088,
    5233,  5254,  5275,  5296,  5317,  1039,   186,  5338,  5359,  5380,
     170,   338,   264,  2605,  3265,  5401,  5422,  5443,  3201,  5464,
    5485,  5506,  2855,  2255,  2775,  3032,  3416,  3460,  1188,   186,
    3533,  3569,  3641,    79,   160,     6,  1881,  1211,  3666,  3690,
    3714,   478,  4000,  4024,  4048,   253,  5824,  6040,  4383,   103,
    4521,   458,   809,   812,   814,   822,   827,   186,   830,   832,
     838,   840,   841,   843,   846,  2548,  4406,  6255,  6273,  6291,
    6309,  6327,  1387,   186,  6345,  6363,  6381,    41,   433,   188,
    3127,  6719,  6399,  6417,  6435,  4544,  6453,  6471,  6489,   616,
     618,   638,   658,   678,   680,   639,  2671,   213,     5,  6054,
     847,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   213,     5,  5212,  5527,  5548,   848,  1039,
    1039,  1039,  1039,  1039,  1039,  1039,  1039,  1039,  1039,  1039,
    1039,  1039,  1039,   213,     5,  2942,  4072,  4096,   852,  1188,
    1188,  1188,  1188,  1188,  1188,  1188,  1188,  1188,  1188,  1188,
    1188,  1188,  1188,   417,   213,   213,    92,   213,     5,   853,
    2722,  3874,   213,     5,  6236,  6507,  6525,   854,  1387,  1387,
    1387,  1387,  1387,  1387,  1387,  1387,  1387,  1387,  1387,  1387,
    1387,  1387,   685,   901,  3923,   336,   882,  6068,   254,  2572,
    2672,  3924,  3973,  6208,  6222,  6082,  6096,  6110,  6124,  6138,
     475,   883,   213,  5569,   366,   309,  2991,  3010,  3618,  5773,
    5788,  5803,  5590,  5611,  5632,  5653,  5674,   415,   642,   884,
     213,  4120,   204,   196,  2227,  3434,  2431,  2587,  2875,  3774,
    4144,  4168,  4192,  4216,  4240,    93,   662,   689,   125,   727,
     885,   886,  3972,   736,   888,   213,  6543,   508,   452,  3551,
    3732,  6733,  6747,  6761,  6775,  6561,  6579,  6597,  6615,  6633,
      72,   957,  4567,   213,  6152,  4429,   213,  5695,   737,   729,
     213,  4264,   738,  6166,   213,  4590,   213,   891,   213,   892,
    4613,   213,  6651,   751,   768,   769,  5716,   213,   794,  4288,
     213,   800,   802,   804,   810,  6669,   213,  4636,   985,  4452,
     985,   815,  1559,   985,   823,  6180,   985,  4659,   985,   893,
     985,  4682,   985,   828,   897,   898,  5737,   985,   900,  4312,
     985,   906,   907,   908,   912,  6687,   985,  4705,  4475,   913,
    1907,   914,  6194,  4728,   899,  4751,   915,  5758,  4336,  6705
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -303,  -303,  -303,   875,    15,  -303,  -303,  -303,  -303,  -303,
    -157,  -303,  -303,  -303,  -303,   845,   -94,  -281,  -129,  -303,
    -303,  -303,  -303,  -303,  3330,  3256,  2992,  2890,  2812,  2470,
    2125,  1081,  1429,   348,  1777,  -302,   842,   733,     2,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,   129,    15,    16,    51,    17,    53,
      76,   108,   161,    18,    82,    83,   110,   130,   131,   132,
     133,   134,   154,   135,    87,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,    88,    89,   240,   137,   241
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,   152,    19,   169,   381,    24,   -97,    21,   242,   243,
     244,   245,   246,   247,    19,    14,   406,   138,     1,     2,
       3,     4,   185,     6,    80,    49,   265,    14,    65,    66,
     -54,   -54,   421,   -50,   248,   404,    49,   213,   -92,   -54,
     361,   362,   -54,   -54,    81,   -93,   -30,   249,   -84,   -54,
     -30,   -94,   439,   -54,   250,   251,   252,    84,   264,   167,
     -96,    -8,    25,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,   460,   388,   180,   -95,
     182,   464,   -50,    63,   -98,   268,    31,    32,    33,    34,
      35,   213,    -9,   -97,   189,    30,    31,    32,    33,    34,
      35,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   388,    49,
      22,    36,    28,   -51,    84,   359,   264,    65,    66,   -55,
     -55,    36,   -50,    29,    37,    49,   -50,   -48,   -55,   359,
      49,   190,   191,   192,    37,   114,   -51,   105,   115,    63,
     -51,   190,   191,   192,   213,   106,   213,   163,   -50,   284,
     -19,     1,     2,     3,     4,     5,     6,     7,   -19,   308,
      50,    63,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -51,   -47,   153,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     8,     9,    10,   -52,    64,   -47,   193,
     194,   195,   196,   197,   198,   -52,   -52,   360,   -47,   213,
     213,   -47,    52,   -52,   -53,    64,   339,   -52,   -47,   -47,
     -47,   -50,    56,   -53,   -50,   199,   219,   220,   221,   222,
     223,   224,   390,   391,   -54,   -54,   213,   265,   200,   -54,
     361,   362,   -55,   -55,   -51,   201,   202,   203,   -20,   -55,
     -53,   360,   225,   -55,    78,   -87,   -20,   -53,   264,   213,
     -99,   -53,   152,   -87,   -11,   226,   266,   194,   195,   196,
     197,   198,   227,   228,   229,   213,   -88,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -88,   152,   -89,   213,   322,   323,
     -54,   -54,   199,   -13,   -89,    49,   -90,   -54,   322,   323,
     -55,   -55,   308,   213,   -90,   200,    79,   -55,   341,   342,
     -54,   -54,   201,   202,   203,   -54,    85,   -91,   -54,   242,
     243,   244,   245,   246,   247,   -91,    49,   158,   264,  -100,
     159,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,    90,   264,   248,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,   341,   342,   -55,   -55,   107,   249,   109,
     -55,   -52,   321,   -55,   264,   250,   251,   252,   -52,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,    46,   -52,   340,    49,   482,   264,   -52,
     483,    49,   -52,   264,    46,    62,   -10,    26,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   -53,   340,    49,   111,   261,   -53,   113,   112,
     -53,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,   214,   215,   216,   217,   218,   268,
      31,    32,    33,    34,    35,   122,   123,   117,   124,   267,
     125,   126,   127,     1,     2,     3,     4,     5,     6,     7,
     -83,   339,   142,   -53,   321,    36,   -51,   270,   -16,   -51,
     -53,    54,    -2,    55,   261,   128,   -14,   -14,    37,   -52,
     389,   170,   171,   270,   -52,   190,   191,   192,   270,     1,
       2,     3,     4,     5,     6,     7,   390,   391,   -55,   -55,
      54,   143,    62,   -55,    62,   -14,   -14,   281,   377,   144,
     378,   -78,   -77,   -77,   -77,   -77,   -77,   305,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   485,   150,   308,   486,
     308,   -77,   145,   308,   372,   -77,   308,   -27,   308,   146,
     308,   -27,   308,     1,     2,     3,     4,   308,     6,     7,
     308,   -12,    27,   148,   -53,   389,   308,   267,    62,   -53,
     -15,   -15,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     149,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   337,    62,   -86,   -17,   -17,   -45,   116,
      67,    68,    69,    70,   -56,   -56,   -56,   -56,   -45,   -21,
     120,   -45,   177,   -21,   121,   -56,   357,    62,   -45,   -45,
     -45,   -23,   -23,   268,    31,    32,    33,    34,    35,   122,
     123,   155,   124,   267,   125,   126,   127,     1,     2,     3,
       4,     5,     6,     7,   -29,    62,   -28,   -22,   -29,    36,
     -28,   -22,   178,   270,   187,    -3,   315,   156,   315,   151,
     386,    62,    37,   309,   310,   311,   312,   313,   157,   190,
     191,   192,    -3,    -3,    -3,    -3,    -3,    -3,    -3,   -87,
     -85,   -88,   285,   -87,   270,   -88,   261,   -24,   -24,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   -89,   261,   489,   165,   -89,   490,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   -90,   261,   493,   -49,   -90,   494,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   -91,   172,   -19,    46,   -91,   261,   -19,   -20,   270,
     495,   261,   -20,   496,   160,   173,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     174,   175,   270,   -79,   -79,   -79,   -79,   -79,    48,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,    -7,   497,    48,
     212,   498,   -79,   176,   181,   -79,   -79,   500,   506,   509,
     501,   507,   510,    77,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   263,   515,   -18,   179,   516,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,   517,
     519,   316,   518,   520,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   183,   -33,   212,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   522,   184,   186,   523,   119,
     -33,   525,    48,   527,   526,   529,   528,   188,   530,   263,
     -33,   531,   -87,   -33,   532,   -88,   536,   -89,    48,   537,
     -33,   -33,   -33,    48,   539,   -90,   305,   540,   305,   545,
     -91,   305,   546,   -98,   305,   -99,   305,   212,   305,   212,
     305,  -100,   283,   -77,   -76,   305,   -75,    23,   305,   -74,
     407,   423,   307,   314,   305,   441,   461,   466,   271,   272,
     273,   274,   275,   276,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   314,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   484,   487,   491,   499,   -73,
     -31,   502,   212,   212,   -79,   -82,   -80,   277,   547,   548,
     -31,   550,   -81,   -31,   278,   279,   280,   552,   553,   554,
     -31,   -31,   -31,   555,   557,   558,   559,   139,   141,   212,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   263,   212,     0,     0,     0,   -32,     0,   286,   287,
     288,   289,   290,   291,     0,     0,   -32,     0,   212,   -32,
       0,     0,     0,     0,     0,     0,   -32,   -32,   -32,     0,
     212,     0,     0,     0,   292,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,   307,   212,   293,     0,     0,
       0,     0,     0,     0,   294,   295,   296,     0,     0,     0,
       0,     0,   335,   220,   221,   222,   223,   224,   402,    48,
       0,   263,    -5,     0,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,     0,   263,   225,    -5,
      -5,    -5,    -5,    -5,    -5,    -5,     0,     1,     2,     3,
       4,   226,     6,    80,     0,     0,     0,   263,   227,   228,
     229,     0,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,    44,     0,     0,    48,
       0,   263,     0,     0,    48,     0,   263,    59,   209,     0,
       0,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,     0,     0,    48,     0,   259,
       0,     0,     0,     0,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,   102,   103,   104,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   209,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,     0,   -37,     0,
      44,   355,   243,   244,   245,   246,   247,   259,   -37,     0,
       0,   -37,     0,     0,     0,     0,    44,     0,   -37,   -37,
     -37,    44,     0,     0,     0,     0,     0,   248,     0,     0,
       0,     0,     0,     0,     0,   209,     0,   209,     0,     0,
     249,     0,     0,     0,     0,   367,   368,   250,   251,   252,
     303,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,   307,     0,   307,   -59,     0,   307,     0,   -59,   307,
       0,   307,     0,   307,     0,   307,     0,     0,     0,     0,
     307,     0,     0,   307,     0,     0,     0,     0,     0,   307,
     319,   209,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,    -4,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   336,   209,     0,     0,
       0,   -38,    -4,    -4,    -4,    -4,    -4,    -4,    -4,     0,
       0,   -38,     0,     0,   -38,     0,     0,     0,     0,   356,
     209,   -38,   -38,   -38,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   209,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   209,     0,
       0,     0,   -35,     0,     0,     0,    44,     0,     0,     0,
       0,     0,   -35,   385,   209,   -35,     0,     0,     0,     0,
       0,     0,   -35,   -35,   -35,     0,     0,     0,     0,     0,
     384,   287,   288,   289,   290,   291,     0,    44,     0,   259,
      -6,     0,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   417,   418,   419,     0,   259,   292,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,     0,     0,     0,     0,     0,   293,
     434,   435,   436,     0,     0,   259,   294,   295,   296,     0,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     452,   453,   454,   259,    45,     0,     0,    44,     0,   259,
       0,     0,    44,     0,   259,    45,   210,     0,     0,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   477,
     478,   479,   303,     0,     0,    44,     0,   260,     0,     0,
       0,     0,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     210,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,   -34,     0,    45,     0,
       0,     0,     0,   -26,     0,   260,   -34,     0,     0,   -34,
       0,     0,     0,     0,    45,     0,   -34,   -34,   -34,    45,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,
       0,     0,     0,   210,     0,   210,     0,     0,   166,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   304,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,   303,
       0,   303,   -80,     0,   303,   -80,   -80,   303,     0,   303,
       0,   303,     0,   303,     0,     0,     0,     0,   303,     0,
       0,   303,     0,     0,     0,     0,     0,   303,   210,   210,
       0,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -31,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   210,     0,     0,     0,   -44,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -44,
       0,     0,   -44,     0,     0,     0,     0,   260,   210,   -44,
     -44,   -44,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   210,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,   210,     0,     0,     0,
     -39,     0,     0,     0,    45,     0,   -25,     0,     0,     0,
     -39,   304,   210,   -39,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,     0,     0,     0,    45,     0,   260,   -32,     0,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,     0,   260,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,    67,    68,    69,    70,   -58,   -58,   -58,   -58,
       0,     0,     0,   260,     0,     0,     0,   -58,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,    47,     0,     0,    45,     0,   260,     0,     0,
      45,     0,   260,    47,   211,     0,     0,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,     0,     0,    45,     0,   262,     0,     0,     0,     0,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   211,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,     0,     0,     0,   -36,     0,    47,     0,     0,     0,
       0,     0,     0,   262,   -36,     0,     0,   -36,     0,     0,
       0,     0,    47,     0,   -36,   -36,   -36,    47,     0,     0,
       0,   363,   364,   365,   366,   -56,   -56,   -56,   -56,     0,
       0,   211,     0,   211,   -56,     0,   282,     0,   -56,     0,
       0,   -81,   -81,   -81,   -81,   -81,   306,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,   304,     0,   304,
     -81,     0,   304,   -81,   -81,   304,     0,   304,     0,   304,
       0,   304,     0,     0,     0,     0,   304,     0,     0,   304,
       0,     0,     0,     0,     0,   304,   211,   211,     0,     0,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   211,     0,     0,     0,   -46,     0,    67,
      68,    69,    70,   -57,   -57,   -57,   -57,   -46,     0,     0,
     -46,     0,     0,     0,   -57,   262,   211,   -46,   -46,   -46,
       0,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   211,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   211,     0,     0,     0,   -42,     0,
       0,     0,    47,     0,     0,     0,     0,     0,   -42,   306,
     211,   -42,     0,     0,     0,    71,    72,     0,   -42,   -42,
     -42,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,     0,     0,    47,     0,   262,   -59,     0,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
       0,   262,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,   333,   -78,
     334,   262,   -78,     0,   -78,     0,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
      43,     0,     0,    47,     0,   262,     0,     0,    47,     0,
     262,     0,   208,     0,     0,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,     0,
       0,    47,     0,   258,     0,     0,     0,     0,    43,    43,
      43,    43,    43,    43,    43,    43,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   208,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,
       0,     0,   -40,     0,    43,     0,     0,     0,     0,     0,
       0,   258,   -40,     0,     0,   -40,     0,     0,     0,     0,
      43,     0,   -40,   -40,   -40,    43,     0,   363,   364,   365,
     366,   -58,   -58,   -58,   -58,     0,     0,     0,     0,   208,
     -58,   208,     0,     0,   -58,     0,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   302,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,   306,     0,   306,   -87,     0,
     306,     0,   -87,   306,     0,   306,     0,   306,     0,   306,
       0,     0,     0,     0,   306,     0,     0,   306,     0,     0,
       0,     0,     0,   306,     0,   208,     0,     0,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   208,     0,     0,     0,   -41,     0,   324,   325,   326,
     327,   -56,   -56,   -56,   -56,   -41,     0,     0,   -41,     0,
     -56,     0,     0,     0,   208,   -41,   -41,   -41,     0,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     208,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,   208,     0,     0,     0,   -43,     0,     0,     0,
      43,     0,     0,     0,     0,     0,   -43,     0,   208,   -43,
       0,     0,     0,    71,    72,     0,   -43,   -43,   -43,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,
       0,    43,     0,   258,   -61,     0,   208,   208,   208,   208,
     208,   208,   208,   415,   416,   367,   368,     0,     0,   258,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,   432,   433,   -61,     0,     0,     0,   -61,   258,
       0,     0,     0,     0,   258,   258,   258,   258,   258,   258,
     258,   258,   450,   451,     0,    42,     0,   258,     0,     0,
       0,    43,     0,   258,     0,     0,    43,   207,   258,     0,
       0,     0,     0,   302,   302,   302,   302,   302,   302,   302,
     302,   475,   476,     0,     0,     0,   302,     0,   257,    43,
       0,     0,     0,    42,    42,    42,    42,    96,    97,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   268,    31,    32,    33,    34,    35,   122,   123,     0,
     124,   207,   125,   126,   127,     1,     2,     3,     4,     5,
       6,     7,     0,     0,     0,     0,     0,    36,     0,    42,
       0,     0,     0,     0,     0,     0,   257,   380,     0,     0,
      37,     0,     0,     0,     0,    42,     0,   190,   191,   192,
      42,     0,   324,   325,   326,   327,   -58,   -58,   -58,   -58,
       0,   367,   368,     0,   207,   -58,   207,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,   301,
     -63,     0,     0,     0,   -63,   343,   344,   345,   346,   -56,
     -56,   -56,   -56,   302,     0,   302,   -56,     0,   302,   -56,
       0,   302,     0,   302,     0,   302,     0,   302,     0,     0,
       0,     0,   302,     0,     0,   302,     0,     0,     0,     0,
     207,   302,     0,     0,   268,    31,    32,    33,    34,    35,
     122,   123,     0,   124,     0,   125,   126,   127,     1,     2,
       3,     4,     5,     6,     7,     0,   207,     0,     0,     0,
      36,     0,   324,   325,   326,   327,   -57,   -57,   -57,   -57,
     403,     0,     0,    37,     0,   -57,     0,     0,     0,   207,
     190,   191,   192,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   207,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   207,     0,     0,
       0,   -31,     0,     0,     0,    42,     0,     0,     0,     0,
       0,   -31,     0,   207,   -31,     0,     0,     0,    71,    72,
       0,   -31,   -31,   -31,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,    42,     0,   257,   -63,
       0,   207,   207,   207,   411,   412,   413,   414,     0,   -88,
     -88,   -88,   -88,   -88,   257,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   428,   429,   430,   431,     0,   -88,     0,
       0,     0,   -88,     0,   257,     0,     0,     0,     0,   257,
     257,   257,   257,   446,   447,   448,   449,    41,     0,     0,
       0,     0,   257,     0,     0,     0,    42,     0,   257,   206,
       0,    42,     0,   257,     0,     0,     0,     0,   301,   301,
     301,   301,   471,   472,   473,   474,     0,     0,     0,     0,
     256,   301,     0,     0,    42,    41,    41,    94,    95,   -78,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,   353,     0,   354,   -78,   367,
     368,   -78,   -78,   206,     0,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,    40,     0,     0,   -60,     0,
       0,    41,   -60,    71,    72,     0,     0,   205,   256,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,    41,     0,     0,
       0,     0,    41,     0,   -60,     0,     0,     0,   255,     0,
       0,     0,     0,    40,    93,     0,   206,     0,   206,     0,
       0,     0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   300,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   205,   440,     0,   354,   -78,     0,     0,   301,   -78,
     301,     0,     0,   301,     0,     0,   301,     0,   301,    40,
     301,     0,   301,     0,     0,     0,   255,   301,     0,     0,
     301,     0,   206,     0,     0,    40,   301,    39,     0,     0,
      40,   343,   344,   345,   346,   -58,   -58,   -58,   -58,   204,
       0,     0,   -58,     0,   205,   -58,   205,     0,   206,     0,
     343,   344,   345,   346,   -57,   -57,   -57,   -57,     0,   299,
     254,   -57,     0,     0,   -57,    92,   -89,   -89,   -89,   -89,
     -89,   206,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,     0,   -89,     0,   206,     0,   -89,
       0,     0,     0,   204,     0,     0,     0,     0,     0,   206,
     205,     0,     0,     0,     0,     0,     0,    41,     0,     0,
       0,    39,     0,     0,     0,   206,     0,     0,   254,     0,
       0,     0,     0,     0,     0,     0,   205,    39,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,    41,     0,
     256,     0,     0,   206,   409,   410,   204,     0,   204,   205,
       0,     0,     0,     0,     0,     0,   256,     0,     0,     0,
       0,   298,     0,   426,   427,   205,     0,   392,   393,   394,
     395,   -56,   -56,   -56,   -56,     0,   256,   205,   -56,     0,
       0,   256,   256,   444,   445,    40,     0,     0,     0,     0,
       0,     0,     0,   205,   256,     0,     0,     0,    41,     0,
     256,     0,   204,    41,     0,   256,     0,     0,     0,     0,
     300,   300,   469,   470,     0,     0,    40,     0,   255,     0,
       0,   408,     0,   300,     0,     0,    41,     0,   204,     0,
       0,     0,     0,     0,   255,   -77,   -77,   -77,   -77,   -77,
     425,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,   204,   -77,     0,   255,   -77,     0,   352,     0,   255,
     443,     0,     0,     0,     0,     0,     0,   373,     0,     0,
       0,     0,   255,     0,     0,     0,    40,     0,   255,   204,
       0,    40,     0,   255,     0,     0,     0,    39,   299,   468,
       0,    38,     0,     0,     0,   204,     0,     0,     0,   347,
     348,   299,     0,    61,    40,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,   -59,     0,    39,   -59,
     254,     0,    71,    72,   253,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   254,     0,     0,     0,
     300,   424,   300,   -62,     0,   300,     0,     0,   300,     0,
     300,     0,   300,     0,   300,     0,   254,   118,     0,   300,
       0,   442,   300,     0,     0,     0,     0,     0,   300,     0,
       0,     0,     0,     0,   254,   269,     0,    60,    39,     0,
     254,     0,   253,    39,     0,   254,     0,     0,     0,     0,
     467,   269,     0,     0,     0,     0,   269,    86,     0,     0,
       0,     0,     0,   298,     0,     0,    39,     0,     0,     0,
      61,     0,    61,     0,     0,     0,     0,     0,   299,     0,
     299,     0,     0,   299,     0,   297,   299,     0,   299,     0,
     299,     0,   299,     0,     0,     0,     0,   299,     0,     0,
     299,     0,     0,     0,     0,     0,   299,     0,     0,   136,
     -90,   -90,   -90,   -90,   -90,   140,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,   147,    61,     0,     0,   -90,
     136,     0,     0,   -90,   363,   364,   365,   366,   -57,   -57,
     -57,   -57,     0,     0,   162,     0,   164,   -57,     0,     0,
       0,   -57,    61,     0,   -91,   -91,   -91,   -91,   -91,   168,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
       0,     0,     0,   -91,     0,    61,     0,   -91,     0,     0,
     298,     0,   298,     0,     0,   298,     0,     0,   298,     0,
     298,     0,   298,     0,   298,     0,     0,     0,     0,   298,
     320,     0,   298,    61,     0,     0,     0,     0,   298,     0,
       0,   269,     0,     0,     0,     0,     0,     0,     0,    61,
       0,     0,     0,     0,     0,     0,   338,   -98,   -98,   -98,
     -98,   -98,     0,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,     0,   269,     0,   253,     0,   -98,     0,     0,   358,
     -98,   392,   393,   394,   395,   -58,   -58,   -58,   -58,     0,
     253,     0,   -58,   -99,   -99,   -99,   -99,   -99,     0,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   379,   437,     0,
     253,     0,   -99,     0,     0,   136,   -99,     0,     0,     0,
       0,     0,     0,   387,     0,     0,     0,     0,   455,     0,
       0,     0,   458,     0,   253,     0,     0,   269,     0,   253,
       0,     0,   347,   348,     0,     0,   136,   405,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,   480,     0,   -61,
     269,     0,   -61,   420,     0,  -100,  -100,  -100,  -100,  -100,
       0,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,     0,
       0,     0,     0,   438,  -100,     0,     0,     0,  -100,     0,
     -64,   -64,   369,   370,   371,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   456,   457,     0,   459,     0,   -64,
       0,   136,   463,   -64,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,     0,   -67,   136,     0,     0,   -67,   -71,   -71,
     -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   488,     0,     0,     0,     0,   -71,     0,     0,
       0,   -71,   392,   393,   394,   395,   -57,   -57,   -57,   -57,
     492,     0,     0,   -57,   297,     0,   297,     0,     0,   297,
       0,     0,   297,     0,   297,     0,   297,     0,   297,     0,
       0,     0,     0,   297,     0,   503,   297,     0,   367,   368,
       0,     0,   297,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,     0,   504,     0,     0,   505,   -62,     0,     0,
     508,   -62,     0,     0,   511,     0,   512,     0,   513,     0,
       0,   514,     0,     0,     0,     0,     0,   521,     0,     0,
     524,     0,     0,     0,     0,     0,   533,     0,   534,     0,
     535,     0,     0,   538,     0,     0,   541,     0,   542,     0,
     543,     0,   544,     0,     0,     0,     0,   549,     0,     0,
     551,     0,     0,     0,     0,     0,   556,   268,    31,    32,
      33,    34,    35,   122,   123,     0,   124,     0,   125,   126,
     127,     1,     2,     3,     4,     5,     6,     7,     0,   328,
     329,     0,     0,    36,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   462,     0,     0,    37,     0,   -59,     0,
       0,     0,     0,   190,   191,   192,   268,    31,    32,    33,
      34,    35,   122,   123,     0,   124,     0,   125,   126,   127,
       1,     2,     3,     4,     5,     6,     7,     0,   328,   329,
       0,     0,    36,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   481,     0,     0,    37,     0,   -61,     0,     0,
       0,     0,   190,   191,   192,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   328,   329,     0,
       0,   -32,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -32,     0,     0,   -32,     0,   -63,     0,     0,     0,
       0,   -32,   -32,   -32,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,   -76,     0,     0,     0,   -76,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,   -75,     0,     0,
       0,   -75,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,   -74,     0,     0,     0,   -74,   -72,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,   -72,     0,     0,     0,   -72,
     -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,   -77,
       0,     0,     0,   -77,   -73,   -73,   -73,   -73,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,   -73,     0,     0,     0,   -73,   -65,   -65,
     369,   370,   371,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,   -65,     0,     0,
       0,   -65,   -66,   -66,   369,   370,   371,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,   -66,     0,     0,     0,   -66,   -68,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,   -68,     0,     0,     0,   -68,
     -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,   -69,
       0,     0,     0,   -69,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,   -70,     0,     0,     0,   -70,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,     0,   -82,     0,     0,
       0,   -82,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
       0,   -79,     0,     0,     0,   -79,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,   -80,     0,     0,     0,   -80,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,   -81,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
     317,     0,   318,   -78,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,   375,     0,    58,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,   382,   -78,   383,     0,
       0,     0,   -78,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
     -79,     0,     0,   -79,     0,   -79,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,   -80,     0,     0,   -80,     0,   -80,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,   -81,     0,     0,   -81,
       0,   -81,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
       0,   -77,     0,     0,    91,   -77,   -77,   -77,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,     0,     0,     0,     0,   -77,   376,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,   -77,     0,     0,     0,     0,
     401,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,
     -79,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,   -79,     0,     0,     0,     0,   -79,
     -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,   -80,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,   -80,     0,     0,     0,     0,   -80,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,   -81,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,   -81,     0,     0,     0,     0,   -81,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,    57,     0,    58,     0,     0,   -78,
     -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -87,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -88,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -89,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,     0,     0,   -91,   -91,   -91,   -91,   -91,   -90,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
     -64,   -64,    73,    74,    75,   -91,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -64,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -67,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -71,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,   -76,   -76,   -76,   -76,   -76,   -77,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -76,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -75,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -74,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -72,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -65,   -65,    73,    74,    75,   -73,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
     -66,   -66,    73,    74,    75,   -65,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -66,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -68,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -69,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,   -79,   -79,   -79,   -79,   -79,   -70,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -79,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -82,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -80,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -98,   -98,
     -98,   -98,   -98,   -81,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,     0,     0,   -99,   -99,   -99,   -99,   -99,   -98,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,     0,     0,
    -100,  -100,  -100,  -100,  -100,   -99,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,     0,     0,   -78,   -78,   -78,   -78,
     -78,  -100,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   422,   -78,   334,     0,   -78,   -87,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,   -87,     0,     0,   -87,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,   -88,     0,     0,   -88,   -89,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,   -89,     0,     0,   -89,
     -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,     0,     0,   -90,     0,     0,
     -90,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,     0,   -91,     0,
       0,   -91,   -98,   -98,   -98,   -98,   -98,     0,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,     0,     0,     0,   -98,
       0,     0,   -98,   -99,   -99,   -99,   -99,   -99,     0,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,     0,     0,     0,
     -99,     0,     0,   -99,  -100,  -100,  -100,  -100,  -100,     0,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,     0,     0,
       0,  -100,     0,     0,  -100,   -64,   -64,   349,   350,   351,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,     0,   -64,     0,     0,   -64,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,   -67,     0,     0,   -67,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,   -71,     0,     0,   -71,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,   -76,     0,     0,   -76,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,   -75,     0,     0,   -75,
     -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,   -74,     0,     0,
     -74,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,   -72,     0,
       0,   -72,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,   -77,
       0,     0,   -77,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
     -73,     0,     0,   -73,   -65,   -65,   349,   350,   351,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,   -65,     0,     0,   -65,   -66,   -66,   349,   350,   351,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,   -66,     0,     0,   -66,   -68,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,   -68,     0,     0,   -68,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,   -69,     0,     0,   -69,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,   -70,     0,     0,   -70,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,   -82,     0,     0,   -82,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,   -79,     0,     0,
     -79,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,   -80,     0,
       0,   -80,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   347,   348,   -81,
       0,     0,   -81,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,   347,   348,   -63,     0,     0,   -63,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   347,   348,   -60,
       0,     0,   -60,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,     0,     0,     0,   -62,     0,     0,   -62,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,   374,     0,   318,   -78,   -87,   -87,
     -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,   -88,   -88,   -88,   -88,   -87,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
     -89,   -88,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -90,   -90,   -90,   -90,   -90,   -89,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -91,   -91,   -91,   -91,   -91,   -90,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -98,   -98,
     -98,   -98,   -98,   -91,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -99,   -99,   -99,   -99,   -99,   -98,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,  -100,  -100,  -100,  -100,
    -100,   -99,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
     -64,   -64,   330,   331,   332,  -100,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -67,   -67,   -67,   -67,   -67,   -64,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -71,   -71,
     -71,   -71,   -71,   -67,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -76,   -76,   -76,   -76,   -76,   -71,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -75,   -75,   -75,   -75,
     -75,   -76,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -74,   -74,   -74,   -74,   -74,   -75,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -77,   -77,   -77,   -77,   -77,   -74,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -72,   -72,
     -72,   -72,   -72,   -77,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,   -73,   -73,   -73,   -73,   -72,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -65,   -65,   330,   331,
     332,   -73,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -66,   -66,   330,   331,   332,   -65,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -68,   -68,   -68,   -68,   -68,   -66,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,
     -69,   -69,   -69,   -68,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -70,   -70,   -70,   -70,   -70,   -69,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -82,   -82,   -82,   -82,
     -82,   -70,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -79,   -79,   -79,   -79,   -79,   -82,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -80,   -80,   -80,   -80,   -80,   -79,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -81,   -81,
     -81,   -81,   -81,   -80,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   328,   329,     0,     0,     0,   -81,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   328,   329,     0,     0,
       0,   -60,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -78,   -78,   -78,   -78,   -78,   -62,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,   465,   -78,   383,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,   -87,   -88,   -88,   -88,
     -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,   -88,   -89,   -89,   -89,   -89,   -89,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,     0,   -89,   -90,   -90,   -90,   -90,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,
     -90,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,     0,   -91,   -98,
     -98,   -98,   -98,   -98,     0,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,     0,     0,     0,   -98,   -99,   -99,   -99,
     -99,   -99,     0,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,     0,     0,     0,   -99,  -100,  -100,  -100,  -100,  -100,
       0,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,     0,
       0,     0,  -100,   -64,   -64,   398,   399,   400,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
     -64,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,   -67,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,   -71,   -76,   -76,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,   -76,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,   -75,   -74,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
     -74,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,   -72,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,   -77,   -73,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,   -73,   -65,   -65,   398,   399,   400,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,   -65,   -66,   -66,   398,   399,   400,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
     -66,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,   -68,   -69,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,   -69,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,   -70,   -82,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,   -82,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
     -79,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,   -80,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   396,   397,     0,   -81,     0,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   396,   397,     0,
     -59,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   396,   397,     0,   -61,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   396,   397,     0,   -63,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   396,
     397,     0,   -60,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,   -62
};

static const yytype_int16 yycheck[] =
{
       0,   130,     0,   160,   285,    45,     3,     5,     3,     4,
       5,     6,     7,     8,    12,     0,   318,   111,    17,    18,
      19,    20,   179,    22,    23,    25,    36,    12,    34,    35,
      36,    37,   334,    43,    29,   316,    36,    37,     3,    45,
      34,    35,    36,    37,    43,     3,    43,    42,    43,    43,
      47,     3,   354,    47,    49,    50,    51,    55,    58,   153,
       3,    45,    46,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,   378,    36,   172,     3,
     174,   383,    41,    36,     0,     3,     4,     5,     6,     7,
       8,    91,    45,     3,   188,     3,     4,     5,     6,     7,
       8,    17,    18,    19,    20,    21,    22,    23,    36,   109,
       0,    29,     3,    41,   112,    36,   116,    34,    35,    36,
      37,    29,    43,     3,    42,   125,    47,    45,    45,    36,
     130,    49,    50,    51,    42,    41,    43,    39,    44,    36,
      47,    49,    50,    51,   144,    47,   146,   145,    45,   149,
      39,    17,    18,    19,    20,    21,    22,    23,    47,   159,
      38,    36,     3,     4,     5,     6,     7,     8,     9,    10,
      45,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    49,    50,    51,    36,    37,    29,     3,
       4,     5,     6,     7,     8,    45,    36,    37,    39,   199,
     200,    42,    48,    43,    36,    37,    36,    47,    49,    50,
      51,    41,    40,    45,    44,    29,     3,     4,     5,     6,
       7,     8,    34,    35,    36,    37,   226,    36,    42,    41,
      34,    35,    36,    37,    43,    49,    50,    51,    39,    43,
      36,    37,    29,    47,    42,    39,    47,    43,   248,   249,
       0,    47,   381,    47,    45,    42,     3,     4,     5,     6,
       7,     8,    49,    50,    51,   265,    39,    17,    18,    19,
      20,    21,    22,    23,    47,   404,    39,   277,    34,    35,
      36,    37,    29,    45,    47,   285,    39,    43,    34,    35,
      36,    37,   292,   293,    47,    42,    41,    43,    34,    35,
      36,    37,    49,    50,    51,    41,    41,    39,    44,     3,
       4,     5,     6,     7,     8,    47,   316,    41,   318,     0,
      44,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    43,   334,    29,    17,    18,    19,    20,
      21,    22,    23,    34,    35,    36,    37,     8,    42,    38,
      41,    36,    37,    44,   354,    49,    50,    51,    43,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,    25,    36,    37,   376,    41,   378,    41,
      44,   381,    44,   383,    36,    37,    45,    46,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,    36,    37,   404,    43,    58,    41,     3,    47,
      44,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     4,     5,     6,     7,     8,     3,
       4,     5,     6,     7,     8,     9,    10,    43,    12,    91,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      43,    36,    44,    36,    37,    29,    41,   109,    45,    44,
      43,    40,     0,    42,   116,    39,    45,    46,    42,    36,
      37,    47,    48,   125,    41,    49,    50,    51,   130,    17,
      18,    19,    20,    21,    22,    23,    34,    35,    36,    37,
      40,     8,   144,    41,   146,    45,    46,   149,    40,    42,
      42,    43,    24,    25,    26,    27,    28,   159,    30,    31,
      32,    33,    34,    35,    36,    37,    41,    45,   518,    44,
     520,    43,    42,   523,    46,    47,   526,    43,   528,    42,
     530,    47,   532,    17,    18,    19,    20,   537,    22,    23,
     540,    45,    46,    42,    36,    37,   546,   199,   200,    41,
      45,    46,     3,     4,     5,     6,     7,     8,     9,    10,
      42,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   225,   226,    43,    45,    46,    29,    47,
      30,    31,    32,    33,    34,    35,    36,    37,    39,    43,
      43,    42,    41,    47,    47,    45,   248,   249,    49,    50,
      51,    47,    48,     3,     4,     5,     6,     7,     8,     9,
      10,    45,    12,   265,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    43,   277,    43,    43,    47,    29,
      47,    47,    43,   285,    43,     0,    47,    45,    47,    39,
     292,   293,    42,     4,     5,     6,     7,     8,     3,    49,
      50,    51,    17,    18,    19,    20,    21,    22,    23,    43,
      43,    43,    38,    47,   316,    47,   318,    47,    48,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    43,   334,    41,     3,    47,    44,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,    43,   354,    41,    45,    47,    44,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,    43,    43,    43,   376,    47,   378,    47,    43,   381,
      41,   383,    47,    44,    42,     3,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
      43,    43,   404,    24,    25,    26,    27,    28,    25,    30,
      31,    32,    33,    34,    35,    36,    37,     0,    41,    36,
      37,    44,    43,    43,    43,    46,    47,    41,    41,    41,
      44,    44,    44,    50,    17,    18,    19,    20,    21,    22,
      23,    58,    41,    45,    42,    44,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    41,
      41,    38,    44,    44,     3,     4,     5,     6,     7,     8,
       9,    10,    45,    12,    91,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    41,    45,    11,    44,   106,
      29,    41,   109,    41,    44,    41,    44,     3,    44,   116,
      39,    41,    43,    42,    44,    43,    41,    43,   125,    44,
      49,    50,    51,   130,    41,    43,   518,    44,   520,    41,
      43,   523,    44,    43,   526,    43,   528,   144,   530,   146,
     532,    43,   149,    43,    43,   537,    43,    12,   540,    43,
      43,    43,   159,   160,   546,    43,    43,    43,     3,     4,
       5,     6,     7,     8,     3,     4,     5,     6,     7,     8,
       9,    10,   179,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    43,    43,    43,    43,    43,
      29,    43,   199,   200,    43,    43,    43,    42,    41,    41,
      39,    41,    43,    42,    49,    50,    51,    41,    41,    41,
      49,    50,    51,    41,    41,    41,    41,   112,   116,   226,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   248,   249,    -1,    -1,    -1,    29,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    39,    -1,   265,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    -1,
     277,    -1,    -1,    -1,    29,    -1,    -1,    -1,   285,    -1,
      -1,    -1,    -1,    -1,    -1,   292,   293,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,   315,   316,
      -1,   318,     0,    -1,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,    -1,   334,    29,    17,
      18,    19,    20,    21,    22,    23,    -1,    17,    18,    19,
      20,    42,    22,    23,    -1,    -1,    -1,   354,    49,    50,
      51,    -1,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,    25,    -1,    -1,   376,
      -1,   378,    -1,    -1,   381,    -1,   383,    36,    37,    -1,
      -1,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,    -1,    -1,   404,    -1,    58,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    91,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,
     109,     3,     4,     5,     6,     7,     8,   116,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,   125,    -1,    49,    50,
      51,   130,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,    -1,   146,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    24,    25,    49,    50,    51,
     159,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,   518,    -1,   520,    43,    -1,   523,    -1,    47,   526,
      -1,   528,    -1,   530,    -1,   532,    -1,    -1,    -1,    -1,
     537,    -1,    -1,   540,    -1,    -1,    -1,    -1,    -1,   546,
     199,   200,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   225,   226,    -1,    -1,
      -1,    29,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,   248,
     249,    49,    50,    51,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,   265,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,   277,    -1,
      -1,    -1,    29,    -1,    -1,    -1,   285,    -1,    -1,    -1,
      -1,    -1,    39,   292,   293,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,   316,    -1,   318,
       0,    -1,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    -1,   334,    29,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    42,
     349,   350,   351,    -1,    -1,   354,    49,    50,    51,    -1,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,    25,    -1,    -1,   376,    -1,   378,
      -1,    -1,   381,    -1,   383,    36,    37,    -1,    -1,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,    -1,    -1,   404,    -1,    58,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      91,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    29,    -1,   109,    -1,
      -1,    -1,    -1,     0,    -1,   116,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,   125,    -1,    49,    50,    51,   130,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,   144,    -1,   146,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,   159,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,   518,
      -1,   520,    43,    -1,   523,    46,    47,   526,    -1,   528,
      -1,   530,    -1,   532,    -1,    -1,    -1,    -1,   537,    -1,
      -1,   540,    -1,    -1,    -1,    -1,    -1,   546,   199,   200,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,   226,    -1,    -1,    -1,    29,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,   248,   249,    49,
      50,    51,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,   265,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,   277,    -1,    -1,    -1,
      29,    -1,    -1,    -1,   285,    -1,     0,    -1,    -1,    -1,
      39,   292,   293,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,   316,    -1,   318,     0,    -1,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,    -1,   334,    -1,    17,    18,    19,    20,    21,
      22,    23,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,   354,    -1,    -1,    -1,    45,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,    25,    -1,    -1,   376,    -1,   378,    -1,    -1,
     381,    -1,   383,    36,    37,    -1,    -1,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,    -1,    -1,   404,    -1,    58,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    91,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    29,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,   125,    -1,    49,    50,    51,   130,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,   144,    -1,   146,    43,    -1,   149,    -1,    47,    -1,
      -1,    24,    25,    26,    27,    28,   159,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,   518,    -1,   520,
      43,    -1,   523,    46,    47,   526,    -1,   528,    -1,   530,
      -1,   532,    -1,    -1,    -1,    -1,   537,    -1,    -1,   540,
      -1,    -1,    -1,    -1,    -1,   546,   199,   200,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,   226,    -1,    -1,    -1,    29,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    39,    -1,    -1,
      42,    -1,    -1,    -1,    45,   248,   249,    49,    50,    51,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,   265,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,   277,    -1,    -1,    -1,    29,    -1,
      -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,    39,   292,
     293,    42,    -1,    -1,    -1,    24,    25,    -1,    49,    50,
      51,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,   316,    -1,   318,    45,    -1,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
      -1,   334,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      42,   354,    44,    -1,    46,    -1,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
      25,    -1,    -1,   376,    -1,   378,    -1,    -1,   381,    -1,
     383,    -1,    37,    -1,    -1,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,    -1,
      -1,   404,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    91,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    29,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
     125,    -1,    49,    50,    51,   130,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,   144,
      43,   146,    -1,    -1,    47,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,   159,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,   518,    -1,   520,    43,    -1,
     523,    -1,    47,   526,    -1,   528,    -1,   530,    -1,   532,
      -1,    -1,    -1,    -1,   537,    -1,    -1,   540,    -1,    -1,
      -1,    -1,    -1,   546,    -1,   200,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,   226,    -1,    -1,    -1,    29,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    39,    -1,    -1,    42,    -1,
      43,    -1,    -1,    -1,   249,    49,    50,    51,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
     265,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,   277,    -1,    -1,    -1,    29,    -1,    -1,    -1,
     285,    -1,    -1,    -1,    -1,    -1,    39,    -1,   293,    42,
      -1,    -1,    -1,    24,    25,    -1,    49,    50,    51,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,   316,    -1,   318,    45,    -1,   321,   322,   323,   324,
     325,   326,   327,   328,   329,    24,    25,    -1,    -1,   334,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,   347,   348,    43,    -1,    -1,    -1,    47,   354,
      -1,    -1,    -1,    -1,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,    -1,    25,    -1,   372,    -1,    -1,
      -1,   376,    -1,   378,    -1,    -1,   381,    37,   383,    -1,
      -1,    -1,    -1,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,    -1,    -1,    -1,   401,    -1,    58,   404,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    91,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,   125,    -1,    49,    50,    51,
     130,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    24,    25,    -1,   144,    43,   146,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,   159,
      43,    -1,    -1,    -1,    47,    30,    31,    32,    33,    34,
      35,    36,    37,   518,    -1,   520,    41,    -1,   523,    44,
      -1,   526,    -1,   528,    -1,   530,    -1,   532,    -1,    -1,
      -1,    -1,   537,    -1,    -1,   540,    -1,    -1,    -1,    -1,
     200,   546,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,   226,    -1,    -1,    -1,
      29,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      39,    -1,    -1,    42,    -1,    43,    -1,    -1,    -1,   249,
      49,    50,    51,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,   265,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,   277,    -1,    -1,
      -1,    29,    -1,    -1,    -1,   285,    -1,    -1,    -1,    -1,
      -1,    39,    -1,   293,    42,    -1,    -1,    -1,    24,    25,
      -1,    49,    50,    51,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,   316,    -1,   318,    45,
      -1,   321,   322,   323,   324,   325,   326,   327,    -1,    24,
      25,    26,    27,    28,   334,    30,    31,    32,    33,    34,
      35,    36,    37,   343,   344,   345,   346,    -1,    43,    -1,
      -1,    -1,    47,    -1,   354,    -1,    -1,    -1,    -1,   359,
     360,   361,   362,   363,   364,   365,   366,    25,    -1,    -1,
      -1,    -1,   372,    -1,    -1,    -1,   376,    -1,   378,    37,
      -1,   381,    -1,   383,    -1,    -1,    -1,    -1,   388,   389,
     390,   391,   392,   393,   394,   395,    -1,    -1,    -1,    -1,
      58,   401,    -1,    -1,   404,    63,    64,    65,    66,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    42,    43,    24,
      25,    46,    47,    91,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    25,    -1,    -1,    43,    -1,
      -1,   109,    47,    24,    25,    -1,    -1,    37,   116,    30,
      31,    32,    33,    34,    35,    36,    37,   125,    -1,    -1,
      -1,    -1,   130,    -1,    45,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    63,    64,    -1,   144,    -1,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,   159,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    91,    40,    -1,    42,    43,    -1,    -1,   518,    47,
     520,    -1,    -1,   523,    -1,    -1,   526,    -1,   528,   109,
     530,    -1,   532,    -1,    -1,    -1,   116,   537,    -1,    -1,
     540,    -1,   200,    -1,    -1,   125,   546,    25,    -1,    -1,
     130,    30,    31,    32,    33,    34,    35,    36,    37,    37,
      -1,    -1,    41,    -1,   144,    44,   146,    -1,   226,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,   159,
      58,    41,    -1,    -1,    44,    63,    24,    25,    26,    27,
      28,   249,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    43,    -1,   265,    -1,    47,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,   277,
     200,    -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,
      -1,   109,    -1,    -1,    -1,   293,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   125,    -1,    -1,
      -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,   316,    -1,
     318,    -1,    -1,   321,   322,   323,   144,    -1,   146,   249,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,   159,    -1,   341,   342,   265,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,   354,   277,    41,    -1,
      -1,   359,   360,   361,   362,   285,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   293,   372,    -1,    -1,    -1,   376,    -1,
     378,    -1,   200,   381,    -1,   383,    -1,    -1,    -1,    -1,
     388,   389,   390,   391,    -1,    -1,   316,    -1,   318,    -1,
      -1,   321,    -1,   401,    -1,    -1,   404,    -1,   226,    -1,
      -1,    -1,    -1,    -1,   334,    24,    25,    26,    27,    28,
     340,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,   249,    41,    -1,   354,    44,    -1,    46,    -1,   359,
     360,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,    -1,
      -1,    -1,   372,    -1,    -1,    -1,   376,    -1,   378,   277,
      -1,   381,    -1,   383,    -1,    -1,    -1,   285,   388,   389,
      -1,    25,    -1,    -1,    -1,   293,    -1,    -1,    -1,    24,
      25,   401,    -1,    37,   404,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,   316,    44,
     318,    -1,    24,    25,    58,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,   334,    -1,    -1,    -1,
     518,   339,   520,    45,    -1,   523,    -1,    -1,   526,    -1,
     528,    -1,   530,    -1,   532,    -1,   354,    91,    -1,   537,
      -1,   359,   540,    -1,    -1,    -1,    -1,    -1,   546,    -1,
      -1,    -1,    -1,    -1,   372,   109,    -1,    37,   376,    -1,
     378,    -1,   116,   381,    -1,   383,    -1,    -1,    -1,    -1,
     388,   125,    -1,    -1,    -1,    -1,   130,    57,    -1,    -1,
      -1,    -1,    -1,   401,    -1,    -1,   404,    -1,    -1,    -1,
     144,    -1,   146,    -1,    -1,    -1,    -1,    -1,   518,    -1,
     520,    -1,    -1,   523,    -1,   159,   526,    -1,   528,    -1,
     530,    -1,   532,    -1,    -1,    -1,    -1,   537,    -1,    -1,
     540,    -1,    -1,    -1,    -1,    -1,   546,    -1,    -1,   109,
      24,    25,    26,    27,    28,   115,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,   125,   200,    -1,    -1,    43,
     130,    -1,    -1,    47,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,   144,    -1,   146,    43,    -1,    -1,
      -1,    47,   226,    -1,    24,    25,    26,    27,    28,   159,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    43,    -1,   249,    -1,    47,    -1,    -1,
     518,    -1,   520,    -1,    -1,   523,    -1,    -1,   526,    -1,
     528,    -1,   530,    -1,   532,    -1,    -1,    -1,    -1,   537,
     200,    -1,   540,   277,    -1,    -1,    -1,    -1,   546,    -1,
      -1,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,   316,    -1,   318,    -1,    43,    -1,    -1,   249,
      47,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
     334,    -1,    41,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,   277,   352,    -1,
     354,    -1,    43,    -1,    -1,   285,    47,    -1,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,   372,    -1,
      -1,    -1,   376,    -1,   378,    -1,    -1,   381,    -1,   383,
      -1,    -1,    24,    25,    -1,    -1,   316,   317,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,   401,    -1,    41,
     404,    -1,    44,   333,    -1,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,   353,    43,    -1,    -1,    -1,    47,    -1,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,   374,   375,    -1,   377,    -1,    43,
      -1,   381,   382,    47,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    43,   404,    -1,    -1,    47,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,   422,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    47,    30,    31,    32,    33,    34,    35,    36,    37,
     440,    -1,    -1,    41,   518,    -1,   520,    -1,    -1,   523,
      -1,    -1,   526,    -1,   528,    -1,   530,    -1,   532,    -1,
      -1,    -1,    -1,   537,    -1,   465,   540,    -1,    24,    25,
      -1,    -1,   546,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,   483,    -1,    -1,   486,    43,    -1,    -1,
     490,    47,    -1,    -1,   494,    -1,   496,    -1,   498,    -1,
      -1,   501,    -1,    -1,    -1,    -1,    -1,   507,    -1,    -1,
     510,    -1,    -1,    -1,    -1,    -1,   516,    -1,   518,    -1,
     520,    -1,    -1,   523,    -1,    -1,   526,    -1,   528,    -1,
     530,    -1,   532,    -1,    -1,    -1,    -1,   537,    -1,    -1,
     540,    -1,    -1,    -1,    -1,    -1,   546,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    24,
      25,    -1,    -1,    29,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    39,    -1,    -1,    42,    -1,    43,    -1,
      -1,    -1,    -1,    49,    50,    51,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    24,    25,
      -1,    -1,    29,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    39,    -1,    -1,    42,    -1,    43,    -1,    -1,
      -1,    -1,    49,    50,    51,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    24,    25,    -1,
      -1,    29,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    39,    -1,    -1,    42,    -1,    43,    -1,    -1,    -1,
      -1,    49,    50,    51,    24,    25,    26,    27,    28,    -1,
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
      32,    33,    34,    35,    36,    37,    -1,    24,    25,    41,
      -1,    -1,    44,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    -1,    -1,    44,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    42,    43,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
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
      36,    37,    24,    25,    -1,    -1,    -1,    43,    30,    31,
      32,    33,    34,    35,    36,    37,    24,    25,    -1,    -1,
      -1,    43,    30,    31,    32,    33,    34,    35,    36,    37,
      24,    25,    26,    27,    28,    43,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,    42,    24,
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
      35,    36,    37,    24,    25,    -1,    41,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    24,    25,    -1,
      41,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    24,    25,    -1,    41,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    24,    25,    -1,    41,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    24,
      25,    -1,    41,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    18,    19,    20,    21,    22,    23,    49,    50,
      51,    53,    54,    55,    56,    57,    58,    60,    65,    90,
      91,    90,     0,    55,    45,    46,    46,    46,     3,     3,
       3,     4,     5,     6,     7,     8,    29,    42,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    89,    91,
      38,    59,    48,    61,    40,    42,    40,    40,    42,    83,
      76,    77,    85,    36,    37,    34,    35,    30,    31,    32,
      33,    24,    25,    26,    27,    28,    62,    89,    42,    41,
      23,    43,    66,    67,    90,    41,    76,    76,    87,    88,
      43,    46,    78,    79,    80,    80,    81,    81,    81,    81,
      82,    82,    83,    83,    83,    39,    47,     8,    63,    38,
      68,    43,    47,     3,    41,    44,    47,    43,    77,    89,
      43,    47,     9,    10,    12,    14,    15,    16,    39,    56,
      69,    70,    71,    72,    73,    75,    76,    90,    68,    67,
      76,    88,    44,     8,    42,    42,    42,    76,    42,    42,
      45,    39,    70,    13,    74,    45,    45,     3,    41,    44,
      42,    64,    76,    90,    76,     3,    84,    68,    76,    62,
      47,    48,    43,     3,    43,    43,    43,    41,    43,    42,
      68,    43,    68,    45,    45,    62,    11,    43,     3,    68,
      49,    50,    51,     3,     4,     5,     6,     7,     8,    29,
      42,    49,    50,    51,    78,    79,    80,    81,    82,    83,
      84,    86,    89,    91,     4,     5,     6,     7,     8,     3,
       4,     5,     6,     7,     8,    29,    42,    49,    50,    51,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      89,    91,     3,     4,     5,     6,     7,     8,    29,    42,
      49,    50,    51,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    89,    91,    36,     3,    85,     3,    77,
      85,     3,     4,     5,     6,     7,     8,    42,    49,    50,
      51,    85,    86,    89,    91,    38,     3,     4,     5,     6,
       7,     8,    29,    42,    49,    50,    51,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    89,    91,     4,
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
       0,    52,    53,    54,    54,    54,    55,    55,    56,    56,
      56,    56,    56,    56,    57,    58,    59,    60,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    79,    80,
      80,    80,    80,    80,    81,    81,    81,    82,    82,    82,
      82,    83,    83,    84,    84,    84,    84,    84,    85,    85,
      85,    85,    86,    87,    87,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     1,     1,     3,
       1,     3,     1,     3,     2,     4,     3,     5,     7,     1,
       3,     1,     3,     3,     5,     6,     5,     1,     3,     2,
       1,     2,     3,     1,     2,     2,     2,     1,     1,     2,
       5,     5,     5,     8,     2,     5,     2,     0,     1,     2,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     2,     3,     1,     1,     1,     1,     1,     4,
       6,     8,     4,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 131 "flex_bison/porygon_syntax.y"
                                                    {ast_root = (yyvsp[0].tree_node);}
#line 2876 "src/parser.c"
    break;

  case 3:
#line 135 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2882 "src/parser.c"
    break;

  case 4:
#line 136 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "declarationList", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2893 "src/parser.c"
    break;

  case 6:
#line 146 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 2899 "src/parser.c"
    break;

  case 7:
#line 147 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2905 "src/parser.c"
    break;

  case 8:
#line 151 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2911 "src/parser.c"
    break;

  case 9:
#line 152 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "varDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2922 "src/parser.c"
    break;

  case 10:
#line 158 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2928 "src/parser.c"
    break;

  case 11:
#line 159 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "arrayDeclarationDefinition", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2939 "src/parser.c"
    break;

  case 12:
#line 165 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 2945 "src/parser.c"
    break;

  case 13:
#line 166 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "tableDeclarationDefinition", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 2956 "src/parser.c"
    break;

  case 14:
#line 176 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "varSimpleDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                        add_entry((yyvsp[0].tree_node)->name, (yyvsp[-1].tree_node)->name, VARIABLE, cur_scope, SIMPLE, 0, line_num, strlen((yyvsp[0].tree_node)->name));
                                                    }
#line 2968 "src/parser.c"
    break;

  case 15:
#line 186 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "arrayDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                        add_entry((yyvsp[-2].tree_node)->name, (yyvsp[-3].tree_node)->name, VARIABLE, cur_scope, ARRAY, 0, line_num, strlen((yyvsp[-2].tree_node)->name));
                                                    }
#line 2980 "src/parser.c"
    break;

  case 16:
#line 196 "flex_bison/porygon_syntax.y"
                                                  {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 2986 "src/parser.c"
    break;

  case 17:
#line 200 "flex_bison/porygon_syntax.y"
                                                            {
                                                                struct tree_node *node = create_node(ast_tree_list, "tableDeclaration", 2);
                                                                add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                                add_leaf(node, (yyvsp[-2].tree_node), 1);
                                                                (yyval.tree_node) = node;
                                                                add_entry((yyvsp[-2].tree_node)->name, (yyvsp[-3].tree_node)->name, VARIABLE, TABLE, cur_scope, 0, line_num, strlen((yyvsp[-3].tree_node)->name));
                                                            }
#line 2998 "src/parser.c"
    break;

  case 18:
#line 210 "flex_bison/porygon_syntax.y"
                                                                         {
                                                                            struct tree_node *node = create_node(ast_tree_list, "tableDefinition", 2);
                                                                            add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                            add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                                            (yyval.tree_node) = node;
                                                                         }
#line 3009 "src/parser.c"
    break;

  case 19:
#line 219 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3015 "src/parser.c"
    break;

  case 20:
#line 220 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "constList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;

                                                    }
#line 3027 "src/parser.c"
    break;

  case 21:
#line 230 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3033 "src/parser.c"
    break;

  case 22:
#line 231 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "stringList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3044 "src/parser.c"
    break;

  case 23:
#line 240 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3050 "src/parser.c"
    break;

  case 24:
#line 241 "flex_bison/porygon_syntax.y"
                                                              {
                                                                struct tree_node *node = create_node(ast_tree_list, "columnContent", 2);
                                                                add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                                (yyval.tree_node) = node;
                                                              }
#line 3061 "src/parser.c"
    break;

  case 25:
#line 250 "flex_bison/porygon_syntax.y"
                                                                                    {
                                                                                        struct tree_node *node = create_node(ast_tree_list, "functDeclaration", 4);
                                                                                        add_leaf(node, (yyvsp[-5].tree_node), 0);
                                                                                        add_leaf(node, (yyvsp[-4].tree_node), 1);
                                                                                        add_leaf(node, (yyvsp[-2].tree_node), 2);
                                                                                        add_leaf(node, (yyvsp[0].tree_node), 3);
                                                                                        (yyval.tree_node) = node;
                                                                                        add_entry((yyvsp[-4].tree_node)->name, (yyvsp[-5].tree_node)->name, FUNCTION, cur_scope, SIMPLE, 0, line_num, strlen((yyvsp[-4].tree_node)->name));
                                                                                    }
#line 3075 "src/parser.c"
    break;

  case 26:
#line 259 "flex_bison/porygon_syntax.y"
                                                                      {
                                                                            struct tree_node *node = create_node(ast_tree_list, "functDeclaration", 3);
                                                                            add_leaf(node, (yyvsp[-4].tree_node), 0);
                                                                            add_leaf(node, (yyvsp[-3].tree_node), 1);
                                                                            add_leaf(node, (yyvsp[0].tree_node), 2);
                                                                            (yyval.tree_node) = node;
                                                                            add_entry((yyvsp[-3].tree_node)->name, (yyvsp[-4].tree_node)->name, FUNCTION, cur_scope, SIMPLE, 0, line_num, strlen((yyvsp[-3].tree_node)->name));
                                                                      }
#line 3088 "src/parser.c"
    break;

  case 27:
#line 270 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3094 "src/parser.c"
    break;

  case 28:
#line 271 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "parameterList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3105 "src/parser.c"
    break;

  case 29:
#line 280 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "parameterDeclaration", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                        add_entry((yyvsp[0].tree_node)->name, (yyvsp[-1].tree_node)->name, VARIABLE, count_scope + 1, SIMPLE, 0, line_num, strlen((yyvsp[0].tree_node)->name));
                                                    }
#line 3117 "src/parser.c"
    break;

  case 30:
#line 287 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3123 "src/parser.c"
    break;

  case 31:
#line 291 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "emptyCompoundStatement", 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3132 "src/parser.c"
    break;

  case 32:
#line 295 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3138 "src/parser.c"
    break;

  case 33:
#line 299 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3144 "src/parser.c"
    break;

  case 34:
#line 300 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "statementList", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3155 "src/parser.c"
    break;

  case 35:
#line 309 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3161 "src/parser.c"
    break;

  case 36:
#line 310 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3167 "src/parser.c"
    break;

  case 37:
#line 311 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3173 "src/parser.c"
    break;

  case 38:
#line 312 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3179 "src/parser.c"
    break;

  case 39:
#line 313 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3185 "src/parser.c"
    break;

  case 40:
#line 314 "flex_bison/porygon_syntax.y"
                                                             {
                                                                 struct tree_node *node = create_node(ast_tree_list, "readStmt", 1);
                                                                 add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                 (yyval.tree_node) = node;
                                                             }
#line 3195 "src/parser.c"
    break;

  case 41:
#line 319 "flex_bison/porygon_syntax.y"
                                                             {
                                                                 struct tree_node *node = create_node(ast_tree_list, "writeStmt", 1);
                                                                 add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                 (yyval.tree_node) = node;
                                                             }
#line 3205 "src/parser.c"
    break;

  case 42:
#line 327 "flex_bison/porygon_syntax.y"
                                                                 {
                                                                     struct tree_node *node = create_node(ast_tree_list, "while", 2);
                                                                     add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                     add_leaf(node, (yyvsp[0].tree_node), 1);
                                                                     (yyval.tree_node) = node;
                                                                 }
#line 3216 "src/parser.c"
    break;

  case 43:
#line 333 "flex_bison/porygon_syntax.y"
                                                                                              {
                                                                                                 struct tree_node *node = create_node(ast_tree_list, "while", 2);
                                                                                                 add_leaf(node, (yyvsp[-5].tree_node), 0);
                                                                                                 add_leaf(node, (yyvsp[-3].tree_node), 1);
                                                                                                 (yyval.tree_node) = node;
                                                                                                add_entry((yyvsp[-4].tree_node)->name, (yyvsp[-5].tree_node)->name, VARIABLE, count_scope + 1, SIMPLE, 0, line_num, strlen((yyvsp[-6].tree_node)->name));
                                                                                             }
#line 3228 "src/parser.c"
    break;

  case 44:
#line 344 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "conditionalStmt", 2);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3239 "src/parser.c"
    break;

  case 45:
#line 353 "flex_bison/porygon_syntax.y"
                                                                {
                                                                    struct tree_node *node = create_node(ast_tree_list, "ifStmt", 2);
                                                                    add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                                    add_leaf(node, (yyvsp[0].tree_node), 1);
                                                                    (yyval.tree_node) = node;
                                                                }
#line 3250 "src/parser.c"
    break;

  case 46:
#line 362 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "elseStmt", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3260 "src/parser.c"
    break;

  case 47:
#line 367 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "emptyElse", 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3269 "src/parser.c"
    break;

  case 48:
#line 374 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "return", 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3278 "src/parser.c"
    break;

  case 49:
#line 378 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "return", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3288 "src/parser.c"
    break;

  case 50:
#line 386 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3294 "src/parser.c"
    break;

  case 51:
#line 387 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3305 "src/parser.c"
    break;

  case 52:
#line 396 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3311 "src/parser.c"
    break;

  case 53:
#line 397 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "||", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3322 "src/parser.c"
    break;

  case 54:
#line 406 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3328 "src/parser.c"
    break;

  case 55:
#line 407 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "&&", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3339 "src/parser.c"
    break;

  case 56:
#line 416 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3345 "src/parser.c"
    break;

  case 57:
#line 417 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "==", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3356 "src/parser.c"
    break;

  case 58:
#line 423 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "!=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3367 "src/parser.c"
    break;

  case 59:
#line 432 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3373 "src/parser.c"
    break;

  case 60:
#line 433 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ">", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3384 "src/parser.c"
    break;

  case 61:
#line 439 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "<", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3395 "src/parser.c"
    break;

  case 62:
#line 445 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, ">=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3406 "src/parser.c"
    break;

  case 63:
#line 451 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "<=", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3417 "src/parser.c"
    break;

  case 64:
#line 460 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3423 "src/parser.c"
    break;

  case 65:
#line 461 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "+", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3434 "src/parser.c"
    break;

  case 66:
#line 467 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "-", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3445 "src/parser.c"
    break;

  case 67:
#line 476 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3451 "src/parser.c"
    break;

  case 68:
#line 477 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "*", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3462 "src/parser.c"
    break;

  case 69:
#line 483 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "/", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3473 "src/parser.c"
    break;

  case 70:
#line 489 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "%", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3484 "src/parser.c"
    break;

  case 71:
#line 498 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3490 "src/parser.c"
    break;

  case 72:
#line 499 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "!", 1);
                                                        add_leaf(node, (yyvsp[0].tree_node), 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3500 "src/parser.c"
    break;

  case 73:
#line 507 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[-1].tree_node);}
#line 3506 "src/parser.c"
    break;

  case 75:
#line 509 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3512 "src/parser.c"
    break;

  case 76:
#line 510 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3518 "src/parser.c"
    break;

  case 77:
#line 511 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3524 "src/parser.c"
    break;

  case 78:
#line 515 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3530 "src/parser.c"
    break;

  case 79:
#line 516 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "mutable[]", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3541 "src/parser.c"
    break;

  case 80:
#line 522 "flex_bison/porygon_syntax.y"
                                                                {
                                                                    struct tree_node *node = create_node(ast_tree_list, "mutable[;]", 3);
                                                                    add_leaf(node, (yyvsp[-5].tree_node), 0);
                                                                    add_leaf(node, (yyvsp[-3].tree_node), 1);
                                                                    add_leaf(node, (yyvsp[-1].tree_node), 2);
                                                                    (yyval.tree_node) = node;
                                                                }
#line 3553 "src/parser.c"
    break;

  case 81:
#line 529 "flex_bison/porygon_syntax.y"
                                                                                {
                                                                                    struct tree_node *node = create_node(ast_tree_list, "mutable[;:]", 4);
                                                                                    add_leaf(node, (yyvsp[-7].tree_node), 0);
                                                                                    add_leaf(node, (yyvsp[-5].tree_node), 1);
                                                                                    add_leaf(node, (yyvsp[-3].tree_node), 2);
                                                                                    add_leaf(node, (yyvsp[-1].tree_node), 3);
                                                                                    (yyval.tree_node) = node;
                                                                                }
#line 3566 "src/parser.c"
    break;

  case 82:
#line 540 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "functCall", 2);
                                                        add_leaf(node, (yyvsp[-3].tree_node), 0);
                                                        add_leaf(node, (yyvsp[-1].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3577 "src/parser.c"
    break;

  case 83:
#line 549 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3583 "src/parser.c"
    break;

  case 84:
#line 550 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "emptyArgs", 0);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3592 "src/parser.c"
    break;

  case 85:
#line 557 "flex_bison/porygon_syntax.y"
                                                    {
                                                        struct tree_node *node = create_node(ast_tree_list, "argList", 2);
                                                        add_leaf(node, (yyvsp[-2].tree_node), 0);
                                                        add_leaf(node, (yyvsp[0].tree_node), 1);
                                                        (yyval.tree_node) = node;
                                                    }
#line 3603 "src/parser.c"
    break;

  case 86:
#line 563 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3609 "src/parser.c"
    break;

  case 87:
#line 567 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3615 "src/parser.c"
    break;

  case 88:
#line 568 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3621 "src/parser.c"
    break;

  case 89:
#line 569 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3627 "src/parser.c"
    break;

  case 90:
#line 570 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3633 "src/parser.c"
    break;

  case 91:
#line 571 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3639 "src/parser.c"
    break;

  case 92:
#line 575 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3645 "src/parser.c"
    break;

  case 93:
#line 576 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3651 "src/parser.c"
    break;

  case 94:
#line 577 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3657 "src/parser.c"
    break;

  case 95:
#line 578 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3663 "src/parser.c"
    break;

  case 96:
#line 579 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3669 "src/parser.c"
    break;

  case 97:
#line 580 "flex_bison/porygon_syntax.y"
                                                    {(yyval.tree_node) = (yyvsp[0].tree_node);}
#line 3675 "src/parser.c"
    break;

  case 98:
#line 584 "flex_bison/porygon_syntax.y"
                                                    {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Invalid Identifier (size bigger than 32 characters). Line: %d Column: %d\n", line_num, previous_col);
                                                        reset_pcolor();
                                                    }
#line 3685 "src/parser.c"
    break;

  case 99:
#line 589 "flex_bison/porygon_syntax.y"
                                                    {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Invalid char (more than one character). Line: %d Column: %d\n", line_num, previous_col);
                                                        reset_pcolor();
                                                    }
#line 3695 "src/parser.c"
    break;

  case 100:
#line 594 "flex_bison/porygon_syntax.y"
                                                    {
                                                        red_print();
                                                        printf("[LEXICAL ERR] Unknown Token. Line: %d Column: %d\n", line_num, previous_col);
                                                        reset_pcolor();
                                                    }
#line 3705 "src/parser.c"
    break;


#line 3709 "src/parser.c"

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
#line 601 "flex_bison/porygon_syntax.y"


void yyerror(char const *msg) {
    fprintf(stderr, "[ERR] (Line: %d, Column: %d) Found error %s\n", line_num, previous_col, msg);
}
