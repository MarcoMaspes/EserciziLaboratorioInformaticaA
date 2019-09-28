#include <stdio.h>

int richiestaNumeroTabellina(int numero)
{
	bool correttezzaNumero = true;

	do
	{
		printf("Inserire il numero per cui si vuole svolgere la tabellina \n");
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

int richiestaLunghezzaTabellina(int numero)
{
	bool correttezzaNumero = true;

	do
	{
		printf("Inserire la lunghezza per cui si vuole svolgere la tabellina \n");
		scanf_s("%d", &numero);

		if (numero < 1)
		{
			correttezzaNumero = false;
			printf("La lunghezza non e' conforme agli standard \n");
		}
		else
			correttezzaNumero = true;

	} while (!correttezzaNumero);

	return numero;
}

void calcolaTabellina(int numero, int lunghezza)
{
	printf("La richiesta (%d, %d) vale la seguente serie:", numero, lunghezza);

	for (int i = 1; i <= lunghezza; i++)
	{
		int prodotto = numero * i;
		printf(" %d", prodotto);
	}
}

int main()
{
	int numeroTabellina = 0, lunghezzaTabellina = 0;

	numeroTabellina = richiestaNumeroTabellina(numeroTabellina);
	lunghezzaTabellina = richiestaLunghezzaTabellina(lunghezzaTabellina);

	calcolaTabellina(numeroTabellina, lunghezzaTabellina);

	return(0);    
}
