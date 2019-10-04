#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));

	int numeroC = rand();
	bool ottenuto = false;
	int volte = 0, nInserito = 0;

	while (!ottenuto)
	{
		printf("Inserisci un numero\n");
		scanf_s("%d", &nInserito);

		volte++;

		if (nInserito < numeroC)
			printf("Inserisci un numero maggiore\n");
		else if (nInserito > numeroC)
			printf("Inserisci un numero minore\n");
		else
		{
			printf("Hai indovinato con %d tentativi\n", volte);
			ottenuto = true;
		}
	}

	return(0);
}