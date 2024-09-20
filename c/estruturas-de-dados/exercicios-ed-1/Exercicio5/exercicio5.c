
#include <stdio.h>

int main() {
	int first_number;
	int second_number;

	int even_sum = 0;
	int odd_multiplication = 1;
	
	printf("Digite o 1o numero: ");
	scanf("%d", &first_number);
	printf("Digite o 2o numero: ");
	scanf("%d", &second_number);

	if (first_number <= second_number ) {

		for (int i = first_number; i <= second_number; i++) {
			if (i % 2 == 0) {
				even_sum += i;
			} else {
				odd_multiplication *= i;
			}
		}	

	} else {

		for (int i = first_number; i >= second_number; i--) {
			if (i % 2 == 0) {
				even_sum += i;
			} else {
				odd_multiplication *= i;
			}	  
		}

	}
	
	printf("\nA soma dos numeros pares e: %d\n", even_sum);
	printf("A multiplicacao dos numeros impares e: %d\n", odd_multiplication);
	
	return 0;
}
