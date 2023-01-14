%{
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

%}


%token ALGO IDENTIF VAR VIRGULE DEUX_POINTS ENTIER REEL CARACTERE BOOLEAN 
%token  ACC_O ACC_F NOMBRE DEBUT INFEGAL TABLEAU CR_O CR_F MATRICE 
%token COMMENT COMMENT_LIGNES FIN AFFICHER PARTH_O PARTH_F LIRE ADD SOUST MULT DIVS MODU ET NOT OR AFFECTATION   
%token SUP SUPEGAL INC DEC ASS_ADD ASS_SOUS ASS_MULT ASS_DIV SI ALORS SINON FINSI FINSINON SELON CAS POINT_VIRGULE
%token BREAK AUTRE FINSWITCH POUR ALLANT TO FINPOUR TANTQUE FAIRE FINTQ REPETER JUSQU FUNCTION EGAL
%token FINFCT PROCEDURE FINPROC  AFFICHAGE DOUBLE_COTES DEB_FCT RETOURNE DEB_PROC CONST STRING DIFF INF INTD FLOATD CHARD

%start program
%%
/*---------------------- L'ALGORITHME --------------------------------*/

program : main
		
	
;

/*---------------------- TRAITEMENT DES FONCTIONS ET PROCEDURES -----------------------*/

listFonction : fonction 
			  | procerdure 
			 
			 ;
 fonction :FUNCTION type  DEUX_POINTS IDENTIF {fprintf(f,"%s",identif); strcpy(fname,identif); }
  PARTH_O {fprintf(f,"( ");} listArg PARTH_F {fprintf(f," )");} {funcTest(fname,&fhead,pn,args,tokens);pn=0} DEB_FCT {fprintf(f," {");} declarationF listinstF 
  return FINFCT {fprintf(f,"}");}
  ;
  procerdure:FUNCTION  {fprintf(f,"void ");}  IDENTIF {fprintf(f,"%s",identif); strcpy(fname,identif); }
  PARTH_O {fprintf(f,"( ");} PARTH_F {fprintf(f," )");} {funcTest(fname,&fhead,pn,args,tokens);pn=0} DEB_FCT {fprintf(f," {");} declarationF listinstF 
  FINFCT {fprintf(f,"}");}
  

;
return : RETOURNE {fprintf(f,"\nreturn ");} expressionArithmeticF  POINT_VIRGULE {fprintf(f,";");}
;

listArg : arg VIRGULE {fprintf(f,",");strcpy(args[pn++],identif);} listArg
		| arg {strcpy(args[pn++],identif);}
;
arg : IDENTIF  DEUX_POINTS type {if(type_return==-1){identifTestf(identif,tokens,&heads,type,0);}else{identifTestf(identif,tokens,&heads,type,1);} fprintf(f,"%s",identif);}
;


declarationF : declarationF VAR {fprintf(f,"\t");} type  DEUX_POINTS listidentifs   POINT_VIRGULE {fprintf(f,";");}
			| VAR type {fprintf(f,"\t");} DEUX_POINTS listidentifs   POINT_VIRGULE {fprintf(f,";");}
;

listidentifs : IDENTIF {if(type_return==-1){
						identifTestf(identif,tokens,&heads,type,0);
					}else{
						identifTestf(identif,tokens,&heads,type,1);} 
					fprintf(f,"%s",identif);} 
		  |	IDENTIF VIRGULE {fprintf(f,"%s ,",identif);
		  					 if(type_return==-1){
		  					 		identifTestf(identif,tokens,&heads,type,0);
		  					 }else{
		  					 		identifTestf(identif,tokens,&heads,type,1);}
		  					 }  
		  listidentifs
;



expressionArithmeticF : expressionArithmeticF ADD termF
					 | expressionArithmeticF SOUST termF
					 | termF
;

termF : termF MULT factorF
     | termF DIVS factorF
     | factorF
