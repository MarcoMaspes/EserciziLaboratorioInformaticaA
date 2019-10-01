#include <stdio.h>

int richiestaNumero()
{
	bool correttezzaNumero = true;
	int numero = 0;

	do
	{
		printf("Inserire il numero \n");
		scanf_s("%d", &numero);

		if (numero < 1)
		{
			correttezzaNumero = false;
			printf("Numero non conforme agli standard \n");
		}
		else
			correttezzaNumero = true;

	} while (!correttezzaNumero);

	return numero;
}

void calcolaDivisori(int minore, int maggiore)
{
	printf("I seguenti sono i divisori comuni a %d e %d:", minore, maggiore);

	for (int i = 0; i < minore; i++)
		if (minore % (i + 1) == 0 && maggiore % (i + 1) == 0)
			printf("\n- %d", i + 1);
}

int main()
{
	int numero1, numero2;

	numero1 = richiestaNumero();
	numero2 = richiestaNumero();

	if (numero1 < numero2)
		calcolaDivisori(numero1, numero2);
	else
		calcolaDivisori(numero2, numero1);

	return(0);
}