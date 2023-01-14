
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
#line 1 "syntaxe.y"

	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>

	extern FILE* yyin;

	int yylex(void);
	void yyerror(const char * msg);
	int lineNumber;

/*	typedef struct var var;
struct var 
{ 
	char	*identif;
	char	*value;
	int		type;
	var 	*adresse;
	int		origin;
	var *next; 
};*/

	char tokens[37][10] = {"algo","var","entier","reel","caractere","boolean","debut","tableau","matrice","fin","afficher",
						"lire","si","alors","sinon","finsi","finsinon","selon","cas","break","autre","finswitch","pour",
						"allant","to","finpour","tantque","faire","fintq","repeter","jusqu","function","finfct","procedure","finproc","retourne","const"};

	char vars[10][20];
	char varsf[10][20];
	char vars_fct[10][20];

	int i = 0;

	void	createIdentif(char *s,char t[][20]);
	int		isToken(char *s,char t[][10]);
	int		isDeclared(char *s,char t[][20]);
	void	isUsable(char *s,char t[][20]);
	int		identifTest(char *s,char t[][10],char vars[][20]);

	/*------- pour les fonctions et les procédure -------*/
	int		isDeclaredf(char *s,char t[][20],char t2[][20]);
	void    isUsablef(char *s,char t[][20],char t2[][20]);
	int		identifTestf(char *s,char t[][10],char vars[][20],char varsf[][20]);
	int		identifTestf_fct(char *s,char t[][10],char vars_fct[][20]);



/* Line 189 of yacc.c  */
#line 120 "syntaxeY.c"

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
     ALGO = 258,
     IDENTIF = 259,
     VAR = 260,
     VIRGULE = 261,
     DEUX_POINTS = 262,
     ENTIER = 263,
     REEL = 264,
     CARACTERE = 265,
     BOOLEAN = 266,
     ACC_O = 267,
     ACC_F = 268,
     NOMBRE = 269,
     DEBUT = 270,
     INFEGAL = 271,
     TABLEAU = 272,
     CR_O = 273,
     CR_F = 274,
     MATRICE = 275,
     COMMENT = 276,
     COMMENT_LIGNES = 277,
     FIN = 278,
     AFFICHER = 279,
     PARTH_O = 280,
     PARTH_F = 281,
     LIRE = 282,
     ADD = 283,
     SOUST = 284,
     MULT = 285,
     DIVS = 286,
     MODU = 287,
     ET = 288,
     NOT = 289,
     OR = 290,
     AFFECTATION = 291,
     SUP = 292,
     SUPEGAL = 293,
     INC = 294,
     DEC = 295,
     ASS_ADD = 296,
     ASS_SOUS = 297,
     ASS_MULT = 298,
     ASS_DIV = 299,
     SI = 300,
     ALORS = 301,
     SINON = 302,
     FINSI = 303,
     FINSINON = 304,
     SELON = 305,
     CAS = 306,
     POINT_VIRGULE = 307,
     BREAK = 308,
     AUTRE = 309,
     FINSWITCH = 310,
     POUR = 311,
     ALLANT = 312,
     TO = 313,
     FINPOUR = 314,
     TANTQUE = 315,
     FAIRE = 316,
     FINTQ = 317,
     REPETER = 318,
     JUSQU = 319,
     FUNCTION = 320,
     EGAL = 321,
     FINFCT = 322,
     PROCEDURE = 323,
     FINPROC = 324,
     TYPE = 325,
     AFFICHAGE = 326,
     DOUBLE_COTES = 327,
     DEB_FCT = 328,
     RETOURNE = 329,
     DEB_PROC = 330,
     CONST = 331,
     STRING = 332,
     DIFF = 333,
     INF = 334
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 47 "syntaxe.y"

int valEntier;
float valReel;
char valBoolean[6];
char valIdentif[256];
char valAffichage[256];
char valChar[256];



