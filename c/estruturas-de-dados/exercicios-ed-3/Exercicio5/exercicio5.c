
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	const int NUM_ELEMENTS = 10;

	int w[NUM_ELEMENTS];
	int k[NUM_ELEMENTS];

	int sum = 0;

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		w[i] = rand() % 100;
		k[i] = rand() % 100;
	}

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		sum += (w[i] + k[NUM_ELEMENTS - 1 - i]);
	}

	printf("Vetor W: \n");
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("%d ", w[i]);
	}

	printf("\n\nVetor K: \n");
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("%d ", k[i]);
	}

	printf("\n\nE (w[i] + k[%d - i]) = %d \n", NUM_ELEMENTS - 1, sum);

	return 0;
}
