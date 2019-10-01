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

void calcolaNumeroPrimo(int numero)
{
	int contatoreDivisori = 0;

	for (int i = 0; i < numero; i++)
		if (numero % (i + 1) == 0)
			contatoreDivisori++;

	if (contatoreDivisori == 2)
		printf("Il numero %d e' un numero primo\n", numero);
	else
		printf("Il numero %d non e' un numero primo\n", numero);
}

void calcolaFattoriale(int numero)
{
	int fattoriale = 1;

	for (int i = 0; i < numero; i++)
		fattoriale = fattoriale * (i + 1);

	printf("Il fattoriale del numero %d vale %d", numero, fattoriale);
}

int main()
{
	int numero;
	numero = richiestaNumero();

	calcolaNumeroPrimo(numero);
	calcolaFattoriale(numero);

	return(0);
}