
#include <stdio.h>

int main()
{
    const int NUMBER_AMOUNT = 15;

    int numbers[NUMBER_AMOUNT];

    for (int i = 0; i < NUMBER_AMOUNT; i++)
    {
        printf("\nDigite o %do numero: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < NUMBER_AMOUNT; i++)
    {

        char *is_even_result = numbers[i] % 2 == 0 ? "Par" : "Impar";

        printf("\n%do - %d (%s)", i + 1, numbers[i], is_even_result);
    }

    return 0;
}
