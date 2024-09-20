
#include <stdio.h>

int main() {
	float celsius_temp;

	printf("Insira a temperatura em Celsius: ");
	scanf("%f", &celsius_temp);

	float kelvin_temp = celsius_temp + 273.15;
	float fahrenheit_temp = celsius_temp * 1.8 + 32;

	printf("\nCelsius = %.2f oC", celsius_temp);
	printf("\nKelvin = %.2f K", kelvin_temp);
	printf("\nFahrenheit = %.2f oF", fahrenheit_temp);

	return 0;
}
