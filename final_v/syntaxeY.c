
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

	
	
	int lineNumber;
	char identif[25];
	char value[250];
	

	typedef struct var var;
	struct var 
	{ 
		char	*identif;
		char	*value;
		int		type;
		var 	*adresse;
		int		origin;
		var *next; 
	};
	typedef struct vars vars;
	struct vars 
	{ 
		char	*identif;
		char	*value;
		int		type;
		vars 	*adresse;
		int		origin;
		vars *next; 
	};

	typedef struct func func;
	struct func
	{ 
		char	*identif;
		int		paramN;
		char	**param;
		func 	*adresse;
		func	*next; 
	};

	int yylex(void);
	void	yyerror( const char * msg);

	void 	createFunc(func** head, char *identif, int pN, char vars[][20]) ;
	void	testReturn(int a, int b);
	void	isUsablef(func* head,char *identif);
	void 	freeFuncs(func* head);
	int 	isDeclaredf(func* head, char *identif) ;
	int		funcTest(char *s,func **head, int pN, char vars[][20], char t[][10]);

	int		isToken(char *s,char t[][10]);
	
	void	isParaEqual(func *node,char *s,int pN);

	void 	createIdentif(var** head, char *identif, int type,int origin);
	void 	createIdentiff(vars** heads, char *identif, int type,int origin);

	int 	isDeclared(var* head, char *identif, int origin) ;
	int 	isDeclaredF(vars* heads, char *identif, int origin) ;

	void	isNotNull(var* head,char *identif);
	

	void	isUsable(var* head,char *identif,int origin);
	void	isUsableF(vars* heads,char *identif,int origin);

	void 	initialiser(var *head, char *identif);
	void 	initialiserF(vars *heads, char *identif);
	
	char 	*giveValue(var *head, char *identif);
	char 	*giveValuef(vars *heads, char *identif);


	int		identifTest(char *s,char t[][10],var **head, int type,int origin);
	int		identifTestf(char *s,char t[][10],vars **heads, int type,int origin);
	/*_______ pour supprimer les variables locals des fct_______*/
	void 	freeVars(var* head);
	void    freeVarsF(vars* heads);
		
	int 	return_type( var* head,char *indentif);
	int 	return_typeF( vars* heads,char *indentif);

	void 	affect_test( var* head,char *identif1, int type,char *autre);
	void 	affect_testF( vars* heads,char *identif1, int type,char *autre);


	char tokens[40][10] = {"algo","var","entier","reel","caractere","boolean","debut","tableau","matrice","fin","afficher",
						"lire","si","alors","sinon","finsi","finsinon","selon","cas","break","autre","finswitch","pour",
						"allant","to","finpour","tantque","faire","fintq","repeter","jusqu","function","finfct","procedure","finproc","retourne",
						"const","int","float","char"};

	char 	autre[50];
	char 	partie1[200],partie2[200];
	char 	text[256];
	int 	rang=0;char compa[256];
	char 	identif1[100];
	char 	lvalue[25];
	char 	value[250];
	int 	tp;
	var 	*head = NULL;
	vars 	*heads = NULL;
	func 	*fhead = NULL;
	int 	type;
	FILE 	*f;
	char 	fname[20];
	int 	pn=0;
	char 	args[20][20];
	int 	type_return = -1;
	FILE 	*f;
	char 	temp_identif[20];



