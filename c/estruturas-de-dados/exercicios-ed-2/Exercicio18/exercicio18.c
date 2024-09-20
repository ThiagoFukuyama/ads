
#include <stdio.h>

// Acho que este método funciona só para matrizes quadradas
void transpose_square_matrix(int rows, int columns, int matrix[rows][columns], int transpose[rows][columns]);
void print_matrix(int rows, int columns, int matrix[rows][columns]);

int main()
{
    const int NUM_ROWS = 4;
    const int NUM_COLUMNS = 4;

    int matrix[NUM_ROWS][NUM_COLUMNS];
    int transpose[NUM_ROWS][NUM_COLUMNS];

    printf("Preencha a matriz: \n");
    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLUMNS; j++)
        {
            printf("%d / %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    transpose_square_matrix(NUM_ROWS, NUM_COLUMNS, matrix, transpose);

    printf("\nMatriz original: \n");
    print_matrix(NUM_ROWS, NUM_COLUMNS, matrix);

    printf("\nMatriz transposta: \n");
    print_matrix(NUM_ROWS, NUM_COLUMNS, transpose);

    return 0;
}

void transpose_square_matrix(int rows, int columns, int matrix[rows][columns], int transpose[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            transpose[i][j] = matrix[j][i];
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
