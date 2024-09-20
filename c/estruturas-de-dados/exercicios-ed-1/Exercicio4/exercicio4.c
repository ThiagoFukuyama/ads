
#include <stdio.h>

int main() {
	int number;
	int even_counter = 0;
	int number_counter = 0;
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &number);
		
		number_counter++;
		
		if (number % 2 == 0) {
			even_counter++;
		}
	} while (number != 1000);
	
	printf("\nA quantidade de numeros foi: %d\n", number_counter);
	printf("O numero de pares foi: %d", even_counter);
	
	return 0;
}
