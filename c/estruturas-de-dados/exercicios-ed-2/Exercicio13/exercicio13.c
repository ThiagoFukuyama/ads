
#include <stdio.h>
#include <math.h>

int main()
{
    const int NUM_ELEMENTS = 10;

    float numbers[NUM_ELEMENTS];
    float elements_sum = 0;

    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        printf("Digite o %do elemento: ", i + 1);
        scanf("%f", &numbers[i]);

        elements_sum += numbers[i];
    }

    float average = elements_sum / NUM_ELEMENTS;
    float deviation_sum = 0;

    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        deviation_sum += (float)abs(pow(numbers[i] - average, 2));
    }

    float standard_deviation = sqrt(deviation_sum / NUM_ELEMENTS);

    printf("\nO Desvio Padrao e: %.3f", standard_deviation);

    return 0;
}
