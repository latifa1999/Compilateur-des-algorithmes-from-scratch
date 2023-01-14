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
string \"([^"\n])*\"
text [A-Za-z0-9_,;:= \n\t]
comment "//".*"" 
comment_lignes "/*"{text}+"*/"
car \'.*\'

%%

","   				{  return VIRGULE;}
":"   				{  return DEUX_POINTS; }
"{"   				{  fprintf(f,"%s",yytext);return ACC_O; }
"}"   				{  fprintf(f,"%s",yytext);return ACC_F; }
")"   				{  return PARTH_F; }
"("   				{  return PARTH_O; }
"+"   				{  fprintf(f,"%s",yytext);return ADD; }
"-"   				{  fprintf(f,"%s",yytext);return SOUST; }
"*"   				{  fprintf(f,"%s",yytext);return MULT; }
"/"   				{  fprintf(f,"%s",yytext);return DIVS; }
"%"   				{  fprintf(f,"%s",yytext);return MODU; }
"&"   				{  fprintf(f," && "); return ET; }
"!"   				{  fprintf(f,"%s",yytext);return NOT; }
"|"   				{  fprintf(f," || ");return OR; }
"<-"   				{  return AFFECTATION; }
"="  				{  return EGAL; }
"<>"   				{  fprintf(f," != ");return DIFF; }
"<"    				{  fprintf(f,"%s",yytext);return INF; }
"<="   				{  fprintf(f,"%s",yytext);return INFEGAL; }
">"  				{  fprintf(f,"%s",yytext);return SUP; }
">="   				{  fprintf(f,"%s",yytext);return SUPEGAL; }
"++"   				{  return INC; }
"--" 				{  return DEC;}
"+="   				{  return ASS_ADD; }
"-="   				{  return ASS_SOUS; }
"*="   				{  return ASS_MULT; }
"/="   				{  return ASS_DIV; }
"\""  				{  fprintf(f,"%s",yytext); return DOUBLE_COTES; }
";"   				{  return POINT_VIRGULE; }
"[" 				{  fprintf(f,"%s",yytext); return CR_O; }
"]" 				{  fprintf(f,"%s",yytext); return CR_F; }

algo   				{ fprintf(f,"%s",yytext);return ALGO; }
var   				{  return VAR; }
int 				{  fprintf(f,"%s ",yytext); return INTD; }
float  				{  fprintf(f,"%s ",yytext); return FLOATD; 		}
char  				{  fprintf(f,"%s ",yytext); return CHARD;		}
const 				{  return CONST; }
caractere    		{  return CARACTERE; }
debut   		 	{  return DEBUT; }
fin    				{  return FIN; }
afficher    		{  return AFFICHER; }
lire    			{  return LIRE; }
si    				{  return SI; }
alors    			{  return ALORS; }
sinon    			{  return SINON; }
finsi    			{  return FINSI; }
finsinon    		{  return FINSINON; }
selon 				{  return SELON; }
cas 				{  fprintf(f,"case "); return CAS; }
break 				{  fprintf(f,"%s ",yytext); return BREAK; }
autre 				{  return AUTRE; }
finswitch 			{  return FINSWITCH; }
pour 				{  return POUR; }
allant 				{  return ALLANT; }
to 					{  return TO; }
finpour 			{  return FINPOUR; }
tantque 			{  return TANTQUE; }
faire 				{  return FAIRE; }
fintq 				{  return FINTQ; }
repeter 			{  return REPETER; }
jusqu 				{  return JUSQU; }
function 			{  return FUNCTION; }
deb_fct 			{  return DEB_FCT; }
deb_proc 			{  return DEB_PROC; }
retourne 			{  return RETOURNE; }
finfct 				{  return FINFCT; }
procedure 			{  return PROCEDURE; }
finproc 			{  return FINPROC; }
tableau 			{  return TABLEAU; }
matrice 			{  return MATRICE; }
{boolean}    		{  strcpy(value,yytext); return BOOLEAN; }
{string} 			{  yytext[strlen(yytext)-1]='\0';strcpy(value,yytext+1); return STRING; }
{car}				{  fprintf(f,"%s",yytext); value[0]=yytext[1]; return CARACTERE; }
{comment}  			{  return COMMENT; }
{comment_lignes} 	{  return COMMENT_LIGNES; }
{identif} 			{  strcpy(identif,yytext); return IDENTIF;}
{entier}    		{  fprintf(f,"%s",yytext); strcpy(value,yytext); return ENTIER; }
{reel}    			{  fprintf(f,"%s",yytext); strcpy(value,yytext); return REEL; }

[ \t] ;
"\n"				{  fprintf(f,"%s",yytext); lineNumber++;}
. {  return yytext[0]; }

%%
int yywrap(void) {
    return 1;
}