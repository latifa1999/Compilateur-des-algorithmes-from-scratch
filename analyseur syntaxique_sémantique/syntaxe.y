%{
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

%}

%union{
int valEntier;
float valReel;
char valBoolean[6];
char valIdentif[256];
char valAffichage[256];
char valChar[256];
}

%token ALGO <valIdentif>IDENTIF VAR VIRGULE DEUX_POINTS <valEntier>ENTIER <valReel>REEL <valChar>CARACTERE <valBoolean>BOOLEAN %token  ACC_O ACC_F NOMBRE DEBUT INFEGAL TABLEAU CR_O CR_F MATRICE 
%token COMMENT COMMENT_LIGNES FIN <valAffichage>AFFICHER PARTH_O PARTH_F LIRE ADD SOUST MULT DIVS MODU ET NOT OR AFFECTATION   
%token SUP SUPEGAL INC DEC ASS_ADD ASS_SOUS ASS_MULT ASS_DIV SI ALORS SINON FINSI FINSINON SELON CAS POINT_VIRGULE
%token BREAK AUTRE FINSWITCH POUR ALLANT TO FINPOUR TANTQUE FAIRE FINTQ REPETER JUSQU FUNCTION EGAL
%token FINFCT PROCEDURE FINPROC TYPE AFFICHAGE DOUBLE_COTES DEB_FCT RETOURNE DEB_PROC CONST STRING DIFF INF

%start program
%%
/*---------------------- L'ALGORITHME --------------------------------*/

program : listFonction listProcedure main 
		| listProcedure listFonction main 
		| listProcedure main
		| listFonction main
		| main { printf("main est correct\n");}
	
;

/*---------------------- TRAITEMENT DES FONCTIONS ET PROCEDURES -----------------------*/

listFonction : listFonction fonction
			 | fonction {printf("fonction est correcte\n");}
;

listProcedure : listProcedure procedure
			  | procedure {printf("procedure est correcte\n");}
;

fonction : FUNCTION nom_fct PARTH_O listArg PARTH_F DEUX_POINTS TYPE DEB_FCT declarationF  listInstF RETOURNE ret FINFCT
		 |FUNCTION nom_fct PARTH_O PARTH_F DEUX_POINTS TYPE DEB_FCT declarationF listInst RETOURNE ret FINFCT
;

procedure : PROCEDURE nom_proc PARTH_O listArg PARTH_F DEB_PROC declaration listInst FINPROC
		  |PROCEDURE nom_proc PARTH_O PARTH_F DEB_PROC declaration listInst FINPROC
;

main : ALGO nom_algo declaration DEBUT listInst FIN
;

nom_fct : IDENTIF {identifTestf_fct($1,tokens,vars_fct);} 
;

nom_proc : IDENTIF {identifTest($1,tokens,vars);}
;

nom_algo : IDENTIF {identifTest($1,tokens,vars);}
;

;
/*----- les arguments*/

listArg : listArg arg
		| arg
;

arg : arg VIRGULE args
	| IDENTIF DEUX_POINTS TYPE {identifTestf($1,tokens,vars,varsf);}
;

args : IDENTIF DEUX_POINTS TYPE {identifTestf($1,tokens,vars,varsf);}

/*----- declaration*/

declarationF : declarationF VAR VIRGULE listIdentF DEUX_POINTS TYPE POINT_VIRGULE 
			| VAR listIdentF DEUX_POINTS TYPE POINT_VIRGULE 
			| declarationF VAR TABLEAU IDENTIF CR_O ENTIER CR_F DEUX_POINTS TYPE POINT_VIRGULE {identifTestf($4,tokens,vars,varsf);}
			| VAR MATRICE IDENTIF CR_O ENTIER CR_F CR_O ENTIER CR_F DEUX_POINTS TYPE POINT_VIRGULE {identifTestf($3,tokens,vars,varsf);}
			| declarationF VAR MATRICE IDENTIF CR_O ENTIER CR_F CR_O ENTIER CR_F DEUX_POINTS TYPE POINT_VIRGULE {identifTestf($4,tokens,vars,varsf);}
			| CONST IDENTIF EGAL expr POINT_VIRGULE {identifTestf($2,tokens,vars,varsf);}
			| declarationF CONST IDENTIF EGAL expr POINT_VIRGULE {identifTestf($3,tokens,vars,varsf);}
			 
