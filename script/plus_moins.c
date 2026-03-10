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
	int essais = 0, max_essais;
	int mode;

	printf("Choisissez un mode (1: facile, 2: moyen, 3: difficile) : ");
	scanf("%d", &mode);

	if (mode==1)
		max_essais= -1;  //supposant que -1 signifie illimité
	if (mode==2)
		max_essais= 25;
	else
		max_essais= 10;


	do
	{
		printf ("Devinez le nombre: \n");
		scanf ("%d", &choix_joueur);   //on met pas de "\n" dans scanf
		plus_moins (choix_joueur, valeur_a_trouver);
		essais++;

		if (max_essais != -1 && essais >= max_essais && choix_joueur != valeur_a_trouver)
		{
			printf("Perdu! Le nombre exact était %d\n", valeur_a_trouver);
			break;
		}
	}while(choix_joueur != valeur_a_trouver);

	return 0;
}
