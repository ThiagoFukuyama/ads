
#include <stdio.h>

int main()
{
	int number;

	printf("Digite um numero para geracao da tabuada: ");
	scanf("%d", &number);

	printf("\nSoma: ");
	for (int i = 0; i <= 10; i++)
	{
		printf("\n%d + %d = %d", number, i, number + i);
	}

	printf("\n\nMultiplicacao: ");
	for (int i = 0; i <= 10; i++)
	{
		printf("\n%d x %d = %d", number, i, number * i);
	}

	return 0;
}
