
#include <stdio.h>

void load_matrix(int rows, int columns, int matrix[rows][columns]);
void print_matrix(int rows, int columns, int matrix[rows][columns]);
int sum_matrix_values(int rows, int columns, int matrix[rows][columns]);
float average_matrix_value(int rows, int columns, int matrix[rows][columns]);
int search_matrix(int rows, int columns, int matrix[rows][columns], int target);

int main()
{
    const int NUM_ROWS = 2;
    const int NUM_COLUMNS = 2;

    int matrix[NUM_ROWS][NUM_COLUMNS];

    printf("Insira os elementos da matriz: ");
    load_matrix(NUM_ROWS, NUM_COLUMNS, matrix);

    printf("\n");
    print_matrix(NUM_ROWS, NUM_COLUMNS, matrix);

    int matrix_sum = sum_matrix_values(NUM_ROWS, NUM_COLUMNS, matrix);
    float matrix_average = average_matrix_value(NUM_ROWS, NUM_COLUMNS, matrix);

    printf("\nSoma dos elementos: %d", matrix_sum);
    printf("\nMedia dos elementos: %.2f", matrix_average);

    int search_value;

    printf("\nDigite o valor a ser procurado na matriz: ");
    scanf("%d", &search_value);

    int search_result = search_matrix(NUM_ROWS, NUM_COLUMNS, matrix, search_value);

    if (search_result == -1)
    {
        printf("\nValor nao encontrado");
    }
    else
    {
        printf("\nValor %d existe na matriz!", search_result);
    }

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

int sum_matrix_values(int rows, int columns, int matrix[rows][columns])
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}

float average_matrix_value(int rows, int columns, int matrix[rows][columns])
{
    double sum = sum_matrix_values(rows, columns, matrix);
    double average = sum / (rows * columns);

    return average;
}

int search_matrix(int rows, int columns, int matrix[rows][columns], int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] == target)
            {
                return matrix[i][j];
            }
        }
    }

    return -1;
}
