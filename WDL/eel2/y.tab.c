/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse nseelparse
#define yylex   nseellex
#define yyerror nseelerror
#define yylval  nseellval
#define yychar  nseelchar
#define yydebug nseeldebug
#define yynerrs nseelnerrs
#define yylloc nseellloc

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VALUE = 258,
     IDENTIFIER = 259,
     FUNCTION1 = 260,
     FUNCTION2 = 261,
     FUNCTION3 = 262,
     FUNCTIONX = 263,
     TOKEN_SHL = 264,
     TOKEN_SHR = 265,
     TOKEN_LTE = 266,
     TOKEN_GTE = 267,
     TOKEN_EQ = 268,
     TOKEN_EQ_EXACT = 269,
     TOKEN_NE = 270,
     TOKEN_NE_EXACT = 271,
     TOKEN_LOGICAL_AND = 272,
     TOKEN_LOGICAL_OR = 273,
     TOKEN_ADD_OP = 274,
     TOKEN_SUB_OP = 275,
     TOKEN_MOD_OP = 276,
     TOKEN_OR_OP = 277,
     TOKEN_AND_OP = 278,
     TOKEN_XOR_OP = 279,
     TOKEN_DIV_OP = 280,
     TOKEN_MUL_OP = 281,
     TOKEN_POW_OP = 282,
     STRING_LITERAL = 283,
     STRING_IDENTIFIER = 284
   };
#endif
/* Tokens.  */
#define VALUE 258
#define IDENTIFIER 259
#define FUNCTION1 260
#define FUNCTION2 261
#define FUNCTION3 262
#define FUNCTIONX 263
#define TOKEN_SHL 264
#define TOKEN_SHR 265
#define TOKEN_LTE 266
#define TOKEN_GTE 267
#define TOKEN_EQ 268
#define TOKEN_EQ_EXACT 269
#define TOKEN_NE 270
#define TOKEN_NE_EXACT 271
#define TOKEN_LOGICAL_AND 272
#define TOKEN_LOGICAL_OR 273
#define TOKEN_ADD_OP 274
#define TOKEN_SUB_OP 275
#define TOKEN_MOD_OP 276
#define TOKEN_OR_OP 277
#define TOKEN_AND_OP 278
#define TOKEN_XOR_OP 279
#define TOKEN_DIV_OP 280
#define TOKEN_MUL_OP 281
#define TOKEN_POW_OP 282
#define STRING_LITERAL 283
#define STRING_IDENTIFIER 284




/* Copy the first part of user declarations.  */
#line 13 "eel2.y"

#ifdef _WIN32
#include <windows.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "y.tab.h"
#include "ns-eel-int.h"
  
