
#include <stdio.h>

int main()
{
    const int NUMBERS_AMOUNT = 5;

    int numbers[NUMBERS_AMOUNT];
    int target;
    int search = -1;

    for (int i = 0; i < NUMBERS_AMOUNT; i++)
    {
        printf("\nDigite o %do numero: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nQual numero deseja buscar?\n");
    scanf("%d", &target);

    for (int i = 0; i < NUMBERS_AMOUNT; i++)
    {
        if (numbers[i] == target)
        {
            search = i;
            break;
        }
    }

    if (search == -1)
    {
        printf("\nNumero nao encontrado");
    }
    else
    {
        printf("\nNumero encontrado na posicao %d", search);
    }

    return 0;
}
