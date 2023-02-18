#include <stdio.h>
#include <stdlib.h>

/*maginez un programme qui demande deux nombres à l'utilisateur :

Stockez ces deux nombres dans des variables.

Faites la somme de ces variables.

Stockez le résultat dans une variable appelée resultat.

Vous n'avez plus qu'à afficher le résultat du calcul à l'écran, sous les yeux ébahis de l'utilisateur qui n'aurait jamais été capable de calculer cela de tête aussi vite.

Essayez de coder vous-même ce petit programme, c'est facile et ça vous entraînera !*/

int main() {


	int number1 = 0, number2 = 0, result = 0;
	printf("calculatrice V 0.0\n ");
	printf(" write your first number  \n ");
	scanf_s("%d", &number1);
	printf(" Now write your seconde number\n ");
	scanf_s("%d", &number2);

	printf("Ok good now i will show you the result");

	result = number1 + number2;

	printf("Your result for %d + %d = %d", number1, number2, result);
	return 0;
	 

}

/*GG EZ*/	