/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         parse_events_parse
#define yylex           parse_events_lex
#define yyerror         parse_events_error
#define yylval          parse_events_lval
#define yychar          parse_events_char
#define yydebug         parse_events_debug
#define yynerrs         parse_events_nerrs
#define yylloc          parse_events_lloc

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 7 "util/parse-events.y"


#define YYDEBUG 1

#include <linux/compiler.h>
#include <linux/list.h>
#include <linux/types.h>
#include "util.h"
#include "parse-events.h"
#include "parse-events-bison.h"

#define ABORT_ON(val) \
do { \
	if (val) \
		YYABORT; \
} while (0)

#define ALLOC_LIST(list) \
do { \
	list = malloc(sizeof(*list)); \
	ABORT_ON(!list);              \
	INIT_LIST_HEAD(list);         \
} while (0)

static void inc_group_count(struct list_head *list,
		       struct parse_events_evlist *data)
{
	/* Count groups only have more than 1 members */
	if (!list_is_last(list->next, list))
		data->nr_groups++;
}


/* Line 371 of yacc.c  */
#line 110 "util/parse-events-bison.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse-events-bison.h".  */
#ifndef YY_PARSE_EVENTS_UTIL_PARSE_EVENTS_BISON_H_INCLUDED
# define YY_PARSE_EVENTS_UTIL_PARSE_EVENTS_BISON_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int parse_events_debug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PE_START_EVENTS = 258,
     PE_START_TERMS = 259,
     PE_VALUE = 260,
     PE_VALUE_SYM_HW = 261,
     PE_VALUE_SYM_SW = 262,
     PE_RAW = 263,
     PE_TERM = 264,
     PE_EVENT_NAME = 265,
     PE_NAME = 266,
     PE_MODIFIER_EVENT = 267,
     PE_MODIFIER_BP = 268,
     PE_NAME_CACHE_TYPE = 269,
     PE_NAME_CACHE_OP_RESULT = 270,
     PE_PREFIX_MEM = 271,
     PE_PREFIX_RAW = 272,
     PE_PREFIX_GROUP = 273,
     PE_ERROR = 274,
     PE_PMU_EVENT_PRE = 275,
     PE_PMU_EVENT_SUF = 276,
     PE_KERNEL_PMU_EVENT = 277
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 84 "util/parse-events.y"

	char *str;
	u64 num;
	struct list_head *head;
	struct parse_events_term *term;
	struct tracepoint_name {
		char *sys;
		char *event;
	} tracepoint_name;