;

listIdentF :listIdentF VIRGULE IDENTIF {identifTestf($3,tokens,vars,varsf);}
		   | IDENTIF {identifTestf($1,tokens,vars,varsf);}

;

/*----les instructions*/
listInstF : listInstF instF
		  | instF
		  | listInstF exprSiF
		  | exprSiF
		  | listInstF affichageF
		  | affichageF
		  | listInstF lectureF
		  | lectureF
		  | listInstF boucleF
		  | boucleF
		  | listInstF switchF
		  | switchF

;

instF : IDENTIF AFFECTATION expressionArithmeticF POINT_VIRGULE {isUsablef($1,vars,varsf);}
		| expressionSuppF
		| COMMENT {printf("commentaire correcte\n");}
		| COMMENT_LIGNES {printf("commentaire correcte\n");}
;

lectureF : LIRE PARTH_O identifLecF PARTH_F POINT_VIRGULE
;

identifLecF : identifLecF VIRGULE IDENTIF {isUsable($3,varsf);}
		  | IDENTIF {isUsable($1,varsf);}
;

affichageF : AFFICHER PARTH_O parametresF PARTH_F POINT_VIRGULE {printf("affichage correcte\n");}
;

parametresF : parametresF VIRGULE paramF
		   | paramF
;

paramF : STRING
	  | expressionArithmeticF
	  | appelFct_affF
;

appelFct_affF : IDENTIF PARTH_O PARTH_F {isUsablef($1,varsf,vars_fct);} 
			 | IDENTIF PARTH_O identifLecF PARTH_F {isUsablef($1,varsf,vars_fct);}
;

expressionArithmeticF : expressionArithmeticF ADD termF
					 | expressionArithmeticF SOUST termF
					 | termF
;

termF : termF MULT factorF
     | termF DIVS factorF
     | factorF
;

 factorF : PARTH_O expressionArithmeticF PARTH_F
        | IDENTIF {isUsablef($1,vars,varsf);}
        | ENTIER
        | REEL
        | SOUST ENTIER
        | SOUST REEL
;

ret : ENTIER POINT_VIRGULE
	| IDENTIF POINT_VIRGULE {isUsablef($1,vars,varsf);}
;


exprSiF : instSiF FINSI
		| instSiF instSinonF FINSI
;

instSiF : SI PARTH_O conditionF PARTH_F ALORS listInstF
;
instSinonF : SINON listInstF
;


conditionF : PARTH_O  coF PARTH_F opeLogiqueF conditionF
		  | coF
		  | PARTH_O coF PARTH_F
;
opeLogiqueF : ET
			| OR
; 
coF : valeurF condF valeurF
   | NOT conditionF 
;
valeurF : ENTIER
		| REEL
		| CARACTERE
		| BOOLEAN
		| IDENTIF {isUsablef($1,vars,varsf);}
;

condF : EGAL
	 | DIFF
	 | INF
	 | INFEGAL
	 | SUP
	 | SUPEGAL
;

boucleF : pourF {printf("pour correct\n");}
		| tantqueF {printf("tq correct\n");}
		| repeterF {printf("repeter correct\n");}
	   
;

pourF : POUR IDENTIF ALLANT valeurF TO valeurF FAIRE listInstF FINPOUR {isUsablef($2,vars,varsf);}
;

tantqueF : TANTQUE PARTH_O conditionF PARTH_F FAIRE listInstF FINTQ
;

repeterF : REPETER listInstF JUSQU PARTH_O conditionF PARTH_F POINT_VIRGULE
;

switchF : SELON PARTH_O IDENTIF PARTH_F ACC_O listdesCasF ACC_F {printf("switch correct\n");} {isUsablef($3,vars,varsf);}


listdesCasF : listdesCasF lesCasF
			| lesCasF
