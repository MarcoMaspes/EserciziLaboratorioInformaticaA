#include<stdio.h>

int main()
{
	float capitaleI, percInteresse;
	int anni;

	printf("Inserisci capitale, percentuale interesse ed anni previsione\n");
	scanf_s("%f", &capitaleI);
	scanf_s("%f", &percInteresse);
	scanf_s("%d", &anni);

	float capitaleParziale = capitaleI;

	for (int i = 0; i < anni; i++)
	{
		float interesseAnnuo = capitaleParziale * percInteresse / 100;
		capitaleParziale += interesseAnnuo;

		printf("\nPrevisione per l'anno %d:\nCapitale = %f\nInteressi maturati in precedenza = %f\n", i + 1, capitaleParziale, interesseAnnuo);
	}

	return(0);
}