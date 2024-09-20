
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int search(int target, int array[], int size);
void selection_sort(int array[], int size);

int main()
{
	srand(time(NULL));

	const int NUM_ELEMENTS = 20;

	int A[NUM_ELEMENTS];
	int B[NUM_ELEMENTS];

	// No melhor dos casos não há elementos repetidos
	int C[NUM_ELEMENTS * 2];

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		A[i] = rand() % 50;
		B[i] = rand() % 50;
	}

	int size_C = 0;

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		if (search(A[i], C, size_C) == -1)
		{
			C[size_C] = A[i];
			size_C++;
		}
	}

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		if (search(B[i], C, size_C) == -1)
		{
			C[size_C] = B[i];
			size_C++;
		}
	}

	selection_sort(C, size_C);

	printf("Vetor A: \n");
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("%d ", A[i]);
	}

	printf("\n\nVetor B: \n");
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("%d ", B[i]);
	}

	printf("\n\nVetor C ordenado com elementos unicos de cada um: \n");
	for (int i = 0; i < size_C; i++)
	{
		printf("%d ", C[i]);
	}

	printf("\n\n%d bytes desperdicados :)", (NUM_ELEMENTS * 2 - size_C) * sizeof(int));

	return 0;
}

int search(int target, int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == target)
			return i;
	}

	return -1;
}

void selection_sort(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = i;

		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		int temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
}
