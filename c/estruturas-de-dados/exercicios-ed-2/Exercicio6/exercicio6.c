
#include <stdio.h>

int main()
{
    const int NUM_SALARIES = 1;
    const int ADJUSTMENT_RATE = 8;

    float salaries[NUM_SALARIES];
    float adjusted_salaries[NUM_SALARIES];

    for (int i = 0; i < NUM_SALARIES; i++)
    {
        printf("Digite o %do salario: ", i + 1);
        scanf("%f", &salaries[i]);

        adjusted_salaries[i] = salaries[i] + ((salaries[i] * ADJUSTMENT_RATE) / 100);
    }

    printf("\nREAJUSTES: \n");

    for (int i = 0; i < NUM_SALARIES; i++)
    {
        printf("\n%do salario: R$%.2f\n", i + 1, salaries[i]);
        printf("%do salario reajustado: R$%.2f\n", i + 1, adjusted_salaries[i]);
    }

    return 0;
}
