%{
	extern int lineNumber;
	#include<string.h>
	#include <stdlib.h>
	#include "syntaxeY.h"
%}

%option noyywrap

nbr [0-9]
identif [a-zA-Z][0-9a-zA-Z_]*
entier {nbr}+
reel [-]?{nbr}+"."{nbr}+
boolean vrai|faux
string \".*\"
text [A-Za-z0-9_,; \n\t]
comment "//".*"" 
comment_lignes "/*"{text}+"*/"
type entier|reel|boolean|caractere
car \'.*\'

%%D

","  {  return VIRGULE;}
":"  {  return DEUX_POINTS; }
"{"  {  return ACC_O; }
"}"  {  return ACC_F; }
")"  {  return PARTH_F; }
"("  {  return PARTH_O; }
"+"   {  return ADD; }
"-"   {  return SOUST; }
"*"   {  return MULT; }
"/"   {  return DIVS; }
"%"   {  return MODU; }
"&"   {  return ET; }
"!"   {  return NOT; }
"|"   {  return OR; }
"<-"   {  return AFFECTATION; }
"="   {  return EGAL; }
"<>"   {  return DIFF; }
"<"   {  return INF; }
"<="   {  return INFEGAL; }
">"   {  return SUP; }
">="   {  return SUPEGAL; }
"++"   {  return INC; }
"--" { return DEC;}
"+="   {  return ASS_ADD; }
"-="   {  return ASS_SOUS; }
"*="   {  return ASS_MULT; }
"/="   {  return ASS_DIV; }
"\""  {  return DOUBLE_COTES; }
";"   {  return POINT_VIRGULE; }
"[" { return CR_O; }
"]" { return CR_F; }

algo   {  return ALGO; }
var   {  return VAR; }
const { return CONST; }

caractere    {  return CARACTERE; }
debut    {  return DEBUT; }
fin    {  return FIN; }
afficher    {  return AFFICHER; }
lire    {  return LIRE; }
si    {  return SI; }
alors    {  return ALORS; }
sinon    {  return SINON; }
finsi    {  return FINSI; }
finsinon    {  return FINSINON; }
selon {  return SELON; }
cas {  return CAS; }
break {  return BREAK; }
autre {  return AUTRE; }
finswitch {  return FINSWITCH; }
pour {  return POUR; }
allant {  return ALLANT; }
to {  return TO; }
finpour {  return FINPOUR; }
tantque {  return TANTQUE; }
faire {  return FAIRE; }
fintq {  return FINTQ; }
repeter {  return REPETER; }
jusqu {  return JUSQU; }
function {  return FUNCTION; }
deb_fct {  return DEB_FCT; }
deb_proc {  return DEB_PROC; }
retourne {  return RETOURNE; }
finfct {  return FINFCT; }
procedure {  return PROCEDURE; }
finproc {  return FINPROC; }
tableau { return TABLEAU; }
matrice { return MATRICE; }
{boolean}    {  strcpy(yylval.valBoolean, yytext); return BOOLEAN; }
{type} { return TYPE;}
{string} {strcpy(yylval.valAffichage,yytext+1); return STRING;}
{car} {  yytext[strlen(yytext)-1]='\0' ; strcpy(yylval.valChar, yytext+1); return CARACTERE; }
{comment}  {  return COMMENT; }
{comment_lignes} { return COMMENT_LIGNES; }
{identif} { strcpy(yylval.valIdentif, yytext); return IDENTIF; }
{entier}    {  yylval.valEntier = atoi(yytext);return ENTIER; }
{reel}    {  yylval.valReel = atof(yytext);return REEL; }

[ \t] ;
\n ++lineNumber;
. {  return yytext[0]; }

%%