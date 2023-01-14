%{
	#include<string.h>
	#include "unitesLexicales.h"
%}

nbr [0-9]
identif [a-zA-Z][0-9a-zA-Z_]*
entier [+-]?{nbr}+
reel [+-]?{nbr}+"."{nbr}+
boolean vrai|faux
fichier {identif}\.{identif}
text [A-Za-z0-9_,; \t\n]
affichage \".*\"
comment "/*"{text}+"*/" 
type entier|reel|boolean
car \'.*\'

%%

","  { ECHO; return VIRGULE;}
":"  { ECHO; return DEUX_POINTS; }
"{"  { ECHO; return ACC_O; }
"}"  { ECHO; return ACC_F; }
")"  { ECHO; return PARTH_F; }
"("  { ECHO; return PARTH_O; }
"+"   { ECHO; return ADD; }
"-"   { ECHO; return SOUST; }
"*"   { ECHO; return MULT; }
"/"   { ECHO; return DIVS; }
"%"   { ECHO; return MODU; }
"&"   { ECHO; return ET; }
"!"   { ECHO; return NOT; }
"|"   { ECHO; return OR; }
"="   { ECHO; return AFFECTATION; }
"=="   { ECHO; return EGAL; }
"<>"   { ECHO; return DIFF; }
"<"   { ECHO; return INF; }
"<="   { ECHO; return INFEGAL; }
">"   { ECHO; return SUP; }
">="   { ECHO; return SUPEGAL; }
"++"   { ECHO; return INC; }
"+="   { ECHO; return ASS_ADD; }
"-="   { ECHO; return ASS_SOUS; }
"*="   { ECHO; return ASS_MULT; }
"/="   { ECHO; return ASS_DIV; }
"\""  { ECHO; return DOUBLE_COTES; }
";"   { ECHO; return POINT_VIRGULE; }
\n { }
\t { }
" " { }

algo   { ECHO; return ALGO; }
var   { ECHO; return VAR; }

caractere    { ECHO; return CARACTERE; }
typedf    { ECHO; return TYPEDF; }
str    { ECHO; return STR; }
debut    { ECHO; return DEBUT; }
fin    { ECHO; return FIN; }
afficher    { ECHO; return AFFICHER; }
lire    { ECHO; return LIRE; }
si    { ECHO; return SI; }
alors    { ECHO; return ALORS; }
sinon    { ECHO; return SINON; }
finsi    { ECHO; return FINSI; }
finsinon    { ECHO; return FINSINON; }
switch { ECHO; return SWITCH; }
cas { ECHO; return CAS; }
break { ECHO; return BREAK; }
autre { ECHO; return AUTRE; }
finswitch { ECHO; return FINSWITCH; }
pour { ECHO; return POUR; }
allant { ECHO; return ALLANT; }
to { ECHO; return TO; }
finpour { ECHO; return FINPOUR; }
tantque { ECHO; return TANTQUE; }
faire { ECHO; return FAIRE; }
fintq { ECHO; return FINTQ; }
repeter { ECHO; return REPETER; }
while { ECHO; return WHILE; }
loop { ECHO; return LOOP; }
endloop { ECHO; return ENDLOOP; }
goto { ECHO; return GOTO; }
function { ECHO; return FUNCTION; }
finfct { ECHO; return FINFCT; }
procedure { ECHO; return PROCEDURE; }
finproc { ECHO; return FINPROC; }
{boolean}    { ECHO; strcpy(valBoolean, yytext); return BOOLEAN; }
{type} {ECHO; return TYPE;}
{affichage} {ECHO;yytext[strlen(yytext)-1]='\0' ;strcpy(valAffichage,yytext+1); return AFFICHAGE;}
{car} { ECHO; yytext[strlen(yytext)-1]='\0' ; strcpy(valChar, yytext+1); return CARACTERE; }
{comment}  { ECHO; return COMMENT; }
{identif} {ECHO; strcpy(valIdentif, yytext); return IDENTIF; }
{entier}    { ECHO; valEntier = atoi(yytext);return ENTIER; }
{reel}    { ECHO; valReel = atof(yytext);return REEL; }
{fichier}    { ECHO; strcpy(valFichier, yytext);return FICHIER; }
. { ECHO; return yytext[0]; }


%%
int valEntier;
float valReel;
char valBoolean[6];
char valIdentif[256];
char valFichier[256];
char valAffichage[256];
char valChar[256];

int yywrap(void) {
	return 1;
}
