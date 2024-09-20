
#include <stdio.h>

int main() {
	float manufacturing_cost;
	float tax_percentage;
	float distributors_percentage;

	printf("Digite o valor do custo de fabrica: ");
	scanf("%f", &manufacturing_cost);

	printf("\nDigite a porcentagem de impostos: ");
	scanf("%f", &tax_percentage);

	printf("\nDigite a porcentagem do distribuidor: ");
	scanf("%f", &distributors_percentage);

	float tax_cost = (float)(tax_percentage * manufacturing_cost) / 100;
	float distributors_cost = (float)(distributors_percentage * manufacturing_cost) / 100;

	float total_car_cost = manufacturing_cost + tax_cost + distributors_cost;

	printf("\n\nValor do distribuidor: %.2f (%.1f%%)", distributors_cost, distributors_percentage);
	printf("\nValor dos impostos: %.2f (%.1f%%)", tax_cost, tax_percentage);

	printf("\n\nValor total do carro: %.2f", total_car_cost);
	
	return 0;
}
