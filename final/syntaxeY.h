
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