;
lesCasF : CAS valeurF DEUX_POINTS listInstF BREAK POINT_VIRGULE
       | AUTRE DEUX_POINTS listInstF
;

expressionSuppF : incrementationF {printf("instuction d'incrementation \n");}
		 	   | decrementationF {printf(" instuction de decrementation\n");}
		 	   | assignationAddF 
		 	   | assignationSousF
		 	   | assignationMultF
		 	   | assignationDivF
;
assignationAddF : IDENTIF ASS_ADD valF POINT_VIRGULE {isUsablef($1,vars,varsf);}
;
assignationSousF: IDENTIF ASS_SOUS valF POINT_VIRGULE {isUsablef($1,vars,varsf);}
;
assignationMultF: IDENTIF ASS_MULT valF POINT_VIRGULE {isUsablef($1,vars,varsf);}
;
assignationDivF : IDENTIF ASS_DIV valF POINT_VIRGULE {isUsablef($1,vars,varsf);}
;

valF : ENTIER
	| REEL
	| IDENTIF {isUsablef($1,vars,varsf);}
;
incrementationF : IDENTIF INC POINT_VIRGULE {isUsablef($1,vars,varsf);}
			   | INC IDENTIF POINT_VIRGULE {isUsablef($2,vars,varsf);}
;
decrementationF : IDENTIF DEC POINT_VIRGULE {isUsablef($1,vars,varsf);}
			   | DEC IDENTIF POINT_VIRGULE {isUsablef($2,vars,varsf);}
;
/*-------------------------------------------------- TRAITEMENT DU PROGRAMME PRINCIPALE --------------------------------------*/
/*----- la partie déclaration-------*/

declaration : declaration VAR identifs DEUX_POINTS TYPE POINT_VIRGULE
			| VAR identifs DEUX_POINTS TYPE POINT_VIRGULE
			| VAR TABLEAU IDENTIF CR_O ENTIER CR_F DEUX_POINTS TYPE POINT_VIRGULE {identifTest($3,tokens,vars);}
			| declaration VAR TABLEAU IDENTIF CR_O ENTIER CR_F DEUX_POINTS TYPE POINT_VIRGULE {identifTest($4,tokens,vars);}
			| VAR MATRICE IDENTIF CR_O ENTIER CR_F CR_O ENTIER CR_F DEUX_POINTS TYPE POINT_VIRGULE {identifTest($3,tokens,vars);}
			| declaration VAR MATRICE IDENTIF CR_O ENTIER CR_F CR_O ENTIER CR_F DEUX_POINTS TYPE POINT_VIRGULE {identifTest($4,tokens,vars);}
			| CONST IDENTIF EGAL expr POINT_VIRGULE {identifTest($2,tokens,vars);}
			| declaration CONST IDENTIF EGAL expr POINT_VIRGULE {identifTest($3,tokens,vars);}


;
expr : ENTIER
	 | REEL
;

identifs : identifs VIRGULE IDENTIF {identifTest($3,tokens,vars);}
		  | IDENTIF {identifTest($1,tokens,vars);}
;


;
/*------ LES INSTRUCTIONS----------*/

listInst : listInst inst
		 | inst
		 | listInst exprSi
		 | exprSi
		 | listInst affichage
		 | affichage
		 | listInst lecture
		 | lecture
		 | listInst boucle
		 | boucle
		 | listInst switch
		 | switch

;

inst : 	 /*----- les expressions arith & logiques -----*/
		 IDENTIF AFFECTATION expressionArithmetic POINT_VIRGULE {isUsable($1,vars);}
         | expressionSupp 
         /*--------- les appels ---------*/
		 | appelProc {printf("appel proc correcte\n");} 
		 | appelFct {printf("appel fct correcte\n");}
		 | COMMENT {printf("commentaire correcte\n");}
		 | COMMENT_LIGNES {printf("commentaire correcte\n");}
;

lecture : LIRE PARTH_O identifLec PARTH_F POINT_VIRGULE
;

identifLec : identifLec VIRGULE IDENTIF {isUsable($3,vars);}
		  | IDENTIF {isUsable($1,vars);}
;

