
#include <stdio.h>
#include <math.h>

int main() {
	double x, y;

	printf("Insira o primeiro numero: ");
	scanf("%lf", &x);

	printf("Insira o segundo numero: ");
	scanf("%lf", &y);

	printf("\nSoma dos numeros: %.1lf", x + y);
	printf("\nProduto do primeiro numero pelo quadrado do segundo: %.1lf", x * pow(y, 2));
	printf("\nQuadrado do primeiro numero: %.1lf", x * x);
	printf("\nSoma dos cubos de ambos numeros: %.1lf", pow(x, 3) * pow(y, 3));

	return 0;
}
