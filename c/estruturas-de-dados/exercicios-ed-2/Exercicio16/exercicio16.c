
#include <stdio.h>

void print_matrix(int rows, int columns, int matrix[rows][columns]);

int main()
{
    const int NUM_ROWS = 10;
    const int NUM_COLUMNS = 10;

    int matrix[NUM_ROWS][NUM_COLUMNS];

    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLUMNS; j++)
        {
            matrix[i][j] = 0;
        }
    }

    int row;
    int column;
    int insert_value;

    print_matrix(NUM_ROWS, NUM_COLUMNS, matrix);

    printf("\nPreencha a matriz com valores inteiros");

    while (1)
    {
        printf("\n\nDigite a linha: ");
        scanf("%d", &row);

        if (row <= 0)
            break;

        if (row > NUM_ROWS)
        {
            printf("\nValor invalido!");
            continue;
        }

        printf("Digite a coluna: ");
        scanf("%d", &column);

        if (column <= 0)
            break;

        if (column > NUM_COLUMNS)
        {
            printf("\nValor invalido!");
            continue;
        }

        printf("Insira o valor: ");
        scanf("%d", &insert_value);

        matrix[row - 1][column - 1] = insert_value;

        printf("\n");
        print_matrix(NUM_ROWS, NUM_COLUMNS, matrix);
    }

    printf("\n");
    print_matrix(NUM_ROWS, NUM_COLUMNS, matrix);

    return 0;
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