;

 factorF : PARTH_O { fprintf(f,"(");}  expressionArithmeticF PARTH_F {fprintf(f,")");}
        | IDENTIF { fprintf(f," %s ",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  
        		  }
        		 
        | ENTIER 	{type=0;}
        | REEL   	{type=1;}
        | CARACTERE {type=2;}
        | SOUST ENTIER
        | SOUST REEL
;

listinstF : listinstF instF
		 | instF
		 | listinstF exprSiF
		 | exprSiF
		 | listinstF affichageF 
		 | affichageF
		 | listinstF lectureF
		 | lectureF
		 | listinstF boucleF
		 | boucleF
		 | listinstF switchF
		 | switchF
;
		 
instF : affectationF POINT_VIRGULE {initialiserF(heads,lvalue);fprintf(f,";");}
	 | expressionSuppF  
     | COMMENT 
     | COMMENT_LIGNES
;

switchF : SELON PARTH_O IDENTIF{fprintf(f,"switch("); fprintf(f,"%s",identif); type=-1;strcpy(autre,identif);} {if(type_return==-1){isUsableF(heads,identif,0);giveValuef(heads,identif);}else{isUsableF(heads,identif,1);}} 
PARTH_F {fprintf(f,")");} ACC_O listdesCasF ACC_F {printf("switch correct\n");} 
;

listdesCasF : listdesCasF lesCasF
			| lesCasF
;
lesCasF : CAS valeur DEUX_POINTS {fprintf(f,": ");} listinstF BREAK POINT_VIRGULE {fprintf(f,";\n");}
       | AUTRE {fprintf(f,"default :");} DEUX_POINTS listinstF
;

boucleF : pourF 
		| tantqueF 
		| repeterF 
	 
;

pourF : POUR {fprintf(f,"\tfor(");} IDENTIF {fprintf(f,"%s",identif); fprintf(f,"=");} ALLANT exprF TO {fprintf(f," ; "); fprintf(f,"%s",identif); fprintf(f,"<");} exprF {fprintf(f," ; ");} {fprintf(f,"%s",identif); fprintf(f,"++){\n");} FAIRE listinstF FINPOUR {fprintf(f,"\t}\n");}
;

tantqueF : TANTQUE PARTH_O {fprintf(f,"\twhile(");}  conditionF PARTH_F {fprintf(f,")");} FAIRE {fprintf(f,"{\n");} listinstF FINTQ {fprintf(f,"}\n");} 
;

repeterF : REPETER {fprintf(f,"do{\n");} listinstF JUSQU PARTH_O {fprintf(f,"}while(");} conditionF PARTH_F POINT_VIRGULE {fprintf(f,");\n");}
;

lectureF : LIRE PARTH_O {fprintf(f,"\tscanf(\"");} appel_varsF PARTH_F POINT_VIRGULE 
;

appel_varsF : appel_varsF VIRGULE IDENTIF { isUsableF(heads,identif,0); setValueF(identif,0.0,heads);}
		   | IDENTIF { isUsableF(heads,identif,0); setValueF(identif,0.0,heads);
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
	}
;

affichageF : {fprintf(f,"\tprintf(");} AFFICHER PARTH_O parametresF { strcat(partie1,"\""); 
fprintf(f,"\"%s%s",partie1,partie2);fprintf(f,");\n"); strcpy(partie1,"");strcpy(partie2,"");}   PARTH_F POINT_VIRGULE 
; 

parametresF : parametresF VIRGULE paramF
		   | paramF


paramF : STRING {  strcat(partie1,value); strcat(partie1,"");}
	  |  IDENTIF { isUsableF(heads,identif,0);giveValuef(heads,identif); tp=return_typeF(heads,identif);
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
			strcat(partie2,","); strcat(partie2,identif); }

;

exprSiF : instSiF FINSI
		| instSiF instSinonF FINSI
;

instSiF : SI {fprintf(f,"\tif(");} PARTH_O conditionF PARTH_F {fprintf(f,"){\n");} ALORS listinstF {fprintf(f,"\t}\n");}
;
instSinonF : SINON {fprintf(f,"\telse {")} listinstF {fprintf(f,"\t}\n");}
;

conditionF : PARTH_O  coF PARTH_F opeLogique conditionF
		  | coF
		  | PARTH_O coF PARTH_F
;

coF : exprF cond exprF
   | NOT conditionF
;

exprF : IDENTIF {fprintf(f,"%s",identif);type=-1;strcpy(autre,identif);} {if(type_return==-1){isUsableF(heads,identif,0);giveValuef(heads,identif);}else{isUsableF(heads,identif,1);} } 
	|	ENTIER {type=0;}
	|	REEL {type=1;}
	|	CARACTERE {type=2;}
	|	STRING {type=3;}
;


expressionSuppF : incrementationF {initialiserF(heads,lvalue);fprintf(f,";");}
		 	   | decrementationF {initialiserF(heads,lvalue);fprintf(f,";");}
		 	   | assignationAddF  {initialiserF(heads,lvalue);fprintf(f,";");}
		 	   | assignationSousF {initialiserF(heads,lvalue);fprintf(f,";");}
		 	   | assignationMultF {initialiserF(heads,lvalue);fprintf(f,";");}
		 	   | assignationDivF {initialiserF(heads,lvalue);fprintf(f,";");}
;
assignationAddF : IDENTIF {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  }ASS_ADD {fprintf(f," += ",identif);} expressionArithmeticF POINT_VIRGULE 
;
assignationSousF: IDENTIF {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  } ASS_SOUS {fprintf(f," -= ",identif);} expressionArithmeticF POINT_VIRGULE 
;
assignationMultF: IDENTIF {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  } ASS_MULT {fprintf(f," *= ",identif);} expressionArithmeticF POINT_VIRGULE 
;
assignationDivF : IDENTIF {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  } ASS_DIV {fprintf(f," /= ",identif);} expressionArithmeticF POINT_VIRGULE 
;

incrementationF : IDENTIF {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  }  INC {fprintf(f,"++");} POINT_VIRGULE 
			   | INC {fprintf(f,"\t++");} IDENTIF{fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  } POINT_VIRGULE 
;
decrementationF : IDENTIF{fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  } DEC {fprintf(f,"--");} POINT_VIRGULE 
			   | DEC {fprintf(f,"--");} IDENTIF {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsableF(heads,identif,0);
        		  		giveValuef(heads,identif);
        		  	}
        		  	else{
        		  	isUsableF(heads,identif,1);}
        		  } POINT_VIRGULE 