/* Line 387 of yacc.c  */
#line 187 "util/parse-events-bison.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
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


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int parse_events_parse (void *YYPARSE_PARAM);
#else
int parse_events_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int parse_events_parse (void *_data, void *scanner);
#else
int parse_events_parse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_PARSE_EVENTS_UTIL_PARSE_EVENTS_BISON_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 227 "util/parse-events-bison.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   115

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNRULES -- Number of states.  */
#define YYNSTATES  112

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    23,    27,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    24,     2,
       2,    29,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    25,     2,    26,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    15,    19,    21,    23,
      27,    29,    34,    38,    42,    44,    46,    49,    51,    54,
      56,    58,    60,    63,    65,    68,    71,    74,    77,    80,
      85,    87,    89,    94,    97,   104,   109,   112,   120,   126,
     132,   136,   139,   145,   149,   154,   157,   161,   164,   165,
     167,   171,   173,   177,   181,   185,   187,   189,   193,   197,
     199,   201,   202,   204,   206
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      31,     0,    -1,     3,    32,    -1,     4,    51,    -1,    33,
      -1,    33,    23,    34,    -1,    33,    23,    37,    -1,    34,
      -1,    37,    -1,    35,    24,    12,    -1,    35,    -1,    11,
      25,    36,    26,    -1,    25,    36,    26,    -1,    36,    23,
      37,    -1,    37,    -1,    38,    -1,    39,    12,    -1,    39,
      -1,    10,    40,    -1,    40,    -1,    41,    -1,    43,    -1,
      44,    54,    -1,    45,    -1,    46,    54,    -1,    48,    54,
      -1,    49,    54,    -1,    11,    50,    -1,    22,    54,    -1,
      20,    27,    21,    54,    -1,     6,    -1,     7,    -1,    42,
      28,    52,    28,    -1,    42,    55,    -1,    14,    27,    15,
      27,    15,    50,    -1,    14,    27,    15,    50,    -1,    14,
      50,    -1,    16,     5,    28,     5,    24,    13,    54,    -1,
      16,     5,    28,     5,    54,    -1,    16,     5,    24,    13,
      54,    -1,    16,     5,    54,    -1,    47,    50,    -1,    11,
      27,    11,    24,    11,    -1,    11,    24,    11,    -1,     5,
      24,     5,    50,    -1,     8,    50,    -1,    28,    52,    28,
      -1,    28,    28,    -1,    -1,    52,    -1,    52,    23,    53,
      -1,    53,    -1,    11,    29,    11,    -1,    11,    29,     5,
      -1,    11,    29,     6,    -1,    11,    -1,     6,    -1,     9,
      29,    11,    -1,     9,    29,     5,    -1,     9,    -1,    24,
      -1,    -1,    28,    -1,    24,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,    99,   101,   109,   118,   127,   129,   132,
     140,   143,   152,   162,   171,   173,   176,   189,   192,   199,
     201,   202,   203,   204,   205,   206,   207,   210,   221,   239,
     260,   262,   265,   278,   291,   303,   315,   328,   339,   350,
     361,   373,   391,   403,   411,   423,   435,   440,   445,   449,
     456,   466,   478,   487,   496,   505,   514,   523,   531,   539,
     547,   547,   549,   549,   549
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PE_START_EVENTS", "PE_START_TERMS",
  "PE_VALUE", "PE_VALUE_SYM_HW", "PE_VALUE_SYM_SW", "PE_RAW", "PE_TERM",
  "PE_EVENT_NAME", "PE_NAME", "PE_MODIFIER_EVENT", "PE_MODIFIER_BP",
  "PE_NAME_CACHE_TYPE", "PE_NAME_CACHE_OP_RESULT", "PE_PREFIX_MEM",
  "PE_PREFIX_RAW", "PE_PREFIX_GROUP", "PE_ERROR", "PE_PMU_EVENT_PRE",
  "PE_PMU_EVENT_SUF", "PE_KERNEL_PMU_EVENT", "','", "':'", "'{'", "'}'",
  "'-'", "'/'", "'='", "$accept", "start", "start_events", "groups",
  "group", "group_def", "events", "event", "event_mod", "event_name",
  "event_def", "event_pmu", "value_sym", "event_legacy_symbol",
  "event_legacy_cache", "event_legacy_mem", "event_legacy_tracepoint",
  "tracepoint_name", "event_legacy_numeric", "event_legacy_raw",
  "opt_event_config", "start_terms", "event_config", "event_term",
  "sep_dc", "sep_slash_dc", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    44,    58,   123,   125,    45,    47,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    31,    31,    32,    33,    33,    33,    33,    34,
      34,    35,    35,    36,    36,    37,    38,    38,    39,    39,
      40,    40,    40,    40,    40,    40,    40,    41,    41,    41,
      42,    42,    43,    43,    44,    44,    44,    45,    45,    45,
      45,    46,    47,    47,    48,    49,    50,    50,    50,    51,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    55,    55,    55
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     3,     3,     1,     1,     3,
       1,     4,     3,     3,     1,     1,     2,     1,     2,     1,
       1,     1,     2,     1,     2,     2,     2,     2,     2,     4,
       1,     1,     4,     2,     6,     4,     2,     7,     5,     5,
       3,     2,     5,     3,     4,     2,     3,     2,     0,     1,
       3,     1,     3,     3,     3,     1,     1,     3,     3,     1,
       1,     0,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    30,    31,    48,     0,    48,
      48,     0,     0,    61,     0,     2,     4,     7,    10,     8,
      15,    17,    19,    20,    64,    21,    61,    23,    61,    48,
      61,    61,    56,    59,    55,     3,    49,    51,     1,     0,
       0,    45,    48,    18,     0,     0,     0,    27,     0,    36,
      61,     0,    60,    28,     0,    14,     0,     0,    16,    63,
      62,    33,    22,    24,    41,    25,    26,     0,     0,     0,
      48,    47,     0,    43,     0,     0,    48,    60,     0,    40,
      61,     0,    12,     5,     6,     9,     0,    58,    57,    53,
      54,    52,    50,    44,    46,    11,     0,     0,    35,    61,
      61,    29,    13,    32,    42,    48,    39,    60,    38,    34,
      61,    37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    15,    16,    17,    18,    54,    55,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      47,    35,    36,    37,    53,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -40
