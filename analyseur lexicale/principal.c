#include<stdio.h>
#include "unitesLexicales.h"

int main(void) {
	int unite;

	do{
		unite = yylex();
		printf(" (unite: %d", unite);
		if(unite == ENTIER)
			printf(" val Entier: %d", valEntier);
		else if (unite == REEL)
			printf(" val Reel: %f", valReel);
		else if (unite == BOOLEAN)
			printf(" val Boolean: %d", valBoolean);
		else if(unite == IDENTIF)
			printf(" val Identif: '%s'", valIdentif);
		else if(unite == AFFICHAGE)
			printf(" val Affichage: '%s'", valAffichage);
		else if(unite == CARACTERE)
			printf(" val Char: '%s'", valChar);
		printf(")\n");
	}while(unite != 0);
	return 0;
}