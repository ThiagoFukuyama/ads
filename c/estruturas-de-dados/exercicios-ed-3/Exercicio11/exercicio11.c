
#include <stdio.h>

// I'm tired, boss
int main()
{
	const int NUM_SALARIES = 20;
	const int RAISE_PERCENTAGE = 8;

	float salaries[NUM_SALARIES];
	float readjusted_salaries[NUM_SALARIES];
	float raises[NUM_SALARIES];

	float sum_salaries = 0;
	float sum_readjusted_salaries = 0;
	float sum_raises = 0;

	for (int i = 0; i < NUM_SALARIES; i++)
	{
		printf("Digite o %d salario: R$", i + 1);
		scanf("%f", &salaries[i]);
	}

	for (int i = 0; i < NUM_SALARIES; i++)
	{
		raises[i] = (salaries[i] * RAISE_PERCENTAGE) / 100;
		readjusted_salaries[i] = salaries[i] + raises[i];

		sum_salaries += salaries[i];
		sum_readjusted_salaries += readjusted_salaries[i];
		sum_raises += raises[i];
	}

	printf("\n\nSalarios Reajustados: \n");
	printf("%-3s %-14s %-14s %-14s\n", " ", "SALARIO ANTIGO", "NOVO SALARIO", "AUMENTO");
	for (int i = 0; i < NUM_SALARIES; i++)
	{
		printf("%-3d R$%-14.2f R$%-14.2f R$%-14.2f\n", i + 1, salaries[i], readjusted_salaries[i], raises[i]);
	}

	printf("\n%3s %-14s %-14s %-14s\n", " ", "TOTAL ANTIGO", "TOTAL NOVO", "TOTAL AUMENTO");
	printf("%3s R$%-14.2f R$%-14.2f R$%-14.2f\n", " ", sum_salaries, sum_readjusted_salaries, sum_raises);

	return 0;
}