;
affectationF : IDENTIF {fprintf(f,"\t%s",identif);type=-1;strcpy(autre,identif);} 
					  {if(type_return==-1){
					  		isUsableF(heads,identif,0);
					  }else{isUsableF(heads,identif,1);}
					  } 
					{ strcpy(identif1,identif);} 
			 AFFECTATION  {fprintf(f,"=");strcpy(lvalue,identif);} expressionArithmeticF  { affect_testF(heads,identif1,type,autre); }
;

/*____________________________________ programme principal _____________________________________*/

main : ALGO IDENTIF 
				{strcat(identif,".c");
				f=fopen(identif,"w");
				fprintf(f,"#include<stdio.h>\n#include<stdlib.h>\n#include<string.h>\n"); 
				 fprintf(f,"int main(){\n");
				 } 
		declaration DEBUT listInst FIN {fprintf(f,"\treturn 0;\n}"); fclose(f);}
		| ALGO IDENTIF 
				{strcat(identif,".c");
				f=fopen(identif,"w");
				fprintf(f,"#include<stdio.h>\n#include<stdlib.h>\n#include<string.h>\n"); 
				 }
		listFonction  {fprintf(f,"\nint main(){\n");} declaration DEBUT listInst FIN {fprintf(f,"\treturn 0;\n}"); fclose(f);}
				
;


/*-------------------- la partie déclaration -------------------*/

declaration : declaration VAR {fprintf(f,"\t");} type DEUX_POINTS identifs POINT_VIRGULE {fprintf(f,";");}
			| VAR {fprintf(f,"\t");} type DEUX_POINTS identifs   POINT_VIRGULE {fprintf(f,";");}
;

type : INTD 	{ type = 0;}
	 | FLOATD   { type = 1;}
	 | CHARD 	{ type = 2;}
	 | STRING   { type = 3;}
;


