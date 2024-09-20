
#include <stdio.h>

int main() {
	int number;
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		printf("\nDigite o %do numero: ", i + 1);
		scanf("%d", &number);

		sum += number;
	}

	printf("\nSoma: %d", sum);
	
	return 0;
}
