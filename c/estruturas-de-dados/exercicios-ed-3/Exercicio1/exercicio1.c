
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	const int NUM_ELEMENTS = 10;
	const int NUM_RAND_ELEMENTS = 50;

	int integers[NUM_ELEMENTS];
	int reference_value;

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("Digite o %do elemento: ", i + 1);
		scanf("%d", &integers[i]);
	}

	printf("\nDigite o valor de referencia: ");
	scanf("%d", &reference_value);

	int lower_count = 0;
	int occurrences_count = 0;

	printf("\nNumeros do vetor maiores que %d: ", reference_value);
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{

		if (integers[i] > reference_value)
		{
			printf("\n%d", integers[i]);
		}

		if (integers[i] < reference_value)
		{
			lower_count++;
		}

		if (integers[i] == reference_value)
		{
			occurrences_count++;
		}
	}

	int random_integers[NUM_RAND_ELEMENTS];
	int common_element_counters[NUM_ELEMENTS];
	int common_elements = 0;

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		common_element_counters[i] = 0;
	}

	for (int i = 0; i < NUM_RAND_ELEMENTS; i++)
	{
		random_integers[i] = rand() % 100;

		for (int j = 0; j < NUM_ELEMENTS; j++)
		{
			if (random_integers[i] == integers[j])
			{
				common_element_counters[j]++;
				// Se o elemento for repetido, ainda vai contar para a porcentagem. Vou deixar assim mesmo.
				common_elements++;
			}
		}
	}

	float common_percentage = (common_elements / (float)NUM_RAND_ELEMENTS) * 100;

	printf("\n\nNumero de elementos menores que %d: %d", reference_value, lower_count);
	printf("\nO numero \"%d\" aparece %d vezes", reference_value, occurrences_count);

	printf("\n\nVetor com numeros aleatorios: \n");
	for (int i = 0; i < NUM_RAND_ELEMENTS; i++)
	{
		printf("%d ", random_integers[i]);
	}

	printf("\n\nNumeros do primeiro vetor que constam no segundo: \n");
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("%d - %d vezes\n", integers[i], common_element_counters[i]);
	}

	printf("\nA QUANTIDADE de numeros do segundo vetor que consta no primeiro e: %d", common_elements);
	printf("\nA PORCENTAGEM de numeros do segundo vetor que consta no primeiro e: %.1f%%", common_percentage);

	return 0;
}
