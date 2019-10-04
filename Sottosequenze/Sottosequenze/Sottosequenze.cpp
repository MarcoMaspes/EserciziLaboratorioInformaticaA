#include<stdio.h>

int ottieniNumero()
{
	int numero = 0;

	printf("Inserire un numero\n");
	scanf_s("%d", &numero);

	return numero;
}

int main()
{
	int contatorePari = 0, numero = 0;
	bool condIn1, condIn2, condF1, condF2;

	condIn1 = condIn2 = condF1 = condF2 = false;

	numero = ottieniNumero();

	while (numero != 0)
	{
		if (condIn1 && condIn2 && !condF2)
		{
			if (numero % 2 == 0)
			{
				contatorePari++;
				condF1 = false;
			}
			else
			{
				if (condF1)
					condF2 = true;
				else
					condF1 = true;
			}
		}
		else if (!condIn2)
		{
			if (numero % 2 != 0)
				if (condIn1)
					condIn2 = true;
				else
					condIn1 = true;
			else
			{
				if (condIn1)
					condIn1 = false;
			}
		}

		if (condF1 && condF2 && condIn1 && condIn2)
		{
			condIn1 = false;
			condIn2 = false;
			condF1 = false;
			condF2 = false;
		}

		numero = ottieniNumero();
	}

	printf("I numeri pari nelle sottosequenze sono %d", contatorePari);
	return(0);
}