
#include <stdio.h>

int main() {
	int years;

	printf("Insira a quantidade de anos: ");	
	scanf("%d", &years);

	int months = years * 12;
	int days = months * 30;
	int hours = days * 24;
	int minutes = hours * 60;

	printf("\nAnos: %d", years);
	printf("\nMeses: %d", months);
	printf("\nDias: %d", days);
	printf("\nHoras: %d", hours);
	printf("\nMinutos: %d", minutes);

	return 0;
}
