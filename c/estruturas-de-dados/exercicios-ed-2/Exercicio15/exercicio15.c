
#include <stdio.h>

void load_matrix(int rows, int columns, int matrix[rows][columns]);
void print_matrix(int rows, int columns, int matrix[rows][columns]);
void sum_matrices(int rows, int columns, int x[rows][columns], int y[rows][columns], int sum[rows][columns]);

int main()
{
    const int NUM_ROWS = 2;
    const int NUM_COLUMNS = 3;

    int first_matrix[NUM_ROWS][NUM_COLUMNS];
    int second_matrix[NUM_ROWS][NUM_COLUMNS];

    int sum_matrix[NUM_ROWS][NUM_COLUMNS];

    printf("Insira os elementos da primeira matriz: ");
    load_matrix(NUM_ROWS, NUM_COLUMNS, first_matrix);

    printf("\nInsira os elementos da segunda matriz: ");
    load_matrix(NUM_ROWS, NUM_COLUMNS, second_matrix);

    sum_matrices(NUM_ROWS, NUM_COLUMNS, first_matrix, second_matrix, sum_matrix);

    printf("\nSoma das matrizes: \n");
    print_matrix(NUM_ROWS, NUM_COLUMNS, sum_matrix);

    return 0;
}

void sum_matrices(int rows, int columns, int x[rows][columns], int y[rows][columns], int sum[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum[i][j] = x[i][j] + y[i][j];
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

void load_matrix(int rows, int columns, int matrix[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("\n%d-%d - ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
