
#include <stdio.h>

float quadruple_factorial(int n);

int main()
{
    int n;

    do
    {
        printf("Qual numero deseja calcular o fatorial quadruplo?\n");
        scanf("%d", &n);

        if (n < 0)
            printf("Numero invalido. O numero deve ser positivo.\n\n");
    } while (n < 0);

    float result = quadruple_factorial(n);

    printf("\nO fatorial quadruplo de %d e: %.1f", n, result);

    return 0;
}

float quadruple_factorial(int n)
{
    if (n <= 0)
        return 0;

    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }

    int double_factorial = 1;
    for (int i = 2; i <= (n * 2); i++)
    {
        double_factorial *= i;
    }

    return double_factorial / (float)factorial;
}
