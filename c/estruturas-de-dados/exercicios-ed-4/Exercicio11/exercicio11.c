
#include <stdio.h>
#include <math.h>

float standard_deviation(float numbers[], int size);

int main()
{
    const int NUM_NUMBERS = 5;

    float numbers[NUM_NUMBERS];

    printf("Calculo de Desvio Padrao\n");
    for (int i = 0; i < NUM_NUMBERS; i++)
    {
        printf("%do numero - ", i + 1);
        scanf("%f", &numbers[i]);
    }

    float result = standard_deviation(numbers, NUM_NUMBERS);

    printf("\nVetor: [ ");
    for (int i = 0; i < NUM_NUMBERS; i++)
    {
        printf("%.1f ", numbers[i]);
    }
    printf("]");

    printf("\n\nDesvio Padrao: %.f", result);

    return 0;
}

float standard_deviation(float numbers[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    float average = sum / (float)size;

    float deviation_sum = 0;
    for (int i = 0; i < size; i++)
    {
        deviation_sum += pow(numbers[i] - average, 2);
    }

    printf("DEVIATION SUM : %f", deviation_sum);

    return sqrt((1 / (float)(size - 1)) * deviation_sum);
}