#define scanner context->scanner
#define YY_(x) ("")



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 201 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNRULES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,     2,     2,    40,    43,     2,
      31,    32,    42,    36,    30,    37,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    50,
      46,    35,    47,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    34,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    44,     2,    45,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    14,    16,    20,    25,
      29,    36,    45,    54,    58,    63,    65,    67,    69,    71,
      73,    77,    81,    85,    89,    93,    97,   101,   105,   109,
     113,   117,   121,   123,   126,   129,   132,   134,   138,   140,
     144,   146,   150,   152,   156,   158,   162,   164,   168,   170,
     174,   178,   182,   186,   190,   192,   196,   200,   204,   208,
     212,   216,   220,   224,   226,   230,   234,   236,   242,   247,
     251,   253,   257,   260
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      69,     0,    -1,    68,    -1,    68,    30,    52,    -1,    28,
      -1,    28,    53,    -1,     4,    -1,    31,    68,    32,    -1,
       5,    31,    68,    32,    -1,     5,    31,    32,    -1,     6,
      31,    68,    30,    68,    32,    -1,     7,    31,    68,    30,
      68,    30,    68,    32,    -1,     8,    31,    68,    30,    68,
      30,    52,    32,    -1,    55,    33,    34,    -1,    55,    33,
      68,    34,    -1,     3,    -1,    29,    -1,    53,    -1,    54,
      -1,    55,    -1,    54,    35,    67,    -1,    54,    19,    67,
      -1,    54,    20,    67,    -1,    54,    21,    67,    -1,    54,
      22,    67,    -1,    54,    23,    67,    -1,    54,    24,    67,
      -1,    54,    25,    67,    -1,    54,    26,    67,    -1,    54,
      27,    67,    -1,    29,    35,    67,    -1,    29,    19,    67,
      -1,    56,    -1,    36,    57,    -1,    37,    57,    -1,    38,
      57,    -1,    57,    -1,    58,    39,    57,    -1,    58,    -1,
      59,    40,    58,    -1,    59,    -1,    60,    41,    59,    -1,
      60,    -1,    61,    42,    60,    -1,    61,    -1,    62,    37,
      61,    -1,    62,    -1,    63,    36,    62,    -1,    63,    -1,
      64,    43,    63,    -1,    64,    44,    63,    -1,    64,    45,
      63,    -1,    64,     9,    63,    -1,    64,    10,    63,    -1,
      64,    -1,    65,    46,    64,    -1,    65,    47,    64,    -1,
      65,    11,    64,    -1,    65,    12,    64,    -1,    65,    13,
      64,    -1,    65,    14,    64,    -1,    65,    15,    64,    -1,
      65,    16,    64,    -1,    65,    -1,    66,    17,    65,    -1,
      66,    18,    65,    -1,    66,    -1,    66,    48,    67,    49,
      67,    -1,    66,    48,    49,    67,    -1,    66,    48,    67,
      -1,    67,    -1,    68,    50,    67,    -1,    68,    50,    -1,
      68,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    41,    48,    49,    57,    60,    64,    68,
      72,    76,    80,    84,    88,    95,    96,    97,   101,   106,
     107,   111,   115,   119,   123,   127,   131,   135,   139,   143,
     147,   151,   158,   159,   163,   167,   174,   175,   182,   183,
     190,   191,   199,   200,   208,   209,   216,   217,   224,   225,
     229,   233,   237,   241,   248,   249,   253,   257,   261,   265,
     269,   273,   277,   284,   285,   289,   296,   297,   301,   305,
     313,   314,   318,   326
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VALUE", "IDENTIFIER", "FUNCTION1",
  "FUNCTION2", "FUNCTION3", "FUNCTIONX", "TOKEN_SHL", "TOKEN_SHR",
  "TOKEN_LTE", "TOKEN_GTE", "TOKEN_EQ", "TOKEN_EQ_EXACT", "TOKEN_NE",
  "TOKEN_NE_EXACT", "TOKEN_LOGICAL_AND", "TOKEN_LOGICAL_OR",
  "TOKEN_ADD_OP", "TOKEN_SUB_OP", "TOKEN_MOD_OP", "TOKEN_OR_OP",
  "TOKEN_AND_OP", "TOKEN_XOR_OP", "TOKEN_DIV_OP", "TOKEN_MUL_OP",
  "TOKEN_POW_OP", "STRING_LITERAL", "STRING_IDENTIFIER", "','", "'('",
  "')'", "'['", "']'", "'='", "'+'", "'-'", "'!'", "'^'", "'%'", "'/'",
  "'*'", "'&'", "'|'", "'~'", "'<'", "'>'", "'?'", "':'", "';'", "$accept",
  "more_params", "string", "assignable_value", "rvalue", "assignment",
  "unary_expr", "pow_expr", "mod_expr", "div_expr", "mul_expr", "sub_expr",
  "add_expr", "andor_expr", "cmp_expr", "logical_and_or_expr",
  "if_else_expr", "expression", "program", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
      44,    40,    41,    91,    93,    61,    43,    45,    33,    94,
      37,    47,    42,    38,   124,   126,    60,    62,    63,    58,
      59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    55,    55,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    57,    57,    58,    58,    59,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    67,    67,    67,    67,
      68,    68,    68,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     3,     4,     3,
       6,     8,     8,     3,     4,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     5,     4,     3,
       1,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    15,     6,     0,     0,     0,     0,     4,    16,     0,
       0,     0,     0,    17,    18,    19,    32,    36,    38,    40,
      42,    44,    46,    48,    54,    63,    66,    70,    73,     0,
       0,     0,     0,     0,     5,     0,     0,     0,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,     1,     9,     0,     0,     0,
       0,    31,    30,     7,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    20,    13,     0,    37,    39,    41,    43,
      45,    47,    52,    53,    49,    50,    51,    57,    58,    59,
      60,    61,    62,    55,    56,    64,    65,     0,    69,    71,
       8,     0,     0,     0,    14,    68,     0,     0,     0,     0,
      67,    10,     0,     0,     0,     0,     2,    11,    12,     0,
       3
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   135,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   136,    29
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -71
static const yytype_int16 yypact[] =
{
     108,   -71,   -71,   -28,   -25,   -24,   -23,    34,    89,   108,
     108,   108,   108,   -71,   128,    38,   -71,   -71,    26,    39,
      57,    52,    62,    71,    31,    23,    32,   -71,    59,   117,
      53,   108,   108,   108,   -71,   108,   108,    -3,   -71,   -71,
     -71,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,    97,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,    17,   108,   -71,   -71,    46,    14,    22,
      33,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,    93,   -71,    26,    39,    57,
      52,    62,    71,    71,    71,    71,    71,    31,    31,    31,
      31,    31,    31,    31,    31,    23,    23,   108,    69,   -71,
     -71,   108,   108,   108,   -71,   -71,   108,    56,    37,    43,
     -71,   -71,   108,   108,    60,    87,    47,   -71,   -71,   108,
     -71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -71,   -19,   122,   -71,   -71,   -71,    16,    77,    84,    85,
      86,   104,    98,   101,   -70,   -71,   -31,     0,   -71
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      28,   115,   116,    30,    81,    82,    31,    32,    33,    37,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
       1,     2,     3,     4,     5,     6,    38,    39,    40,    83,
      77,    78,    79,    80,    63,    64,    65,    66,    67,    68,
      58,    59,   118,   119,   121,     7,     8,    74,     9,    71,
      72,    95,   122,    10,    11,    12,     1,     2,     3,     4,
       5,     6,     7,   123,    74,    52,   117,   132,    96,    69,
      70,    51,    74,   133,    60,    61,    62,   139,   120,    53,
      73,     7,     8,    74,     9,    76,   125,    74,   131,    10,
      11,    12,   137,    74,    55,   130,    74,    74,    54,    56,
       1,     2,     3,     4,     5,     6,    74,    57,    35,    74,
      74,     1,     2,     3,     4,     5,     6,    75,   126,   138,
     140,   127,   128,   129,    36,     7,     8,   124,     9,    34,
      97,    94,   134,    10,    11,    12,     7,     8,    98,     9,
      99,     0,   100,    74,    10,    11,    12,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   102,   103,   104,   105,
     106,   101,     0,    50,   107,   108,   109,   110,   111,   112,
     113,   114
};

