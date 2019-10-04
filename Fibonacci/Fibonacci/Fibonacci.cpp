#include<stdio.h>

int ottieniNumero()
{
	int numero = 0;

	do
	{
		printf("Inserisci un numero\n");
		scanf_s("%d", &numero);

		if (numero < 1)
			printf("Numero errato, reinserire\n");
	} while (numero < 1);

	return numero;
}

int main()
{
	int valoreN = 1, valoreN2 = 1, numero, sommaP;
	numero = ottieniNumero();

	switch (numero)
	{
	case 1:
		printf("Il numero richiesto e' 1\n");
		break;
	default:
		printf("La serie richiesta e' 1 1");

		for (int i = 2; i < numero; i++)
		{
			sommaP = valoreN + valoreN2;
			printf(" %d", sommaP);

			valoreN = valoreN2;
			valoreN2 = sommaP;
		}
	}

	return(0);
}