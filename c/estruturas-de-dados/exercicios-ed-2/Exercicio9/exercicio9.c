
#include <stdio.h>

int main()
{
    const int NUM_ELEMENTS = 10;

    int integers1[NUM_ELEMENTS];
    int integers2[NUM_ELEMENTS];

    printf("PRIMEIRO CONJUNTO: \n");
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        printf("Digite o %do elemento: ", i + 1);
        scanf("%d", &integers1[i]);
    }

    printf("\nSEGUNDO CONJUNTO: \n");
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        printf("Digite o %do elemento: ", i + 1);
        scanf("%d", &integers2[i]);
    }

    printf("\nElementos comuns entre os dois conjuntos: \n");
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        for (int j = 0; j < NUM_ELEMENTS; j++)
        {
            if (integers1[i] == integers2[j])
                printf("%d\n", integers2[j]);
        }
    }

    return 0;
}