identifs : IDENTIF {if(type_return==-1){
						identifTest(identif,tokens,&head,type,0);
					}else{
						identifTest(identif,tokens,&head,type,1);} 
					fprintf(f,"%s",identif);} 
		  |	IDENTIF VIRGULE {fprintf(f,"%s ,",identif);
		  					 if(type_return==-1){
		  					 		identifTest(identif,tokens,&head,type,0);
		  					 }else{
		  					 		identifTest(identif,tokens,&head,type,1);}
		  					 }  
		  identifs
;

/*------------------------ les instructions --------------------*/
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
inst : affectation POINT_VIRGULE {initialiser(head,lvalue);fprintf(f,";");}
     | expressionSupp 
	 | appelFct 
	 | appelProc
     | COMMENT 
     | COMMENT_LIGNES
;

affichage :{fprintf(f,"\tprintf(");}  AFFICHER PARTH_O parametres { strcat(partie1,"\""); 
fprintf(f,"\"%s%s",partie1,partie2);fprintf(f,");\n"); strcpy(partie1,"");strcpy(partie2,""); } PARTH_F POINT_VIRGULE 
;

parametres : parametres VIRGULE  param
		   | param


param : STRING {  strcat(partie1,value); strcat(partie1," ");}
	  |  IDENTIF {  isUsable(head,identif,0);giveValue(head,identif); tp=return_type(head,identif);
		
		
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
			strcat(partie2,","); strcat(partie2,identif); } 

;

lecture : LIRE PARTH_O {fprintf(f,"\n "); fprintf(f,"\tscanf(\""); } appel_vars PARTH_F POINT_VIRGULE 
;

appel_vars : appel_vars VIRGULE IDENTIF { isUsable(head,identif,0); setValue(identif,0.0,head);}
		   | IDENTIF { isUsable(head,identif,0); setValue(identif,0.0,head);
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
		}
		    
;

affectation : IDENTIF {fprintf(f,"\t%s",identif);type=-1;strcpy(autre,identif);} 
					  {if(type_return==-1){
					  		isUsable(head,identif,0);
					  }else{isUsable(head,identif,1);}
					  } 
					{ strcpy(identif1,identif);} 
			 AFFECTATION  {fprintf(f," = ");strcpy(lvalue,identif);} expressionArithmetic  { affect_test(head,identif1,type,autre); }
;

expr : IDENTIF {fprintf(f,"%s",identif);type=-1;strcpy(autre,identif);} {if(type_return==-1){isUsable(head,identif,0);giveValue(head,identif);}else{isUsable(head,identif,1);}}
	|	ENTIER {type=0;}
	|	REEL {type=1;}
	|	CARACTERE {type=2;}
	|	STRING {type=3;}
;






exprSi : instSi FINSI
		| instSi instSinon FINSI
;

instSi : SI {fprintf(f,"\tif(");}PARTH_O condition PARTH_F {fprintf(f,"){\n");} ALORS listInst {fprintf(f,"\t}\n");}
;
instSinon : SINON {fprintf(f,"\telse {")} listInst {fprintf(f,"\t}\n");}
;


condition : PARTH_O  co PARTH_F opeLogique condition
		  | co
		  | PARTH_O co PARTH_F
;
opeLogique : ET
			| OR
; 
co : expr cond expr
   | NOT condition 
;
valeur : ENTIER
		| REEL
		| CARACTERE
		| BOOLEAN
		| IDENTIF   
;

