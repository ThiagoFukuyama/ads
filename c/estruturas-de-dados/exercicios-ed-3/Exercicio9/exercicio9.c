
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	srand(time(NULL));

	const int NUM_ELEMENTS = 100;

	int J[NUM_ELEMENTS];

	int sum = 0;
	float average;

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		J[i] = rand() % 100;
		sum += J[i];
	}

	average = sum / (float)NUM_ELEMENTS;

	float deviation_sum = 0;

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		deviation_sum += pow(J[i] - average, 2);
	}

	float standard_deviation = sqrt((1 / (float)(NUM_ELEMENTS - 1)) * deviation_sum);

	printf("Valores: \n");
	for (size_t i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("%d ", J[i]);
	}

	printf("\n\nDesvio Padrao: %f", standard_deviation);

	return 0;
}