static const yytype_int8 yypact[] =
{
       6,     9,    36,    24,     8,   -40,   -40,    11,    73,    34,
      38,    67,    50,    64,    30,   -40,    68,   -40,    66,   -40,
     -40,    80,   -40,   -40,    27,   -40,    64,   -40,    64,    11,
      64,    64,   -40,    65,    70,   -40,    74,   -40,   -40,    91,
       2,   -40,    40,   -40,    89,    30,    90,   -40,    87,   -40,
      29,    82,   -40,   -40,    47,   -40,     9,    92,   -40,   -40,
      36,   -40,   -40,   -40,   -40,   -40,   -40,     7,    22,    36,
      11,   -40,    20,   -40,    48,    81,    55,    93,   102,   -40,
      64,    30,   -40,   -40,   -40,   -40,    26,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,    97,    94,   -40,    64,
      86,   -40,   -40,   -40,   -40,    11,   -40,    98,   -40,   -40,
      64,   -40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -40,   -40,   -40,   -40,    56,   -40,    69,     4,   -40,   -40,
     105,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
      -7,   -40,   -39,    46,   -24,   -40
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      41,    72,    62,    49,    63,    19,    65,    66,    32,     1,
       2,    33,    87,    34,     4,     5,     6,     7,    88,     8,
       9,    86,    64,    10,    38,    11,    79,    89,    90,    12,
      71,    13,    39,    91,    14,     4,     5,     6,     7,    40,
       8,    42,    32,    69,    10,    33,    11,    34,    94,    69,
      12,    59,    13,    77,   103,    60,   101,    78,    44,    45,
      84,    46,    40,    93,    44,    48,    40,    46,    40,    98,
      81,    81,    50,    82,    95,   106,   108,    51,     4,     5,
       6,     7,    97,    40,    42,   102,   111,    10,    52,    11,
      57,    56,    58,    12,    67,    13,    70,    69,   109,    68,
      73,    75,    76,    80,    85,    96,    99,   100,   104,   105,
     107,   110,    83,    43,    74,    92
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-40)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
       7,    40,    26,    10,    28,     1,    30,    31,     6,     3,
       4,     9,     5,    11,     5,     6,     7,     8,    11,    10,
      11,    60,    29,    14,     0,    16,    50,     5,     6,    20,
      28,    22,    24,    11,    25,     5,     6,     7,     8,    28,
      10,    11,     6,    23,    14,     9,    16,    11,    28,    23,
      20,    24,    22,    24,    28,    28,    80,    28,    24,    25,
      56,    27,    28,    70,    24,    27,    28,    27,    28,    76,
      23,    23,     5,    26,    26,    99,   100,    27,     5,     6,
       7,     8,    27,    28,    11,    81,   110,    14,    24,    16,
      24,    23,    12,    20,    29,    22,     5,    23,   105,    29,
      11,    11,    15,    21,    12,    24,    13,     5,    11,    15,
      24,    13,    56,     8,    45,    69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    31,     5,     6,     7,     8,    10,    11,
      14,    16,    20,    22,    25,    32,    33,    34,    35,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     6,     9,    11,    51,    52,    53,     0,    24,
      28,    50,    11,    40,    24,    25,    27,    50,    27,    50,
       5,    27,    24,    54,    36,    37,    23,    24,    12,    24,
      28,    55,    54,    54,    50,    54,    54,    29,    29,    23,
       5,    28,    52,    11,    36,    11,    15,    24,    28,    54,
      21,    23,    26,    34,    37,    12,    52,     5,    11,     5,
       6,    11,    53,    50,    28,    26,    24,    27,    50,    13,
       5,    54,    37,    28,    11,    15,    54,    24,    54,    50,
      13,    54
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (&yylloc, _data, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

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
		  Type, Value, Location, _data, scanner); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *_data, void *scanner)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, _data, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    void *_data;
    void *scanner;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (_data);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *_data, void *scanner)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, _data, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    void *_data;
    void *scanner;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, _data, scanner);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, void *_data, void *scanner)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, _data, scanner)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    void *_data;
    void *scanner;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , _data, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, _data, scanner); \
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void *_data, void *scanner)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, _data, scanner)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    void *_data;
    void *scanner;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (_data);
  YYUSE (scanner);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




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
yyparse (void *_data, void *scanner)
#else
int
yyparse (_data, scanner)
    void *_data;
    void *scanner;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc = yyloc_default;


    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
        case 4:
