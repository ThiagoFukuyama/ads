
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_matrix_rand(int rows, int columns, int matrix[rows][columns], int max);
void print_matrix(int rows, int columns, int matrix[rows][columns]);

int main()
{
    const int NUM_ROWS = 10;
    const int NUM_COLUMNS = 10;

    int matrix[NUM_ROWS][NUM_COLUMNS];

    fill_matrix_rand(NUM_ROWS, NUM_COLUMNS, matrix, 1000);

    print_matrix(NUM_ROWS, NUM_COLUMNS, matrix);

    int search_value;

    printf("\nDigite o valor procurado: ");
    scanf("%d", &search_value);

    int found = 0;
    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLUMNS; j++)
        {
            if (matrix[i][j] == search_value)
            {
                printf("\nLinha - %d / Coluna - %d -> %d", i + 1, j + 1, matrix[i][j]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
    {
        printf("\nValor nao encontrado");
    }

    return 0;
}

void fill_matrix_rand(int rows, int columns, int matrix[rows][columns], int max)
{
    srand(time(NULL));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = rand() % max;
        }
    }
}

void print_matrix(int rows, int columns, int matrix[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%-3d ", matrix[i][j]);
        }
        printf("\n");
    }
}
