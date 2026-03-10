#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plus_moins (int choix_joueur, int valeur_a_trouver)
{
	if (choix_joueur<valeur_a_trouver)
		printf("Plus\n");
	else if (choix_joueur>valeur_a_trouver)
		printf("Moins\n");
	else
		printf("Bingo\n");
}

int main()
{
/*	int choix_joueur;
	int valeur_a_trouver = 5;
	printf("Entrer un nombre :\n");
	scanf ("%d", &choix_joueur);
	plus_moins(choix_joueur, valeur_a_trouver);
*/

	srand(time(NULL));
	int valeur_a_trouver = rand() % 101;  //entre 0 et 100
	int choix_joueur;

	do
	{
		printf ("Devinez le nombre: \n");
		scanf ("%d", &choix_joueur);  //on met pas de "\n" dans scanf
		plus_moins (choix_joueur, valeur_a_trouver);
	}while(choix_joueur != valeur_a_trouver);

	return 0;
}