/* Line 189 of yacc.c  */
#line 192 "syntaxeY.c"

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
     AFFICHAGE = 325,
     DOUBLE_COTES = 326,
     DEB_FCT = 327,
     RETOURNE = 328,
     DEB_PROC = 329,
     CONST = 330,
     STRING = 331,
     DIFF = 332,
     INF = 333,
     INTD = 334,
     FLOATD = 335,
     CHARD = 336
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 315 "syntaxeY.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   801

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  167
/* YYNRULES -- Number of rules.  */
#define YYNRULES  280
/* YYNRULES -- Number of states.  */
#define YYNSTATES  490

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

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
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    10,    11,    12,    27,    31,
      32,    37,    39,    43,    50,    56,    58,    59,    64,    68,
      72,    74,    78,    82,    84,    85,    90,    91,    94,    96,
      98,   100,   103,   106,   109,   111,   114,   116,   119,   121,
     124,   126,   129,   131,   134,   136,   139,   141,   143,   145,
     146,   147,   157,   160,   162,   169,   173,   175,   177,   179,
     189,   197,   205,   211,   215,   217,   223,   227,   229,   231,
     233,   236,   240,   247,   250,   256,   258,   262,   266,   269,
     270,   273,   275,   277,   279,   281,   283,   285,   287,   289,
     291,   293,   294,   295,   302,   303,   304,   311,   312,   313,
     320,   321,   322,   329,   330,   331,   337,   338,   339,   345,
     346,   347,   353,   354,   355,   361,   362,   363,   364,   365,
     373,   374,   382,   383,   391,   392,   399,   401,   403,   405,
     407,   409,   410,   415,   418,   420,   423,   425,   428,   430,
     433,   435,   438,   440,   443,   445,   448,   450,   452,   454,
     456,   457,   458,   466,   470,   472,   474,   476,   477,   484,
     488,   490,   491,   492,   493,   494,   502,   503,   506,   508,
     510,   512,   514,   517,   521,   522,   523,   532,   533,   537,
     543,   545,   549,   551,   553,   557,   560,   562,   564,   566,
     568,   570,   572,   574,   576,   578,   580,   582,   586,   590,
     592,   596,   600,   602,   603,   608,   609,   612,   614,   616,
     618,   621,   624,   625,   626,   627,   638,   639,   644,   646,
     648,   650,   652,   653,   654,   655,   656,   657,   672,   673,
     674,   675,   686,   687,   688,   698,   699,   700,   701,   712,
     715,   717,   718,   726,   727,   732,   734,   736,   738,   740,
     742,   744,   745,   746,   747,   755,   756,   757,   758,   766,
     767,   768,   769,   777,   778,   779,   780,   788,   789,   790,
     791,   798,   799,   800,   801,   808,   809,   810,   816,   817,
     818
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      83,     0,    -1,    -1,    84,    85,   151,    -1,   151,    -1,
      -1,    -1,    65,   156,     7,     4,    86,    25,    89,    26,
      87,    72,    92,   100,    88,    67,    -1,    73,    95,    52,
      -1,    -1,    91,     6,    90,    89,    -1,    91,    -1,     4,
       7,   156,    -1,    92,     5,   156,     7,    93,    52,    -1,
       5,   156,     7,    93,    52,    -1,     4,    -1,    -1,     4,
       6,    94,    93,    -1,    95,    28,    96,    -1,    95,    29,
      96,    -1,    96,    -1,    96,    30,    97,    -1,    96,    31,
      97,    -1,    97,    -1,    -1,    25,    98,    95,    26,    -1,
      -1,     4,    99,    -1,     8,    -1,     9,    -1,    10,    -1,
      29,     8,    -1,    29,     9,    -1,   100,   101,    -1,   101,
      -1,   100,   116,    -1,   116,    -1,   100,   113,    -1,   113,
      -1,   100,   111,    -1,   111,    -1,   100,   107,    -1,   107,
      -1,   100,   102,    -1,   102,    -1,   146,    52,    -1,   123,
      -1,    21,    -1,    22,    -1,    -1,    -1,    50,    25,     4,
     103,   104,    26,    12,   105,    13,    -1,   105,   106,    -1,
     106,    -1,    51,   185,     7,   100,    53,    52,    -1,    54,
       7,   100,    -1,   108,    -1,   109,    -1,   110,    -1,    56,
       4,    57,   121,    58,   121,    61,   100,    59,    -1,    60,
      25,   119,    26,    61,   100,    62,    -1,    63,   100,    64,
      25,   119,    26,    52,    -1,    27,    25,   112,    26,    52,
      -1,   112,     6,     4,    -1,     4,    -1,    24,    25,   114,
      26,    52,    -1,   114,     6,   115,    -1,   115,    -1,    76,
      -1,    95,    -1,   117,    48,    -1,   117,   118,    48,    -1,
      45,    25,   119,    26,    46,   100,    -1,    47,   100,    -1,
      25,   120,    26,   183,   119,    -1,   120,    -1,    25,   120,
      26,    -1,   121,   186,   121,    -1,    34,   119,    -1,    -1,
       4,   122,    -1,     8,    -1,     9,    -1,    10,    -1,    76,
      -1,   136,    -1,   141,    -1,   124,    -1,   127,    -1,   130,
      -1,   133,    -1,    -1,    -1,     4,   125,   126,    41,   100,
      52,    -1,    -1,    -1,     4,   128,   129,    42,   100,    52,
      -1,    -1,    -1,     4,   131,   132,    43,   100,    52,    -1,
      -1,    -1,     4,   134,   135,    44,   100,    52,    -1,    -1,
      -1,     4,   137,   138,    39,    52,    -1,    -1,    -1,    39,
       4,   139,   140,    52,    -1,    -1,    -1,     4,   142,   143,
      40,    52,    -1,    -1,    -1,    40,     4,   144,   145,    52,
      -1,    -1,    -1,    -1,    -1,     4,   147,   148,   149,    36,
     150,    95,    -1,    -1,     3,     4,   152,   153,    15,   159,
      23,    -1,    -1,   153,     5,   154,   156,     7,   157,    52,
      -1,    -1,     5,   155,   156,     7,   157,    52,    -1,    79,
      -1,    80,    -1,    81,    -1,    76,    -1,     4,    -1,    -1,
       4,     6,   158,   157,    -1,   159,   160,    -1,   160,    -1,
     159,   176,    -1,   176,    -1,   159,   161,    -1,   161,    -1,
     159,   166,    -1,   166,    -1,   159,   198,    -1,   198,    -1,
     159,   212,    -1,   212,    -1,   169,    52,    -1,   220,    -1,
     192,    -1,    21,    -1,    22,    -1,    -1,    -1,   162,    24,
      25,   164,   163,    26,    52,    -1,   164,     6,   165,    -1,
     165,    -1,    76,    -1,     4,    -1,    -1,    27,    25,   167,
     168,    26,    52,    -1,   168,     6,     4,    -1,     4,    -1,
      -1,    -1,    -1,    -1,     4,   170,   171,   172,    36,   173,
     187,    -1,    -1,     4,   175,    -1,     8,    -1,     9,    -1,
      10,    -1,    76,    -1,   177,    48,    -1,   177,   180,    48,
      -1,    -1,    -1,    45,   178,    25,   182,    26,   179,    46,
     159,    -1,    -1,    47,   181,   159,    -1,    25,   184,    26,
     183,   182,    -1,   184,    -1,    25,   184,    26,    -1,    33,
      -1,    35,    -1,   174,   186,   174,    -1,    34,   182,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,     4,    -1,
      66,    -1,    77,    -1,    78,    -1,    16,    -1,    37,    -1,
      38,    -1,   187,    28,   188,    -1,   187,    29,   188,    -1,
     188,    -1,   188,    30,   189,    -1,   188,    31,   189,    -1,
     189,    -1,    -1,    25,   190,   187,    26,    -1,    -1,     4,
     191,    -1,     8,    -1,     9,    -1,    10,    -1,    29,     8,
      -1,    29,     9,    -1,    -1,    -1,    -1,     4,   193,    66,
       4,    25,   194,   196,   195,    26,    52,    -1,    -1,   174,
       6,   197,   196,    -1,   174,    -1,   199,    -1,   205,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    56,   200,     4,
     201,    57,   174,    58,   202,   174,   203,   204,    61,   159,
      59,    -1,    -1,    -1,    -1,    60,    25,   206,   182,    26,
     207,    61,   208,   159,    62,    -1,    -1,    -1,    63,   210,
     159,    64,    25,   211,   182,    26,    52,    -1,    -1,    -1,
      -1,    50,    25,     4,   213,   214,    26,   215,    12,   216,
      13,    -1,   216,   217,    -1,   217,    -1,    -1,    51,   185,
       7,   218,   159,    53,    52,    -1,    -1,    54,   219,     7,
     159,    -1,   237,    -1,   244,    -1,   221,    -1,   225,    -1,
     229,    -1,   233,    -1,    -1,    -1,    -1,     4,   222,   223,
      41,   224,   187,    52,    -1,    -1,    -1,    -1,     4,   226,
     227,    42,   228,   187,    52,    -1,    -1,    -1,    -1,     4,
     230,   231,    43,   232,   187,    52,    -1,    -1,    -1,    -1,
       4,   234,   235,    44,   236,   187,    52,    -1,    -1,    -1,
      -1,     4,   238,   239,    39,   240,    52,    -1,    -1,    -1,
      -1,    39,   241,     4,   242,   243,    52,    -1,    -1,    -1,
       4,   245,   246,    40,    52,    -1,    -1,    -1,    40,     4,
     247,   248,    52,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   131,   131,   131,   132,   138,   139,   138,   142,   145,
     145,   146,   148,   152,   153,   156,   161,   161,   172,   173,
     174,   177,   178,   179,   182,   182,   183,   183,   194,   195,
     196,   197,   198,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   215,   216,   217,   218,   221,
     221,   221,   224,   225,   227,   228,   231,   232,   233,   237,
     240,   243,   246,   249,   250,   253,   256,   257,   260,   261,
     265,   266,   269,   271,   275,   276,   277,   280,   281,   284,
     284,   285,   286,   287,   288,   292,   293,   294,   295,   296,
     297,   299,   301,   299,   309,   311,   309,   319,   321,   319,
     329,   331,   329,   340,   342,   340,   349,   351,   349,   359,
     361,   359,   368,   370,   368,   378,   379,   383,   384,   378,
     390,   389,   401,   401,   402,   402,   405,   406,   407,   408,
     412,   417,   417,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   441,   442,   443,   444,   445,
     448,   448,   448,   452,   453,   456,   457,   478,   478,   481,
     482,   504,   505,   509,   510,   504,   513,   513,   514,   515,
     516,   517,   525,   526,   529,   529,   529,   531,   531,   535,
     536,   537,   539,   540,   542,   543,   545,   546,   547,   548,
     549,   552,   553,   554,   555,   556,   557,   559,   560,   561,
     564,   565,   566,   569,   569,   570,   570,   579,   580,   581,
     582,   583,   586,   592,   592,   586,   596,   596,   597,   599,
     600,   601,   605,   605,   606,   606,   607,   605,   610,   610,
     610,   610,   614,   614,   614,   618,   618,   620,   618,   623,
     624,   626,   626,   627,   627,   630,   631,   632,   633,   634,
     635,   637,   639,   645,   637,   647,   649,   655,   647,   657,
     659,   665,   657,   667,   669,   675,   667,   678,   680,   686,
     678,   687,   687,   689,   687,   697,   699,   697,   706,   708,
     706
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
  "FINPROC", "AFFICHAGE", "DOUBLE_COTES", "DEB_FCT", "RETOURNE",
  "DEB_PROC", "CONST", "STRING", "DIFF", "INF", "INTD", "FLOATD", "CHARD",
  "$accept", "program", "$@1", "listFonction", "$@2", "$@3", "return",
  "listArg", "$@4", "arg", "declarationF", "listidentifs", "$@5",
  "expressionArithmeticF", "termF", "factorF", "$@6", "$@7", "listinstF",
  "instF", "switchF", "$@8", "$@9", "listdesCasF", "lesCasF", "boucleF",
  "pourF", "tantqueF", "repeterF", "lectureF", "appel_varsF", "affichageF",
  "parametresF", "paramF", "exprSiF", "instSiF", "instSinonF",
  "conditionF", "coF", "exprF", "$@10", "expressionSuppF",
  "assignationAddF", "$@11", "$@12", "assignationSousF", "$@13", "$@14",
  "assignationMultF", "$@15", "$@16", "assignationDivF", "$@17", "$@18",
  "incrementationF", "$@19", "$@20", "$@21", "$@22", "decrementationF",
  "$@23", "$@24", "$@25", "$@26", "affectationF", "$@27", "$@28", "$@29",
  "$@30", "main", "$@31", "declaration", "$@32", "$@33", "type",
  "identifs", "$@34", "listInst", "inst", "affichage", "$@35", "$@36",
  "parametres", "param", "lecture", "$@37", "appel_vars", "affectation",
  "$@38", "$@39", "$@40", "$@41", "expr", "$@42", "exprSi", "instSi",
  "$@43", "$@44", "instSinon", "$@45", "condition", "opeLogique", "co",
  "valeur", "cond", "expressionArithmetic", "term", "factor", "$@46",
  "$@47", "appelFct", "$@48", "$@49", "$@50", "Parametre", "$@51",
  "boucle", "pour", "$@52", "$@53", "$@54", "$@55", "$@56", "tantque",
  "$@57", "$@58", "$@59", "repeter", "$@60", "$@61", "switch", "$@62",
  "$@63", "$@64", "listdesCas", "lesCas", "$@65", "$@66", "expressionSupp",
  "assignationAdd", "$@67", "$@68", "$@69", "assignationSous", "$@70",
  "$@71", "$@72", "assignationMult", "$@73", "$@74", "$@75",
  "assignationDiv", "$@76", "$@77", "$@78", "incrementation", "$@79",
  "$@80", "$@81", "$@82", "$@83", "$@84", "decrementation", "$@85", "$@86",
  "$@87", "$@88", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    84,    83,    83,    86,    87,    85,    88,    90,
      89,    89,    91,    92,    92,    93,    94,    93,    95,    95,
      95,    96,    96,    96,    98,    97,    99,    97,    97,    97,
      97,    97,    97,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   103,
     104,   102,   105,   105,   106,   106,   107,   107,   107,   108,
     109,   110,   111,   112,   112,   113,   114,   114,   115,   115,
     116,   116,   117,   118,   119,   119,   119,   120,   120,   122,
     121,   121,   121,   121,   121,   123,   123,   123,   123,   123,
     123,   125,   126,   124,   128,   129,   127,   131,   132,   130,
     134,   135,   133,   137,   138,   136,   139,   140,   136,   142,
     143,   141,   144,   145,   141,   147,   148,   149,   150,   146,
     152,   151,   154,   153,   155,   153,   156,   156,   156,   156,
     157,   158,   157,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   160,   160,   160,   160,   160,
     162,   163,   161,   164,   164,   165,   165,   167,   166,   168,
     168,   170,   171,   172,   173,   169,   175,   174,   174,   174,
     174,   174,   176,   176,   178,   179,   177,   181,   180,   182,
     182,   182,   183,   183,   184,   184,   185,   185,   185,   185,
     185,   186,   186,   186,   186,   186,   186,   187,   187,   187,
     188,   188,   188,   190,   189,   191,   189,   189,   189,   189,
     189,   189,   193,   194,   195,   192,   197,   196,   196,   198,
     198,   198,   200,   201,   202,   203,   204,   199,   206,   207,
     208,   205,   210,   211,   209,   213,   214,   215,   212,   216,
     216,   218,   217,   219,   217,   220,   220,   220,   220,   220,
     220,   222,   223,   224,   221,   226,   227,   228,   225,   230,
     231,   232,   229,   234,   235,   236,   233,   238,   239,   240,
     237,   241,   242,   243,   237,   245,   246,   244,   247,   248,
     244
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     1,     0,     0,    14,     3,     0,
       4,     1,     3,     6,     5,     1,     0,     4,     3,     3,
       1,     3,     3,     1,     0,     4,     0,     2,     1,     1,
       1,     2,     2,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     0,
       0,     9,     2,     1,     6,     3,     1,     1,     1,     9,
       7,     7,     5,     3,     1,     5,     3,     1,     1,     1,
       2,     3,     6,     2,     5,     1,     3,     3,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     0,     6,     0,     0,     6,     0,     0,     6,
       0,     0,     6,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     0,     0,     0,     0,     7,
       0,     7,     0,     7,     0,     6,     1,     1,     1,     1,
       1,     0,     4,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       0,     0,     7,     3,     1,     1,     1,     0,     6,     3,
       1,     0,     0,     0,     0,     7,     0,     2,     1,     1,
       1,     1,     2,     3,     0,     0,     8,     0,     3,     5,
       1,     3,     1,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     0,     4,     0,     2,     1,     1,     1,
       2,     2,     0,     0,     0,    10,     0,     4,     1,     1,
       1,     1,     0,     0,     0,     0,     0,    14,     0,     0,
       0,    10,     0,     0,     9,     0,     0,     0,    10,     2,
       1,     0,     7,     0,     4,     1,     1,     1,     1,     1,
       1,     0,     0,     0,     7,     0,     0,     0,     7,     0,
       0,     0,     7,     0,     0,     0,     7,     0,     0,     0,
       6,     0,     0,     0,     6,     0,     0,     5,     0,     0,
       5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     4,   120,     1,     0,     0,     0,
     129,   126,   127,   128,     0,     3,   124,     0,     0,     0,
     122,   150,     5,     0,     0,   161,   148,   149,     0,   271,
       0,   174,     0,   222,     0,   232,   150,   134,   138,     0,
     140,     0,   136,     0,   147,   142,   219,   220,   221,   144,
     146,   247,   248,   249,   250,   245,   246,     0,     0,     0,
     162,     0,   252,   256,   260,   264,   268,   276,   157,     0,
     278,     0,     0,     0,   228,   150,   121,   133,   137,   139,
     135,   141,   143,     0,   145,   177,   172,     0,     0,   130,
       0,     0,   163,     0,     0,     0,     0,     0,     0,     0,
       0,   272,   279,     0,   235,   223,     0,   150,     0,   150,
     173,     0,     0,    11,   131,   125,     0,     0,     0,   253,
     257,   261,   265,   269,     0,   160,     0,   273,     0,   166,
     168,   169,   170,     0,     0,   171,     0,     0,   180,   236,
       0,     0,     0,   156,   155,   151,   154,   150,     0,     6,
       9,     0,   123,   164,   213,     0,     0,     0,     0,     0,
     277,     0,     0,     0,   280,   167,     0,   185,   194,   195,
     196,   191,   192,   193,     0,   175,     0,     0,   229,   233,
       0,     0,    12,     0,     0,   132,     0,     0,   205,   207,
     208,   209,   203,     0,     0,   199,   202,     0,     0,     0,
     270,   159,   158,   274,   181,   184,     0,   237,     0,     0,
       0,   153,     0,     0,    10,   165,   218,   214,   206,     0,
     210,   211,     0,     0,   254,     0,     0,   258,   262,   266,
     182,   183,     0,   150,     0,   224,   230,     0,   152,     0,
       0,   216,     0,     0,   197,   198,   200,   201,   179,   176,
       0,     0,   150,     0,     0,    91,     0,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      44,    42,    56,    57,    58,    40,    38,    36,     0,    46,
      87,    88,    89,    90,    85,    86,     0,     0,     0,   204,
       0,   243,     0,   240,   225,   150,   234,     0,    92,    95,
      98,   101,   104,   110,   116,     0,     0,     0,   106,   112,
       0,     0,     0,     0,     0,     0,     0,    33,    43,    41,
      39,    37,    35,     0,    70,     0,    45,   217,   215,   190,
     186,   187,   188,   189,     0,     0,   238,   239,   226,   231,
      15,     0,     0,     0,     0,     0,     0,     0,   117,     0,
      26,    28,    29,    30,    24,     0,    68,    69,    20,    23,
       0,    67,    64,     0,   107,   113,    79,    81,    82,    83,
       0,     0,    84,     0,    75,     0,    49,     0,     0,     0,
       0,     7,    73,    71,   241,   150,     0,    16,    14,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,    78,     0,     0,    50,     0,     0,     0,
       8,   150,   244,   150,     0,     0,     0,     0,     0,   105,
     111,   118,    13,     0,    18,    19,    21,    22,    66,    65,
      63,    62,   108,   114,    76,     0,    77,     0,     0,     0,
       0,   150,   150,    17,    93,    96,    99,   102,     0,    25,
       0,    72,     0,     0,     0,     0,     0,   227,   119,    74,
       0,     0,    60,    61,   242,     0,     0,     0,    53,     0,
       0,     0,    51,    52,    59,     0,    55,     0,     0,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,    57,   183,   316,   112,   184,   113,
     240,   341,   424,   357,   358,   359,   398,   397,   268,   269,
     270,   416,   447,   477,   478,   271,   272,   273,   274,   275,
     363,   276,   360,   361,   277,   278,   325,   373,   374,   375,
     411,   279,   280,   298,   342,   281,   299,   343,   282,   300,
     344,   283,   301,   345,   284,   302,   346,   364,   409,   285,
     303,   347,   365,   410,   286,   304,   348,   395,   458,     4,
       9,    17,    24,    19,    14,    90,   151,    36,    37,    38,
      39,   181,   145,   146,    40,   100,   126,    41,    60,    92,
     117,   186,   136,   165,    42,    43,    71,   206,    87,   109,
     137,   232,   138,   334,   174,   194,   195,   196,   219,   218,
      44,    61,   187,   242,   217,   287,    45,    46,    73,   140,
     251,   338,   386,    47,   106,   209,   252,    48,    75,   210,
      49,   139,   176,   234,   292,   293,   421,   335,    50,    51,
      62,    94,   155,    52,    63,    95,   156,    53,    64,    96,
     157,    54,    65,    97,   158,    55,    66,    98,   159,    69,
     127,   163,    56,    67,    99,   102,   128
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -375
static const yytype_int16 yypact[] =
{
      19,    51,    26,   -31,  -375,  -375,  -375,   234,    19,    58,
    -375,  -375,  -375,  -375,    75,  -375,  -375,    37,    96,   234,
    -375,   738,  -375,   105,   234,   214,  -375,  -375,    91,  -375,
     120,  -375,   122,  -375,   128,  -375,   593,  -375,  -375,    94,
    -375,   115,  -375,    39,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,   132,   141,   170,
    -375,   117,  -375,  -375,  -375,  -375,  -375,  -375,  -375,   191,
    -375,   185,   208,   212,  -375,   738,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,   195,  -375,  -375,  -375,   184,   220,   236,
     223,   141,  -375,   256,   225,   222,   229,   235,   251,   241,
     298,  -375,  -375,    15,  -375,  -375,    15,   406,     9,   738,
    -375,   318,   279,   329,  -375,  -375,   285,   304,   321,  -375,
    -375,  -375,  -375,  -375,   296,  -375,    22,  -375,   313,  -375,
    -375,  -375,  -375,    56,    15,  -375,   246,   324,  -375,  -375,
     309,   341,   344,  -375,  -375,   364,  -375,   615,   234,  -375,
    -375,   141,  -375,  -375,  -375,   129,   129,   129,   129,   322,
    -375,   369,   325,   328,  -375,  -375,   355,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,   176,  -375,   356,   176,  -375,  -375,
       9,   357,  -375,   317,   220,  -375,   129,   176,  -375,  -375,
    -375,  -375,  -375,    87,    40,    76,  -375,   114,   127,   242,
    -375,  -375,  -375,  -375,    10,  -375,   338,  -375,   327,   326,
      15,  -375,   339,   388,  -375,    99,   389,  -375,  -375,   129,
    -375,  -375,   129,   129,  -375,   129,   129,  -375,  -375,  -375,
    -375,  -375,    15,   738,   385,  -375,  -375,   372,  -375,   234,
     408,  -375,   373,   300,    76,    76,  -375,  -375,  -375,   637,
      -7,   176,   738,   348,   394,   253,   234,  -375,  -375,   377,
     378,   400,   401,   381,   382,   404,   384,   646,   282,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,    93,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,   359,   176,   362,  -375,
     350,  -375,     8,  -375,  -375,   668,  -375,   427,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,   429,    29,   430,  -375,  -375,
      89,   434,   383,    89,   312,   189,   374,  -375,  -375,  -375,
    -375,  -375,  -375,   646,  -375,   391,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,   435,   436,  -375,  -375,  -375,  -375,
     438,   397,   409,   410,   418,   419,   426,   440,  -375,   427,
    -375,  -375,  -375,  -375,  -375,   154,  -375,   153,   157,  -375,
      25,  -375,  -375,    30,  -375,  -375,  -375,  -375,  -375,  -375,
     100,    89,  -375,   441,  -375,   246,  -375,   192,   448,   450,
     249,  -375,   646,  -375,  -375,   738,   423,  -375,  -375,   646,
     646,   646,   646,   439,   445,   451,   454,  -375,   189,  -375,
    -375,   189,   189,   189,   189,    29,   456,   482,   457,   458,
     460,  -375,   462,  -375,   444,   192,  -375,   461,   431,    89,
    -375,   738,   637,   738,   427,   433,   455,   477,   499,  -375,
    -375,  -375,  -375,   315,   157,   157,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,    10,   646,  -375,   476,   192,   646,
     487,   694,   716,  -375,  -375,  -375,  -375,  -375,   189,  -375,
      89,   646,   502,   463,   521,   478,   479,  -375,   153,  -375,
      -1,   646,  -375,  -375,  -375,   350,   525,    16,  -375,   546,
     527,   646,  -375,  -375,  -375,   646,   646,   568,   483,  -375
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -375,  -375,  -375,  -375,  -375,  -375,  -375,   352,  -375,  -375,
    -375,  -340,  -375,  -310,  -166,  -116,  -375,  -375,  -240,  -257,
    -253,  -375,  -375,  -375,    64,  -236,  -375,  -375,  -375,  -188,
    -375,  -179,  -375,   123,  -108,  -375,  -375,  -299,   177,  -374,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,   538,
    -375,  -375,  -375,  -375,   -12,   -75,  -375,   -74,   -36,   -34,
    -375,  -375,  -375,   376,   -32,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -157,  -375,   -30,  -375,  -375,  -375,  -375,  -375,
     -88,   109,   421,    77,   182,   -55,   108,   138,  -375,  -375,
    -375,  -375,  -375,  -375,   271,  -375,   -28,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
     -26,  -375,  -375,  -375,  -375,   272,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -276
static const yytype_int16 yytable[] =
{
      77,   107,    78,   417,    79,   380,    80,    23,    81,   396,
      82,   317,    59,   143,   378,   318,   116,   205,   141,   129,
     208,   336,     1,   130,   131,   132,     6,   314,   161,   482,
     216,   405,   319,   350,     7,   147,   407,   351,   352,   353,
     133,   446,    20,   230,   290,   231,   167,   291,   162,   134,
     475,   406,    21,   476,   354,     5,   408,   317,   355,   290,
     129,   318,   291,    16,   130,   131,   132,   475,   222,   223,
     476,    77,   413,    78,   463,    79,   185,    80,   319,    81,
     320,    82,    18,   382,   453,   144,    85,    86,   433,   321,
     134,   135,   224,   366,   294,   220,   221,   367,   368,   369,
      22,   197,   198,   199,   366,   356,   225,   226,   367,   368,
     369,    77,    58,    78,   370,    79,    68,    80,    83,    81,
     450,    82,   237,   371,    70,   317,   320,   222,   223,   318,
     216,   215,   135,   188,   371,   321,   182,   189,   190,   191,
     323,   324,   222,   223,   248,    89,   319,    72,   468,   425,
     426,   427,   428,    74,   192,   222,   223,    88,   193,   249,
     322,   469,   399,   400,   243,   372,   227,    84,   317,   317,
     317,   317,   318,   318,   318,   318,   372,    91,   295,   228,
     129,   401,   402,    93,   130,   131,   132,   403,   404,   319,
     319,   319,   319,   350,   320,   101,   366,   351,   352,   353,
     367,   368,   369,   321,   317,   461,   322,   317,   318,   464,
     103,   318,   104,    77,   354,    78,   105,    79,   355,    80,
     108,    81,   317,    82,   111,   319,   318,   254,   319,   317,
     317,   479,   110,   318,   318,   434,   435,   320,   320,   320,
     320,   486,   114,   319,   305,   487,   321,   321,   321,   321,
     319,   319,   135,  -267,  -275,  -251,  -255,  -259,  -263,    77,
     118,    78,   168,    79,   120,    80,   119,    81,   372,    82,
     222,   223,   121,   320,   322,   115,   320,   401,   402,   122,
    -212,   124,   321,   169,   170,   321,   255,   436,   437,  -115,
     123,   320,  -103,  -109,   229,   -94,   -97,  -100,   320,   320,
     321,   420,   125,   257,   258,   149,   259,   321,   321,   260,
      10,   422,   171,    11,    12,    13,   255,   322,   322,   322,
     322,   261,   262,   172,   173,   148,   289,   263,   222,   223,
     244,   245,   264,   257,   258,   150,   259,   152,   265,   260,
     153,   459,   266,   401,   402,   267,   154,   451,   160,   452,
     175,   261,   262,   322,   329,   315,   322,   263,   330,   331,
     332,   333,   264,   246,   247,   164,   177,   178,   265,   179,
     180,   322,   266,   201,   200,   267,   379,   202,   322,   322,
     203,   204,   207,   212,   233,   235,    77,   236,    78,   213,
      79,   238,    80,   239,    81,   241,    82,   250,   253,   288,
     296,   297,   306,   307,   308,   309,   310,   311,   312,   313,
      25,   326,   255,   256,   328,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    26,    27,   257,
     258,   340,   259,    28,   362,   260,   349,   255,   376,   383,
     377,   381,   384,   385,   387,    29,    30,   261,   262,   388,
     389,    31,   390,   263,   257,   258,    32,   259,   264,   255,
     260,   391,    33,   392,   265,   393,    34,   414,   266,    35,
     142,   267,   261,   262,   418,   419,   257,   258,   263,   259,
     394,   255,   260,   264,   423,   454,   440,   431,   444,   265,
     445,   429,   449,   266,   261,   262,   267,   430,   257,   258,
     263,   259,   462,   255,   260,   264,   432,   455,   439,   441,
     442,   265,   443,   465,   470,   266,   261,   262,   267,   448,
     257,   258,   263,   259,   471,   255,   260,   264,   438,   456,
     473,   474,   481,   265,   485,   489,   214,   266,   261,   262,
     267,   483,   257,   258,   263,   259,    15,   412,   260,   264,
     255,   457,   480,   460,   166,   265,   211,   415,   327,   266,
     261,   262,   267,     0,   337,     0,   263,   257,   258,     0,
     259,   264,   255,   260,     0,     0,     0,   265,     0,     0,
       0,   266,     0,   472,   267,   261,   262,     0,     0,   257,
     258,   263,   259,     0,     0,   260,   264,    25,     0,     0,
       0,     0,   265,     0,     0,   484,   266,   261,   262,   267,
       0,     0,     0,   263,    26,    27,    76,     0,   264,    25,
      28,   488,     0,     0,   265,     0,     0,     0,   266,     0,
       0,   267,    29,    30,     0,     0,    26,    27,    31,     0,
       0,    25,    28,    32,     0,     0,     0,     0,     0,    33,
     255,     0,     0,    34,    29,    30,    35,     0,    26,    27,
      31,  -150,     0,  -178,    28,    32,     0,   257,   258,     0,
     259,    33,    25,   260,     0,    34,    29,    30,    35,     0,
       0,     0,    31,     0,     0,   261,   262,    32,     0,    26,
      27,   263,     0,    33,     0,    28,   264,    34,    25,     0,
      35,     0,   265,     0,     0,     0,   266,    29,    30,   267,
       0,     0,     0,    31,     0,    26,    27,     0,    32,     0,
      25,    28,     0,     0,    33,     0,     0,     0,    34,     0,
     339,    35,     0,    29,    30,     0,     0,    26,    27,    31,
       0,     0,    25,    28,    32,     0,     0,   466,     0,     0,
      33,     0,     0,     0,    34,    29,    30,    35,     0,    26,
      27,    31,     0,     0,     0,    28,    32,     0,     0,     0,
       0,     0,    33,     0,     0,   467,    34,    29,    30,    35,
       0,     0,     0,    31,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    34,     0,
       0,    35
};

static const yytype_int16 yycheck[] =
{
      36,    75,    36,   377,    36,   315,    36,    19,    36,   349,
      36,   268,    24,     4,   313,   268,    91,   174,   106,     4,
     177,    13,     3,     8,     9,    10,     0,   267,     6,    13,
     187,     6,   268,     4,    65,   109,     6,     8,     9,    10,
      25,   415,     5,    33,    51,    35,   134,    54,    26,    34,
      51,    26,    15,    54,    25,     4,    26,   314,    29,    51,
       4,   314,    54,     5,     8,     9,    10,    51,    28,    29,
      54,   107,   371,   107,   448,   107,   151,   107,   314,   107,
     268,   107,     7,   323,   424,    76,    47,    48,   398,   268,
      34,    76,    52,     4,   251,     8,     9,     8,     9,    10,
       4,   156,   157,   158,     4,    76,    30,    31,     8,     9,
      10,   147,     7,   147,    25,   147,    25,   147,    24,   147,
     419,   147,   210,    34,     4,   382,   314,    28,    29,   382,
     287,   186,    76,     4,    34,   314,   148,     8,     9,    10,
      47,    48,    28,    29,   232,     4,   382,    25,   458,   389,
     390,   391,   392,    25,    25,    28,    29,    25,    29,   233,
     268,   460,     8,     9,   219,    76,    52,    52,   425,   426,
     427,   428,   425,   426,   427,   428,    76,     7,   252,    52,
       4,    28,    29,    66,     8,     9,    10,    30,    31,   425,
     426,   427,   428,     4,   382,     4,     4,     8,     9,    10,
       8,     9,    10,   382,   461,   445,   314,   464,   461,   449,
      25,   464,     4,   249,    25,   249,     4,   249,    29,   249,
      25,   249,   479,   249,     4,   461,   479,   239,   464,   486,
     487,   471,    48,   486,   487,   401,   402,   425,   426,   427,
     428,   481,     6,   479,   256,   485,   425,   426,   427,   428,
     486,   487,    76,    39,    40,    41,    42,    43,    44,   295,
       4,   295,    16,   295,    42,   295,    41,   295,    76,   295,
      28,    29,    43,   461,   382,    52,   464,    28,    29,    44,
      66,    40,   461,    37,    38,   464,     4,   403,   404,    36,
      39,   479,    39,    40,    52,    42,    43,    44,   486,   487,
     479,    52,     4,    21,    22,    26,    24,   486,   487,    27,
      76,   385,    66,    79,    80,    81,     4,   425,   426,   427,
     428,    39,    40,    77,    78,     7,    26,    45,    28,    29,
     222,   223,    50,    21,    22,     6,    24,    52,    56,    27,
      36,    26,    60,    28,    29,    63,    25,   421,    52,   423,
      26,    39,    40,   461,     4,    73,   464,    45,     8,     9,
      10,    11,    50,   225,   226,    52,    57,    26,    56,    25,
       6,   479,    60,     4,    52,    63,    64,    52,   486,   487,
      52,    26,    26,    26,    46,    58,   422,    61,   422,    72,
     422,    52,   422,     5,   422,     6,   422,    12,    26,    26,
      52,     7,    25,    25,     4,     4,    25,    25,     4,    25,
       4,    52,     4,     5,    52,   451,   452,   451,   452,   451,
     452,   451,   452,   451,   452,   451,   452,    21,    22,    21,
      22,     4,    24,    27,     4,    27,     7,     4,     4,    48,
      57,    67,     7,     7,     6,    39,    40,    39,    40,    52,
      41,    45,    42,    45,    21,    22,    50,    24,    50,     4,
      27,    43,    56,    44,    56,    39,    60,    26,    60,    63,
      64,    63,    39,    40,    26,    25,    21,    22,    45,    24,
      40,     4,    27,    50,    61,    52,     4,    36,    26,    56,
      46,    52,    61,    60,    39,    40,    63,    52,    21,    22,
      45,    24,    26,     4,    27,    50,    52,    52,    52,    52,
      52,    56,    52,    26,    12,    60,    39,    40,    63,    58,
      21,    22,    45,    24,    61,     4,    27,    50,   405,    52,
      52,    52,     7,    56,     7,    52,   184,    60,    39,    40,
      63,   477,    21,    22,    45,    24,     8,   370,    27,    50,
       4,    52,   475,   444,   133,    56,   180,   375,   287,    60,
      39,    40,    63,    -1,   292,    -1,    45,    21,    22,    -1,
      24,    50,     4,    27,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    60,    -1,    62,    63,    39,    40,    -1,    -1,    21,
      22,    45,    24,    -1,    -1,    27,    50,     4,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    59,    60,    39,    40,    63,
      -1,    -1,    -1,    45,    21,    22,    23,    -1,    50,     4,
      27,    53,    -1,    -1,    56,    -1,    -1,    -1,    60,    -1,
      -1,    63,    39,    40,    -1,    -1,    21,    22,    45,    -1,
      -1,     4,    27,    50,    -1,    -1,    -1,    -1,    -1,    56,
       4,    -1,    -1,    60,    39,    40,    63,    -1,    21,    22,
      45,    24,    -1,    48,    27,    50,    -1,    21,    22,    -1,
      24,    56,     4,    27,    -1,    60,    39,    40,    63,    -1,
      -1,    -1,    45,    -1,    -1,    39,    40,    50,    -1,    21,
      22,    45,    -1,    56,    -1,    27,    50,    60,     4,    -1,
      63,    -1,    56,    -1,    -1,    -1,    60,    39,    40,    63,
      -1,    -1,    -1,    45,    -1,    21,    22,    -1,    50,    -1,
       4,    27,    -1,    -1,    56,    -1,    -1,    -1,    60,    -1,
      62,    63,    -1,    39,    40,    -1,    -1,    21,    22,    45,
      -1,    -1,     4,    27,    50,    -1,    -1,    53,    -1,    -1,
      56,    -1,    -1,    -1,    60,    39,    40,    63,    -1,    21,
      22,    45,    -1,    -1,    -1,    27,    50,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    59,    60,    39,    40,    63,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    -1,
      -1,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    83,    84,   151,     4,     0,    65,    85,   152,
      76,    79,    80,    81,   156,   151,     5,   153,     7,   155,
       5,    15,     4,   156,   154,     4,    21,    22,    27,    39,
      40,    45,    50,    56,    60,    63,   159,   160,   161,   162,
     166,   169,   176,   177,   192,   198,   199,   205,   209,   212,
     220,   221,   225,   229,   233,   237,   244,    86,     7,   156,
     170,   193,   222,   226,   230,   234,   238,   245,    25,   241,
       4,   178,    25,   200,    25,   210,    23,   160,   161,   166,
     176,   198,   212,    24,    52,    47,    48,   180,    25,     4,
     157,     7,   171,    66,   223,   227,   231,   235,   239,   246,
     167,     4,   247,    25,     4,     4,   206,   159,    25,   181,
      48,     4,    89,    91,     6,    52,   157,   172,     4,    41,
      42,    43,    44,    39,    40,     4,   168,   242,   248,     4,
       8,     9,    10,    25,    34,    76,   174,   182,   184,   213,
     201,   182,    64,     4,    76,   164,   165,   159,     7,    26,
       6,   158,    52,    36,    25,   224,   228,   232,   236,   240,
      52,     6,    26,   243,    52,   175,   184,   182,    16,    37,
      38,    66,    77,    78,   186,    26,   214,    57,    26,    25,
       6,   163,   156,    87,    90,   157,   173,   194,     4,     8,
       9,    10,    25,    29,   187,   188,   189,   187,   187,   187,
      52,     4,    52,    52,    26,   174,   179,    26,   174,   207,
     211,   165,    26,    72,    89,   187,   174,   196,   191,   190,
       8,     9,    28,    29,    52,    30,    31,    52,    52,    52,
      33,    35,   183,    46,   215,    58,    61,   182,    52,     5,
      92,     6,   195,   187,   188,   188,   189,   189,   182,   159,
      12,   202,   208,    26,   156,     4,     5,    21,    22,    24,
      27,    39,    40,    45,    50,    56,    60,    63,   100,   101,
     102,   107,   108,   109,   110,   111,   113,   116,   117,   123,
     124,   127,   130,   133,   136,   141,   146,   197,    26,    26,
      51,    54,   216,   217,   174,   159,    52,     7,   125,   128,
     131,   134,   137,   142,   147,   156,    25,    25,     4,     4,
      25,    25,     4,    25,   100,    73,    88,   101,   102,   107,
     111,   113,   116,    47,    48,   118,    52,   196,    52,     4,
       8,     9,    10,    11,   185,   219,    13,   217,   203,    62,
       4,    93,   126,   129,   132,   135,   138,   143,   148,     7,
       4,     8,     9,    10,    25,    29,    76,    95,    96,    97,
     114,   115,     4,   112,   139,   144,     4,     8,     9,    10,
      25,    34,    76,   119,   120,   121,     4,    57,   119,    64,
      95,    67,   100,    48,     7,     7,   204,     6,    52,    41,
      42,    43,    44,    39,    40,   149,    93,    99,    98,     8,
       9,    28,    29,    30,    31,     6,    26,     6,    26,   140,
     145,   122,   120,   119,    26,   186,   103,   121,    26,    25,
      52,   218,   159,    61,    94,   100,   100,   100,   100,    52,
      52,    36,    52,    95,    96,    96,    97,    97,   115,    52,
       4,    52,    52,    52,    26,    46,   121,   104,    58,    61,
     119,   159,   159,    93,    52,    52,    52,    52,   150,    26,
     183,   100,    26,   121,   100,    26,    53,    59,    95,   119,
      12,    61,    62,    52,    52,    51,    54,   105,   106,   100,
     185,     7,    13,   106,    59,     7,   100,   100,    53,    52
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
        case 2:

/* Line 1455 of yacc.c  */
#line 131 "syntaxe.y"
    {fprintf(f,"#include<stdio.h>\n#include<stdlib.h>\n#include<string.h>\n"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 138 "syntaxe.y"
    {strcpy(fname,identif); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 139 "syntaxe.y"
    {funcTest(fname,&fhead,pn,args,tokens);pn=0;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 145 "syntaxe.y"
    {fprintf(f,",");strcpy(args[pn++],identif);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 146 "syntaxe.y"
    {strcpy(args[pn++],identif);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 148 "syntaxe.y"
    {if(type_return==-1){identifTestf(identif,tokens,&heads,type,0);}else{identifTestf(identif,tokens,&heads,type,1);} fprintf(f,"%s",identif);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 156 "syntaxe.y"
    {if(type_return==-1){
						identifTestf(identif,tokens,&heads,type,0);
					}else{
						identifTestf(identif,tokens,&heads,type,1);} 
					fprintf(f,"%s",identif);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 161 "syntaxe.y"
    {fprintf(f,"%s ,",identif);
		  					 if(type_return==-1){
		  					 		identifTestf(identif,tokens,&heads,type,0);
		  					 }else{
		  					 		identifTestf(identif,tokens,&heads,type,1);}
		  					 ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 182 "syntaxe.y"
    { fprintf(f,"(");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 182 "syntaxe.y"
    {fprintf(f,")");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 183 "syntaxe.y"
    {
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 185 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  
        		  ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 194 "syntaxe.y"
    {type=0;;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 195 "syntaxe.y"
    {type=1;;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 196 "syntaxe.y"
    {type=2;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 215 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 221 "syntaxe.y"
    {fprintf(f,"%s",identif);type=-1;strcpy(autre,identif);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 221 "syntaxe.y"
    {if(type_return==-1){isUsableF(heads,identif,0);giveValuef(heads,identif);}else{isUsableF(heads,identif,1);};}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 221 "syntaxe.y"
    {printf("switch correct\n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 249 "syntaxe.y"
    { isUsableF(heads,identif,0); fprintf(f,"scanf(\" ");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 250 "syntaxe.y"
    { isUsableF(heads,identif,0); fprintf(f,"scanf(\" ");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 284 "syntaxe.y"
    {fprintf(f,"%s",identif);type=-1;strcpy(autre,identif);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 284 "syntaxe.y"
    {if(type_return==-1){isUsableF(heads,identif,0);giveValuef(heads,identif);}else{isUsableF(heads,identif,1);} ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 285 "syntaxe.y"
    {type=0;;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 286 "syntaxe.y"
    {type=1;;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 287 "syntaxe.y"
    {type=2;;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 288 "syntaxe.y"
    {type=3;;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 292 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 293 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 294 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 295 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 296 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 297 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 299 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 301 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 309 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 311 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 319 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 321 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 329 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 331 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 340 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 342 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 349 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 351 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 359 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 361 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 368 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 370 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 378 "syntaxe.y"
    {fprintf(f,"%s",identif);type=-1;strcpy(autre,identif);;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 379 "syntaxe.y"
    {if(type_return==-1){
					  		isUsableF(heads,identif,0);
					  }else{isUsableF(heads,identif,1);}
					  ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 383 "syntaxe.y"
    {fprintf(f,"%s",identif); strcpy(identif1,identif);;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 384 "syntaxe.y"
    {fprintf(f,"=");strcpy(lvalue,identif);;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 384 "syntaxe.y"
    { affect_testF(heads,identif1,type,autre); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 390 "syntaxe.y"
    {strcat(identif,".c");
				f=fopen(identif,"w");
				 fprintf(f,"int main(){");
				 ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 394 "syntaxe.y"
    {fprintf(f,"\treturn 0;\n}"); fclose(f);;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 401 "syntaxe.y"
    {fprintf(f,"\t");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 401 "syntaxe.y"
    {fprintf(f,";");;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 402 "syntaxe.y"
    {fprintf(f,"\t");;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 402 "syntaxe.y"
    {fprintf(f,";");;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 405 "syntaxe.y"
    { type = 0;;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 406 "syntaxe.y"
    { type = 1;;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 407 "syntaxe.y"
    { type = 2;;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 408 "syntaxe.y"
    { type = 3;;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 412 "syntaxe.y"
    {if(type_return==-1){
						identifTest(identif,tokens,&head,type,0);
					}else{
						identifTest(identif,tokens,&head,type,1);} 
					fprintf(f,"%s",identif);;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 417 "syntaxe.y"
    {fprintf(f,"%s ,",identif);
		  					 if(type_return==-1){
		  					 		identifTest(identif,tokens,&head,type,0);
		  					 }else{
		  					 		identifTest(identif,tokens,&head,type,1);}
		  					 ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 441 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 448 "syntaxe.y"
    {fprintf(f,"\tprintf(");;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 448 "syntaxe.y"
    { strcat(partie1,"\""); 
fprintf(f,"\"%s%s",partie1,partie2);fprintf(f,");\n"); strcpy(partie1,"");strcpy(partie2,"");;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 456 "syntaxe.y"
    {  strcat(partie1,value); strcat(partie1," ");;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 457 "syntaxe.y"
    {  isUsable(head,identif,0);giveValue(head,identif); tp=return_type(head,identif);
		
		
		switch (tp){
			
				case 0 :strcat(partie1," %d");
				break;
				
				case 1 :strcat(partie1," %f");
				break;
			
				case 2 :strcat(partie1," %c");
				break;
			
				case 3 :strcat(partie1," %s");
				break;
			} 
			strcat(partie2,","); strcat(partie2,identif); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 478 "syntaxe.y"
    {fprintf(f,"\tscanf(\"");;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 481 "syntaxe.y"
    { isUsable(head,identif,0);;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 482 "syntaxe.y"
    { isUsable(head,identif,0);
		    tp=return_type(head,identif);
		
		
		switch (tp){
			
				case 0 : strcpy(temp_identif,"%d");fprintf(f,"%s \", &%s) ;",temp_identif,identif);
				break;
				
				case 1 :strcpy(temp_identif,"%f");fprintf(f,"%s \", &%s); ",temp_identif,identif);
				break;
			
				case 2 :strcpy(temp_identif,"%c");fprintf(f,"%s \", &%s) ;",temp_identif,identif);
				break;
			
				case 3 :strcpy(temp_identif,"%s");fprintf(f,"%s \", &%s); ",temp_identif,identif);
				break;
			} 
		;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 504 "syntaxe.y"
    {fprintf(f,"\t%s",identif);type=-1;strcpy(autre,identif);;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 505 "syntaxe.y"
    {if(type_return==-1){
					  		isUsable(head,identif,0);
					  }else{isUsable(head,identif,1);}
					  ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 509 "syntaxe.y"
    { strcpy(identif1,identif);;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 510 "syntaxe.y"
    {fprintf(f," = ");strcpy(lvalue,identif);;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 510 "syntaxe.y"
    { affect_test(head,identif1,type,autre); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 513 "syntaxe.y"
    {fprintf(f,"%s",identif);type=-1;strcpy(autre,identif);;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 513 "syntaxe.y"
    {if(type_return==-1){isUsable(head,identif,0);giveValue(head,identif);}else{isUsable(head,identif,1);};}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 514 "syntaxe.y"
    {type=0;;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 515 "syntaxe.y"
    {type=1;;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 516 "syntaxe.y"
    {type=2;;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 517 "syntaxe.y"
    {type=3;;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 529 "syntaxe.y"
    {fprintf(f,"\tif(");;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 529 "syntaxe.y"
    {fprintf(f,"){\n");;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 529 "syntaxe.y"
    {fprintf(f,"\t}\n");;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 531 "syntaxe.y"
    {fprintf(f,"\telse {");}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 531 "syntaxe.y"
    {fprintf(f,"\t}\n");;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 569 "syntaxe.y"
    { fprintf(f,"(");;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 569 "syntaxe.y"
    {fprintf(f,")");;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 570 "syntaxe.y"
    {fprintf(f," %s ",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 572 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 579 "syntaxe.y"
    {type=0;;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 580 "syntaxe.y"
    {type=1;;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 581 "syntaxe.y"
    {type=2;;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 586 "syntaxe.y"
    { if(type_return==-1){
					  		isUsable(head,identif,0);
					  	}
					  else{
					  isUsable(head,identif,1);
					  	}
				;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 592 "syntaxe.y"
    {strcpy(fname,identif);isUsablef(fhead,fname);;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 592 "syntaxe.y"
    {isParaEqual(fhead,fname,pn);pn=0;;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 596 "syntaxe.y"
    {fprintf(f,",");pn++;;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 597 "syntaxe.y"
    {pn++;;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 599 "syntaxe.y"
    {printf("pour correct\n");;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 600 "syntaxe.y"
    {printf("tq correct\n");;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 601 "syntaxe.y"
    {printf("repeter correct\n");;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 605 "syntaxe.y"
    {fprintf(f,"\tfor(");;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 605 "syntaxe.y"
    {fprintf(f,"%s",identif); fprintf(f,"=");;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 606 "syntaxe.y"
    {fprintf(f," ; "); fprintf(f,"%s",identif); fprintf(f,"<");;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 606 "syntaxe.y"
    {fprintf(f," ; ");;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 607 "syntaxe.y"
    {fprintf(f,"%s",identif); fprintf(f,"++){\n");;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 607 "syntaxe.y"
    {fprintf(f,"\t}\n");;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 610 "syntaxe.y"
    {fprintf(f,"\twhile(");;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 610 "syntaxe.y"
    {fprintf(f,")");;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 610 "syntaxe.y"
    {fprintf(f,"{\n");;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 611 "syntaxe.y"
    {fprintf(f,"}\n");;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 614 "syntaxe.y"
    {fprintf(f,"do{\n");;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 614 "syntaxe.y"
    {fprintf(f,"}while(");;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 615 "syntaxe.y"
    {fprintf(f,");\n");;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 618 "syntaxe.y"
    {fprintf(f,"switch("); fprintf(f,"%s",identif); type=-1;strcpy(autre,identif);;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 618 "syntaxe.y"
    {if(type_return==-1){isUsable(head,identif,0);giveValue(head,identif);}else{isUsable(head,identif,1);};}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 620 "syntaxe.y"
    {fprintf(f,")");;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 620 "syntaxe.y"
    {printf("switch correct\n");;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 626 "syntaxe.y"
    {fprintf(f,": ");;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 626 "syntaxe.y"
    {fprintf(f,";\n");;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 627 "syntaxe.y"
    {fprintf(f,"default :");;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 630 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 631 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 632 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 633 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 634 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 635 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 637 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 639 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 645 "syntaxe.y"
    {fprintf(f," += ",identif);;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 647 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 649 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 655 "syntaxe.y"
    {fprintf(f," -= ",identif);;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 657 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 659 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 665 "syntaxe.y"
    {fprintf(f," *= ",identif);;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 667 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 669 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 675 "syntaxe.y"
    {fprintf(f," /= ",identif);;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 678 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 680 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 686 "syntaxe.y"
    {fprintf(f,"++");;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 687 "syntaxe.y"
    {fprintf(f,"\t++");;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 687 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 689 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 697 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 699 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 706 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 708 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;



/* Line 1455 of yacc.c  */
#line 3341 "syntaxeY.c"
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
#line 717 "syntaxe.y"

void yyerror( const char * msg){
	printf("\nline %d : %s\n", lineNumber, msg);
}

void createFunc(func** head, char *identif, int pN, char vars[][20]) 
{ 
    func* new_var = (func*) malloc(sizeof(func)); 
    new_var->identif  = (char*)malloc(sizeof(char)*strlen(identif));
	strcpy(new_var->identif,identif);
	new_var->paramN = pN;
	new_var->param = (char**)malloc(sizeof(char*)*pN);
	for (int i = 0; i < pN; i++){
		new_var->param[i] = (char*)malloc(sizeof(char)*strlen(vars[i]) + 1);
		strcpy(new_var->param[i],vars[i]);
	}
	new_var->adresse = new_var;
    new_var->next = (*head); 
    (*head)    = new_var; 
}

void	testReturn(int a, int b)
{
	if (a != b)
	{
		yyerror("returning the wrong type\n");
		exit(-7);
	}
}

int isDeclaredf(func* head, char *identif) 
{ 
    func* current = head;  
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0) 
            return -1;
        current = current->next; 
    } 
    return 0; 
} 

int		isToken(char *s,char t[][10]){
	int i;
	for(i=0;i<10;i++)
		if (strcmp(s,t[i]) == 0)
			return -1;
	return 0;
}




void		isUsablef(func* head,char *identif){
	if (isDeclaredf(head,identif) == 0)
	{
		yyerror("Using a non declared function\n");
		exit(-1);
	}
}

void			isParaEqual(func *node,char *s,int pN)
{
	while (node != NULL) 
  { 
     if (strcmp(node->identif,s) == 0)
	 {
		 if (node->paramN != pN){
			yyerror("using a not equal parametre\n");
			exit(-1);
		}

	} 
     node = node->next; 
 	}
 }

void printFuncs(func *node) 
{ 
  while (node != NULL) 
  { 
     printf(" %s ", node->identif); 
     node = node->next; 
  } 
}

int		funcTest(char *s,func **head, int pN, char vars[][20], char t[][10])
{
	if (isToken(s,t) == -1)
	{
		yyerror("Declaring a functions with a token name\n");
		exit(-1);
	}
	if (isDeclaredf(*head,s) == -1)
	{
		yyerror("Declaring two functions with the same name\n");
		exit(-2);
	}
	createFunc(head,s,pN,vars);
}



void createIdentif(var** head, char *identif, int type,int origin) 
{ 
    var* new_var = (var*) malloc(sizeof(var)); 
    new_var->identif  = (char*)malloc(sizeof(char)*strlen(identif));
	strcpy(new_var->identif,identif);
	new_var->value = NULL;
	new_var->adresse = new_var;
	new_var->type = type;
    new_var->next = (*head); 
	new_var->origin = origin;
    (*head)    = new_var; 
} 
void createIdentiff(vars** heads, char *identif, int type,int origin) 
{ 
    vars* new_var = (vars*) malloc(sizeof(vars)); 
    new_var->identif  = (char*)malloc(sizeof(char)*strlen(identif));
	strcpy(new_var->identif,identif);
	new_var->value = NULL;
	new_var->adresse = new_var;
	new_var->type = type;
    new_var->next = (*heads); 
	new_var->origin = origin;
    (*heads)    = new_var; 
}


int isDeclared(var* head, char *identif, int origin) 
{ 
    var* current = head;  
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0 && current->origin == origin) 
            return -1;
        current = current->next; 
    } 
    return 0; 
} 

int isDeclaredF(vars* heads, char *identif, int origin) 
{ 
    vars* current = heads;  
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0 && current->origin == origin) 
            return -1;
        current = current->next; 
    } 
    return 0; 
}

void		isNotNull(var* head,char *identif)
{
	var* current = head;  
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0) 
            if (current->value == NULL)
			{
				yyerror("Using a non initialised variable\n");
				exit(-5);
			}
        current = current->next; 
    } 
}


void		isUsable(var* head,char *identif,int origin){
	if (isDeclared(head,identif,origin) == 0)
	{
		yyerror("Using a non declared variable\n");
		exit(-1);
	}
}
void		isUsableF(vars* heads,char *identif,int origin){
	if (isDeclaredF(heads,identif,origin) == 0)
	{
		yyerror("Using a non declared variable\n");
		exit(-1);
	}
}



void initialiser(var *head, char *identif)
{
	var* current = head;  
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0) 
        {
		    current->value = (char*)malloc(sizeof(char)+1);
			strcpy(current->value,"1");
        }
		current = current->next; 
    } 
}
void initialiserF(vars *heads, char *identif)
{
	vars* current = heads;  
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0) 
        {
		    current->value = (char*)malloc(sizeof(char)+1);
			strcpy(current->value,"1");
        }
		current = current->next; 
    } 
}


char *giveValue(var *head, char *identif)
{
	var* current = head;  
	
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0 && current->value != NULL) 
			return current->value;
		current = current->next; 
    } 
	yyerror("Using a non initialised variable\n");
	exit(-6);
} 
char *giveValuef(vars *heads, char *identif)
{
	vars* current = heads;  
	
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0 && current->value != NULL) 
			return current->value;
		current = current->next; 
    } 
	yyerror("Using a non initialised variable\n");
	exit(-6);
}

int		identifTest(char *s,char t[][10],var **head, int type,int origin){
	if (isToken(s,t) == -1)
	{
		yyerror("Declaring a variable with a token name\n");
		exit(-1);
	}
	if (isDeclared(*head,s,origin	) == -1)
	{
		yyerror("Declaring two variables with the same name\n");
		exit(-2);
	}
	createIdentif(head,s,type,origin);
}
int		identifTestf(char *s,char t[][10],vars **heads, int type,int origin){
	if (isToken(s,t) == -1)
	{
		yyerror("Declaring a variable with a token name\n");
		exit(-1);
	}
	if (isDeclaredF(*heads,s,origin	) == -1)
	{
		yyerror("Declaring two variables with the same name\n");
		exit(-2);
	}
	createIdentiff(heads,s,type,origin);
}


void freeVars(var* head)
{
   var* tmp;

   while (head != NULL)
    {
       tmp = head;
       head = head->next;
       free(tmp);
    }
	free(head);
}
void freeVarsF(vars* heads)
{
   vars* tmp;

   while (heads != NULL)
    {
       tmp = heads;
       heads = heads->next;
       free(tmp);
    }
	free(heads);
}
void freeFuncs(func* head)
{
   func* tmp;

   while (head != NULL)
    {
       tmp = head;
       head = head->next;
       free(tmp);
    }
	free(head);
}





int return_type( var* head,char *indentif){
int type ;

var* current = head;  
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0) {
            
			type=current->type;
			
           }
		   
		   current = current->next;
    } 
	
	return type;
}

int return_typeF( vars* heads,char *indentif){
int type ;

vars* current = heads;  
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0) {
            
			type=current->type;
			
           }
		   
		   current = current->next;
    } 
	
	return type;


}


void affect_test( var* head,char *identif1, int type,char *autre){
  
  int autre_type=return_type(head,autre); 
  int mon_type;
var* current = head; 
		if(type==-1){   
		     
				while (current != NULL) 
				   { 
					if (strcmp(current->identif,identif1) == 0 ) {
						
						mon_type=current->type;
						if(mon_type != autre_type){yyerror(" erreur lors l'affectation");
							exit(-1);
						  }
						
					 }
					   
					   current = current->next;
			     } 
			
		}
		else {
				while (current != NULL) 
				   { 
					if (strcmp(current->identif,identif1) == 0 ) {
						
						mon_type=current->type;
						if(mon_type !=type){yyerror(" erreur lors l'affectation");
							exit(-1);
						  }
						
					 }
					   
					   current = current->next;
			     } 	
		}
}
void affect_testF( vars* heads,char *identif1, int type,char *autre){
  
  int autre_type=return_typeF(heads,autre); 
  int mon_type;
vars* current = heads; 
		if(type==-1){   
		     
				while (current != NULL) 
				   { 
					if (strcmp(current->identif,identif1) == 0 ) {
						
						mon_type=current->type;
						if(mon_type != autre_type){yyerror(" erreur lors l'affectation");
							exit(-1);
						  }
						
					 }
					   
					   current = current->next;
			     } 
			
		}
		else {
				while (current != NULL) 
				   { 
					if (strcmp(current->identif,identif1) == 0 ) {
						
						mon_type=current->type;
						if(mon_type !=type){yyerror(" erreur lors l'affectation");
							exit(-1);
						  }
						
					 }
					   
					   current = current->next;
			     } 	
		}
}

int main(int argc,char ** argv){

if(argc>1) yyin=fopen(argv[1],"r"); // vérifier résultat !!!
lineNumber=1;
if(!yyparse())
	printf("\n Code correct\n");

return(0);

}
