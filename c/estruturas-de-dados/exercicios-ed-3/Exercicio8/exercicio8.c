
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	const int NUM_ELEMENTS = 100;

	int W[NUM_ELEMENTS];
	int J[NUM_ELEMENTS];

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		W[i] = rand() % 100;
		J[i] = rand() % 100;
	}

	int max_W = W[0];
	int min_J = J[0];

	int sum_W = W[0];
	int sum_J = J[0];
	float average_W;
	float average_J;

	for (int i = 1; i < NUM_ELEMENTS; i++)
	{
		if (W[i] > max_W)
		{
			max_W = W[i];
		}

		if (J[i] < min_J)
		{
			min_J = J[i];
		}

		sum_W += W[i];
		sum_J += J[i];
	}

	average_W = sum_W / (float)NUM_ELEMENTS;
	average_J = sum_J / (float)NUM_ELEMENTS;

	float t = (max_W * (min_J + 1)) / (average_W + average_J);

	printf("W: \n");
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("%d ", W[i]);
	}

	printf("\n\nJ: \n");
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("%d ", J[i]);
	}

	printf("\n\nt: %f", t);

	return 0;
}
