
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	const int NUM_ELEMENTS = 20;

	int rand_numbers[NUM_ELEMENTS];

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		rand_numbers[i] = rand() % 100;
	}

	printf("Numeros aleatorios: \n");
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("%d ", rand_numbers[i]);
	}

	printf("\n\nInversa: \n");
	for (int i = NUM_ELEMENTS - 1; i >= 0; i--)
	{
		printf("%d ", rand_numbers[i]);
	}

	return 0;
}
