%{
	#include<string.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "syntaxeY.h"


	int lineNumber = 0;
	char identif[25];
	char value[250];
	FILE *f;

%}



nbr [0-9]
identif [a-zA-Z][0-9a-zA-Z_]*
entier {nbr}+
reel [-]?{nbr}+"."{nbr}+
boolean vrai|faux
string "\""{text}+"\""
text [A-Za-z0-9_,; \n\t]
comment "//".*"" 
comment_lignes "/*"{text}+"*/"
car \'.*\'

%%

","   				{ ECHO; return VIRGULE;}
":"   				{ ECHO; return DEUX_POINTS; }
"{"   				{ ECHO; fprintf(f,"%s",yytext);return ACC_O; }
"}"   				{ ECHO; fprintf(f,"%s",yytext);return ACC_F; }
")"   				{ ECHO; return PARTH_F; }
"("   				{ ECHO; return PARTH_O; }
"+"   				{ ECHO; fprintf(f,"%s",yytext);return ADD; }
"-"   				{ ECHO; fprintf(f,"%s",yytext);return SOUST; }
"*"   				{ ECHO; fprintf(f,"%s",yytext);return MULT; }
"/"   				{ ECHO; fprintf(f,"%s",yytext);return DIVS; }
"%"   				{ ECHO; fprintf(f,"%s",yytext);return MODU; }
"&"   				{ ECHO; fprintf(f,"%s",yytext); return ET; }
"!"   				{ ECHO; fprintf(f,"%s",yytext);return NOT; }
"|"   				{ ECHO; fprintf(f,"%s",yytext);return OR; }
"<-"   				{ ECHO; return AFFECTATION; }
"=="  				{ ECHO; fprintf(f,"%s",yytext);return EGAL; }
"<>"   				{ ECHO; fprintf(f,"%s",yytext);return DIFF; }
"<"    				{ ECHO; fprintf(f,"%s",yytext);return INF; }
"<="   				{ ECHO; fprintf(f,"%s",yytext);return INFEGAL; }
">"  				{ ECHO; fprintf(f,"%s",yytext);return SUP; }
">="   				{ ECHO; fprintf(f,"%s",yytext);return SUPEGAL; }
"++"   				{ ECHO; return INC; }
"--" 				{ ECHO; return DEC;}
"+="   				{ ECHO; return ASS_ADD; }
"-="   				{ ECHO; return ASS_SOUS; }
"*="   				{ ECHO; return ASS_MULT; }
"/="   				{ ECHO; return ASS_DIV; }
"\""  				{ ECHO; fprintf(f,"%s",yytext); return DOUBLE_COTES; }
";"   				{ ECHO; return POINT_VIRGULE; }
"[" 				{ ECHO; fprintf(f,"%s",yytext); return CR_O; }
"]" 				{ ECHO; fprintf(f,"%s",yytext); return CR_F; }

algo   				{ ECHO; fprintf(f,"%s",yytext);return ALGO; }
var   				{ ECHO; return VAR; }
int 				{ ECHO; fprintf(f,"%s ",yytext); return INTD; }
float  				{ ECHO; fprintf(f,"%s ",yytext); return FLOATD; 		}
char  				{ ECHO; fprintf(f,"%s ",yytext); return CHARD;		}
const 				{ ECHO; return CONST; }
caractere    		{ ECHO; return CARACTERE; }
debut   		 	{ ECHO; return DEBUT; }
fin    				{ ECHO; return FIN; }
afficher    		{ ECHO; return AFFICHER; }
lire    			{ ECHO; return LIRE; }
si    				{ ECHO; return SI; }
alors    			{ ECHO; return ALORS; }
sinon    			{ ECHO; return SINON; }
finsi    			{ ECHO; return FINSI; }
finsinon    		{ ECHO; return FINSINON; }
selon 				{ ECHO; return SELON; }
cas 				{ ECHO; fprintf(f,"%s ",yytext); return CAS; }
break 				{ ECHO; fprintf(f,"%s ",yytext); return BREAK; }
autre 				{ ECHO; return AUTRE; }
finswitch 			{ ECHO; return FINSWITCH; }
pour 				{ ECHO; return POUR; }
allant 				{ ECHO; return ALLANT; }
to 					{ ECHO; return TO; }
finpour 			{ ECHO; return FINPOUR; }
tantque 			{ ECHO; return TANTQUE; }
faire 				{ ECHO; return FAIRE; }
fintq 				{ ECHO; return FINTQ; }
repeter 			{ ECHO; return REPETER; }
jusqu 				{ ECHO; return JUSQU; }
function 			{ ECHO; return FUNCTION; }
deb_fct 			{ ECHO; return DEB_FCT; }
deb_proc 			{ ECHO; return DEB_PROC; }
retourne 			{ ECHO; return RETOURNE; }
finfct 				{ ECHO; return FINFCT; }
procedure 			{ ECHO; return PROCEDURE; }
finproc 			{ ECHO; return FINPROC; }
tableau 			{ ECHO; return TABLEAU; }
matrice 			{ ECHO; return MATRICE; }
{boolean}    		{ ECHO; strcpy(value,yytext); return BOOLEAN; }
{string} 			{ ECHO; strncpy(value,yytext+1,strlen(yytext)-2); return STRING; }
{car}				{ ECHO; fprintf(f,"%s",yytext); value[0]=yytext[1]; return CARACTERE; }
{comment}  			{ ECHO; return COMMENT; }
{comment_lignes} 	{ ECHO; return COMMENT_LIGNES; }
{identif} 			{ ECHO; strcpy(identif,yytext); return IDENTIF;}
{entier}    		{ ECHO; fprintf(f,"%s",yytext); strcpy(value,yytext); return ENTIER; }
{reel}    			{ ECHO; fprintf(f,"%s",yytext); strcpy(value,yytext); return REEL; }

[ \t] ;
"\n"				{ ECHO; fprintf(f,"%s",yytext); lineNumber++;}
. {  return yytext[0]; }

%%
int yywrap(void) {
    return 1;
}