cond : EGAL {fprintf(f," == ");}
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

 factor : PARTH_O { fprintf(f,"(");}  expressionArithmetic PARTH_F {fprintf(f,")");}
        | IDENTIF {fprintf(f," %s ",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  }
        | ENTIER {type=0;}
        | REEL   {type=1;}
        | CARACTERE {type=2;}
        | SOUST ENTIER
        | SOUST REEL
;

appelFct : IDENTIF {fprintf(f,"%s",identif);}{ if(type_return==-1){
					  		isUsable(head,identif,0);
					  	}
					  else{
					  isUsable(head,identif,1);
					  	}
				} EGAL {fprintf(f," = ");}IDENTIF {fprintf(f,"%s",identif);}  PARTH_O {fprintf(f,"("); strcpy(fname,identif);isUsablef(fhead,fname);} Parametre {isParaEqual(fhead,fname,pn);pn=0;} PARTH_F {fprintf(f,");");} POINT_VIRGULE
; 
appelProc : IDENTIF {fprintf(f,"%s",identif);}  PARTH_O {fprintf(f,"("); strcpy(fname,identif);isUsablef(fhead,fname);} Parametre {isParaEqual(fhead,fname,pn);pn=0;} PARTH_F {fprintf(f,");");} POINT_VIRGULE


Parametre:	
		expr VIRGULE {fprintf(f,",");pn++;} Parametre
	|	expr {pn++;}
;
boucle : pour 
		| tantque
		| repeter 
	 
;

pour : POUR {fprintf(f,"\tfor(");} IDENTIF {fprintf(f,"%s",identif); fprintf(f,"=");} ALLANT expr 
TO {fprintf(f," ; "); fprintf(f,"%s",identif); fprintf(f,"<");}expr  {fprintf(f," ; ");} 
{fprintf(f,"%s",identif); fprintf(f,"++){\n");}FAIRE listInst FINPOUR {fprintf(f,"\t}\n");}
;

tantque : TANTQUE PARTH_O {fprintf(f,"\twhile(");} condition PARTH_F {fprintf(f,")");}FAIRE {fprintf(f,"{\n");} 
		listInst FINTQ {fprintf(f,"}\n");} 
;

repeter : REPETER {fprintf(f,"do{\n");} listInst JUSQU PARTH_O {fprintf(f,"}while(");}condition 
	PARTH_F POINT_VIRGULE {fprintf(f,");\n");}
;

switch : SELON PARTH_O IDENTIF{fprintf(f,"switch("); fprintf(f,"%s",identif); type=-1;strcpy(autre,identif);} {if(type_return==-1){isUsable(head,identif,0);giveValue(head,identif);}else{isUsable(head,identif,1);}}
 
 PARTH_F {fprintf(f,")");} ACC_O listdesCas ACC_F {printf("switch correct\n");} 
;

listdesCas : listdesCas lesCas
			| lesCas
;
lesCas : CAS valeur DEUX_POINTS {fprintf(f,": ");} listInst BREAK POINT_VIRGULE {fprintf(f,";\n");}
       | AUTRE {fprintf(f,"default :");} DEUX_POINTS listInst 
;

expressionSupp : incrementation {initialiser(head,lvalue);fprintf(f,";");}
		 	   | decrementation {initialiser(head,lvalue);fprintf(f,";");}
		 	   | assignationAdd  {initialiser(head,lvalue);fprintf(f,";");}
		 	   | assignationSous {initialiser(head,lvalue);fprintf(f,";");}
		 	   | assignationMult {initialiser(head,lvalue);fprintf(f,";");}
		 	   | assignationDiv {initialiser(head,lvalue);fprintf(f,";");}
;
assignationAdd : IDENTIF {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  }ASS_ADD {fprintf(f," += ",identif);} expressionArithmetic POINT_VIRGULE 
;
assignationSous: IDENTIF {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  } ASS_SOUS {fprintf(f," -= ",identif);} expressionArithmetic POINT_VIRGULE 
;
assignationMult: IDENTIF {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  } ASS_MULT {fprintf(f," *= ",identif);} expressionArithmetic POINT_VIRGULE 
;
assignationDiv : IDENTIF {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  } ASS_DIV {fprintf(f," /= ",identif);}expressionArithmetic POINT_VIRGULE 
;

incrementation : IDENTIF {fprintf(f,"\t%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  }  INC {fprintf(f,"++");} POINT_VIRGULE 
			   | INC {fprintf(f,"\t++");}  IDENTIF{fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  } POINT_VIRGULE 
;
decrementation : IDENTIF{fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  } DEC POINT_VIRGULE 
			   | DEC IDENTIF {fprintf(f,"%s",identif);
        		   type=-1;strcpy(autre,identif);}
        		  {if(type_return==-1){
        		  		isUsable(head,identif,0);
        		  		giveValue(head,identif);
        		  	}
        		  	else{
        		  	isUsable(head,identif,1);}
        		  } POINT_VIRGULE 
;

%%
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