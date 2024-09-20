
#include <stdio.h>

int main() {
	float grade1;
	float grade2;
	float grade3;

	printf("1a nota: ");
	scanf("%f", &grade1);
	
	printf("\n2a nota: ");
	scanf("%f", &grade2);

	printf("\n3a nota: ");
	scanf("%f", &grade3);

	float final_average = (float)((grade1 * 2) + (grade2 * 3) + (grade3 * 5)) / 10;

	printf("\nA media final e: %.1f", final_average);
	
	return 0;
}
