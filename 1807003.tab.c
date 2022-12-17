
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "1807003.y"

	#include<stdio.h>
	#include<math.h>
	
	typedef struct xy {
    	char *var;
    	int num;
	} save;
    save sv[1000],sm[1000];
	int cnt1=1,cnt2=1,val,cnt3=1,cnt4=0,case_no=0,default_case=0;
	float x,y;
	void insert_var (save *p, char *s, int n);
	void insert_var2 (save *p, char *s, int n);

	


/* Line 189 of yacc.c  */
#line 91 "1807003.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     HEADER = 260,
     MAIN = 261,
     DEFINE = 262,
     CHAR = 263,
     INT = 264,
     FLOAT = 265,
     DOUBLE = 266,
     LONG = 267,
     IF = 268,
     ELSE = 269,
     ELSE_IF = 270,
     GOE = 271,
     LOE = 272,
     TWO_EQ = 273,
     NOT_EQ = 274,
     GT = 275,
     LT = 276,
     EQ = 277,
     LB = 278,
     RB = 279,
     LP = 280,
     RP = 281,
     END = 282,
     COL = 283,
     DASH = 284,
     COMA = 285,
     QT = 286,
     NOT = 287,
     OR = 288,
     AND = 289,
     PLUS = 290,
     MINUS = 291,
     MULT = 292,
     DIV = 293,
     MOD = 294,
     POW = 295,
     FACT = 296,
     INC = 297,
     DEC = 298,
     LOGICAL_OR = 299,
     LOGICAL_AND = 300,
     XOR = 301,
     VOID = 302,
     RETURN = 303,
     CASE = 304,
     BREAK = 305,
     CONTINUE = 306,
     SWITCH = 307,
     SCANF = 308,
     PRINTF = 309,
     DEFAULT = 310,
     FOR = 311,
     WHILE = 312,
     FUNC = 313,
     SIN = 314,
     COS = 315,
     TAN = 316,
     IFX = 317,
     ELIFX = 318
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 19 "1807003.y"

        int number;
        char *string;