/* Line 214 of yacc.c  */
#line 246 "syntaxeY.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 258 "syntaxeY.c"

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   826

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  232
/* YYNRULES -- Number of states.  */
#define YYNSTATES  556

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    14,    17,    19,    22,    24,
      27,    29,    43,    56,    66,    75,    82,    84,    86,    88,
      91,    93,    97,   101,   105,   113,   119,   130,   143,   157,
     163,   170,   174,   176,   179,   181,   184,   186,   189,   191,
     194,   196,   199,   201,   204,   206,   211,   213,   215,   217,
     223,   227,   229,   235,   239,   241,   243,   245,   247,   251,
     256,   260,   264,   266,   270,   274,   276,   280,   282,   284,
     286,   289,   292,   295,   298,   301,   305,   312,   315,   321,
     323,   327,   329,   331,   335,   338,   340,   342,   344,   346,
     348,   350,   352,   354,   356,   358,   360,   362,   364,   366,
     376,   384,   392,   393,   402,   405,   407,   414,   418,   420,
     422,   424,   426,   428,   430,   435,   440,   445,   450,   452,
     454,   456,   460,   464,   468,   472,   479,   485,   495,   506,
     519,   533,   539,   546,   548,   550,   554,   556,   559,   561,
     564,   566,   569,   571,   574,   576,   579,   581,   584,   586,
     591,   593,   595,   597,   599,   601,   607,   611,   613,   619,
     623,   625,   627,   629,   631,   635,   640,   643,   647,   654,
     657,   663,   665,   669,   671,   673,   677,   680,   682,   684,
     686,   688,   690,   692,   694,   696,   698,   700,   702,   706,
     710,   712,   716,   720,   722,   726,   728,   730,   732,   735,
     738,   745,   753,   758,   764,   766,   768,   770,   780,   788,
     796,   797,   806,   809,   811,   818,   822,   824,   826,   828,
     830,   832,   834,   839,   844,   849,   854,   856,   858,   860,
     864,   868,   872
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,    82,    83,    86,    -1,    83,    82,    86,
      -1,    83,    86,    -1,    82,    86,    -1,    86,    -1,    82,
      84,    -1,    84,    -1,    83,    85,    -1,    85,    -1,    65,
      87,    25,    90,    26,     7,    70,    73,    93,    95,    74,
     106,    67,    -1,    65,    87,    25,    26,     7,    70,    73,
      93,   134,    74,   106,    67,    -1,    68,    88,    25,    90,
      26,    75,   131,   134,    69,    -1,    68,    88,    25,    26,
      75,   131,   134,    69,    -1,     3,    89,   131,    15,   134,
      23,    -1,     4,    -1,     4,    -1,     4,    -1,    90,    91,
      -1,    91,    -1,    91,     6,    92,    -1,     4,     7,    70,
      -1,     4,     7,    70,    -1,    93,     5,     6,    94,     7,
      70,    52,    -1,     5,    94,     7,    70,    52,    -1,    93,
       5,    17,     4,    18,     8,    19,     7,    70,    52,    -1,
       5,    20,     4,    18,     8,    19,    18,     8,    19,     7,
      70,    52,    -1,    93,     5,    20,     4,    18,     8,    19,
      18,     8,    19,     7,    70,    52,    -1,    76,     4,    66,
     132,    52,    -1,    93,    76,     4,    66,   132,    52,    -1,
      94,     6,     4,    -1,     4,    -1,    95,    96,    -1,    96,
      -1,    95,   107,    -1,   107,    -1,    95,    99,    -1,    99,
      -1,    95,    97,    -1,    97,    -1,    95,   115,    -1,   115,
      -1,    95,   119,    -1,   119,    -1,     4,    36,   103,    52,
      -1,   123,    -1,    21,    -1,    22,    -1,    27,    25,    98,
      26,    52,    -1,    98,     6,     4,    -1,     4,    -1,    24,
      25,   100,    26,    52,    -1,   100,     6,   101,    -1,   101,
      -1,    77,    -1,   103,    -1,   102,    -1,     4,    25,    26,
      -1,     4,    25,    98,    26,    -1,   103,    28,   104,    -1,
     103,    29,   104,    -1,   104,    -1,   104,    30,   105,    -1,
     104,    31,   105,    -1,   105,    -1,    25,   103,    26,    -1,
       4,    -1,     8,    -1,     9,    -1,    29,     8,    -1,    29,
       9,    -1,     8,    52,    -1,     4,    52,    -1,   108,    48,
      -1,   108,   109,    48,    -1,    45,    25,   110,    26,    46,
      95,    -1,    47,    95,    -1,    25,   112,    26,   111,   110,
      -1,   112,    -1,    25,   112,    26,    -1,    33,    -1,    35,
      -1,   113,   114,   113,    -1,    34,   110,    -1,     8,    -1,
       9,    -1,    10,    -1,    11,    -1,     4,    -1,    66,    -1,
      78,    -1,    79,    -1,    16,    -1,    37,    -1,    38,    -1,
     116,    -1,   117,    -1,   118,    -1,    56,     4,    57,   113,
      58,   113,    61,    95,    59,    -1,    60,    25,   110,    26,
      61,    95,    62,    -1,    63,    95,    64,    25,   110,    26,
      52,    -1,    -1,    50,    25,     4,    26,    12,   121,    13,
     120,    -1,   121,   122,    -1,   122,    -1,    51,   113,     7,
      95,    53,    52,    -1,    54,     7,    95,    -1,   129,    -1,
     130,    -1,   124,    -1,   125,    -1,   126,    -1,   127,    -1,
       4,    41,   128,    52,    -1,     4,    42,   128,    52,    -1,
       4,    43,   128,    52,    -1,     4,    44,   128,    52,    -1,
       8,    -1,     9,    -1,     4,    -1,     4,    39,    52,    -1,
      39,     4,    52,    -1,     4,    40,    52,    -1,    40,     4,
      52,    -1,   131,     5,   133,     7,    70,    52,    -1,     5,
     133,     7,    70,    52,    -1,     5,    17,     4,    18,     8,
      19,     7,    70,    52,    -1,   131,     5,    17,     4,    18,
       8,    19,     7,    70,    52,    -1,     5,    20,     4,    18,
       8,    19,    18,     8,    19,     7,    70,    52,    -1,   131,
       5,    20,     4,    18,     8,    19,    18,     8,    19,     7,
      70,    52,    -1,    76,     4,    66,   132,    52,    -1,   131,
      76,     4,    66,   132,    52,    -1,     8,    -1,     9,    -1,
     133,     6,     4,    -1,     4,    -1,   134,   135,    -1,   135,
      -1,   134,   142,    -1,   142,    -1,   134,   138,    -1,   138,
      -1,   134,   136,    -1,   136,    -1,   134,   155,    -1,   155,
      -1,   134,   159,    -1,   159,    -1,     4,    36,   150,    52,
      -1,   163,    -1,   154,    -1,   153,    -1,    21,    -1,    22,
      -1,    27,    25,   137,    26,    52,    -1,   137,     6,     4,
      -1,     4,    -1,    24,    25,   139,    26,    52,    -1,   139,
       6,   140,    -1,   140,    -1,    77,    -1,   150,    -1,   141,
      -1,     4,    25,    26,    -1,     4,    25,   137,    26,    -1,
     143,    48,    -1,   143,   144,    48,    -1,    45,    25,   145,
      26,    46,   134,    -1,    47,   134,    -1,    25,   147,    26,
     146,   145,    -1,   147,    -1,    25,   147,    26,    -1,    33,
      -1,    35,    -1,   148,   149,   148,    -1,    34,   145,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,     4,    -1,
      66,    -1,    78,    -1,    79,    -1,    16,    -1,    37,    -1,
      38,    -1,   150,    28,   151,    -1,   150,    29,   151,    -1,
     151,    -1,   151,    30,   152,    -1,   151,    31,   152,    -1,
     152,    -1,    25,   150,    26,    -1,     4,    -1,     8,    -1,
       9,    -1,    29,     8,    -1,    29,     9,    -1,     4,    66,
       4,    25,    26,    52,    -1,     4,    66,     4,    25,   133,
      26,    52,    -1,     4,    25,    26,    52,    -1,     4,    25,
     133,    26,    52,    -1,   156,    -1,   157,    -1,   158,    -1,
      56,     4,    57,   148,    58,   148,    61,   134,    59,    -1,
      60,    25,   145,    26,    61,   134,    62,    -1,    63,   134,
      64,    25,   145,    26,    52,    -1,    -1,    50,    25,     4,
      26,    12,   161,    13,   160,    -1,   161,   162,    -1,   162,
      -1,    51,   148,     7,   134,    53,    52,    -1,    54,     7,
     134,    -1,   169,    -1,   170,    -1,   164,    -1,   165,    -1,
     166,    -1,   167,    -1,     4,    41,   168,    52,    -1,     4,
      42,   168,    52,    -1,     4,    43,   168,    52,    -1,     4,
      44,   168,    52,    -1,     8,    -1,     9,    -1,     4,    -1,
       4,    39,    52,    -1,    39,     4,    52,    -1,     4,    40,
      52,    -1,    40,     4,    52,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    67,    68,    69,    70,    76,    77,    80,
      81,    84,    85,    88,    89,    92,    95,    98,   101,   107,
     108,   111,   112,   115,   119,   120,   121,   122,   123,   124,
     125,   129,   130,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   150,   151,   152,   153,   156,
     159,   160,   163,   166,   167,   170,   171,   172,   175,   176,
     179,   180,   181,   184,   185,   186,   189,   190,   191,   192,
     193,   194,   197,   198,   202,   203,   206,   208,   212,   213,
     214,   216,   217,   219,   220,   222,   223,   224,   225,   226,
     229,   230,   231,   232,   233,   234,   237,   238,   239,   243,
     246,   249,   252,   252,   255,   256,   258,   259,   262,   263,
     264,   265,   266,   267,   269,   271,   273,   275,   278,   279,
     280,   282,   283,   285,   286,   291,   292,   293,   294,   295,
     296,   297,   298,   302,   303,   306,   307,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   330,
     331,   333,   334,   335,   336,   339,   342,   343,   346,   349,
     350,   353,   354,   355,   358,   359,   362,   363,   366,   368,
     372,   373,   374,   376,   377,   379,   380,   382,   383,   384,
     385,   386,   389,   390,   391,   392,   393,   394,   396,   397,
     398,   401,   402,   403,   406,   407,   408,   409,   410,   411,
     414,   415,   417,   418,   421,   422,   423,   427,   430,   433,
     436,   436,   439,   440,   442,   443,   446,   447,   448,   449,
     450,   451,   453,   455,   457,   459,   461,   462,   463,   465,
     466,   468,   469
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALGO", "IDENTIF", "VAR", "VIRGULE",
  "DEUX_POINTS", "ENTIER", "REEL", "CARACTERE", "BOOLEAN", "ACC_O",
  "ACC_F", "NOMBRE", "DEBUT", "INFEGAL", "TABLEAU", "CR_O", "CR_F",
  "MATRICE", "COMMENT", "COMMENT_LIGNES", "FIN", "AFFICHER", "PARTH_O",
  "PARTH_F", "LIRE", "ADD", "SOUST", "MULT", "DIVS", "MODU", "ET", "NOT",
  "OR", "AFFECTATION", "SUP", "SUPEGAL", "INC", "DEC", "ASS_ADD",
  "ASS_SOUS", "ASS_MULT", "ASS_DIV", "SI", "ALORS", "SINON", "FINSI",
  "FINSINON", "SELON", "CAS", "POINT_VIRGULE", "BREAK", "AUTRE",
  "FINSWITCH", "POUR", "ALLANT", "TO", "FINPOUR", "TANTQUE", "FAIRE",
  "FINTQ", "REPETER", "JUSQU", "FUNCTION", "EGAL", "FINFCT", "PROCEDURE",
  "FINPROC", "TYPE", "AFFICHAGE", "DOUBLE_COTES", "DEB_FCT", "RETOURNE",
  "DEB_PROC", "CONST", "STRING", "DIFF", "INF", "$accept", "program",
  "listFonction", "listProcedure", "fonction", "procedure", "main",
  "nom_fct", "nom_proc", "nom_algo", "listArg", "arg", "args",
  "declarationF", "listIdentF", "listInstF", "instF", "lectureF",
  "identifLecF", "affichageF", "parametresF", "paramF", "appelFct_affF",
  "expressionArithmeticF", "termF", "factorF", "ret", "exprSiF", "instSiF",
  "instSinonF", "conditionF", "opeLogiqueF", "coF", "valeurF", "condF",
  "boucleF", "pourF", "tantqueF", "repeterF", "switchF", "$@1",
  "listdesCasF", "lesCasF", "expressionSuppF", "assignationAddF",
  "assignationSousF", "assignationMultF", "assignationDivF", "valF",
  "incrementationF", "decrementationF", "declaration", "expr", "identifs",
  "listInst", "inst", "lecture", "identifLec", "affichage", "parametres",
  "param", "appelFct_aff", "exprSi", "instSi", "instSinon", "condition",
  "opeLogique", "co", "valeur", "cond", "expressionArithmetic", "term",
  "factor", "appelFct", "appelProc", "boucle", "pour", "tantque",
  "repeter", "switch", "$@2", "listdesCas", "lesCas", "expressionSupp",
  "assignationAdd", "assignationSous", "assignationMult", "assignationDiv",
  "val", "incrementation", "decrementation", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    87,    88,    89,    90,
      90,    91,    91,    92,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    97,
      98,    98,    99,   100,   100,   101,   101,   101,   102,   102,
     103,   103,   103,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   106,   106,   107,   107,   108,   109,   110,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   116,
     117,   118,   120,   119,   121,   121,   122,   122,   123,   123,
     123,   123,   123,   123,   124,   125,   126,   127,   128,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   131,   131,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   135,
     135,   135,   135,   135,   135,   136,   137,   137,   138,   139,
     139,   140,   140,   140,   141,   141,   142,   142,   143,   144,
     145,   145,   145,   146,   146,   147,   147,   148,   148,   148,
     148,   148,   149,   149,   149,   149,   149,   149,   150,   150,
     150,   151,   151,   151,   152,   152,   152,   152,   152,   152,
     153,   153,   154,   154,   155,   155,   155,   156,   157,   158,
     160,   159,   161,   161,   162,   162,   163,   163,   163,   163,
     163,   163,   164,   165,   166,   167,   168,   168,   168,   169,
     169,   170,   170
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     2,     1,     2,     1,     2,
       1,    13,    12,     9,     8,     6,     1,     1,     1,     2,
       1,     3,     3,     3,     7,     5,    10,    12,    13,     5,
       6,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     4,     1,     1,     1,     5,
       3,     1,     5,     3,     1,     1,     1,     1,     3,     4,
       3,     3,     1,     3,     3,     1,     3,     1,     1,     1,
       2,     2,     2,     2,     2,     3,     6,     2,     5,     1,
       3,     1,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     9,
       7,     7,     0,     8,     2,     1,     6,     3,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     1,     1,
       1,     3,     3,     3,     3,     6,     5,     9,    10,    12,
      13,     5,     6,     1,     1,     3,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     4,
       1,     1,     1,     1,     1,     5,     3,     1,     5,     3,
       1,     1,     1,     1,     3,     4,     2,     3,     6,     2,
       5,     1,     3,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     3,     1,     3,     1,     1,     1,     2,     2,
       6,     7,     4,     5,     1,     1,     1,     9,     7,     7,
       0,     8,     2,     1,     6,     3,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     1,     1,     1,     3,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     8,    10,     6,
      18,     0,    16,     0,    17,     0,     1,     0,     7,     5,
       0,     9,     4,     0,     0,     0,     0,     0,     2,     3,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   153,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,   144,   142,   140,     0,
     152,   151,   146,   204,   205,   206,   148,   150,   218,   219,
     220,   221,   216,   217,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,   135,     0,   133,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,   137,   143,   141,   139,   145,   147,     0,   166,     0,
       0,    22,     0,     0,     0,    21,     0,     0,     0,     0,
     126,   131,     0,     0,     0,     0,     0,   195,   196,   197,
       0,     0,     0,   190,   193,   229,   231,   228,   226,   227,
       0,     0,     0,     0,     0,   195,   161,     0,   160,   163,
     162,   157,     0,   230,   232,   181,   177,   178,   179,   180,
       0,     0,     0,   171,     0,     0,     0,     0,     0,   169,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   202,     0,     0,   198,   199,     0,     0,   149,
       0,     0,   222,   223,   224,   225,     0,     0,     0,     0,
       0,     0,     0,   176,     0,   185,   186,   187,   182,   183,
     184,     0,     0,     0,     0,     0,   132,     0,     0,     0,
       0,    23,    14,     0,     0,     0,     0,     0,   203,   194,
     188,   189,   191,   192,     0,     0,   164,     0,   159,   158,
     156,   155,   172,     0,   175,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
       0,     0,   200,     0,   165,   173,   174,     0,   168,     0,
       0,     0,   213,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    40,
      38,    36,     0,    42,    96,    97,    98,    44,    46,   110,
     111,   112,   113,   108,   109,   127,     0,     0,     0,   201,
     170,     0,     0,   210,   212,     0,   208,   209,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    39,    37,    35,
      41,    43,     0,    74,     0,     0,   128,     0,     0,   215,
     211,     0,     0,    25,    29,     0,     0,     0,     0,    73,
      72,    12,    67,    68,    69,     0,     0,     0,    62,    65,
     121,   123,   120,   118,   119,     0,     0,     0,     0,    67,
      55,     0,    54,    57,    56,    51,     0,   122,   124,    89,
      85,    86,    87,    88,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,    77,    75,     0,     0,     0,   207,
       0,     0,     0,     0,    30,     0,    70,    71,     0,     0,
      45,     0,     0,   114,   115,   116,   117,     0,     0,     0,
       0,     0,     0,    84,     0,    93,    94,    95,    90,    91,
      92,     0,     0,     0,     0,     0,    11,   129,     0,     0,
       0,    24,     0,     0,    66,    60,    61,    63,    64,    58,
       0,    53,    52,    50,    49,    80,     0,    83,     0,     0,
       0,     0,   130,   214,     0,     0,     0,    59,    81,    82,
       0,    76,     0,     0,     0,   105,     0,     0,     0,     0,
       0,     0,    78,     0,     0,   102,   104,     0,   100,   101,
       0,    26,     0,     0,   107,   103,     0,     0,     0,     0,
      99,    27,     0,     0,    28,   106
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,     9,    13,    15,    11,
      40,    41,   135,   239,   271,   317,   318,   319,   426,   320,
     421,   422,   423,   424,   408,   409,   358,   321,   322,   384,
     436,   520,   437,   438,   481,   323,   324,   325,   326,   327,
     545,   524,   525,   328,   329,   330,   331,   332,   415,   333,
     334,    25,    98,    33,    64,    65,    66,   172,    67,   167,
     168,   169,    68,    69,   129,   182,   287,   183,   184,   231,
     170,   153,   154,    70,    71,    72,    73,    74,    75,    76,
     390,   291,   292,    77,    78,    79,    80,    81,   160,    82,
      83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -438
