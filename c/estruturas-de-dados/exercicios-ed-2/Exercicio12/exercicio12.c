
#include <stdio.h>

int main()
{
    const int NUM_ELEMENTS = 5;

    float x[NUM_ELEMENTS];
    float y[NUM_ELEMENTS];

    float dot_product = 0;

    printf("PRIMEIRO CONJUNTO\n");
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        printf("Digite o %do elemento: ", i + 1);
        scanf("%f", &x[i]);
    }

    printf("\nSEGUNDO CONJUNTO\n");
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        printf("Digite o %do elemento: ", i + 1);
        scanf("%f", &y[i]);
    }

    for (int i = 0; i < NUM_ELEMENTS; i++)
    {

        dot_product += (x[i] * y[i]);
    }

    printf("\nO produto escalar entre os dois vetores e: %.1f", dot_product);

    return 0;
}