/* Line 1792 of yacc.c  */
#line 102 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;

	parse_events_update_lists((yyvsp[(1) - (1)].head), &data->list);
}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 110 "util/parse-events.y"
    {
	struct list_head *list  = (yyvsp[(1) - (3)].head);
	struct list_head *group = (yyvsp[(3) - (3)].head);

	parse_events_update_lists(group, list);
	(yyval.head) = list;
}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 119 "util/parse-events.y"
    {
	struct list_head *list  = (yyvsp[(1) - (3)].head);
	struct list_head *event = (yyvsp[(3) - (3)].head);

	parse_events_update_lists(event, list);
	(yyval.head) = list;
}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 133 "util/parse-events.y"
    {
	struct list_head *list = (yyvsp[(1) - (3)].head);

	ABORT_ON(parse_events__modifier_group(list, (yyvsp[(3) - (3)].str)));
	(yyval.head) = list;
}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 144 "util/parse-events.y"
    {
	struct list_head *list = (yyvsp[(3) - (4)].head);

	inc_group_count(list, _data);
	parse_events__set_leader((yyvsp[(1) - (4)].str), list);
	(yyval.head) = list;
}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 153 "util/parse-events.y"
    {
	struct list_head *list = (yyvsp[(2) - (3)].head);

	inc_group_count(list, _data);
	parse_events__set_leader(NULL, list);
	(yyval.head) = list;
}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 163 "util/parse-events.y"
    {
	struct list_head *event = (yyvsp[(3) - (3)].head);
	struct list_head *list  = (yyvsp[(1) - (3)].head);

	parse_events_update_lists(event, list);
	(yyval.head) = list;
}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 177 "util/parse-events.y"
    {
	struct list_head *list = (yyvsp[(1) - (2)].head);

	/*
	 * Apply modifier on all events added by single event definition
	 * (there could be more events added for multiple tracepoint
	 * definitions via '*?'.
	 */
	ABORT_ON(parse_events__modifier_event(list, (yyvsp[(2) - (2)].str), false));
	(yyval.head) = list;
}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 193 "util/parse-events.y"
    {
	ABORT_ON(parse_events_name((yyvsp[(2) - (2)].head), (yyvsp[(1) - (2)].str)));
	free((yyvsp[(1) - (2)].str));
	(yyval.head) = (yyvsp[(2) - (2)].head);
}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 211 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct list_head *list;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_pmu(data, list, (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].head)));
	parse_events_terms__delete((yyvsp[(2) - (2)].head));
	(yyval.head) = list;
}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 222 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct list_head *head;
	struct parse_events_term *term;
	struct list_head *list;

	ALLOC_LIST(head);
	ABORT_ON(parse_events_term__num(&term, PARSE_EVENTS__TERM_TYPE_USER,
					(yyvsp[(1) - (2)].str), 1, &(yylsp[(1) - (2)]), NULL));
	list_add_tail(&term->list, head);

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_pmu(data, list, "cpu", head));
	parse_events_terms__delete(head);
	(yyval.head) = list;
}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 240 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct list_head *head;
	struct parse_events_term *term;
	struct list_head *list;
	char pmu_name[128];
	snprintf(&pmu_name, 128, "%s-%s", (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].str));

	ALLOC_LIST(head);
	ABORT_ON(parse_events_term__num(&term, PARSE_EVENTS__TERM_TYPE_USER,
					&pmu_name, 1, &(yylsp[(1) - (4)]), NULL));
	list_add_tail(&term->list, head);

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_pmu(data, list, "cpu", head));
	parse_events_terms__delete(head);
	(yyval.head) = list;
}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 266 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct list_head *list;
	int type = (yyvsp[(1) - (4)].num) >> 16;
	int config = (yyvsp[(1) - (4)].num) & 255;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_numeric(data, list, type, config, (yyvsp[(3) - (4)].head)));
	parse_events_terms__delete((yyvsp[(3) - (4)].head));
	(yyval.head) = list;
}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 279 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct list_head *list;
	int type = (yyvsp[(1) - (2)].num) >> 16;
	int config = (yyvsp[(1) - (2)].num) & 255;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_numeric(data, list, type, config, NULL));
	(yyval.head) = list;
}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 292 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct parse_events_error *error = data->error;
	struct list_head *list;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_cache(list, &data->idx, (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str), error, (yyvsp[(6) - (6)].head)));
	parse_events_terms__delete((yyvsp[(6) - (6)].head));
	(yyval.head) = list;
}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 304 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct parse_events_error *error = data->error;
	struct list_head *list;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_cache(list, &data->idx, (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].str), NULL, error, (yyvsp[(4) - (4)].head)));
	parse_events_terms__delete((yyvsp[(4) - (4)].head));
	(yyval.head) = list;
}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 316 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct parse_events_error *error = data->error;
	struct list_head *list;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_cache(list, &data->idx, (yyvsp[(1) - (2)].str), NULL, NULL, error, (yyvsp[(2) - (2)].head)));
	parse_events_terms__delete((yyvsp[(2) - (2)].head));
	(yyval.head) = list;
}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 329 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct list_head *list;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_breakpoint(list, &data->idx,
					     (void *) (yyvsp[(2) - (7)].num), (yyvsp[(6) - (7)].str), (yyvsp[(4) - (7)].num)));
	(yyval.head) = list;
}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 340 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct list_head *list;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_breakpoint(list, &data->idx,
					     (void *) (yyvsp[(2) - (5)].num), NULL, (yyvsp[(4) - (5)].num)));
	(yyval.head) = list;
}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 351 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct list_head *list;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_breakpoint(list, &data->idx,
					     (void *) (yyvsp[(2) - (5)].num), (yyvsp[(4) - (5)].str), 0));
	(yyval.head) = list;
}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 362 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct list_head *list;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_breakpoint(list, &data->idx,
					     (void *) (yyvsp[(2) - (3)].num), NULL, 0));
	(yyval.head) = list;
}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 374 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct parse_events_error *error = data->error;
	struct list_head *list;

	ALLOC_LIST(list);
	if (error)
		error->idx = (yylsp[(1) - (2)]).first_column;

	if (parse_events_add_tracepoint(list, &data->idx, (yyvsp[(1) - (2)].tracepoint_name).sys, (yyvsp[(1) - (2)].tracepoint_name).event,
					error, (yyvsp[(2) - (2)].head)))
		return -1;

	(yyval.head) = list;
}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 392 "util/parse-events.y"
    {
	char sys_name[128];
	struct tracepoint_name tracepoint;

	snprintf(&sys_name, 128, "%s-%s", (yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].str));
	tracepoint.sys = &sys_name;
	tracepoint.event = (yyvsp[(5) - (5)].str);

	(yyval.tracepoint_name) = tracepoint;
}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 404 "util/parse-events.y"
    {
	struct tracepoint_name tracepoint = {(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)};

	(yyval.tracepoint_name) = tracepoint;
}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 412 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct list_head *list;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_numeric(data, list, (u32)(yyvsp[(1) - (4)].num), (yyvsp[(3) - (4)].num), (yyvsp[(4) - (4)].head)));
	parse_events_terms__delete((yyvsp[(4) - (4)].head));
	(yyval.head) = list;
}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 424 "util/parse-events.y"
    {
	struct parse_events_evlist *data = _data;
	struct list_head *list;

	ALLOC_LIST(list);
	ABORT_ON(parse_events_add_numeric(data, list, PERF_TYPE_RAW, (yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].head)));
	parse_events_terms__delete((yyvsp[(2) - (2)].head));
	(yyval.head) = list;
}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 436 "util/parse-events.y"
    {
	(yyval.head) = (yyvsp[(2) - (3)].head);
}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 441 "util/parse-events.y"
    {
	(yyval.head) = NULL;
}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 445 "util/parse-events.y"
    {
	(yyval.head) = NULL;
}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 450 "util/parse-events.y"
    {
	struct parse_events_terms *data = _data;
	data->terms = (yyvsp[(1) - (1)].head);
}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 457 "util/parse-events.y"
    {
	struct list_head *head = (yyvsp[(1) - (3)].head);
	struct parse_events_term *term = (yyvsp[(3) - (3)].term);

	ABORT_ON(!head);
	list_add_tail(&term->list, head);
	(yyval.head) = (yyvsp[(1) - (3)].head);
}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 467 "util/parse-events.y"
    {
	struct list_head *head = malloc(sizeof(*head));
	struct parse_events_term *term = (yyvsp[(1) - (1)].term);

	ABORT_ON(!head);
	INIT_LIST_HEAD(head);
	list_add_tail(&term->list, head);
	(yyval.head) = head;
}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 479 "util/parse-events.y"
    {
	struct parse_events_term *term;

	ABORT_ON(parse_events_term__str(&term, PARSE_EVENTS__TERM_TYPE_USER,
					(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), &(yylsp[(1) - (3)]), &(yylsp[(3) - (3)])));
	(yyval.term) = term;
}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 488 "util/parse-events.y"
    {
	struct parse_events_term *term;

	ABORT_ON(parse_events_term__num(&term, PARSE_EVENTS__TERM_TYPE_USER,
					(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].num), &(yylsp[(1) - (3)]), &(yylsp[(3) - (3)])));
	(yyval.term) = term;
}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 497 "util/parse-events.y"
    {
	struct parse_events_term *term;
	int config = (yyvsp[(3) - (3)].num) & 255;

	ABORT_ON(parse_events_term__sym_hw(&term, (yyvsp[(1) - (3)].str), config));
	(yyval.term) = term;
}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 506 "util/parse-events.y"
    {
	struct parse_events_term *term;

	ABORT_ON(parse_events_term__num(&term, PARSE_EVENTS__TERM_TYPE_USER,
					(yyvsp[(1) - (1)].str), 1, &(yylsp[(1) - (1)]), NULL));
	(yyval.term) = term;
}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 515 "util/parse-events.y"
    {
	struct parse_events_term *term;
	int config = (yyvsp[(1) - (1)].num) & 255;

	ABORT_ON(parse_events_term__sym_hw(&term, NULL, config));
	(yyval.term) = term;
}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 524 "util/parse-events.y"
    {
	struct parse_events_term *term;

	ABORT_ON(parse_events_term__str(&term, (int)(yyvsp[(1) - (3)].num), NULL, (yyvsp[(3) - (3)].str), &(yylsp[(1) - (3)]), &(yylsp[(3) - (3)])));
	(yyval.term) = term;
}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 532 "util/parse-events.y"
    {
	struct parse_events_term *term;

	ABORT_ON(parse_events_term__num(&term, (int)(yyvsp[(1) - (3)].num), NULL, (yyvsp[(3) - (3)].num), &(yylsp[(1) - (3)]), &(yylsp[(3) - (3)])));
	(yyval.term) = term;
}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 540 "util/parse-events.y"
    {
	struct parse_events_term *term;

	ABORT_ON(parse_events_term__num(&term, (int)(yyvsp[(1) - (1)].num), NULL, 1, &(yylsp[(1) - (1)]), NULL));
	(yyval.term) = term;
}
    break;


/* Line 1792 of yacc.c  */
#line 2179 "util/parse-events-bison.c"
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, _data, scanner, YY_("syntax error"));
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
        yyerror (&yylloc, _data, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc, _data, scanner);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, _data, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, _data, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, _data, scanner);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, _data, scanner);
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


/* Line 2055 of yacc.c  */
#line 551 "util/parse-events.y"


void parse_events_error(YYLTYPE *loc, void *data,
			void *scanner __maybe_unused,
			char const *msg __maybe_unused)
{
	parse_events_evlist_error(data, loc->last_column, "parser error");
}
