// SommaC.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <stdio.h>

int main()
{
	int primoAddendo = 0, secondoAddendo = 0, sommaTotale = 0;

	printf("Inserisci il primo adddendo \n");
	scanf_s("%d", &primoAddendo);

	printf("Inserisci il secondo adddendo \n");
	scanf_s("%d", &secondoAddendo);

	sommaTotale = primoAddendo + secondoAddendo;

	printf("La somma totale e' %d", sommaTotale);

	return(0);
}