static const yytype_int16 yycheck[] =
{
       0,    71,    72,    31,    35,    36,    31,    31,    31,     9,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       3,     4,     5,     6,     7,     8,    10,    11,    12,    32,
      30,    31,    32,    33,    11,    12,    13,    14,    15,    16,
       9,    10,    73,    74,    30,    28,    29,    50,    31,    17,
      18,    51,    30,    36,    37,    38,     3,     4,     5,     6,
       7,     8,    28,    30,    50,    39,    49,    30,    52,    46,
      47,    33,    50,    30,    43,    44,    45,    30,    32,    40,
      48,    28,    29,    50,    31,    32,   117,    50,    32,    36,
      37,    38,    32,    50,    42,   126,    50,    50,    41,    37,
       3,     4,     5,     6,     7,     8,    50,    36,    19,    50,
      50,     3,     4,     5,     6,     7,     8,     0,    49,    32,
     139,   121,   122,   123,    35,    28,    29,    34,    31,     7,
      53,    34,   132,    36,    37,    38,    28,    29,    54,    31,
      55,    -1,    56,    50,    36,    37,    38,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    58,    59,    60,    61,
      62,    57,    -1,    35,    63,    64,    65,    66,    67,    68,
      69,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    28,    29,    31,
      36,    37,    38,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      31,    31,    31,    31,    53,    19,    35,    68,    57,    57,
      57,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      35,    33,    39,    40,    41,    42,    37,    36,     9,    10,
      43,    44,    45,    11,    12,    13,    14,    15,    16,    46,
      47,    17,    18,    48,    50,     0,    32,    68,    68,    68,
      68,    67,    67,    32,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    34,    68,    57,    58,    59,    60,
      61,    62,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    49,    67,    67,
      32,    30,    30,    30,    34,    67,    49,    68,    68,    68,
      67,    32,    30,    30,    68,    52,    68,    32,    32,    30,
      52
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, scanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, context); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, compileContext* context)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    compileContext* context;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (context);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, compileContext* context)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    compileContext* context;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, compileContext* context)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, context)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    compileContext* context;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , context);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, context); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, compileContext* context)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, context)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    compileContext* context;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 3: /* "VALUE" */
#line 8 "eel2.y"
	{
 #define yydestruct(a,b,c,d,e) 0
};
#line 1244 "y.tab.c"
	break;

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (compileContext* context);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (compileContext* context)
#else
int
yyparse (context)
    compileContext* context;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 42 "eel2.y"
    {
	  (yyval) = nseel_createMoreParametersOpcode(context,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	}
    break;

  case 5:
#line 50 "eel2.y"
    {
          ((struct eelStringSegmentRec *)(yyvsp[(1) - (2)]))->_next = (struct eelStringSegmentRec *)(yyvsp[(2) - (2)]);
          (yyval) = (yyvsp[(1) - (2)]);
        }
    break;

  case 7:
#line 61 "eel2.y"
    {
	  (yyval) = (yyvsp[(2) - (3)]);
	}
    break;

  case 8:
#line 65 "eel2.y"
    {
  	  (yyval) = nseel_setCompiledFunctionCallParameters((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), 0, 0);
	}
    break;

  case 9:
#line 69 "eel2.y"
    {
  	  (yyval) = nseel_setCompiledFunctionCallParameters((yyvsp[(1) - (3)]), nseel_createCompiledValue(context,0.0), 0, 0);
	}
    break;

  case 10:
#line 73 "eel2.y"
    {
  	  (yyval) = nseel_setCompiledFunctionCallParameters((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), 0);
	}
    break;

  case 11:
#line 77 "eel2.y"
    {
  	  (yyval) = nseel_setCompiledFunctionCallParameters((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
	}
    break;

  case 12:
#line 81 "eel2.y"
    {
  	  (yyval) = nseel_setCompiledFunctionCallParameters((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
	}
    break;

  case 13:
#line 85 "eel2.y"
    {
	  (yyval) = nseel_createMemoryAccess(context,(yyvsp[(1) - (3)]),0);
        }
    break;

  case 14:
#line 89 "eel2.y"
    {
	  (yyval) = nseel_createMemoryAccess(context,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));
        }
    break;

  case 17:
#line 98 "eel2.y"
    {
          (yyval) = nseel_eelMakeOpcodeFromStringSegments(context,(struct eelStringSegmentRec *)(yyvsp[(1) - (1)]));
        }
    break;

  case 20:
#line 108 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_ASSIGN,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 21:
#line 112 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_ADD_OP,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 22:
#line 116 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_SUB_OP,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 23:
#line 120 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_MOD_OP,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 24:
#line 124 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_OR_OP,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 25:
#line 128 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_AND_OP,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 26:
#line 132 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_XOR_OP,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 27:
#line 136 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_DIV_OP,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 28:
#line 140 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_MUL_OP,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 29:
#line 144 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_POW_OP,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 30:
#line 148 "eel2.y"
    {
          (yyval) = nseel_createFunctionByName(context,"strcpy",2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL); 
        }
    break;

  case 31:
#line 152 "eel2.y"
    {
          (yyval) = nseel_createFunctionByName(context,"strcat",2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NULL); 
        }
    break;

  case 33:
#line 160 "eel2.y"
    {
	  (yyval) = (yyvsp[(2) - (2)]);
	}
    break;

  case 34:
#line 164 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_UMINUS,1,(yyvsp[(2) - (2)]),0);
	}
    break;

  case 35:
#line 168 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_NOT,1,(yyvsp[(2) - (2)]),0);
	}
    break;

  case 37:
#line 176 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_POW,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 39:
#line 184 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_MOD,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 41:
#line 192 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_DIVIDE,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	}
    break;

  case 43:
#line 201 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_MULTIPLY,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	}
    break;

  case 45:
#line 210 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_SUB,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	}
    break;

  case 47:
#line 218 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_ADD,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	}
    break;

  case 49:
#line 226 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_AND,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	}
    break;

  case 50:
#line 230 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_OR,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	}
    break;

  case 51:
#line 234 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_XOR,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	}
    break;

  case 52:
#line 238 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_SHL,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 53:
#line 242 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_SHR,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 55:
#line 250 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_LT,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 56:
#line 254 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_GT,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 57:
#line 258 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_LTE,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 58:
#line 262 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_GTE,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 59:
#line 266 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_EQ,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 60:
#line 270 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_EQ_EXACT,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 61:
#line 274 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_NE,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 62:
#line 278 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_NE_EXACT,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 64:
#line 286 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_LOGICAL_AND,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 65:
#line 290 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_LOGICAL_OR,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
        }
    break;

  case 67:
#line 298 "eel2.y"
    {
	  (yyval) = nseel_createIfElse(context, (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));
        }
    break;

  case 68:
#line 302 "eel2.y"
    {
	  (yyval) = nseel_createIfElse(context, (yyvsp[(1) - (4)]), 0, (yyvsp[(4) - (4)]));
        }
    break;

  case 69:
#line 306 "eel2.y"
    {
	  (yyval) = nseel_createIfElse(context, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0);
        }
    break;

  case 71:
#line 315 "eel2.y"
    {
	  (yyval) = nseel_createSimpleCompiledFunction(context,FN_JOIN_STATEMENTS,2,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	}
    break;

  case 72:
#line 319 "eel2.y"
    {
	  (yyval) = (yyvsp[(1) - (2)]);
	}
    break;

  case 73:
#line 327 "eel2.y"
    { 
                int a = (yylsp[(1) - (1)]).first_line;
                context->result = (yyvsp[(1) - (1)]);
	}
    break;


/* Line 1267 of yacc.c.  */
#line 1941 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, context, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (&yylloc, context, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, context, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc, context);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, context);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, context);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 334 "eel2.y"