/* Line 214 of yacc.c  */
#line 197 "1807003.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 209 "1807003.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   962

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     9,    15,    16,    18,    21,
      25,    27,    29,    31,    33,    35,    39,    41,    43,    46,
      51,    60,    74,   101,   123,   137,   151,   165,   179,   182,
     190,   198,   200,   209,   217,   219,   221,   225,   229,   233,
     237,   241,   245,   248,   252,   256,   260,   264,   268,   272,
     275,   279,   283,   287,   291,   294,   297,   300,   303
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    -1,     5,    -1,    65,    66,    -1,     6,
      23,    67,    48,    24,    -1,    -1,    68,    -1,    67,    71,
      -1,    69,    70,    27,    -1,     9,    -1,    10,    -1,    11,
      -1,     8,    -1,    12,    -1,    70,    30,     4,    -1,     4,
      -1,    27,    -1,    74,    27,    -1,     4,    22,    74,    27,
      -1,    13,    25,    74,    26,    23,    74,    27,    24,    -1,
      13,    25,    74,    26,    23,    74,    27,    24,    14,    23,
      74,    27,    24,    -1,    13,    25,    74,    26,    23,    13,
      25,    74,    26,    23,    74,    27,    24,    14,    23,    74,
      27,    24,    74,    27,    24,    14,    23,    74,    27,    24,
      -1,    13,    25,    74,    26,    23,    74,    27,    24,    15,
      25,    74,    26,    23,    74,    27,    24,    14,    23,    74,
      27,    24,    -1,    56,    25,     3,    28,     3,    28,     3,
      42,    26,    23,    74,    27,    24,    -1,    56,    25,     3,
      28,     3,    28,     3,    43,    26,    23,    74,    27,    24,
      -1,    57,    25,     3,    17,     3,    28,    74,    42,    26,
      23,    74,    27,    24,    -1,    57,    25,     3,    17,     3,
      28,    74,    43,    26,    23,    74,    27,    24,    -1,    58,
      72,    -1,    52,    25,    73,    26,    23,    65,    24,    -1,
      28,    69,    25,    26,    23,    71,    24,    -1,    74,    -1,
      65,    49,     3,    28,    74,    27,    50,    27,    -1,    65,
      55,    28,    74,    27,    50,    27,    -1,     3,    -1,     4,
      -1,    74,    35,    74,    -1,    74,    36,    74,    -1,    74,
      37,    74,    -1,    74,    38,    74,    -1,    74,    39,    74,
      -1,    74,    40,    74,    -1,    74,    41,    -1,    74,    16,
      74,    -1,    74,    17,    74,    -1,    74,    18,    74,    -1,
      74,    19,    74,    -1,    74,    34,    74,    -1,    74,    33,
      74,    -1,    74,    32,    -1,    74,    44,    74,    -1,    74,
      45,    74,    -1,    74,    46,    74,    -1,    25,    74,    26,
      -1,    74,    42,    -1,    74,    43,    -1,    59,    74,    -1,
      61,    74,    -1,    60,    74,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    50,    52,    54,    55,    56,    58,
      60,    61,    62,    63,    64,    67,    80,    93,    95,    97,
     114,   126,   138,   156,   171,   182,   194,   208,   223,   224,
     226,   232,   238,   246,   257,   259,   261,   263,   265,   267,
     280,   285,   287,   297,   303,   308,   313,   318,   323,   328,
     333,   337,   341,   346,   348,   350,   352,   358,   364
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "HEADER", "MAIN", "DEFINE",
  "CHAR", "INT", "FLOAT", "DOUBLE", "LONG", "IF", "ELSE", "ELSE_IF", "GOE",
  "LOE", "TWO_EQ", "NOT_EQ", "GT", "LT", "EQ", "LB", "RB", "LP", "RP",
  "END", "COL", "DASH", "COMA", "QT", "NOT", "OR", "AND", "PLUS", "MINUS",
  "MULT", "DIV", "MOD", "POW", "FACT", "INC", "DEC", "LOGICAL_OR",
  "LOGICAL_AND", "XOR", "VOID", "RETURN", "CASE", "BREAK", "CONTINUE",
  "SWITCH", "SCANF", "PRINTF", "DEFAULT", "FOR", "WHILE", "FUNC", "SIN",
  "COS", "TAN", "IFX", "ELIFX", "$accept", "code", "statement",
  "main_code", "s_declaration", "TYPE", "ID1", "cstatement", "define",
  "case", "expression", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    66,    67,    67,    67,    68,
      69,    69,    69,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      72,    73,    65,    65,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     5,     0,     1,     2,     3,
       1,     1,     1,     1,     1,     3,     1,     1,     2,     4,
       8,    13,    26,    21,    13,    13,    13,    13,     2,     7,
       7,     1,     8,     7,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     2,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     3,     0,     1,     0,     0,     0,     4,     6,     0,
       0,    13,    10,    11,    12,    14,     0,     7,     0,     0,
      34,    35,     0,     0,     0,     0,     0,    35,     0,    17,
       0,     0,     0,     0,     0,     8,     0,    16,     0,     0,
       0,    56,    58,    57,     0,     0,     0,     0,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    54,
      55,     0,     0,     0,     0,     0,     5,     0,     0,     0,
       0,    28,    18,     9,     0,     0,    53,    43,    44,    45,
      46,     0,    48,    47,    36,    37,    38,    39,    40,    41,
      50,    51,    52,     0,     0,     0,    31,     0,     0,     0,
      15,     0,    33,    19,     0,     0,     0,     0,     0,    32,
       0,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,    20,     0,
       0,    54,    55,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     0,     0,     0,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    16,    17,    18,    38,    35,    71,    95,
      36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -22
