
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contains(int target, int array[], int size);
int find_most_common_number(int rows, int columns, int matrix[rows][columns], int max);

int main()
{
    const int NUM_BETS = 10;
    const int BET_SIZE = 6;

    srand(time(NULL));

    int lottery_numbers[BET_SIZE];
    int bets[NUM_BETS][BET_SIZE];

    int draw_id;
    printf("Digite o numero do concurso: ");
    scanf("%d", &draw_id);

    printf("\n-- MEGA SENA --\n");
    printf("- Concurso %d -\n", draw_id);

    printf("\nDigite os Numeros de Azar: ");
    for (int i = 0; i < BET_SIZE; i++)
    {
        printf("\n%do Numero - ", i + 1);
        scanf("%d", &lottery_numbers[i]);
    }

    for (int i = 0; i < NUM_BETS; i++)
    {
        for (int j = 0; j < BET_SIZE; j++)
        {
            int random_value;
            do
            {
                random_value = rand() % 61;
            } while (contains(random_value, bets[i], BET_SIZE));

            bets[i][j] = random_value;
        }
    }

    int most_bet_number = find_most_common_number(NUM_BETS, BET_SIZE, bets, 60);

    printf("\nAPOSTAS: ");
    for (int i = 0; i < NUM_BETS; i++)
    {
        printf("\n-------------------------\n");
        for (int j = 0; j < BET_SIZE; j++)
        {
            printf("%-3d ", bets[i][j]);
        }
    }

    printf("\n\nNUMERO MAIS APOSTADO: %d", most_bet_number);

    return 0;
}

int contains(int target, int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
            return 1;
    }

    return 0;
}

int find_most_common_number(int rows, int columns, int matrix[rows][columns], int max)
{
    int counters[max];
    for (int i = 0; i < max; i++)
    {
        counters[i] = 0;
    }

    int most_common_number = matrix[0][0];
    int highest_counter = counters[0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            int number = matrix[i][j];
            counters[number]++;

            if (counters[number] > highest_counter)
            {
                highest_counter = counters[number];
                most_common_number = number;
            }
        }
    }

    return most_common_number;
}
