
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_prime_number(int number);

int main()
{
	const int NUM_ELEMENTS = 10;

	srand(time(NULL));

	int numbers[NUM_ELEMENTS];

	printf("Conjunto de numeros: ");
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		numbers[i] = rand() % 1000;
		printf("%d ", numbers[i]);
	}

	printf("\n\nNumeros primos: ");
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		if (is_prime_number(numbers[i]))
		{
			printf("\n%d", numbers[i]);
		}
	}

	return 0;
}

int is_prime_number(int number)
{
	if (number == 0 || number == 1)
		return 0;

	for (int i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
			return 0;
	}

	return 1;
}