affichage : AFFICHER PARTH_O parametres PARTH_F POINT_VIRGULE {printf("affichage correcte\n");}
;

parametres : parametres VIRGULE param
		   | param
;

param : STRING
	  | expressionArithmetic
	  | appelFct_aff
;

appelFct_aff : IDENTIF PARTH_O PARTH_F {isUsablef($1,vars,vars_fct);} 
			 | IDENTIF PARTH_O identifLec PARTH_F {isUsablef($1,vars,vars_fct);}
;

exprSi : instSi FINSI
		| instSi instSinon FINSI
;

instSi : SI PARTH_O condition PARTH_F ALORS listInst
;
instSinon : SINON listInst
;


condition : PARTH_O  co PARTH_F opeLogique condition
		  | co
		  | PARTH_O co PARTH_F
;
opeLogique : ET
			| OR
; 
co : valeur cond valeur
   | NOT condition 
;
valeur : ENTIER
		| REEL
		| CARACTERE
		| BOOLEAN
		| IDENTIF {isUsable($1,vars);}
;

cond : EGAL
	 | DIFF
	 | INF
	 | INFEGAL
	 | SUP
	 | SUPEGAL
;
expressionArithmetic : expressionArithmetic ADD term
					 | expressionArithmetic SOUST term
					 | term
;

term : term MULT factor
     | term DIVS factor
     | factor
;

 factor : PARTH_O expressionArithmetic PARTH_F
        | IDENTIF {isUsable($1,vars);}
        | ENTIER
        | REEL
        | SOUST ENTIER
        | SOUST REEL
;

appelFct : IDENTIF EGAL IDENTIF PARTH_O PARTH_F POINT_VIRGULE {isUsable($1,vars);}
		 | IDENTIF EGAL IDENTIF PARTH_O identifs PARTH_F  POINT_VIRGULE
; 
appelProc : IDENTIF PARTH_O PARTH_F POINT_VIRGULE
		   | IDENTIF PARTH_O identifs PARTH_F POINT_VIRGULE
;

boucle : pour {printf("pour correct\n");}
		| tantque {printf("tq correct\n");}
		| repeter {printf("repeter correct\n");}
	   
;

pour : POUR IDENTIF ALLANT valeur TO valeur FAIRE listInst FINPOUR {isUsable($2,vars);}
;

tantque : TANTQUE PARTH_O condition PARTH_F FAIRE listInst FINTQ
;

repeter : REPETER listInst JUSQU PARTH_O condition PARTH_F POINT_VIRGULE
;

switch : SELON PARTH_O IDENTIF PARTH_F ACC_O listdesCas ACC_F {printf("switch correct\n");} {isUsable($3,vars);}


listdesCas : listdesCas lesCas
			| lesCas
;
lesCas : CAS valeur DEUX_POINTS listInst BREAK POINT_VIRGULE
       | AUTRE DEUX_POINTS listInst
;

expressionSupp : incrementation {printf("instuction d'incrementation \n");}
		 	   | decrementation {printf(" instuction de decrementation\n");}
		 	   | assignationAdd 
		 	   | assignationSous
		 	   | assignationMult
		 	   | assignationDiv
;
assignationAdd : IDENTIF ASS_ADD val POINT_VIRGULE {isUsable($1,vars);}
;
assignationSous: IDENTIF ASS_SOUS val POINT_VIRGULE {isUsable($1,vars);}
;
assignationMult: IDENTIF ASS_MULT val POINT_VIRGULE {isUsable($1,vars);}
;
assignationDiv : IDENTIF ASS_DIV val POINT_VIRGULE {isUsable($1,vars);}
;
val : ENTIER
	| REEL
	| IDENTIF {isUsable($1,vars);}
;
incrementation : IDENTIF INC POINT_VIRGULE {isUsable($1,vars);}
			   | INC IDENTIF POINT_VIRGULE {isUsable($2,vars);}
;
decrementation : IDENTIF DEC POINT_VIRGULE {isUsable($1,vars);}
			   | DEC IDENTIF POINT_VIRGULE {isUsable($2,vars);}
;

%%
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