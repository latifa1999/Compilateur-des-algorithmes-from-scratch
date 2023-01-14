
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
		float   valnum;
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
		float   valnum;
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

	void setValue(char *identif, float a, var *head);
	void setValueF(char *identif, float a, vars *heads);

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
#line 198 "syntaxeY.c"

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
#line 321 "syntaxeY.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   766

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  218
/* YYNRULES -- Number of rules.  */
#define YYNRULES  333
/* YYNRULES -- Number of states.  */
#define YYNSTATES  555

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
       0,     0,     3,     5,     7,     9,    10,    11,    12,    13,
      14,    32,    33,    34,    35,    36,    37,    38,    53,    54,
      59,    60,    65,    67,    71,    72,    80,    81,    88,    90,
      91,    96,   100,   104,   106,   110,   114,   116,   117,   122,
     123,   126,   128,   130,   132,   135,   138,   141,   143,   146,
     148,   151,   153,   156,   158,   161,   163,   166,   168,   171,
     173,   175,   177,   178,   179,   180,   191,   194,   196,   197,
     205,   206,   211,   213,   215,   217,   218,   219,   220,   221,
     222,   237,   238,   239,   240,   251,   252,   253,   263,   264,
     271,   275,   277,   278,   279,   287,   291,   293,   295,   297,
     300,   304,   305,   306,   315,   316,   320,   326,   328,   332,
     336,   339,   340,   343,   345,   347,   349,   351,   353,   355,
     357,   359,   361,   363,   364,   365,   366,   374,   375,   376,
     377,   385,   386,   387,   388,   396,   397,   398,   399,   407,
     408,   409,   410,   417,   418,   419,   420,   427,   428,   429,
     430,   437,   438,   439,   440,   447,   448,   449,   450,   451,
     459,   460,   468,   469,   470,   480,   481,   489,   490,   497,
     499,   501,   503,   505,   507,   508,   513,   516,   518,   521,
     523,   526,   528,   531,   533,   536,   538,   541,   543,   546,
     548,   550,   552,   554,   556,   557,   558,   566,   570,   572,
     574,   576,   577,   584,   588,   590,   591,   592,   593,   594,
     602,   603,   606,   608,   610,   612,   614,   617,   621,   622,
     623,   632,   633,   637,   643,   645,   649,   651,   653,   657,
     660,   662,   664,   666,   668,   670,   672,   674,   676,   678,
     680,   682,   686,   690,   692,   696,   700,   702,   703,   708,
     709,   712,   714,   716,   718,   721,   724,   725,   726,   727,
     728,   729,   730,   731,   746,   747,   748,   749,   750,   760,
     761,   766,   768,   770,   772,   774,   775,   776,   777,   778,
     779,   794,   795,   796,   797,   808,   809,   810,   820,   821,
     822,   823,   834,   837,   839,   840,   848,   849,   854,   856,
     858,   860,   862,   864,   866,   867,   868,   869,   877,   878,
     879,   880,   888,   889,   890,   891,   899,   900,   901,   902,
     910,   911,   912,   913,   920,   921,   922,   923,   930,   931,
     932,   938,   939,   940
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      83,     0,    -1,   191,    -1,    85,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    65,   198,     7,     4,    86,    25,
      87,   100,    26,    88,    89,    72,    90,   103,   113,    98,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    92,
       4,    93,    25,    94,    26,    95,    96,    72,    97,   103,
     113,    67,    -1,    -1,    73,    99,   108,    52,    -1,    -1,
     102,     6,   101,   100,    -1,   102,    -1,     4,     7,   198,
      -1,    -1,   103,     5,   104,   198,     7,   106,    52,    -1,
      -1,     5,   198,   105,     7,   106,    52,    -1,     4,    -1,
      -1,     4,     6,   107,   106,    -1,   108,    28,   109,    -1,
     108,    29,   109,    -1,   109,    -1,   109,    30,   110,    -1,
     109,    31,   110,    -1,   110,    -1,    -1,    25,   111,   108,
      26,    -1,    -1,     4,   112,    -1,     8,    -1,     9,    -1,
      10,    -1,    29,     8,    -1,    29,     9,    -1,   113,   114,
      -1,   114,    -1,   113,   145,    -1,   145,    -1,   113,   140,
      -1,   140,    -1,   113,   137,    -1,   137,    -1,   113,   123,
      -1,   123,    -1,   113,   115,    -1,   115,    -1,   186,    52,
      -1,   155,    -1,    21,    -1,    22,    -1,    -1,    -1,    -1,
      50,    25,     4,   116,   117,    26,   118,    12,   119,    13,
      -1,   119,   120,    -1,   120,    -1,    -1,    51,   227,     7,
     121,   113,    53,    52,    -1,    -1,    54,   122,     7,   113,
      -1,   124,    -1,   130,    -1,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    56,   125,     4,   126,    57,   153,    58,   127,
     153,   128,   129,    61,   113,    59,    -1,    -1,    -1,    -1,
      60,    25,   131,   151,    26,   132,    61,   133,   113,    62,
      -1,    -1,    -1,    63,   135,   113,    64,    25,   136,   151,
      26,    52,    -1,    -1,    27,    25,   138,   139,    26,    52,
      -1,   139,     6,     4,    -1,     4,    -1,    -1,    -1,   141,
      24,    25,   143,   142,    26,    52,    -1,   143,     6,   144,
      -1,   144,    -1,    76,    -1,     4,    -1,   146,    48,    -1,
     146,   149,    48,    -1,    -1,    -1,    45,   147,    25,   151,
      26,   148,    46,   113,    -1,    -1,    47,   150,   113,    -1,
      25,   152,    26,   225,   151,    -1,   152,    -1,    25,   152,
      26,    -1,   153,   228,   153,    -1,    34,   151,    -1,    -1,
       4,   154,    -1,     8,    -1,     9,    -1,    10,    -1,    76,
      -1,   172,    -1,   179,    -1,   156,    -1,   160,    -1,   164,
      -1,   168,    -1,    -1,    -1,    -1,     4,   157,   158,    41,
     159,   108,    52,    -1,    -1,    -1,    -1,     4,   161,   162,
      42,   163,   108,    52,    -1,    -1,    -1,    -1,     4,   165,
     166,    43,   167,   108,    52,    -1,    -1,    -1,    -1,     4,
     169,   170,    44,   171,   108,    52,    -1,    -1,    -1,    -1,
       4,   173,   174,    39,   175,    52,    -1,    -1,    -1,    -1,
      39,   176,     4,   177,   178,    52,    -1,    -1,    -1,    -1,
       4,   180,   181,    40,   182,    52,    -1,    -1,    -1,    -1,
      40,   183,     4,   184,   185,    52,    -1,    -1,    -1,    -1,
      -1,     4,   187,   188,   189,    36,   190,   108,    -1,    -1,
       3,     4,   192,   195,    15,   201,    23,    -1,    -1,    -1,
       3,     4,   193,    84,   194,   195,    15,   201,    23,    -1,
      -1,   195,     5,   196,   198,     7,   199,    52,    -1,    -1,
       5,   197,   198,     7,   199,    52,    -1,    79,    -1,    80,
      -1,    81,    -1,    76,    -1,     4,    -1,    -1,     4,     6,
     200,   199,    -1,   201,   202,    -1,   202,    -1,   201,   218,
      -1,   218,    -1,   201,   203,    -1,   203,    -1,   201,   208,
      -1,   208,    -1,   201,   249,    -1,   249,    -1,   201,   263,
      -1,   263,    -1,   211,    52,    -1,   271,    -1,   234,    -1,
     242,    -1,    21,    -1,    22,    -1,    -1,    -1,   204,    24,
      25,   206,   205,    26,    52,    -1,   206,     6,   207,    -1,
     207,    -1,    76,    -1,     4,    -1,    -1,    27,    25,   209,
     210,    26,    52,    -1,   210,     6,     4,    -1,     4,    -1,
      -1,    -1,    -1,    -1,     4,   212,   213,   214,    36,   215,
     229,    -1,    -1,     4,   217,    -1,     8,    -1,     9,    -1,
      10,    -1,    76,    -1,   219,    48,    -1,   219,   222,    48,
      -1,    -1,    -1,    45,   220,    25,   224,    26,   221,    46,
     201,    -1,    -1,    47,   223,   201,    -1,    25,   226,    26,
     225,   224,    -1,   226,    -1,    25,   226,    26,    -1,    33,
      -1,    35,    -1,   216,   228,   216,    -1,    34,   224,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,     4,    -1,
      66,    -1,    77,    -1,    78,    -1,    16,    -1,    37,    -1,
      38,    -1,   229,    28,   230,    -1,   229,    29,   230,    -1,
     230,    -1,   230,    30,   231,    -1,   230,    31,   231,    -1,
     231,    -1,    -1,    25,   232,   229,    26,    -1,    -1,     4,
     233,    -1,     8,    -1,     9,    -1,    10,    -1,    29,     8,
      -1,    29,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,   235,   236,    66,   237,     4,   238,    25,   239,
     247,   240,    26,   241,    52,    -1,    -1,    -1,    -1,    -1,
       4,   243,    25,   244,   247,   245,    26,   246,    52,    -1,
      -1,   216,     6,   248,   247,    -1,   216,    -1,   250,    -1,
     256,    -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,    56,
     251,     4,   252,    57,   216,    58,   253,   216,   254,   255,
      61,   201,    59,    -1,    -1,    -1,    -1,    60,    25,   257,
     224,    26,   258,    61,   259,   201,    62,    -1,    -1,    -1,
      63,   261,   201,    64,    25,   262,   224,    26,    52,    -1,
      -1,    -1,    -1,    50,    25,     4,   264,   265,    26,   266,
      12,   267,    13,    -1,   267,   268,    -1,   268,    -1,    -1,
      51,   227,     7,   269,   201,    53,    52,    -1,    -1,    54,
     270,     7,   201,    -1,   288,    -1,   295,    -1,   272,    -1,
     276,    -1,   280,    -1,   284,    -1,    -1,    -1,    -1,     4,
     273,   274,    41,   275,   229,    52,    -1,    -1,    -1,    -1,
       4,   277,   278,    42,   279,   229,    52,    -1,    -1,    -1,
      -1,     4,   281,   282,    43,   283,   229,    52,    -1,    -1,
      -1,    -1,     4,   285,   286,    44,   287,   229,    52,    -1,
      -1,    -1,    -1,     4,   289,   290,    39,   291,    52,    -1,
      -1,    -1,    -1,    39,   292,     4,   293,   294,    52,    -1,
      -1,    -1,     4,   296,   297,    40,    52,    -1,    -1,    -1,
      40,     4,   298,   299,    52,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   137,   137,   144,   145,   148,   149,   149,   149,   149,
     148,   152,   152,   153,   153,   153,   153,   152,   158,   158,
     161,   161,   162,   164,   168,   168,   169,   169,   172,   177,
     177,   188,   189,   190,   193,   194,   195,   198,   198,   199,
     199,   210,   211,   212,   213,   214,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   231,   232,
     233,   234,   237,   237,   238,   237,   241,   242,   244,   244,
     245,   245,   248,   249,   250,   254,   254,   254,   254,   254,
     254,   257,   257,   257,   257,   260,   260,   260,   263,   263,
     266,   267,   288,   288,   288,   292,   293,   296,   297,   316,
     317,   320,   320,   320,   322,   322,   325,   326,   327,   330,
     331,   334,   334,   335,   336,   337,   338,   342,   343,   344,
     345,   346,   347,   349,   351,   357,   349,   359,   361,   367,
     359,   369,   371,   377,   369,   379,   381,   387,   379,   390,
     392,   398,   390,   399,   399,   401,   399,   409,   411,   417,
     409,   418,   418,   420,   418,   428,   429,   433,   434,   428,
     440,   439,   447,   451,   446,   458,   458,   459,   459,   462,
     463,   464,   465,   469,   474,   474,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   498,   499,
     500,   501,   502,   503,   506,   506,   506,   510,   511,   514,
     515,   536,   536,   539,   540,   562,   563,   567,   568,   562,
     571,   571,   572,   573,   574,   575,   583,   584,   587,   587,
     587,   589,   589,   593,   594,   595,   597,   598,   600,   601,
     603,   604,   605,   606,   607,   610,   611,   612,   613,   614,
     615,   617,   618,   619,   622,   623,   624,   627,   627,   628,
     628,   637,   638,   639,   640,   641,   644,   644,   650,   650,
     650,   650,   650,   644,   652,   652,   652,   652,   652,   656,
     656,   657,   659,   660,   661,   665,   665,   666,   666,   667,
     665,   670,   670,   670,   670,   674,   674,   674,   678,   678,
     680,   678,   683,   684,   686,   686,   687,   687,   690,   691,
     692,   693,   694,   695,   697,   699,   705,   697,   707,   709,
     715,   707,   717,   719,   725,   717,   727,   729,   735,   727,
     738,   740,   746,   738,   747,   747,   749,   747,   757,   759,
     757,   766,   768,   766
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
  "$accept", "program", "listFonction", "fonction", "$@1", "$@2", "$@3",
  "$@4", "$@5", "procerdure", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11",
  "return", "$@12", "listArg", "$@13", "arg", "declarationF", "$@14",
  "$@15", "listidentifs", "$@16", "expressionArithmeticF", "termF",
  "factorF", "$@17", "$@18", "listinstF", "instF", "switchF", "$@19",
  "$@20", "$@21", "listdesCasF", "lesCasF", "$@22", "$@23", "boucleF",
  "pourF", "$@24", "$@25", "$@26", "$@27", "$@28", "tantqueF", "$@29",
  "$@30", "$@31", "repeterF", "$@32", "$@33", "lectureF", "$@34",
  "appel_varsF", "affichageF", "$@35", "$@36", "parametresF", "paramF",
  "exprSiF", "instSiF", "$@37", "$@38", "instSinonF", "$@39", "conditionF",
  "coF", "exprF", "$@40", "expressionSuppF", "assignationAddF", "$@41",
  "$@42", "$@43", "assignationSousF", "$@44", "$@45", "$@46",
  "assignationMultF", "$@47", "$@48", "$@49", "assignationDivF", "$@50",
  "$@51", "$@52", "incrementationF", "$@53", "$@54", "$@55", "$@56",
  "$@57", "$@58", "decrementationF", "$@59", "$@60", "$@61", "$@62",
  "$@63", "$@64", "affectationF", "$@65", "$@66", "$@67", "$@68", "main",
  "$@69", "$@70", "$@71", "declaration", "$@72", "$@73", "type",
  "identifs", "$@74", "listInst", "inst", "affichage", "$@75", "$@76",
  "parametres", "param", "lecture", "$@77", "appel_vars", "affectation",
  "$@78", "$@79", "$@80", "$@81", "expr", "$@82", "exprSi", "instSi",
  "$@83", "$@84", "instSinon", "$@85", "condition", "opeLogique", "co",
  "valeur", "cond", "expressionArithmetic", "term", "factor", "$@86",
  "$@87", "appelFct", "$@88", "$@89", "$@90", "$@91", "$@92", "$@93",
  "$@94", "appelProc", "$@95", "$@96", "$@97", "$@98", "Parametre", "$@99",
  "boucle", "pour", "$@100", "$@101", "$@102", "$@103", "$@104", "tantque",
  "$@105", "$@106", "$@107", "repeter", "$@108", "$@109", "switch",
  "$@110", "$@111", "$@112", "listdesCas", "lesCas", "$@113", "$@114",
  "expressionSupp", "assignationAdd", "$@115", "$@116", "$@117",
  "assignationSous", "$@118", "$@119", "$@120", "assignationMult", "$@121",
  "$@122", "$@123", "assignationDiv", "$@124", "$@125", "$@126",
  "incrementation", "$@127", "$@128", "$@129", "$@130", "$@131", "$@132",
  "decrementation", "$@133", "$@134", "$@135", "$@136", 0
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
static const yytype_uint16 yyr1[] =
{
       0,    82,    83,    84,    84,    86,    87,    88,    89,    90,
      85,    92,    93,    94,    95,    96,    97,    91,    99,    98,
     101,   100,   100,   102,   104,   103,   105,   103,   106,   107,
     106,   108,   108,   108,   109,   109,   109,   111,   110,   112,
     110,   110,   110,   110,   110,   110,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     114,   114,   116,   117,   118,   115,   119,   119,   121,   120,
     122,   120,   123,   123,   123,   125,   126,   127,   128,   129,
     124,   131,   132,   133,   130,   135,   136,   134,   138,   137,
     139,   139,   141,   142,   140,   143,   143,   144,   144,   145,
     145,   147,   148,   146,   150,   149,   151,   151,   151,   152,
     152,   154,   153,   153,   153,   153,   153,   155,   155,   155,
     155,   155,   155,   157,   158,   159,   156,   161,   162,   163,
     160,   165,   166,   167,   164,   169,   170,   171,   168,   173,
     174,   175,   172,   176,   177,   178,   172,   180,   181,   182,
     179,   183,   184,   185,   179,   187,   188,   189,   190,   186,
     192,   191,   193,   194,   191,   196,   195,   197,   195,   198,
     198,   198,   198,   199,   200,   199,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   202,   202,
     202,   202,   202,   202,   204,   205,   203,   206,   206,   207,
     207,   209,   208,   210,   210,   212,   213,   214,   215,   211,
     217,   216,   216,   216,   216,   216,   218,   218,   220,   221,
     219,   223,   222,   224,   224,   224,   225,   225,   226,   226,
     227,   227,   227,   227,   227,   228,   228,   228,   228,   228,
     228,   229,   229,   229,   230,   230,   230,   232,   231,   233,
     231,   231,   231,   231,   231,   231,   235,   236,   237,   238,
     239,   240,   241,   234,   243,   244,   245,   246,   242,   248,
     247,   247,   249,   249,   249,   251,   252,   253,   254,   255,
     250,   257,   258,   259,   256,   261,   262,   260,   264,   265,
     266,   263,   267,   267,   269,   268,   270,   268,   271,   271,
     271,   271,   271,   271,   273,   274,   275,   272,   277,   278,
     279,   276,   281,   282,   283,   280,   285,   286,   287,   284,
     289,   290,   291,   288,   292,   293,   294,   288,   296,   297,
     295,   298,   299,   295
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,    14,     0,     4,
       0,     4,     1,     3,     0,     7,     0,     6,     1,     0,
       4,     3,     3,     1,     3,     3,     1,     0,     4,     0,
       2,     1,     1,     1,     2,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     0,     0,     0,    10,     2,     1,     0,     7,
       0,     4,     1,     1,     1,     0,     0,     0,     0,     0,
      14,     0,     0,     0,    10,     0,     0,     9,     0,     6,
       3,     1,     0,     0,     7,     3,     1,     1,     1,     2,
       3,     0,     0,     8,     0,     3,     5,     1,     3,     3,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     0,     7,     0,     0,     0,
       7,     0,     0,     0,     7,     0,     0,     0,     7,     0,
       0,     0,     6,     0,     0,     0,     6,     0,     0,     0,
       6,     0,     0,     0,     6,     0,     0,     0,     0,     7,
       0,     7,     0,     0,     9,     0,     7,     0,     6,     1,
       1,     1,     1,     1,     0,     4,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     0,     0,     7,     3,     1,     1,
       1,     0,     6,     3,     1,     0,     0,     0,     0,     7,
       0,     2,     1,     1,     1,     1,     2,     3,     0,     0,
       8,     0,     3,     5,     1,     3,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     1,     0,     4,     0,
       2,     1,     1,     1,     2,     2,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     9,     0,
       4,     1,     1,     1,     1,     0,     0,     0,     0,     0,
      14,     0,     0,     0,    10,     0,     0,     9,     0,     0,
       0,    10,     2,     1,     0,     7,     0,     4,     1,     1,
       1,     1,     1,     1,     0,     0,     0,     7,     0,     0,
       0,     7,     0,     0,     0,     7,     0,     0,     0,     7,
       0,     0,     0,     6,     0,     0,     0,     6,     0,     0,
       5,     0,     0,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,   160,     1,     0,     0,   167,     0,
      11,   163,     3,     4,     0,   165,   194,   172,   169,   170,
     171,     0,     0,     0,     0,     0,   205,   192,   193,     0,
     324,     0,   218,     0,   275,     0,   285,   194,   177,   181,
       0,   183,     0,   179,     0,   190,   191,   185,   272,   273,
     274,   187,   189,   300,   301,   302,   303,   298,   299,    12,
       0,     0,     0,     0,   206,   257,     0,   305,   309,   313,
     317,   321,   329,   201,     0,   331,     0,     0,     0,   281,
     194,   161,   176,   180,   182,   178,   184,   186,     0,   188,
     221,   216,     0,     0,     5,   194,   173,     0,     0,   207,
       0,   265,     0,     0,     0,     0,     0,     0,     0,   325,
     332,     0,   288,   276,     0,   194,     0,   194,   217,    13,
       0,   194,   174,   168,     0,     0,   258,     0,   306,   310,
     314,   318,   322,     0,   204,     0,   326,     0,   210,   212,
     213,   214,     0,     0,   215,     0,     0,   224,   289,     0,
       0,     0,   200,   199,   195,   198,   194,     0,     6,   164,
       0,   166,   208,     0,   271,   266,     0,     0,     0,     0,
       0,   330,     0,     0,     0,   333,   211,     0,   229,   238,
     239,   240,   235,   236,   237,     0,   219,     0,     0,   282,
     286,     0,     0,    14,     0,   175,     0,   259,   269,     0,
     249,   251,   252,   253,   247,     0,     0,   243,   246,     0,
       0,     0,   323,   203,   202,   327,   225,   228,     0,   290,
       0,     0,     0,   197,     0,    15,     0,     0,    22,   209,
       0,     0,   267,   250,     0,   254,   255,     0,     0,   307,
       0,     0,   311,   315,   319,   226,   227,     0,   194,     0,
     277,   283,     0,   196,     0,     0,     7,    20,   260,   270,
       0,     0,   241,   242,   244,   245,   223,   220,     0,     0,
     194,     0,    16,    23,     8,     0,     0,   268,   248,     0,
     296,     0,   293,   278,   194,   287,     0,     0,    21,   261,
     234,   230,   231,   232,   233,     0,     0,   291,   292,   279,
     284,     0,    92,     9,     0,   294,   194,     0,    26,   123,
      24,    60,    61,     0,   143,   151,   101,     0,    75,     0,
      85,    92,    47,    57,    55,    72,    73,    74,    53,    51,
       0,    49,     0,    59,   119,   120,   121,   122,   117,   118,
       0,     0,   262,   194,   297,   194,     0,   124,   128,   132,
     136,   140,   148,   156,     0,    88,     0,     0,     0,     0,
       0,    81,    92,    17,    46,    56,    54,    52,    50,    48,
       0,   104,    99,     0,    58,    92,     0,   194,   194,     0,
       0,     0,     0,     0,     0,     0,   157,     0,     0,   144,
     152,     0,    62,    76,     0,    92,     0,    92,   100,    92,
     263,     0,   280,    28,     0,   125,   129,   133,   137,   141,
     149,     0,     0,    91,     0,   145,   153,   111,   113,   114,
     115,     0,     0,   116,     0,   107,     0,    63,     0,     0,
       0,    98,    97,    93,    96,    92,    18,     0,   295,    29,
      27,     0,     0,     0,     0,     0,     0,   158,     0,     0,
       0,     0,     0,   112,     0,   110,   102,     0,     0,     0,
      82,    86,     0,     0,     0,    10,     0,    39,    41,    42,
      43,    37,     0,     0,    33,    36,     0,     0,     0,   142,
     150,     0,    25,    90,    89,   146,   154,   108,     0,   109,
      64,     0,     0,     0,    95,     0,     0,    30,    40,     0,
      44,    45,     0,     0,   126,     0,     0,   130,   134,   138,
     159,     0,    92,     0,    77,    83,     0,    94,    19,     0,
      31,    32,    34,    35,   106,   103,     0,     0,    92,     0,
      38,     0,    70,     0,    67,    78,    92,    87,     0,     0,
      65,    66,    79,    84,    68,    92,     0,    92,    71,    92,
      92,    92,     0,    80,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    11,    12,   120,   194,   274,   287,   341,    13,
      21,    93,   157,   225,   254,   286,   437,   464,   227,   275,
     228,   302,   354,   346,   404,   466,   473,   474,   475,   499,
     498,   321,   322,   323,   427,   458,   513,   533,   534,   547,
     539,   324,   325,   360,   428,   527,   542,   546,   326,   394,
     492,   528,   327,   362,   493,   328,   388,   414,   329,   330,
     463,   433,   434,   331,   332,   358,   488,   373,   397,   424,
     425,   426,   453,   333,   334,   347,   380,   441,   335,   348,
     381,   442,   336,   349,   382,   443,   337,   350,   383,   444,
     338,   351,   384,   445,   356,   415,   451,   339,   352,   385,
     446,   357,   416,   452,   340,   353,   386,   411,   481,     3,
       6,     7,    23,     9,    25,    14,    22,    97,   160,    37,
      38,    39,    40,   192,   154,   155,    41,   108,   135,    42,
      64,    99,   125,   196,   145,   176,    43,    44,    76,   218,
      92,   117,   146,   247,   147,   295,   185,   206,   207,   208,
     234,   233,    45,    65,   100,   163,   230,   276,   304,   376,
      46,    66,   127,   199,   260,   165,   231,    47,    48,    78,
     149,   269,   299,   307,    49,   114,   221,   270,    50,    80,
     222,    51,   148,   187,   249,   281,   282,   343,   296,    52,
      53,    67,   102,   166,    54,    68,   103,   167,    55,    69,
     104,   168,    56,    70,   105,   169,    57,    71,   106,   170,
      74,   136,   174,    58,    72,   107,   110,   137
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -419
static const yytype_int16 yypact[] =
{
      16,    17,    32,  -419,   -21,  -419,    41,   -14,  -419,    93,
     286,  -419,  -419,  -419,   286,  -419,   689,  -419,  -419,  -419,
    -419,    53,    52,    41,    68,   286,   169,  -419,  -419,    54,
    -419,    77,  -419,    72,  -419,    74,  -419,   422,  -419,  -419,
      86,  -419,    73,  -419,    57,  -419,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
     123,    97,   127,   133,  -419,  -419,   108,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,   131,  -419,   119,   142,   147,  -419,
     689,  -419,  -419,  -419,  -419,  -419,  -419,  -419,   130,  -419,
    -419,  -419,   113,   150,  -419,   689,   183,   144,   127,  -419,
     141,  -419,   180,   184,   193,   187,   194,   205,   244,  -419,
    -419,    18,  -419,  -419,    18,   356,    14,   689,  -419,  -419,
     225,   447,  -419,  -419,   201,   229,  -419,    27,  -419,  -419,
    -419,  -419,  -419,   216,  -419,     7,  -419,   218,  -419,  -419,
    -419,  -419,   139,    18,  -419,   126,   257,  -419,  -419,   238,
     260,   264,  -419,  -419,   293,  -419,   469,   276,  -419,  -419,
     127,  -419,  -419,   304,   311,  -419,   177,   177,   177,   177,
     270,  -419,   316,   285,   287,  -419,  -419,   302,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,    27,  -419,   308,    27,  -419,
    -419,    14,   327,  -419,   355,  -419,   177,  -419,  -419,   346,
    -419,  -419,  -419,  -419,  -419,   162,     1,   282,  -419,    19,
     170,   172,  -419,  -419,  -419,  -419,   -18,  -419,   322,  -419,
     333,   319,    18,  -419,   341,  -419,   392,   382,   404,   190,
     386,    27,  -419,  -419,   177,  -419,  -419,   177,   177,  -419,
     177,   177,  -419,  -419,  -419,  -419,  -419,    18,   689,   403,
    -419,  -419,   405,  -419,   350,   286,  -419,  -419,  -419,  -419,
     378,   253,   282,   282,  -419,  -419,  -419,   491,    63,    27,
     689,   380,  -419,  -419,  -419,   355,    27,  -419,  -419,   315,
    -419,    64,  -419,  -419,   500,  -419,   428,   362,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,   430,   431,  -419,  -419,  -419,
    -419,   286,   544,  -419,   413,  -419,   689,   379,  -419,   385,
    -419,  -419,  -419,   417,  -419,  -419,  -419,   423,  -419,   425,
    -419,   342,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
     429,  -419,   284,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
     395,   428,  -419,   689,   491,   689,   448,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,   286,  -419,   450,   453,   433,   459,
     460,  -419,   703,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
     440,  -419,  -419,   418,  -419,   544,   419,   553,   575,   471,
     435,   437,   434,   436,   442,   443,  -419,   477,   484,  -419,
    -419,    58,  -419,  -419,    58,   396,    20,   703,  -419,   334,
    -419,   441,  -419,   483,   446,  -419,  -419,  -419,  -419,  -419,
    -419,   458,   471,  -419,    43,  -419,  -419,  -419,  -419,  -419,
    -419,   149,    58,  -419,   473,  -419,   126,  -419,   444,   474,
     480,  -419,  -419,   496,  -419,   597,  -419,   439,  -419,  -419,
    -419,   234,   234,   234,   234,   464,   468,  -419,   472,   507,
     476,   481,   482,  -419,   497,  -419,  -419,    46,   509,    46,
    -419,  -419,    20,   511,   234,  -419,   471,  -419,  -419,  -419,
    -419,  -419,   349,   188,   340,  -419,   200,   232,   246,  -419,
    -419,   234,  -419,  -419,  -419,  -419,  -419,   -18,   492,  -419,
    -419,   485,   465,    58,  -419,   490,   248,  -419,  -419,   234,
    -419,  -419,   234,   234,  -419,   234,   234,  -419,  -419,  -419,
     347,    58,   703,   532,  -419,  -419,   520,  -419,  -419,   268,
     340,   340,  -419,  -419,  -419,   619,   128,    46,   703,   501,
    -419,   315,  -419,   111,  -419,  -419,   628,  -419,   545,   548,
    -419,  -419,  -419,  -419,  -419,   703,   498,   703,   619,   703,
     659,   681,   506,  -419,  -419
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,   289,  -419,
    -419,   220,  -419,  -419,  -406,  -419,  -276,  -117,  -102,  -419,
    -419,  -352,  -279,  -263,  -419,  -419,  -419,  -419,    34,  -419,
    -419,  -258,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -245,  -419,  -419,  -221,  -419,
    -419,  -419,   106,  -215,  -419,  -419,  -419,  -419,  -419,  -382,
     148,  -418,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,   547,  -419,  -419,     0,   -90,  -419,   -79,
     -37,   -35,  -419,  -419,  -419,   381,   -33,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -124,  -419,   -30,  -419,  -419,  -419,
    -419,  -419,  -109,    89,   445,    42,   152,   -95,   151,   173,
    -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -211,  -419,   -28,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,   -26,  -419,  -419,  -419,  -419,   296,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -419,  -419,  -419
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -329
static const yytype_int16 yytable[] =
{
      82,   115,    83,   164,    84,   150,   448,    85,   124,    86,
     395,    87,   429,   172,    24,   245,   121,   246,   152,     1,
     259,     4,   138,   399,   431,    63,   139,   140,   141,   237,
     238,   138,     5,   173,   178,   139,   140,   141,   156,   489,
     455,   491,   364,   142,  -162,   435,     8,   237,   238,   449,
     417,    10,   143,   239,   418,   419,   420,    59,   365,    60,
     497,   217,   417,   366,   220,   289,   418,   419,   420,   450,
     195,   242,   209,   210,   211,    62,   367,   297,    82,    73,
      83,    75,    84,   421,    82,    85,    83,    86,    84,    87,
     153,    85,   422,    86,   144,    87,   432,    77,    15,    79,
     368,   229,    15,   144,    90,    91,   369,   164,    16,   535,
      88,   516,    95,   252,   279,   279,   364,   280,   280,    82,
     364,    83,   423,    84,   540,    89,    85,    94,    86,   524,
      87,    96,   365,   101,   423,   109,   365,   366,   266,   261,
      98,   366,   179,   138,   111,   283,   112,   139,   140,   141,
     367,   113,   164,   417,   367,   116,   364,   418,   419,   420,
     525,   118,   531,   180,   181,   532,   476,   477,   478,   267,
     235,   236,   365,   143,   368,   119,   536,   366,   368,   531,
     369,   200,   532,   422,   369,   201,   202,   203,   496,   122,
     367,   284,   182,   548,  -264,   550,   123,   551,   237,   238,
     237,   238,   204,   183,   184,   510,   205,   126,  -320,  -328,
    -304,  -308,  -312,  -316,   368,   144,   502,   503,   237,   238,
     369,   128,   243,   519,   244,   423,   129,   344,   502,   503,
      82,   131,    83,   132,    84,  -256,   130,    85,   467,    86,
     504,    87,   468,   469,   470,   133,   364,    82,   134,    83,
     158,    84,   507,   161,    85,   273,    86,   364,    87,   471,
     502,   503,   365,   472,   377,   162,   378,   366,   171,   364,
     175,   364,   364,   365,   502,   503,   502,   503,   366,   278,
     367,   237,   238,   186,   508,   365,   189,   365,   365,   190,
     366,   367,   366,   366,   530,   188,   502,   503,   509,   191,
     518,   308,   193,   367,   368,   367,   367,    82,   197,    83,
     369,    84,   240,   241,    85,   368,    86,   198,    87,   290,
     213,   369,   212,   291,   292,   293,   294,   368,   216,   368,
     368,   371,   372,   369,   219,   369,   369,   214,   309,   215,
      82,    82,    83,    83,    84,    84,   309,    85,    85,    86,
      86,    87,    87,   224,   387,   311,   312,   500,   501,   226,
      26,   313,    17,   311,   312,    18,    19,    20,   248,   313,
     505,   506,   232,   314,   315,   502,   503,    27,    28,   316,
     251,   314,   315,    29,   317,   520,   521,   316,   262,   263,
     318,   250,   317,   253,   319,    30,    31,   320,   318,   255,
     309,    32,   319,   522,   523,   320,    33,   436,   256,   363,
     257,   258,    34,   264,   265,   268,    35,   311,   312,    36,
     151,  -155,   272,   313,  -139,  -147,    26,  -127,  -131,  -135,
     277,   271,   285,   301,   303,   314,   315,   305,   306,   342,
     345,   316,   355,    27,    28,    81,   317,   374,   359,    29,
     361,    26,   318,   370,   389,   379,   319,   390,   391,   320,
     430,    30,    31,   392,   393,   396,   398,    32,    27,    28,
     159,   400,    33,    26,    29,   403,   405,   407,    34,   406,
     408,   409,    35,   410,   412,    36,    30,    31,   413,   439,
      27,    28,    32,   438,   447,    26,    29,    33,   440,   456,
     460,   459,   462,    34,    26,   461,   465,    35,    30,    31,
      36,   483,    27,    28,    32,  -194,   479,  -222,    29,    33,
     480,    27,    28,   487,   482,    34,   515,    29,   484,    35,
      30,    31,    36,   485,   486,   490,    32,   495,   512,    30,
      31,    33,   517,   514,   526,    32,   529,    34,   309,   310,
      33,    35,   544,   537,    36,   545,    34,    26,   554,   549,
      35,   375,   300,    36,   288,   311,   312,   541,   494,   454,
      61,   313,   223,   538,    27,    28,   511,   298,   457,    26,
      29,     0,     0,   314,   315,     0,     0,   177,     0,   316,
       0,     0,    30,    31,   317,     0,    27,    28,    32,     0,
     318,   309,    29,    33,   319,     0,   401,   320,     0,    34,
       0,     0,     0,    35,    30,    31,    36,     0,   311,   312,
      32,     0,     0,   309,   313,    33,     0,     0,     0,     0,
       0,    34,   309,     0,   402,    35,   314,   315,    36,     0,
     311,   312,   316,   -92,     0,  -105,   313,   317,     0,   311,
     312,     0,     0,   318,     0,   313,     0,   319,   314,   315,
     320,     0,     0,   309,   316,     0,     0,   314,   315,   317,
       0,     0,     0,   316,     0,   318,     0,     0,   317,   319,
     311,   312,   320,     0,   318,   309,   313,     0,   319,     0,
     543,   320,     0,    26,     0,     0,     0,     0,   314,   315,
       0,     0,   311,   312,   316,     0,     0,   309,   313,   317,
      27,    28,   552,     0,     0,   318,    29,     0,     0,   319,
     314,   315,   320,     0,   311,   312,   316,     0,    30,    31,
     313,   317,     0,     0,    32,     0,     0,   318,     0,    33,
     553,   319,   314,   315,   320,    34,     0,     0,   316,    35,
       0,     0,    36,   317,     0,     0,     0,     0,     0,   318,
       0,     0,     0,   319,     0,     0,   320
};

static const yytype_int16 yycheck[] =
{
      37,    80,    37,   127,    37,   114,   412,    37,    98,    37,
     362,    37,   394,     6,    14,    33,    95,    35,     4,     3,
     231,     4,     4,   375,     4,    25,     8,     9,    10,    28,
      29,     4,     0,    26,   143,     8,     9,    10,   117,   457,
     422,   459,   321,    25,    65,   397,     5,    28,    29,     6,
       4,    65,    34,    52,     8,     9,    10,     4,   321,     7,
     466,   185,     4,   321,   188,   276,     8,     9,    10,    26,
     160,    52,   167,   168,   169,     7,   321,    13,   115,    25,
     115,     4,   115,    25,   121,   115,   121,   115,   121,   115,
      76,   121,    34,   121,    76,   121,    76,    25,     5,    25,
     321,   196,     5,    76,    47,    48,   321,   231,    15,   527,
      24,   493,    15,   222,    51,    51,   395,    54,    54,   156,
     399,   156,    76,   156,    13,    52,   156,     4,   156,   511,
     156,     4,   395,    25,    76,     4,   399,   395,   247,   234,
       7,   399,    16,     4,    25,   269,     4,     8,     9,    10,
     395,     4,   276,     4,   399,    25,   435,     8,     9,    10,
     512,    48,    51,    37,    38,    54,   442,   443,   444,   248,
       8,     9,   435,    34,   395,    25,   528,   435,   399,    51,
     395,     4,    54,    34,   399,     8,     9,    10,   464,     6,
     435,   270,    66,   545,    25,   547,    52,   549,    28,    29,
      28,    29,    25,    77,    78,   481,    29,    66,    39,    40,
      41,    42,    43,    44,   435,    76,    28,    29,    28,    29,
     435,    41,    52,   499,    52,    76,    42,   306,    28,    29,
     267,    44,   267,    39,   267,    66,    43,   267,     4,   267,
      52,   267,     8,     9,    10,    40,   525,   284,     4,   284,
      25,   284,    52,    52,   284,   255,   284,   536,   284,    25,
      28,    29,   525,    29,   343,    36,   345,   525,    52,   548,
      52,   550,   551,   536,    28,    29,    28,    29,   536,    26,
     525,    28,    29,    26,    52,   548,    26,   550,   551,    25,
     548,   536,   550,   551,    26,    57,    28,    29,    52,     6,
      52,   301,    26,   548,   525,   550,   551,   344,     4,   344,
     525,   344,    30,    31,   344,   536,   344,     6,   344,     4,
       4,   536,    52,     8,     9,    10,    11,   548,    26,   550,
     551,    47,    48,   548,    26,   550,   551,    52,     4,    52,
     377,   378,   377,   378,   377,   378,     4,   377,   378,   377,
     378,   377,   378,    26,   354,    21,    22,     8,     9,     4,
       4,    27,    76,    21,    22,    79,    80,    81,    46,    27,
      30,    31,    26,    39,    40,    28,    29,    21,    22,    45,
      61,    39,    40,    27,    50,   502,   503,    45,   237,   238,
      56,    58,    50,    52,    60,    39,    40,    63,    56,     7,
       4,    45,    60,   505,   506,    63,    50,    73,    26,    67,
       6,    25,    56,   240,   241,    12,    60,    21,    22,    63,
      64,    36,    72,    27,    39,    40,     4,    42,    43,    44,
      52,    26,    52,     5,    72,    39,    40,     7,     7,    26,
      61,    45,    25,    21,    22,    23,    50,    52,    25,    27,
      25,     4,    56,    24,     4,     7,    60,     4,    25,    63,
      64,    39,    40,     4,     4,    25,    48,    45,    21,    22,
      23,    52,    50,     4,    27,     4,    41,    43,    56,    42,
      44,    39,    60,    40,     7,    63,    39,    40,     4,     6,
      21,    22,    45,    52,    36,     4,    27,    50,    52,    26,
      26,    57,     6,    56,     4,    25,    67,    60,    39,    40,
      63,     4,    21,    22,    45,    24,    52,    48,    27,    50,
      52,    21,    22,    26,    52,    56,    61,    27,    52,    60,
      39,    40,    63,    52,    52,    26,    45,    26,    46,    39,
      40,    50,    52,    58,    12,    45,    26,    56,     4,     5,
      50,    60,     7,    52,    63,     7,    56,     4,    52,    61,
      60,   341,    62,    63,   275,    21,    22,   533,   462,   421,
      23,    27,   191,   531,    21,    22,   487,   281,   426,     4,
      27,    -1,    -1,    39,    40,    -1,    -1,   142,    -1,    45,
      -1,    -1,    39,    40,    50,    -1,    21,    22,    45,    -1,
      56,     4,    27,    50,    60,    -1,    53,    63,    -1,    56,
      -1,    -1,    -1,    60,    39,    40,    63,    -1,    21,    22,
      45,    -1,    -1,     4,    27,    50,    -1,    -1,    -1,    -1,
      -1,    56,     4,    -1,    59,    60,    39,    40,    63,    -1,
      21,    22,    45,    24,    -1,    48,    27,    50,    -1,    21,
      22,    -1,    -1,    56,    -1,    27,    -1,    60,    39,    40,
      63,    -1,    -1,     4,    45,    -1,    -1,    39,    40,    50,
      -1,    -1,    -1,    45,    -1,    56,    -1,    -1,    50,    60,
      21,    22,    63,    -1,    56,     4,    27,    -1,    60,    -1,
      62,    63,    -1,     4,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    21,    22,    45,    -1,    -1,     4,    27,    50,
      21,    22,    53,    -1,    -1,    56,    27,    -1,    -1,    60,
      39,    40,    63,    -1,    21,    22,    45,    -1,    39,    40,
      27,    50,    -1,    -1,    45,    -1,    -1,    56,    -1,    50,
      59,    60,    39,    40,    63,    56,    -1,    -1,    45,    60,
      -1,    -1,    63,    50,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    60,    -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,    83,   191,     4,     0,   192,   193,     5,   195,
      65,    84,    85,    91,   197,     5,    15,    76,    79,    80,
      81,    92,   198,   194,   198,   196,     4,    21,    22,    27,
      39,    40,    45,    50,    56,    60,    63,   201,   202,   203,
     204,   208,   211,   218,   219,   234,   242,   249,   250,   256,
     260,   263,   271,   272,   276,   280,   284,   288,   295,     4,
       7,   195,     7,   198,   212,   235,   243,   273,   277,   281,
     285,   289,   296,    25,   292,     4,   220,    25,   251,    25,
     261,    23,   202,   203,   208,   218,   249,   263,    24,    52,
      47,    48,   222,    93,     4,    15,     4,   199,     7,   213,
     236,    25,   274,   278,   282,   286,   290,   297,   209,     4,
     298,    25,     4,     4,   257,   201,    25,   223,    48,    25,
      86,   201,     6,    52,   199,   214,    66,   244,    41,    42,
      43,    44,    39,    40,     4,   210,   293,   299,     4,     8,
       9,    10,    25,    34,    76,   216,   224,   226,   264,   252,
     224,    64,     4,    76,   206,   207,   201,    94,    25,    23,
     200,    52,    36,   237,   216,   247,   275,   279,   283,   287,
     291,    52,     6,    26,   294,    52,   217,   226,   224,    16,
      37,    38,    66,    77,    78,   228,    26,   265,    57,    26,
      25,     6,   205,    26,    87,   199,   215,     4,     6,   245,
       4,     8,     9,    10,    25,    29,   229,   230,   231,   229,
     229,   229,    52,     4,    52,    52,    26,   216,   221,    26,
     216,   258,   262,   207,    26,    95,     4,   100,   102,   229,
     238,   248,    26,   233,   232,     8,     9,    28,    29,    52,
      30,    31,    52,    52,    52,    33,    35,   225,    46,   266,
      58,    61,   224,    52,    96,     7,    26,     6,    25,   247,
     246,   229,   230,   230,   231,   231,   224,   201,    12,   253,
     259,    26,    72,   198,    88,   101,   239,    52,    26,    51,
      54,   267,   268,   216,   201,    52,    97,    89,   100,   247,
       4,     8,     9,    10,    11,   227,   270,    13,   268,   254,
      62,     5,   103,    72,   240,     7,     7,   255,   198,     4,
       5,    21,    22,    27,    39,    40,    45,    50,    56,    60,
      63,   113,   114,   115,   123,   124,   130,   134,   137,   140,
     141,   145,   146,   155,   156,   160,   164,   168,   172,   179,
     186,    90,    26,   269,   201,    61,   105,   157,   161,   165,
     169,   173,   180,   187,   104,    25,   176,   183,   147,    25,
     125,    25,   135,    67,   114,   115,   123,   137,   140,   145,
      24,    47,    48,   149,    52,   103,   241,   201,   201,     7,
     158,   162,   166,   170,   174,   181,   188,   198,   138,     4,
       4,    25,     4,     4,   131,   113,    25,   150,    48,   113,
      52,    53,    59,     4,   106,    41,    42,    43,    44,    39,
      40,   189,     7,     4,   139,   177,   184,     4,     8,     9,
      10,    25,    34,    76,   151,   152,   153,   116,   126,   151,
      64,     4,    76,   143,   144,   113,    73,    98,    52,     6,
      52,   159,   163,   167,   171,   175,   182,    36,   106,     6,
      26,   178,   185,   154,   152,   151,    26,   228,   117,    57,
      26,    25,     6,   142,    99,    67,   107,     4,     8,     9,
      10,    25,    29,   108,   109,   110,   108,   108,   108,    52,
      52,   190,    52,     4,    52,    52,    52,    26,   148,   153,
      26,   153,   132,   136,   144,    26,   108,   106,   112,   111,
       8,     9,    28,    29,    52,    30,    31,    52,    52,    52,
     108,   225,    46,   118,    58,    61,   151,    52,    52,   108,
     109,   109,   110,   110,   151,   113,    12,   127,   133,    26,
      26,    51,    54,   119,   120,   153,   113,    52,   227,   122,
      13,   120,   128,    62,     7,     7,   129,   121,   113,    61,
     113,   113,    53,    59,    52
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
        case 5:

/* Line 1455 of yacc.c  */
#line 148 "syntaxe.y"
    {fprintf(f,"%s",identif); strcpy(fname,identif); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 149 "syntaxe.y"
    {fprintf(f,"( ");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 149 "syntaxe.y"
    {fprintf(f," )");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 149 "syntaxe.y"
    {funcTest(fname,&fhead,pn,args,tokens);pn=0;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 149 "syntaxe.y"
    {fprintf(f," {");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 150 "syntaxe.y"
    {fprintf(f,"}");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 152 "syntaxe.y"
    {fprintf(f,"void ");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 152 "syntaxe.y"
    {fprintf(f,"%s",identif); strcpy(fname,identif); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 153 "syntaxe.y"
    {fprintf(f,"( ");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 153 "syntaxe.y"
    {fprintf(f," )");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 153 "syntaxe.y"
    {funcTest(fname,&fhead,pn,args,tokens);pn=0;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 153 "syntaxe.y"
    {fprintf(f," {");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 154 "syntaxe.y"
    {fprintf(f,"}");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 158 "syntaxe.y"
    {fprintf(f,"\nreturn ");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 158 "syntaxe.y"
    {fprintf(f,";");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 161 "syntaxe.y"
    {fprintf(f,",");strcpy(args[pn++],identif);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 162 "syntaxe.y"
    {strcpy(args[pn++],identif);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 164 "syntaxe.y"
    {if(type_return==-1){identifTestf(identif,tokens,&heads,type,0);}else{identifTestf(identif,tokens,&heads,type,1);} fprintf(f,"%s",identif);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 168 "syntaxe.y"
    {fprintf(f,"\t");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 168 "syntaxe.y"
    {fprintf(f,";");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 169 "syntaxe.y"
    {fprintf(f,"\t");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 169 "syntaxe.y"
    {fprintf(f,";");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 172 "syntaxe.y"
    {if(type_return==-1){
						identifTestf(identif,tokens,&heads,type,0);
					}else{
						identifTestf(identif,tokens,&heads,type,1);} 
					fprintf(f,"%s",identif);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 177 "syntaxe.y"
    {fprintf(f,"%s ,",identif);
		  					 if(type_return==-1){
		  					 		identifTestf(identif,tokens,&heads,type,0);
		  					 }else{
		  					 		identifTestf(identif,tokens,&heads,type,1);}
		  					 ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 198 "syntaxe.y"
    { fprintf(f,"(");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 198 "syntaxe.y"
    {fprintf(f,")");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 199 "syntaxe.y"
    { fprintf(f," %s ",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 201 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  
        		  ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 210 "syntaxe.y"
    {type=0;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 211 "syntaxe.y"
    {type=1;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 212 "syntaxe.y"
    {type=2;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 231 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 237 "syntaxe.y"
    {fprintf(f,"switch("); fprintf(f,"%s",identif); type=-1;strcpy(autre,identif);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 237 "syntaxe.y"
    {if(type_return==-1){isUsableF(heads,identif,0);giveValuef(heads,identif);}else{isUsableF(heads,identif,1);};}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 238 "syntaxe.y"
    {fprintf(f,")");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 238 "syntaxe.y"
    {printf("switch correct\n");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 244 "syntaxe.y"
    {fprintf(f,": ");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 244 "syntaxe.y"
    {fprintf(f,";\n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 245 "syntaxe.y"
    {fprintf(f,"default :");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 254 "syntaxe.y"
    {fprintf(f,"\tfor(");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 254 "syntaxe.y"
    {fprintf(f,"%s",identif); fprintf(f,"=");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 254 "syntaxe.y"
    {fprintf(f," ; "); fprintf(f,"%s",identif); fprintf(f,"<");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 254 "syntaxe.y"
    {fprintf(f," ; ");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 254 "syntaxe.y"
    {fprintf(f,"%s",identif); fprintf(f,"++){\n");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 254 "syntaxe.y"
    {fprintf(f,"\t}\n");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 257 "syntaxe.y"
    {fprintf(f,"\twhile(");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 257 "syntaxe.y"
    {fprintf(f,")");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 257 "syntaxe.y"
    {fprintf(f,"{\n");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 257 "syntaxe.y"
    {fprintf(f,"}\n");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 260 "syntaxe.y"
    {fprintf(f,"do{\n");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 260 "syntaxe.y"
    {fprintf(f,"}while(");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 260 "syntaxe.y"
    {fprintf(f,");\n");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 263 "syntaxe.y"
    {fprintf(f,"\tscanf(\"");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 266 "syntaxe.y"
    { isUsableF(heads,identif,0); setValueF(identif,0.0,heads);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 267 "syntaxe.y"
    { isUsableF(heads,identif,0); setValueF(identif,0.0,heads);
		    tp=return_typeF(heads,identif);
		
		
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

  case 92:

/* Line 1455 of yacc.c  */
#line 288 "syntaxe.y"
    {fprintf(f,"\tprintf(");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 288 "syntaxe.y"
    { strcat(partie1,"\""); 
fprintf(f,"\"%s%s",partie1,partie2);fprintf(f,");\n"); strcpy(partie1,"");strcpy(partie2,"");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 296 "syntaxe.y"
    {  strcat(partie1,value); strcat(partie1,"");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 297 "syntaxe.y"
    { isUsableF(heads,identif,0);giveValuef(heads,identif); tp=return_typeF(heads,identif);
	  switch (tp){
			
				case 0 :strcat(partie1," %d\\n"); strcat(partie1,"\n");
				break;
				
				case 1 :strcat(partie1," %f\\n");
				break;
			
				case 2 :strcat(partie1," %c\\n");
				break;
			
				case 3 :strcat(partie1," %s\\n");
				break;
			} 
			strcat(partie2,","); strcat(partie2,identif); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 320 "syntaxe.y"
    {fprintf(f,"\tif(");;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 320 "syntaxe.y"
    {fprintf(f,"){\n");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 320 "syntaxe.y"
    {fprintf(f,"\t}\n");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 322 "syntaxe.y"
    {fprintf(f,"\telse {");}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 322 "syntaxe.y"
    {fprintf(f,"\t}\n");;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 334 "syntaxe.y"
    {fprintf(f,"%s",identif);type=-1;strcpy(autre,identif);;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 334 "syntaxe.y"
    {if(type_return==-1){isUsableF(heads,identif,0);giveValuef(heads,identif);}else{isUsableF(heads,identif,1);} ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 335 "syntaxe.y"
    {type=0;;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 336 "syntaxe.y"
    {type=1;;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 337 "syntaxe.y"
    {type=2;;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 338 "syntaxe.y"
    {type=3;;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 342 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 343 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 344 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 345 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 346 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 347 "syntaxe.y"
    {initialiserF(heads,lvalue);fprintf(f,";");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 349 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 124:

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

  case 125:

/* Line 1455 of yacc.c  */
#line 357 "syntaxe.y"
    {fprintf(f," += ",identif);;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 359 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 128:

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

  case 129:

/* Line 1455 of yacc.c  */
#line 367 "syntaxe.y"
    {fprintf(f," -= ",identif);;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 369 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 371 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 377 "syntaxe.y"
    {fprintf(f," *= ",identif);;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 379 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 381 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 387 "syntaxe.y"
    {fprintf(f," /= ",identif);;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 390 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 392 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 398 "syntaxe.y"
    {fprintf(f,"++");;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 399 "syntaxe.y"
    {fprintf(f,"\t++");;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 399 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 401 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 409 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 411 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 417 "syntaxe.y"
    {fprintf(f,"--");;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 418 "syntaxe.y"
    {fprintf(f,"--");;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 418 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 420 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 428 "syntaxe.y"
    {fprintf(f,"\t%s",identif);type=-1;strcpy(autre,identif);;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 429 "syntaxe.y"
    {if(type_return==-1){
					  		isUsableF(heads,identif,0);
					  }else{isUsableF(heads,identif,1);}
					  ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 433 "syntaxe.y"
    { strcpy(identif1,identif);;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 434 "syntaxe.y"
    {fprintf(f,"=");strcpy(lvalue,identif);;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 434 "syntaxe.y"
    { affect_testF(heads,identif1,type,autre); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 440 "syntaxe.y"
    {strcat(identif,".c");
				f=fopen(identif,"w");
				fprintf(f,"#include<stdio.h>\n#include<stdlib.h>\n#include<string.h>\n"); 
				 fprintf(f,"int main(){\n");
				 ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 445 "syntaxe.y"
    {fprintf(f,"\treturn 0;\n}"); fclose(f);;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 447 "syntaxe.y"
    {strcat(identif,".c");
				f=fopen(identif,"w");
				fprintf(f,"#include<stdio.h>\n#include<stdlib.h>\n#include<string.h>\n"); 
				 ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 451 "syntaxe.y"
    {fprintf(f,"\nint main(){\n");;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 451 "syntaxe.y"
    {fprintf(f,"\treturn 0;\n}"); fclose(f);;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 458 "syntaxe.y"
    {fprintf(f,"\t");;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 458 "syntaxe.y"
    {fprintf(f,";");;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 459 "syntaxe.y"
    {fprintf(f,"\t");;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 459 "syntaxe.y"
    {fprintf(f,";");;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 462 "syntaxe.y"
    { type = 0;;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 463 "syntaxe.y"
    { type = 1;;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 464 "syntaxe.y"
    { type = 2;;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 465 "syntaxe.y"
    { type = 3;;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 469 "syntaxe.y"
    {if(type_return==-1){
						identifTest(identif,tokens,&head,type,0);
					}else{
						identifTest(identif,tokens,&head,type,1);} 
					fprintf(f,"%s",identif);;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 474 "syntaxe.y"
    {fprintf(f,"%s ,",identif);
		  					 if(type_return==-1){
		  					 		identifTest(identif,tokens,&head,type,0);
		  					 }else{
		  					 		identifTest(identif,tokens,&head,type,1);}
		  					 ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 498 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 506 "syntaxe.y"
    {fprintf(f,"\tprintf(");;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 506 "syntaxe.y"
    { strcat(partie1,"\""); 
fprintf(f,"\"%s%s",partie1,partie2);fprintf(f,");\n"); strcpy(partie1,"");strcpy(partie2,""); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 514 "syntaxe.y"
    {  strcat(partie1,value); strcat(partie1," ");;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 515 "syntaxe.y"
    {  isUsable(head,identif,0);giveValue(head,identif); tp=return_type(head,identif);
		
		
		switch (tp){
			
				case 0 :strcat(partie1," %d\\n"); 
				break;
				
				case 1 :strcat(partie1," %f\\n");
				break;
			
				case 2 :strcat(partie1," %c\\n");
				break;
			
				case 3 :strcat(partie1," %s\\n");
				break;
			} 
			strcat(partie2,","); strcat(partie2,identif); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 536 "syntaxe.y"
    {fprintf(f,"\n "); fprintf(f,"\tscanf(\""); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 539 "syntaxe.y"
    { isUsable(head,identif,0); setValue(identif,0.0,head);;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 540 "syntaxe.y"
    { isUsable(head,identif,0); setValue(identif,0.0,head);
		    tp=return_type(head,identif);
		
		
		switch (tp){
			
				case 0 : strcpy(temp_identif,"%d");fprintf(f,"%s\", &%s) ;",temp_identif,identif);
				break;
				
				case 1 :strcpy(temp_identif,"%f");fprintf(f,"%s\", &%s); ",temp_identif,identif);
				break;
			
				case 2 :strcpy(temp_identif,"%c");fprintf(f,"%s\", &%s) ;",temp_identif,identif);
				break;
			
				case 3 :strcpy(temp_identif,"%s");fprintf(f,"%s\", &%s); ",temp_identif,identif);
				break;
			} 
		;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 562 "syntaxe.y"
    {fprintf(f,"\t%s",identif);type=-1;strcpy(autre,identif);;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 563 "syntaxe.y"
    {if(type_return==-1){
					  		isUsable(head,identif,0);
					  }else{isUsable(head,identif,1);}
					  ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 567 "syntaxe.y"
    { strcpy(identif1,identif);;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 568 "syntaxe.y"
    {fprintf(f," = ");strcpy(lvalue,identif);;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 568 "syntaxe.y"
    { affect_test(head,identif1,type,autre); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 571 "syntaxe.y"
    {fprintf(f,"%s",identif);type=-1;strcpy(autre,identif);;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 571 "syntaxe.y"
    {if(type_return==-1){isUsable(head,identif,0);giveValue(head,identif);}else{isUsable(head,identif,1);};}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 572 "syntaxe.y"
    {type=0;;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 573 "syntaxe.y"
    {type=1;;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 574 "syntaxe.y"
    {type=2;;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 575 "syntaxe.y"
    {type=3;;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 587 "syntaxe.y"
    {fprintf(f,"\tif(");;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 587 "syntaxe.y"
    {fprintf(f,"){\n");;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 587 "syntaxe.y"
    {fprintf(f,"\t}\n");;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 589 "syntaxe.y"
    {fprintf(f,"\telse {");}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 589 "syntaxe.y"
    {fprintf(f,"\t}\n");;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 610 "syntaxe.y"
    {fprintf(f," == ");;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 627 "syntaxe.y"
    { fprintf(f,"(");;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 627 "syntaxe.y"
    {fprintf(f,")");;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 628 "syntaxe.y"
    {fprintf(f," %s ",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 630 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 637 "syntaxe.y"
    {type=0;;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 638 "syntaxe.y"
    {type=1;;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 639 "syntaxe.y"
    {type=2;;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 644 "syntaxe.y"
    {fprintf(f,"%s",identif);;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 644 "syntaxe.y"
    { if(type_return==-1){
					  		isUsable(head,identif,0);
					  	}
					  else{
					  isUsable(head,identif,1);
					  	}
				;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 650 "syntaxe.y"
    {fprintf(f," = ");;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 650 "syntaxe.y"
    {fprintf(f,"%s",identif);;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 650 "syntaxe.y"
    {fprintf(f,"("); strcpy(fname,identif);isUsablef(fhead,fname);;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 650 "syntaxe.y"
    {isParaEqual(fhead,fname,pn);pn=0;;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 650 "syntaxe.y"
    {fprintf(f,");");;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 652 "syntaxe.y"
    {fprintf(f,"%s",identif);;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 652 "syntaxe.y"
    {fprintf(f,"("); strcpy(fname,identif);isUsablef(fhead,fname);;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 652 "syntaxe.y"
    {isParaEqual(fhead,fname,pn);pn=0;;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 652 "syntaxe.y"
    {fprintf(f,");");;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 656 "syntaxe.y"
    {fprintf(f,",");pn++;;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 657 "syntaxe.y"
    {pn++;;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 665 "syntaxe.y"
    {fprintf(f,"\tfor(");;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 665 "syntaxe.y"
    {fprintf(f,"%s",identif); fprintf(f,"=");;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 666 "syntaxe.y"
    {fprintf(f," ; "); fprintf(f,"%s",identif); fprintf(f,"<");;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 666 "syntaxe.y"
    {fprintf(f," ; ");;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 667 "syntaxe.y"
    {fprintf(f,"%s",identif); fprintf(f,"++){\n");;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 667 "syntaxe.y"
    {fprintf(f,"\t}\n");;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 670 "syntaxe.y"
    {fprintf(f,"\twhile(");;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 670 "syntaxe.y"
    {fprintf(f,")");;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 670 "syntaxe.y"
    {fprintf(f,"{\n");;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 671 "syntaxe.y"
    {fprintf(f,"}\n");;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 674 "syntaxe.y"
    {fprintf(f,"do{\n");;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 674 "syntaxe.y"
    {fprintf(f,"}while(");;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 675 "syntaxe.y"
    {fprintf(f,");\n");;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 678 "syntaxe.y"
    {fprintf(f,"switch("); fprintf(f,"%s",identif); type=-1;strcpy(autre,identif);;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 678 "syntaxe.y"
    {if(type_return==-1){isUsable(head,identif,0);giveValue(head,identif);}else{isUsable(head,identif,1);};}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 680 "syntaxe.y"
    {fprintf(f,")");;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 680 "syntaxe.y"
    {printf("switch correct\n");;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 686 "syntaxe.y"
    {fprintf(f,": ");;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 686 "syntaxe.y"
    {fprintf(f,";\n");;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 687 "syntaxe.y"
    {fprintf(f,"default :");;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 690 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 691 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 692 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 693 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 694 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 695 "syntaxe.y"
    {initialiser(head,lvalue);fprintf(f,";");;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 697 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 305:

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

  case 306:

/* Line 1455 of yacc.c  */
#line 705 "syntaxe.y"
    {fprintf(f," += ",identif);;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 707 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 709 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 715 "syntaxe.y"
    {fprintf(f," -= ",identif);;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 717 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 719 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 725 "syntaxe.y"
    {fprintf(f," *= ",identif);;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 727 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 729 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 735 "syntaxe.y"
    {fprintf(f," /= ",identif);;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 738 "syntaxe.y"
    {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 740 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 746 "syntaxe.y"
    {fprintf(f,"++");;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 747 "syntaxe.y"
    {fprintf(f,"\t++");;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 747 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 749 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 757 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 759 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 766 "syntaxe.y"
    {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 768 "syntaxe.y"
    {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  ;}
    break;



/* Line 1455 of yacc.c  */
#line 3866 "syntaxeY.c"
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
#line 777 "syntaxe.y"

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

void setValue(char *identif, float a, var *head)
{
	var* current = head;  
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0) 
        {
		    current->value = (char*)malloc(sizeof(char)+1);
			current->valnum=a;
        }
		current = current->next; 
    } 
}

void setValueF(char *identif, float a, vars *heads)
{
	vars* current = heads;  
    while (current != NULL) 
    { 
        if (strcmp(current->identif,identif) == 0) 
        {
		    current->value = (char*)malloc(sizeof(char)+1);
			current->valnum=a;
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
