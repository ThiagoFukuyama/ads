
#include <stdio.h>

void print_array(int array[], int size);

int main()
{
    const int NUM_ELEMENTS = 5;

    int x[NUM_ELEMENTS];
    int y[NUM_ELEMENTS];

    printf("PRIMEIRO CONJUNTO\n");
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        printf("Digite o %do elemento: ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("\nSEGUNDO CONJUNTO\n");
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        printf("Digite o %do elemento: ", i + 1);
        scanf("%d", &y[i]);
    }

    int sum[NUM_ELEMENTS];
    int multiplication[NUM_ELEMENTS];

    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        sum[i] = x[i] + y[i];
        multiplication[i] = x[i] * y[i];
    }

    printf("\nSOMA: ");
    print_array(sum, NUM_ELEMENTS);

    printf("\n\nMULTIPLICACAO: ");
    print_array(multiplication, NUM_ELEMENTS);

    printf("\n\nDIFERENCA: ");
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        int found = 0;
        for (int j = 0; j < NUM_ELEMENTS; j++)
        {
            if (x[i] == y[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("%d ", x[i]);
        }
    }

    printf("\n\nINTERSECCAO: ");
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        for (int j = 0; j < NUM_ELEMENTS; j++)
        {
            if (x[i] == y[j])
                printf("%d ", x[i]);
        }
    }

    printf("\n\nUNIAO: ");
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        printf("%d ", x[i]);
    }

    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        int found = 0;
        for (int j = 0; j < NUM_ELEMENTS; j++)
        {
            if (y[i] == x[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("%d ", y[i]);
        }
    }

    return 0;
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
