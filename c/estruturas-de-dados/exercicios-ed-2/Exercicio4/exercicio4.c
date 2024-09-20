
#include <stdio.h>

int main()
{
    const int NUMBER_AMOUNT = 8;

    int numbers[NUMBER_AMOUNT];
    int counterMultiplesOfSix = 0;

    for (int i = 0; i < NUMBER_AMOUNT; i++)
    {
        printf("\nDigite o %do numero: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 6 == 0)
        {
            counterMultiplesOfSix++;
        }
    }

    printf("\nNumeros digitados: ");
    for (int i = 0; i < NUMBER_AMOUNT; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\nTotal de numeros multiplos de 6: %d", counterMultiplesOfSix);

    return 0;
}
