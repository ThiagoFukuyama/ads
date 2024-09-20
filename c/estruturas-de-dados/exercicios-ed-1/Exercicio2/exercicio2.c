
#include <stdio.h>

int main() {
	int number;
	int highest_number = 0;
	int lowest_number = 0;

	for (int i = 0; i < 10; i++) {
		printf("\nDigite o %do numero: ", i + 1);
		scanf("%d", &number);

		if (number > highest_number) {
			highest_number = number;
		}

		if (number < lowest_number || i == 0) {
			lowest_number = number;
		}
	}

	printf("\nO maior numero e: %d\n", highest_number);
	printf("O menor numero e: %d", lowest_number);
	
	return 0;
}
