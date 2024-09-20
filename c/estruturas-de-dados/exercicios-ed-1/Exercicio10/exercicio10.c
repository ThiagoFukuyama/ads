
#include <stdio.h>

int main() {
	float real_value;

	float dollar_quotation;
	float euro_quotation;

	printf("Insira o valor em Reais (R$): ");
	scanf("%f", &real_value);

	printf("\nInsira a cotacao do Dolar ($): ");
	scanf("%f", &dollar_quotation);

	printf("\nInsira a cotacao do Euro (E): ");
	scanf("%f", &euro_quotation);

	float dollar_value = real_value * dollar_quotation;
	float euro_value = real_value * euro_quotation;

	printf("\nReais = R$%.2f", real_value);
	printf("\nDolares = $%.2f", dollar_value);
	printf("\nEuro = E%.2f", euro_value);

	return 0;
}
