
#include <stdio.h>

int main() {
	int number = 0;
	
	printf("Digite o numero desejado: ");
	scanf("%d", &number);
	
	for (int i = 1; i <= number; i += 2) {
		printf("\n%d", i);
	}

	return 0;
}