static const yytype_int16 yypact[] =
{
      34,    84,   103,   108,   124,    34,    34,  -438,  -438,  -438,
    -438,    16,  -438,    13,  -438,   137,  -438,    25,  -438,  -438,
      17,  -438,  -438,   236,   177,    19,    23,    43,  -438,  -438,
    -438,   187,   191,   197,   142,   246,   692,   210,   211,   248,
      53,   270,   204,   102,   263,   279,   302,   238,   139,   306,
     309,   241,   157,  -438,  -438,   312,   316,   342,   348,   331,
     358,   394,   388,   692,   559,  -438,  -438,  -438,  -438,   107,
    -438,  -438,  -438,  -438,  -438,  -438,  -438,  -438,  -438,  -438,
    -438,  -438,  -438,  -438,   357,   364,   377,   457,   270,   469,
      16,   404,   473,   478,  -438,   435,  -438,  -438,   443,   479,
     481,   431,   116,    42,   450,   460,   201,   201,   201,   201,
     510,     6,   511,   465,   468,   290,   517,   474,   290,   506,
    -438,  -438,  -438,  -438,  -438,  -438,  -438,   692,  -438,   477,
     139,  -438,   459,   456,   528,  -438,   318,    16,   519,   522,
    -438,  -438,   535,   540,   497,   498,    55,  -438,  -438,  -438,
      42,   295,     1,   286,  -438,  -438,  -438,  -438,  -438,  -438,
     500,   505,   507,   509,   533,   539,  -438,   135,  -438,  -438,
     338,  -438,   152,  -438,  -438,  -438,  -438,  -438,  -438,  -438,
     310,   290,   541,  -438,    38,   542,   351,   547,   549,   692,
    -438,   524,    20,   504,   514,   453,   318,   578,   569,   572,
     574,  -438,  -438,   536,   259,  -438,  -438,    42,    42,  -438,
      42,    42,  -438,  -438,  -438,  -438,   117,   123,     6,   544,
     590,   545,   575,  -438,   554,  -438,  -438,  -438,  -438,  -438,
    -438,   351,   593,   548,   550,   290,  -438,    93,   598,   375,
      20,  -438,  -438,   484,   546,   602,   605,   596,  -438,  -438,
     286,   286,  -438,  -438,   565,   160,  -438,   164,  -438,  -438,
    -438,  -438,   234,   692,  -438,    -9,   351,   692,   601,  -438,
     625,   384,   566,   276,   629,   422,   400,  -438,   583,   617,
     567,   632,  -438,   589,  -438,  -438,  -438,   290,   692,   351,
     639,    49,  -438,   586,   568,   604,   635,   646,   594,   139,
     659,   663,   664,   606,    32,   367,  -438,  -438,   648,   651,
     674,   675,   666,   669,   685,   670,   723,   444,  -438,  -438,
    -438,  -438,   353,  -438,  -438,  -438,  -438,  -438,  -438,  -438,
    -438,  -438,  -438,  -438,  -438,  -438,   690,   647,   679,  -438,
    -438,   695,   692,  -438,  -438,   692,  -438,  -438,   700,  -438,
     657,   660,   426,   697,   707,   139,   677,   678,   636,   148,
     682,   686,   378,   378,   378,   378,    14,   714,   688,   689,
     339,   722,   694,   339,   515,    32,  -438,  -438,  -438,  -438,
    -438,  -438,   723,  -438,   687,   684,  -438,   742,   692,   692,
    -438,   599,   734,  -438,  -438,   691,   748,   749,   706,  -438,
    -438,  -438,  -438,  -438,  -438,   148,   428,    86,   411,  -438,
    -438,  -438,  -438,  -438,  -438,   708,   712,   713,   715,   741,
    -438,   168,  -438,  -438,   424,  -438,   196,  -438,  -438,  -438,
    -438,  -438,  -438,  -438,   361,   339,   733,  -438,    85,   743,
     408,   744,   746,   705,   723,  -438,   724,   704,   621,  -438,
     757,   725,   759,   761,  -438,   325,  -438,  -438,   148,   148,
    -438,   148,   148,  -438,  -438,  -438,  -438,   141,    14,   729,
     778,   732,   762,  -438,   739,  -438,  -438,  -438,  -438,  -438,
    -438,   408,   775,   731,   730,   339,  -438,  -438,   738,   740,
     785,  -438,   787,   777,  -438,   411,   411,  -438,  -438,  -438,
     200,  -438,  -438,  -438,  -438,   256,   723,  -438,   118,   408,
     723,   770,  -438,  -438,   779,   727,   791,  -438,  -438,  -438,
     339,   723,   408,   793,    57,  -438,   745,   630,   750,   794,
     751,   786,  -438,   797,   723,  -438,  -438,   723,  -438,  -438,
     737,  -438,   801,   723,   723,  -438,   661,   758,   747,   683,
    -438,  -438,   760,   763,  -438,  -438
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -438,  -438,   803,   806,    89,   159,   266,  -438,  -438,  -438,
     789,   214,  -438,   573,   518,  -232,  -300,  -285,   347,  -284,
    -438,   352,  -438,  -347,    -4,    -3,   446,  -276,  -438,  -438,
    -367,  -438,   385,  -437,  -438,  -269,  -438,  -438,  -438,  -237,
    -438,  -438,   298,  -438,  -438,  -438,  -438,  -438,    12,  -438,
    -438,   -71,  -114,   -24,   -50,   -64,   -63,   607,   -60,  -438,
     608,  -438,   -59,  -438,  -438,  -116,  -438,   643,  -179,  -438,
     -77,   262,   280,  -438,  -438,   -56,  -438,  -438,  -438,   -55,
    -438,  -438,   534,  -438,  -438,  -438,  -438,  -438,   321,  -438,
    -438
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     121,   122,   187,   483,   123,   124,   441,   233,   125,   126,
     165,    51,   407,   119,   148,   149,   191,   376,   419,   136,
       1,    23,   403,   404,    35,   237,   152,    38,     1,   207,
     208,   150,   377,   378,    36,   151,   356,     1,    26,   405,
     357,   379,   289,   406,   507,   290,   147,    38,   380,    39,
     148,   149,   264,   209,   225,   121,   122,    38,   455,   123,
     124,    46,   343,   125,   126,   223,   196,   150,   473,    42,
     535,   151,   526,   204,   376,   226,   227,   189,   146,    87,
     381,   203,     2,   166,   374,   533,   195,   293,    10,   377,
     378,   420,    24,     3,    18,    37,   238,   269,   379,     2,
     289,   475,     3,   290,   228,   380,    38,    12,   522,    18,
     341,   523,    14,   270,   458,   459,   229,   230,   511,   268,
      30,    30,   476,   477,    16,   121,   122,   171,    91,   123,
     124,   121,   122,   125,   126,   123,   124,   381,   460,   125,
     126,   218,   145,   254,   376,   425,   243,    96,    97,   256,
     444,   478,   402,   532,   127,   128,   403,   404,   220,   377,
     378,   219,    27,   479,   480,    21,    46,   499,   379,   522,
     220,   340,   523,   405,   468,   380,    21,   406,   221,   121,
     122,    34,   102,   123,   124,   351,   283,   125,   126,   275,
     284,    44,   255,   103,   469,    45,   104,   105,   106,   107,
     108,   109,   470,    46,    47,   157,   470,   381,    48,   158,
     159,   121,   122,   288,    84,   123,   124,   294,    85,   125,
     126,   376,   471,   110,   121,   122,   517,   376,   123,   124,
     121,   122,   125,   126,   123,   124,   377,   378,   125,   126,
      30,   398,   377,   378,   376,   379,   376,    46,   101,   376,
      30,   379,   380,    31,    88,    86,    32,    88,   380,   377,
     378,   377,   378,    49,   377,   378,    50,   285,   379,   286,
     379,    19,    22,   379,   521,   380,    89,   380,   527,    90,
     380,    92,   300,    28,   381,   249,    29,   207,   208,   518,
     381,   519,   389,   301,   175,   391,   302,    93,   176,   177,
     178,   179,   544,   205,   206,   546,    94,   381,    95,   381,
      99,   549,   381,   100,   175,   180,   210,   211,   176,   177,
     178,   179,    52,    35,   181,   121,   122,   121,   122,   123,
     124,   123,   124,   125,   126,   125,   126,   111,   448,    53,
      54,   112,    55,   429,   181,    56,   113,   430,   431,   432,
     433,   494,   114,   458,   459,   175,   115,    57,    58,   176,
     177,   178,   179,    59,   434,   429,   207,   208,    60,   430,
     431,   432,   433,   435,    61,   416,   417,   418,    62,    52,
     273,    63,   412,   116,   121,   122,   413,   414,   123,   124,
     297,   298,   125,   126,    37,   435,    53,    54,   117,    55,
     382,   383,    56,   359,   305,   273,   360,   361,   362,   363,
     364,   365,   429,   118,    57,    58,   430,   431,   432,   433,
      59,   306,   307,   130,   308,    60,    52,   309,   161,   162,
     163,    61,   297,   395,   131,    62,   456,   457,    63,   310,
     311,   461,   462,    53,    54,   312,    55,   132,   305,    56,
     313,   274,   458,   459,   495,   496,   314,    52,   497,   498,
     315,    57,    58,   316,   133,   306,   307,    59,   308,   250,
     251,   309,    60,   134,    53,    54,   274,    55,    61,   137,
      56,   138,    62,   310,   311,    63,   139,   140,    52,   312,
     252,   253,    57,    58,   313,   141,   304,   142,    59,   143,
     314,   144,   155,    60,   315,    53,    54,   316,    55,    61,
      52,    56,   156,    62,   164,   171,    63,   173,   375,   305,
     174,   185,   242,    57,    58,   190,   193,    53,    54,    59,
      55,   186,   192,    56,    60,   194,   306,   307,   197,   308,
      61,   198,   309,   199,    62,    57,    58,    63,   200,   201,
     202,    59,   212,   277,   310,   311,    60,   213,   216,   214,
     312,   215,    61,    52,   217,   313,    62,   224,   232,    63,
     188,   314,    52,   234,   235,   315,   236,   240,   316,   442,
      53,    54,   120,    55,   241,   244,    56,   245,   248,    53,
      54,   246,    55,   247,   260,    56,   259,   261,    57,    58,
     263,   262,   272,    52,    59,   265,   266,    57,    58,    60,
     279,   267,   280,    59,   281,    61,   278,   282,    60,    62,
      53,    54,    63,    55,    61,    52,    56,   295,    62,   296,
     346,    63,   299,   303,   305,   335,   336,   337,    57,    58,
     338,   339,    53,    54,    59,    55,   342,   345,    56,    60,
     349,   306,   307,   348,   308,    61,   347,   309,   449,    62,
      57,    58,    63,   269,   350,   305,    59,   353,   354,   310,
     311,    60,   355,   366,   489,   312,   367,    61,   368,   369,
     313,    62,   306,   307,    63,   308,   314,   305,   309,   372,
     315,   370,   538,   316,   371,   373,    52,   385,   387,   386,
     310,   311,   388,   401,   306,   307,   312,   308,   392,   393,
     309,   313,   394,    53,    54,   396,    55,   314,   425,    56,
     550,   315,   310,   311,   316,   397,   439,   305,   312,   399,
     400,    57,    58,   313,   410,   445,   553,    59,   411,   314,
     427,   428,    60,   315,   306,   307,   316,   308,    61,   447,
     309,   440,    62,   450,   446,    63,   452,   453,   454,   474,
     463,   451,   310,   311,   464,   465,   467,   466,   312,   482,
     484,   485,   486,   313,   488,   490,   487,   491,   492,   314,
     493,   502,   503,   315,   504,   506,   316,   508,   505,   509,
     512,   510,   513,   514,   515,   516,   528,   530,   529,   531,
     534,   540,   539,   541,   543,   542,   537,   547,   548,    20,
     551,    17,   554,   276,   500,   555,    43,   552,   352,   472,
     501,   443,   536,   222,   257,   344,   258
};