static const yytype_int16 yypact[] =
{
       1,   -22,    20,   -22,    -5,    22,    -1,   -22,    -7,     0,
       7,   -22,   -22,   -22,   -22,   -22,    35,   -22,    26,     7,
     -22,   -22,     7,     7,     7,     7,   146,    11,     6,   -22,
      32,    33,    36,    47,    48,   -22,   177,   -22,   -11,   208,
     239,   106,   106,   106,     7,     7,     7,     7,    27,   -22,
       7,     7,     7,     7,     7,     7,     7,     7,   -22,   -22,
     -22,     7,     7,     7,     7,     7,   -22,     7,    75,    76,
      -7,   -22,   -22,   -22,    77,    30,   -22,   754,   754,   919,
     919,    55,   859,   902,   785,   785,    86,    86,    86,    42,
     797,   828,   890,   270,   301,    60,   106,    61,    73,    72,
     -22,    74,   -22,   -22,    85,    87,    96,   109,    88,   -22,
       4,     1,    89,    92,    93,    90,   332,    64,   118,     7,
      46,     7,   129,   -22,   -21,   766,   131,   363,     9,   104,
     130,   132,   133,   -22,   134,   137,   141,   147,   148,   149,
     151,     7,     7,     7,     7,     7,     7,     7,   394,   425,
     456,   487,   518,   549,   580,   145,   153,   152,   173,   174,
     175,   176,   187,   -22,     7,   -22,   -22,   -22,   -22,   179,
     611,     7,   181,   642,   189,   182,   184,     7,     7,   673,
     704,   204,   205,   194,   -22,   207,     7,   735,   209,   -22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -22,   120,   -22,   -22,   -22,   162,   -22,   114,   -22,   -22,
     -10
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      26,    11,    12,    13,    14,    15,     1,    20,    21,    39,
      20,    21,    40,    41,    42,    43,    73,   115,     8,    74,
       3,   129,   130,   135,   136,     9,     4,    10,    19,    22,
      37,    65,    22,    64,    77,    78,    79,    80,    20,    27,
      82,    83,    84,    85,    86,    87,    88,    89,    28,    20,
      27,    90,    91,    92,    93,    94,    66,    96,    67,    28,
      22,    68,    29,    23,    24,    25,    23,    24,    25,     5,
       4,    22,    69,    29,    49,     6,    70,    81,    97,    98,
     101,   100,   102,    30,    59,    60,   105,    31,   123,   106,
     107,    32,    33,    34,    23,    24,    25,   108,    31,   112,
     116,   109,    32,    33,    34,    23,    24,    25,   110,   125,
     111,   127,   113,     5,   114,   121,   120,   118,    49,     6,
     119,   124,    44,    45,    46,    47,    57,    58,    59,    60,
     137,   148,   149,   150,   151,   152,   153,   154,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,   128,   170,   133,   138,   141,   139,   140,
     142,   173,    44,    45,    46,    47,   143,   179,   180,   162,
     144,   145,   146,    48,   147,   164,   187,   163,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    44,    45,    46,    47,   165,   166,   167,
     168,   169,   171,   176,    72,   174,   177,   178,   185,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    44,    45,    46,    47,   183,   184,
     186,   117,    99,   189,   126,    75,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,   104,     0,     0,
       0,     0,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,   122,
       0,     0,     0,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,   134,
       0,     0,     0,     0,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,   155,     0,     0,     0,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,   156,     0,     0,     0,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,   157,     0,     0,     0,     0,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    44,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,   158,     0,     0,     0,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,   159,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,   160,     0,     0,     0,
       0,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,   161,     0,     0,
       0,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,     0,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
     181,     0,     0,     0,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,   182,     0,     0,     0,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,   188,     0,     0,     0,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    44,    45,    46,    47,    49,     0,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,   131,   132,
      61,    62,    63,    44,    45,    46,    47,    49,     0,     0,
       0,     0,    54,    55,    56,    57,    58,    59,    60,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,     0,    62,    63,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,    63,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,     0,     0,    63,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    45,
      46,    47,    49,     0,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    49,    44,    45,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,    49,     0,     0,    52,    53,    54,    55,    56,    57,
      58,    59,    60
};

