#include <iostream>

int richiestaNumero()
{
	int numero;

	printf("Inserire il numero \n");
	scanf_s("%d", &numero);

	return numero;
}

int main()
{
	int scelta = 0;
	int numero1, numero2;

	do
	{
		printf("Inserire l'operazione scelta:\n-1 --> Somma\n-2 --> Sottrazione\n-3 --> Moltiplicazione\n-4 --> Divisione\n-0 --> Termina programma\n");
		scanf_s("%d", &scelta);

		switch (scelta)
		{
		case 1:
			numero1 = richiestaNumero();
			numero2 = richiestaNumero();

			printf("La somma di %d e %d equivale a %d\n", numero1, numero2, numero1 + numero2);
			break;
		case 2:
			numero1 = richiestaNumero();
			numero2 = richiestaNumero();

			printf("La differenza di %d e %d equivale a %d\n", numero1, numero2, numero1 - numero2);
			break;
		case 3:
			numero1 = richiestaNumero();
			numero2 = richiestaNumero();

			printf("La moltiplicazione di %d e %d equivale a %d\n", numero1, numero2, numero1 * numero2);
			break;
		case 4:
			
			numero1 = richiestaNumero();
			numero2 = richiestaNumero();

			if (numero2 != 0)
				printf("La divisione di %d e %d equivale a %f\n", numero1, numero2, 1.0 *numero1 / numero2);
			else
				printf("Errore, impossibile dividere per 0. Riprovare");
			break;
		case 0:
			break;
		default:
			printf("Il valore inserito non corrisponde ad una scelta, riprovare");
		}
	} while (scelta != 0);

	return (0);
}