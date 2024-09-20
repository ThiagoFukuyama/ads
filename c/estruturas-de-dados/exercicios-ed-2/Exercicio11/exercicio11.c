
#include <stdio.h>

int main()
{
    const int NUM_ELEMENTS = 10;

    int integers[NUM_ELEMENTS];
    int reference_value;

    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        printf("Digite o %do elemento: ", i + 1);
        scanf("%d", &integers[i]);
    }

    printf("\nDigite o valor de referencia: ");
    scanf("%d", &reference_value);

    int lower_count = 0;
    int occurrences_count = 0;

    printf("\nNumeros do vetor maiores que %d: ", reference_value);
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {

        if (integers[i] > reference_value)
        {
            printf("\n%d", integers[i]);
        }

        if (integers[i] < reference_value)
        {
            lower_count++;
        }

        if (integers[i] == reference_value)
        {
            occurrences_count++;
        }
    }

    printf("\nNumero de elementos menores que %d: %d", reference_value, lower_count);
    printf("\nO numero \"%d\" aparece %d vezes", reference_value, occurrences_count);

    return 0;
}