static const yytype_int16 yycheck[] =
{
      10,     8,     9,    10,    11,    12,     5,     3,     4,    19,
       3,     4,    22,    23,    24,    25,    27,    13,    23,    30,
       0,    42,    43,    14,    15,     3,     6,    28,    28,    25,
       4,    25,    25,    22,    44,    45,    46,    47,     3,     4,
      50,    51,    52,    53,    54,    55,    56,    57,    13,     3,
       4,    61,    62,    63,    64,    65,    24,    67,    25,    13,
      25,    25,    27,    59,    60,    61,    59,    60,    61,    49,
       6,    25,    25,    27,    32,    55,    28,    50,     3,     3,
      50,     4,    27,    48,    42,    43,    26,    52,    24,    28,
      17,    56,    57,    58,    59,    60,    61,    25,    52,     3,
     110,    27,    56,    57,    58,    59,    60,    61,    23,   119,
      23,   121,     3,    49,    26,    25,    23,    28,    32,    55,
      28,     3,    16,    17,    18,    19,    40,    41,    42,    43,
      26,   141,   142,   143,   144,   145,   146,   147,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    24,   164,    24,    26,    23,    26,    26,
      23,   171,    16,    17,    18,    19,    25,   177,   178,    24,
      23,    23,    23,    27,    23,    23,   186,    24,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    16,    17,    18,    19,    24,    24,    24,
      24,    14,    23,    14,    27,    24,    24,    23,    14,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    16,    17,    18,    19,    24,    24,
      23,   111,    70,    24,   120,    27,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    16,    17,    18,    19,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    16,    17,    18,    19,    32,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    45,    46,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    46,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    46,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    32,    16,    17,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    65,     0,     6,    49,    55,    66,    23,     3,
      28,     8,     9,    10,    11,    12,    67,    68,    69,    28,
       3,     4,    25,    59,    60,    61,    74,     4,    13,    27,
      48,    52,    56,    57,    58,    71,    74,     4,    70,    74,
      74,    74,    74,    74,    16,    17,    18,    19,    27,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    22,    25,    24,    25,    25,    25,
      28,    72,    27,    27,    30,    27,    26,    74,    74,    74,
      74,    50,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    73,    74,     3,     3,    69,
       4,    50,    27,    27,    26,    26,    28,    17,    25,    27,
      23,    23,     3,     3,    26,    13,    74,    65,    28,    28,
      23,    25,    27,    24,     3,    74,    71,    74,    24,    42,
      43,    42,    43,    24,    26,    14,    15,    26,    26,    26,
      26,    23,    23,    25,    23,    23,    23,    23,    74,    74,
      74,    74,    74,    74,    74,    27,    27,    26,    27,    27,
      27,    27,    24,    24,    23,    24,    24,    24,    24,    14,
      74,    23,    27,    74,    24,    27,    14,    24,    23,    74,
      74,    27,    27,    24,    24,    14,    23,    74,    27,    24
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# if YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 49 "1807003.y"
    {printf("Header files declaration \n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 52 "1807003.y"
    {printf("main declaration\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 58 "1807003.y"
    {printf("variable declared\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 67 "1807003.y"
    {
						if(for_key((yyvsp[(3) - (3)].string)))
						{
							printf("%s is already declared\n", (yyvsp[(3) - (3)].string) );
						}
						else
						{
							insert_var(&sv[cnt1],(yyvsp[(3) - (3)].string), cnt1);
							cnt1++;
							
						}
			;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 80 "1807003.y"
    {
				if(for_key((yyvsp[(1) - (1)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (1)].string) );
				}
				else
				{
					insert_var(&sv[cnt1],(yyvsp[(1) - (1)].string), cnt1);
							cnt1++;
				}
			;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 95 "1807003.y"
    {printf("value of expression: %d\n",((yyvsp[(1) - (2)].number)));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 97 "1807003.y"
    {
								
										if(for_key((yyvsp[(1) - (4)].string))){
											
											int i = for_key2((yyvsp[(1) - (4)].string));
											if (!i){
												insert_var(&sm[cnt3], (yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].number));
												cnt3++;
											}
											sm[i].num = (yyvsp[(3) - (4)].number);
											printf("Assign %s = %d\t\n",(yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].number));
										}
										else {
											printf("%s not declared yet\n",(yyvsp[(1) - (4)].string));
										}
										
									;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 114 "1807003.y"
    {
				                printf("Expression IF matched\n");
								if((yyvsp[(3) - (8)].number))
								{
									printf("value of expression in IF: %d\n",((yyvsp[(6) - (8)].number)));
								}
								else
								{
									printf("condition value zero in IF block\n");
								}
							;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 126 "1807003.y"
    {
								 	printf("Expression IF_ELSE matched\n");
									if((yyvsp[(3) - (13)].number))
									{
										printf("value of expression in IF: %d\n",(yyvsp[(6) - (13)].number));
									}
									else
									{
										printf("value of expression in ELSE: %d\n",(yyvsp[(11) - (13)].number));
									}
								   ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 138 "1807003.y"
    {
								 	
									    printf("Expression nested IF_ELSE matched\n");
										if((yyvsp[(3) - (26)].number))
										{
											if((yyvsp[(8) - (26)].number))
												printf("value of expression middle IF: %d\n",(yyvsp[(11) - (26)].number));
											else
												printf("value of expression middle ELSE: %d\n",(yyvsp[(16) - (26)].number));
											printf("value of expression in first IF: %d\n",(yyvsp[(19) - (26)].number));
										}
										else
										{
											printf("value of expression in else: %d\n",(yyvsp[(24) - (26)].number));
										}
										
								   ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 156 "1807003.y"
    {
										printf("Expression IF_(ELSE_IF)_ELSE matched\n");
										if((yyvsp[(3) - (21)].number))
										{
											printf("value of expression in IF: %d\n",(yyvsp[(6) - (21)].number));
										}
										else if((yyvsp[(11) - (21)].number))
										{
											printf("value of expression in ELIF: %d\n",(yyvsp[(14) - (21)].number));
										}
										else
										{
											printf("value of expression in ELSE: %d\n",(yyvsp[(19) - (21)].number));
										}
								   ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 171 "1807003.y"
    {
														printf("Loop increment matched\n");
													
													    int i = 0;
														for(i = (yyvsp[(3) - (13)].number); i<=(yyvsp[(5) - (13)].number); i += (yyvsp[(7) - (13)].number))
														{
															printf("%d ",i);
														}
														printf("\n");
														printf("value of the expression: %d\n",(yyvsp[(11) - (13)].number));
	 								                 ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 182 "1807003.y"
    {
														printf("Loop decrement matched\n");
													
													    int i = 0;
														for(i = (yyvsp[(3) - (13)].number); i>=(yyvsp[(5) - (13)].number); i -= (yyvsp[(7) - (13)].number))
														{
															printf("%d ",i);
														}
														printf("\n");
														printf("value of the expression: %d\n",(yyvsp[(11) - (13)].number));
	 								                 ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 194 "1807003.y"
    {
														
															int i = (yyvsp[(3) - (13)].number);
															printf("While LOOP: ");
															while(i <= (yyvsp[(5) - (13)].number))
															{
																printf("%d ",i);
																i = i + (yyvsp[(7) - (13)].number);
															}
															printf("\n");
															printf("value of the expression: %d\n",(yyvsp[(11) - (13)].number));

	                                                    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 208 "1807003.y"
    {
														
															int i = (yyvsp[(5) - (13)].number);
															printf("While LOOP: ");
															while(i >= 1)
															{
																printf("%d ",i);
																i = i - (yyvsp[(7) - (13)].number);
															}
															printf("\n");
															printf("value of the expression: %d\n",(yyvsp[(11) - (13)].number));

	                                                    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 224 "1807003.y"
    {printf("SWITCH case matched\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 227 "1807003.y"
    {
										 printf("Function declared \n");
										 printf("value of expression: %d\n",(yyvsp[(6) - (7)].string));
									   ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 233 "1807003.y"
    {
					default_case = 0;
					case_no = (yyvsp[(1) - (1)].number);
				;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 238 "1807003.y"
    {
	                                if(case_no == (yyvsp[(3) - (8)].number))
									{
										printf("case block expression value: %d\n",(yyvsp[(5) - (8)].number));
										default_case = 1;
									}

                                  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 246 "1807003.y"
    {
		                              if(default_case == 0)
									  {
										default_case = 1;
										printf("Default block expression value: %d\n",(yyvsp[(4) - (7)].number));
									  }

	  								;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 257 "1807003.y"
    {(yyval.number) = (yyvsp[(1) - (1)].number);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 259 "1807003.y"
    { (yyval.number) = sm[for_key2((yyvsp[(1) - (1)].string))].num;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 261 "1807003.y"
    {   (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); printf("Expression JOG matched\n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 263 "1807003.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); printf("Expression BIYOG matched\n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 265 "1807003.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number); printf("Expression GUN matched\n"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 267 "1807003.y"
    { 	    printf("Expression VAG matched\n");
												
												if((yyvsp[(3) - (3)].number)) 
												{
														(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number);
												}
												else
												{
													(yyval.number) = 0;
													printf("Invalid, division by zero\n");
												} 	
									  ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 280 "1807003.y"
    {
										printf("Expression MOD matched\n");
										(yyval.number) = ((yyvsp[(1) - (3)].number) % (yyvsp[(3) - (3)].number));
		  							  ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 285 "1807003.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));  printf("Expression POW matched\n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 287 "1807003.y"
    {   printf("Expression FACT matched\n");

								int mult=1 ,i;
								for(i=(yyvsp[(1) - (2)].number);i>0;i--)
								{
									mult=mult*i;
								}
								(yyval.number)=mult;
								
							;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 297 "1807003.y"
    {
										   printf("Expression greater than or equal (GOE) matched\n");
			                               (yyval.number) = ((yyvsp[(1) - (3)].number) >= (yyvsp[(3) - (3)].number)); 
		  								
										;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 303 "1807003.y"
    {
										   printf("Expression less than or equal (LOE) matched\n");
			                               (yyval.number) = ((yyvsp[(1) - (3)].number) <= (yyvsp[(3) - (3)].number)); 
		                                ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 308 "1807003.y"
    {
										   printf("Expression equality (TWO_EQ) matched\n");
			                               (yyval.number) = ((yyvsp[(1) - (3)].number) == (yyvsp[(3) - (3)].number)); 
		                                ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 313 "1807003.y"
    {
											printf("Expression inequality (NOT_EQ) matched\n");
											(yyval.number) = ((yyvsp[(1) - (3)].number) != (yyvsp[(3) - (3)].number)); 
									     ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 318 "1807003.y"
    {
											printf("Expression bitwise AND (AND) matched\n");
											(yyval.number) = ((yyvsp[(1) - (3)].number) & (yyvsp[(3) - (3)].number)); 
									  ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 323 "1807003.y"
    {
											printf("Expression bitwise OR (OR) matched\n");
											(yyval.number) = ((yyvsp[(1) - (3)].number) | (yyvsp[(3) - (3)].number)); 
									 ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 328 "1807003.y"
    {
											printf("Expression bitwise NOT (NOT) matched\n");
											(yyval.number) = (~ (yyvsp[(1) - (2)].number)); 
									 ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 333 "1807003.y"
    {
											printf("Expression logical OR (OTHOBA) matched\n");
											(yyval.number) = ((yyvsp[(1) - (3)].number) || (yyvsp[(3) - (3)].number)); 
									     ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 337 "1807003.y"
    {
											printf("Expression logical AND (EBONG) matched\n");
											(yyval.number) = ((yyvsp[(1) - (3)].number) && (yyvsp[(3) - (3)].number)); 
									     ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 341 "1807003.y"
    {
											printf("Expression XOR (XOR) matched\n");
											(yyval.number) = ((yyvsp[(1) - (3)].number) ^ (yyvsp[(3) - (3)].number)); 
									     ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 346 "1807003.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number); printf("Expression parentheses matched\n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 348 "1807003.y"
    { (yyval.number) = (yyvsp[(2) - (2)].string)+1; printf("Expression increment (BARAU) matched\n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 350 "1807003.y"
    { (yyval.number) = (yyvsp[(2) - (2)].string)-1; printf("Expression decrement (KOMAU) matched\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 352 "1807003.y"
    {
			                        (yyval.number)=(yyvsp[(2) - (2)].number);
									x=(yyvsp[(2) - (2)].number)*(3.142/180);
									y=sin(x);
									printf("Value of sin(%d) = %.2lf\n",(yyvsp[(2) - (2)].number),y);
									;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 358 "1807003.y"
    {
			                        (yyval.number)=(yyvsp[(2) - (2)].number);
									x=(yyvsp[(2) - (2)].number)*(3.142/180);
									y=tan(x);
									printf("Value of tan(%d) = %.2lf\n",(yyvsp[(2) - (2)].number),y);
									;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 364 "1807003.y"
    {
												(yyval.number)=(yyvsp[(2) - (2)].number);
												x=(yyvsp[(2) - (2)].number)*(3.142/180);
												y=cos(x);
												printf("Value of cos(%d) = %.2lf\n",(yyvsp[(2) - (2)].number),y);
												;}
    break;



/* Line 1455 of yacc.c  */
#line 2239 "1807003.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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



/* Line 1675 of yacc.c  */
#line 371 "1807003.y"


void insert_var(save *p, char *s, int n)
{
  p -> var = s;
  p -> num = n;
}

int for_key(char *key)
{
    int i = 1;
    char *name = sv[i].var;
    while (name) {
        if (strcmp(name, key) == 0)
            return sv[i].num;
        name = sv[++i].var;
    }
    return 0;
}

void insert_var2 (save *p, char *s, int n)
{
  p -> var = s;
  p -> num = n;
  
}

int for_key2(char *key)
{
	
    int i = 1;
    char *name = sm[i].var;
	
    while (name) {
        if (strcmp(name, key) == 0)
		{
           return i;
		}
           
        name = sm[++i].var;
    }
    return 0;
}



yyerror(char *s){
	printf( "%s\n", s);
}

