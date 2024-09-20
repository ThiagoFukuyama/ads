
#include <stdio.h>

int main()
{
    const int NUM_ELEMENTS = 100;

    int integers[NUM_ELEMENTS];

    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        printf("Digite o %do elemento: ", i + 1);
        scanf("%d", &integers[i]);
    }

    int min_value = integers[0];
    int max_value = integers[0];

    int even_count = 0;
    int elements_sum = 0;

    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        elements_sum += integers[i];

        if (integers[i] < min_value)
        {
            min_value = integers[i];
        }

        if (integers[i] > max_value)
        {
            max_value = integers[i];
        }

        if (integers[i] % 2 == 0)
        {
            even_count++;
        }
    }

    float average = elements_sum / (float)NUM_ELEMENTS;
    float even_percentage = (even_count / (float)NUM_ELEMENTS) * 100;

    printf("\nMenor valor: %d", min_value);
    printf("\nMaior valor: %d", max_value);
    printf("\nMedia dos elementos: %.1f", average);
    printf("\nPorcentagem de pares: %.1f%%", even_percentage);

    return 0;
}