static const yytype_uint16 yycheck[] =
{
      64,    64,   118,   440,    64,    64,   373,   186,    64,    64,
       4,    35,   359,    63,     8,     9,   130,   317,     4,    90,
       3,     5,     8,     9,     5,     5,   103,     4,     3,    28,
      29,    25,   317,   317,    15,    29,     4,     3,    25,    25,
       8,   317,    51,    29,   481,    54,     4,     4,   317,    26,
       8,     9,   231,    52,    16,   119,   119,     4,   405,   119,
     119,     6,    13,   119,   119,   181,   137,    25,   435,    26,
      13,    29,   509,   150,   374,    37,    38,   127,   102,    26,
     317,    26,    65,    77,   316,   522,   136,   266,     4,   374,
     374,    77,    76,    68,     5,    76,    76,     4,   374,    65,
      51,    16,    68,    54,    66,   374,     4,     4,    51,    20,
     289,    54,     4,    20,    28,    29,    78,    79,   485,   235,
       4,     4,    37,    38,     0,   189,   189,     4,    26,   189,
     189,   195,   195,   189,   189,   195,   195,   374,    52,   195,
     195,     6,    26,    26,   444,     4,   196,     8,     9,    26,
     382,    66,     4,   520,    47,    48,     8,     9,     6,   444,
     444,    26,    25,    78,    79,     6,     6,    26,   444,    51,
       6,   287,    54,    25,     6,   444,    17,    29,    26,   243,
     243,     4,    25,   243,   243,   299,    26,   243,   243,   239,
      26,     4,   216,    36,    26,     4,    39,    40,    41,    42,
      43,    44,     6,     6,     7,     4,     6,   444,    66,     8,
       9,   275,   275,   263,     4,   275,   275,   267,     7,   275,
     275,   521,    26,    66,   288,   288,    26,   527,   288,   288,
     294,   294,   288,   288,   294,   294,   521,   521,   294,   294,
       4,   355,   527,   527,   544,   521,   546,     6,     7,   549,
       4,   527,   521,    17,    40,     7,    20,    43,   527,   544,
     544,   546,   546,    17,   549,   549,    20,    33,   544,    35,
     546,     5,     6,   549,   506,   544,     6,   546,   510,    75,
     549,    18,     6,    17,   521,    26,    20,    28,    29,    33,
     527,    35,   342,    17,     4,   345,    20,    18,     8,     9,
      10,    11,   534,     8,     9,   537,     4,   544,    70,   546,
       4,   543,   549,     4,     4,    25,    30,    31,     8,     9,
      10,    11,     4,     5,    34,   389,   389,   391,   391,   389,
     389,   391,   391,   389,   389,   391,   391,    25,   388,    21,
      22,    25,    24,     4,    34,    27,     4,     8,     9,    10,
      11,    26,     4,    28,    29,     4,    25,    39,    40,     8,
       9,    10,    11,    45,    25,     4,    28,    29,    50,     8,
       9,    10,    11,    34,    56,   363,   364,   365,    60,     4,
       5,    63,     4,    25,   448,   448,     8,     9,   448,   448,
       6,     7,   448,   448,    76,    34,    21,    22,     4,    24,
      47,    48,    27,    36,     4,     5,    39,    40,    41,    42,
      43,    44,     4,    25,    39,    40,     8,     9,    10,    11,
      45,    21,    22,    66,    24,    50,     4,    27,   107,   108,
     109,    56,     6,     7,    70,    60,     8,     9,    63,    39,
      40,    30,    31,    21,    22,    45,    24,    70,     4,    27,
      50,    76,    28,    29,   458,   459,    56,     4,   461,   462,
      60,    39,    40,    63,     7,    21,    22,    45,    24,   207,
     208,    27,    50,     4,    21,    22,    76,    24,    56,    75,
      27,     8,    60,    39,    40,    63,     8,    52,     4,    45,
     210,   211,    39,    40,    50,    52,    74,    18,    45,    18,
      56,    70,    52,    50,    60,    21,    22,    63,    24,    56,
       4,    27,    52,    60,     4,     4,    63,    52,    74,     4,
      52,     4,    69,    39,    40,    48,    70,    21,    22,    45,
      24,    57,    73,    27,    50,     7,    21,    22,    19,    24,
      56,    19,    27,     8,    60,    39,    40,    63,     8,    52,
      52,    45,    52,    69,    39,    40,    50,    52,    25,    52,
      45,    52,    56,     4,    25,    50,    60,    26,    26,    63,
      64,    56,     4,    26,    25,    60,    52,    73,    63,    64,
      21,    22,    23,    24,    70,     7,    27,    18,    52,    21,
      22,    19,    24,    19,     4,    27,    52,    52,    39,    40,
      46,    26,     4,     4,    45,    12,    58,    39,    40,    50,
       8,    61,     7,    45,    18,    56,    70,    52,    50,    60,
      21,    22,    63,    24,    56,     4,    27,    26,    60,     4,
      62,    63,    66,     4,     4,    52,    19,    70,    39,    40,
       8,    52,    21,    22,    45,    24,     7,    61,    27,    50,
       4,    21,    22,    18,    24,    56,    52,    27,    59,    60,
      39,    40,    63,     4,    70,     4,    45,     4,     4,    39,
      40,    50,    66,    25,    53,    45,    25,    56,     4,     4,
      50,    60,    21,    22,    63,    24,    56,     4,    27,     4,
      60,    25,    62,    63,    25,    25,     4,     7,    19,    52,
      39,    40,     7,    67,    21,    22,    45,    24,     8,    52,
      27,    50,    52,    21,    22,    18,    24,    56,     4,    27,
      59,    60,    39,    40,    63,    18,     4,     4,    45,    52,
      52,    39,    40,    50,    52,    48,    53,    45,    52,    56,
      52,    52,    50,    60,    21,    22,    63,    24,    56,     7,
      27,    57,    60,    19,    70,    63,     8,     8,    52,    26,
      52,    70,    39,    40,    52,    52,    25,    52,    45,    26,
      26,    25,    67,    50,    70,    18,    52,    52,    19,    56,
      19,    52,     4,    60,    52,    46,    63,    12,    26,    58,
      52,    61,    52,     8,     7,    18,    26,    70,    19,     8,
       7,     7,    52,    52,     7,    19,    61,    70,     7,     6,
      52,     5,    52,   240,   467,    52,    27,    70,   300,   434,
     468,   375,   524,   180,   217,   291,   218
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    65,    68,    81,    82,    83,    84,    85,    86,
       4,    89,     4,    87,     4,    88,     0,    83,    84,    86,
      82,    85,    86,     5,    76,   131,    25,    25,    86,    86,
       4,    17,    20,   133,     4,     5,    15,    76,     4,    26,
      90,    91,    26,    90,     4,     4,     6,     7,    66,    17,
      20,   133,     4,    21,    22,    24,    27,    39,    40,    45,
      50,    56,    60,    63,   134,   135,   136,   138,   142,   143,
     153,   154,   155,   156,   157,   158,   159,   163,   164,   165,
     166,   167,   169,   170,     4,     7,     7,    26,    91,     6,
      75,    26,    18,    18,     4,    70,     8,     9,   132,     4,
       4,     7,    25,    36,    39,    40,    41,    42,    43,    44,
      66,    25,    25,     4,     4,    25,    25,     4,    25,   134,
      23,   135,   136,   138,   142,   155,   159,    47,    48,   144,
      66,    70,    70,     7,     4,    92,   131,    75,     8,     8,
      52,    52,    18,    18,    70,    26,   133,     4,     8,     9,
      25,    29,   150,   151,   152,    52,    52,     4,     8,     9,
     168,   168,   168,   168,     4,     4,    77,   139,   140,   141,
     150,     4,   137,    52,    52,     4,     8,     9,    10,    11,
      25,    34,   145,   147,   148,     4,    57,   145,    64,   134,
      48,   132,    73,    70,     7,   134,   131,    19,    19,     8,
       8,    52,    52,    26,   150,     8,     9,    28,    29,    52,
      30,    31,    52,    52,    52,    52,    25,    25,     6,    26,
       6,    26,   147,   145,    26,    16,    37,    38,    66,    78,
      79,   149,    26,   148,    26,    25,    52,     5,    76,    93,
      73,    70,    69,   134,     7,    18,    19,    19,    52,    26,
     151,   151,   152,   152,    26,   133,    26,   137,   140,    52,
       4,    52,    26,    46,   148,    12,    58,    61,   145,     4,
      20,    94,     4,     5,    76,   134,    93,    69,    70,     8,
       7,    18,    52,    26,    26,    33,    35,   146,   134,    51,
      54,   161,   162,   148,   134,    26,     4,     6,     7,    66,
       6,    17,    20,     4,    74,     4,    21,    22,    24,    27,
      39,    40,    45,    50,    56,    60,    63,    95,    96,    97,
      99,   107,   108,   115,   116,   117,   118,   119,   123,   124,
     125,   126,   127,   129,   130,    52,    19,    70,     8,    52,
     145,   148,     7,    13,   162,    61,    62,    52,    18,     4,
      70,   132,    94,     4,     4,    66,     4,     8,   106,    36,
      39,    40,    41,    42,    43,    44,    25,    25,     4,     4,
      25,    25,     4,    25,    95,    74,    96,    97,    99,   107,
     115,   119,    47,    48,   109,     7,    52,    19,     7,   134,
     160,   134,     8,    52,    52,     7,    18,    18,   132,    52,
      52,    67,     4,     8,     9,    25,    29,   103,   104,   105,
      52,    52,     4,     8,     9,   128,   128,   128,   128,     4,
      77,   100,   101,   102,   103,     4,    98,    52,    52,     4,
       8,     9,    10,    11,    25,    34,   110,   112,   113,     4,
      57,   110,    64,   106,    95,    48,    70,     7,   134,    59,
      19,    70,     8,     8,    52,   103,     8,     9,    28,    29,
      52,    30,    31,    52,    52,    52,    52,    25,     6,    26,
       6,    26,   112,   110,    26,    16,    37,    38,    66,    78,
      79,   114,    26,   113,    26,    25,    67,    52,    70,    53,
      18,    52,    19,    19,    26,   104,   104,   105,   105,    26,
      98,   101,    52,     4,    52,    26,    46,   113,    12,    58,
      61,   110,    52,    52,     8,     7,    18,    26,    33,    35,
     111,    95,    51,    54,   121,   122,   113,    95,    26,    19,
      70,     8,   110,   113,     7,    13,   122,    61,    62,    52,
       7,    52,    19,     7,    95,   120,    95,    70,     7,    95,
      59,    52,    70,    53,    52,    52
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
        case 6:

/* Line 1455 of yacc.c  */
#line 70 "syntaxe.y"
    { printf("main est correct\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 77 "syntaxe.y"
    {printf("fonction est correcte\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 81 "syntaxe.y"
    {printf("procedure est correcte\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 95 "syntaxe.y"
    {identifTestf_fct((yyvsp[(1) - (1)].valIdentif),tokens,vars_fct);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 98 "syntaxe.y"
    {identifTest((yyvsp[(1) - (1)].valIdentif),tokens,vars);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 101 "syntaxe.y"
    {identifTest((yyvsp[(1) - (1)].valIdentif),tokens,vars);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 112 "syntaxe.y"
    {identifTestf((yyvsp[(1) - (3)].valIdentif),tokens,vars,varsf);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 115 "syntaxe.y"
    {identifTestf((yyvsp[(1) - (3)].valIdentif),tokens,vars,varsf);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 121 "syntaxe.y"
    {identifTestf((yyvsp[(4) - (10)].valIdentif),tokens,vars,varsf);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 122 "syntaxe.y"
    {identifTestf((yyvsp[(3) - (12)].valIdentif),tokens,vars,varsf);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 123 "syntaxe.y"
    {identifTestf((yyvsp[(4) - (13)].valIdentif),tokens,vars,varsf);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 124 "syntaxe.y"
    {identifTestf((yyvsp[(2) - (5)].valIdentif),tokens,vars,varsf);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 125 "syntaxe.y"
    {identifTestf((yyvsp[(3) - (6)].valIdentif),tokens,vars,varsf);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 129 "syntaxe.y"
    {identifTestf((yyvsp[(3) - (3)].valIdentif),tokens,vars,varsf);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 130 "syntaxe.y"
    {identifTestf((yyvsp[(1) - (1)].valIdentif),tokens,vars,varsf);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 150 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (4)].valIdentif),vars,varsf);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 152 "syntaxe.y"
    {printf("commentaire correcte\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 153 "syntaxe.y"
    {printf("commentaire correcte\n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 159 "syntaxe.y"
    {isUsable((yyvsp[(3) - (3)].valIdentif),varsf);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 160 "syntaxe.y"
    {isUsable((yyvsp[(1) - (1)].valIdentif),varsf);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 163 "syntaxe.y"
    {printf("affichage correcte\n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 175 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (3)].valIdentif),varsf,vars_fct);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 176 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (4)].valIdentif),varsf,vars_fct);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 190 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (1)].valIdentif),vars,varsf);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 198 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (2)].valIdentif),vars,varsf);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 226 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (1)].valIdentif),vars,varsf);;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 237 "syntaxe.y"
    {printf("pour correct\n");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 238 "syntaxe.y"
    {printf("tq correct\n");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 239 "syntaxe.y"
    {printf("repeter correct\n");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 243 "syntaxe.y"
    {isUsablef((yyvsp[(2) - (9)].valIdentif),vars,varsf);;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 252 "syntaxe.y"
    {printf("switch correct\n");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 252 "syntaxe.y"
    {isUsablef((yyvsp[(3) - (8)].valIdentif),vars,varsf);;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 262 "syntaxe.y"
    {printf("instuction d'incrementation \n");;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 263 "syntaxe.y"
    {printf(" instuction de decrementation\n");;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 269 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (4)].valIdentif),vars,varsf);;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 271 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (4)].valIdentif),vars,varsf);;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 273 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (4)].valIdentif),vars,varsf);;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 275 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (4)].valIdentif),vars,varsf);;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 280 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (1)].valIdentif),vars,varsf);;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 282 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (3)].valIdentif),vars,varsf);;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 283 "syntaxe.y"
    {isUsablef((yyvsp[(2) - (3)].valIdentif),vars,varsf);;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 285 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (3)].valIdentif),vars,varsf);;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 286 "syntaxe.y"
    {isUsablef((yyvsp[(2) - (3)].valIdentif),vars,varsf);;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 293 "syntaxe.y"
    {identifTest((yyvsp[(3) - (9)].valIdentif),tokens,vars);;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 294 "syntaxe.y"
    {identifTest((yyvsp[(4) - (10)].valIdentif),tokens,vars);;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 295 "syntaxe.y"
    {identifTest((yyvsp[(3) - (12)].valIdentif),tokens,vars);;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 296 "syntaxe.y"
    {identifTest((yyvsp[(4) - (13)].valIdentif),tokens,vars);;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 297 "syntaxe.y"
    {identifTest((yyvsp[(2) - (5)].valIdentif),tokens,vars);;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 298 "syntaxe.y"
    {identifTest((yyvsp[(3) - (6)].valIdentif),tokens,vars);;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 306 "syntaxe.y"
    {identifTest((yyvsp[(3) - (3)].valIdentif),tokens,vars);;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 307 "syntaxe.y"
    {identifTest((yyvsp[(1) - (1)].valIdentif),tokens,vars);;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 330 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].valIdentif),vars);;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 333 "syntaxe.y"
    {printf("appel proc correcte\n");;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 334 "syntaxe.y"
    {printf("appel fct correcte\n");;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 335 "syntaxe.y"
    {printf("commentaire correcte\n");;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 336 "syntaxe.y"
    {printf("commentaire correcte\n");;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 342 "syntaxe.y"
    {isUsable((yyvsp[(3) - (3)].valIdentif),vars);;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 343 "syntaxe.y"
    {isUsable((yyvsp[(1) - (1)].valIdentif),vars);;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 346 "syntaxe.y"
    {printf("affichage correcte\n");;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 358 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (3)].valIdentif),vars,vars_fct);;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 359 "syntaxe.y"
    {isUsablef((yyvsp[(1) - (4)].valIdentif),vars,vars_fct);;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 386 "syntaxe.y"
    {isUsable((yyvsp[(1) - (1)].valIdentif),vars);;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 407 "syntaxe.y"
    {isUsable((yyvsp[(1) - (1)].valIdentif),vars);;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 414 "syntaxe.y"
    {isUsable((yyvsp[(1) - (6)].valIdentif),vars);;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 421 "syntaxe.y"
    {printf("pour correct\n");;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 422 "syntaxe.y"
    {printf("tq correct\n");;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 423 "syntaxe.y"
    {printf("repeter correct\n");;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 427 "syntaxe.y"
    {isUsable((yyvsp[(2) - (9)].valIdentif),vars);;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 436 "syntaxe.y"
    {printf("switch correct\n");;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 436 "syntaxe.y"
    {isUsable((yyvsp[(3) - (8)].valIdentif),vars);;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 446 "syntaxe.y"
    {printf("instuction d'incrementation \n");;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 447 "syntaxe.y"
    {printf(" instuction de decrementation\n");;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 453 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].valIdentif),vars);;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 455 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].valIdentif),vars);;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 457 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].valIdentif),vars);;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 459 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].valIdentif),vars);;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 463 "syntaxe.y"
    {isUsable((yyvsp[(1) - (1)].valIdentif),vars);;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 465 "syntaxe.y"
    {isUsable((yyvsp[(1) - (3)].valIdentif),vars);;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 466 "syntaxe.y"
    {isUsable((yyvsp[(2) - (3)].valIdentif),vars);;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 468 "syntaxe.y"
    {isUsable((yyvsp[(1) - (3)].valIdentif),vars);;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 469 "syntaxe.y"
    {isUsable((yyvsp[(2) - (3)].valIdentif),vars);;}
    break;



/* Line 1455 of yacc.c  */
#line 2570 "syntaxeY.c"
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
#line 472 "syntaxe.y"

void yyerror( const char * msg){
	printf("\nline %d : %s", lineNumber, msg);
}

void	createIdentif(char *s,char t[][20])
{
	strcpy(t[i++],s);
}

int		isToken(char *s,char t[][10]){
	int i;
	for(i=0;i<30;i++)
		if (strcmp(s,t[i]) == 0)
			return -1;
	return 0;
}

int		isDeclared(char *s,char t[][20]){
	int i;
	for(i=0;i<8;i++)
		if (strcmp(s,t[i]) == 0)
			return -1;
	return 0;
}

void	isUsable(char *s,char t[][20]){
	if (isDeclared(s,t) == 0)
	{
		yyerror("Using a non declared variable\n");
		exit(-1);
	}
}

int		identifTest(char *s,char t[][10],char vars[][20]){
	if (isToken(s,t) == -1)
	{
		yyerror("Declaring a variable with a token name\n");
		exit(-1);
	}
	if (isDeclared(s,vars) == -1)
	{
		yyerror("Declaring two variables with the same name\n");
		exit(-2);
	}
	createIdentif(s,vars);
}

int		isDeclaredf(char *s,char t[][20],char t2[][20]){
	int i,b,a;
	for(i=0;i<8;i++){
    a = strcmp(s,t[i]);
    b = strcmp(s,t2[i]);
		if (a == 0 || b == 0)
			return -1;
            }
	return 0;
}

void	isUsablef(char *s,char t[][20],char t2[][20]){
	if (isDeclared(s,t) == 0 && isDeclared(s,t2) == 0)
	{
		yyerror("Using a non declared variable\n");
		exit(-1);
	}
}

int		identifTestf(char *s,char t[][10],char vars[][20],char varsf[][20]){
	if (isToken(s,t) == -1)
	{
		yyerror("Declaring a variable with a token name\n");
		exit(-1);
	}
	if (isDeclaredf(s,vars,varsf) == -1)
	{
		yyerror("Declaring two variables with the same name\n");
		exit(-2);
	}
	createIdentif(s,varsf);
}

int		identifTestf_fct(char *s,char t[][10],char vars_fct[][20]){
	if (isToken(s,t) == -1)
	{
		yyerror("Declaring a variable with a token name\n");
		exit(-1);
	}
	createIdentif(s,vars_fct);
}

/*void		isNotNull(char *s,char t[][20])
{
	var* current = s;  
    while (current != NULL) 
    { 
        if (strcmp(current->t,t) == 0) 
            if (current->value == NULL)
			{
				yyerror("Using a non initialised variable\n");
				exit(-5);
			}
        current = current->next; 
    } 
}*/

int main(int argc,char ** argv){
	if(argc>1) yyin=fopen(argv[1],"r"); // check result !!!
	lineNumber=1;
	if(!yyparse())
	printf("CORRECT!!\n");
return(0);
}
