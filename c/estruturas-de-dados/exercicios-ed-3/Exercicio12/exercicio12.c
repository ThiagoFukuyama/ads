
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	const int NUM_PLAYERS = 11;

	int players[NUM_PLAYERS];
	int goals_scored[NUM_PLAYERS];
	float discrepancies[NUM_PLAYERS];
	float variances[NUM_PLAYERS];

	for (int i = 0; i < NUM_PLAYERS; i++)
	{
		players[i] = i + 1;
		goals_scored[i] = rand() % 15;
	}

	int sum_goals = 0;

	for (int i = 0; i < NUM_PLAYERS; i++)
	{
		sum_goals += goals_scored[i];
	}

	float average_goals = sum_goals / (float)NUM_PLAYERS;

	for (int i = 0; i < NUM_PLAYERS; i++)
	{
		discrepancies[i] = goals_scored[i] - average_goals;
		variances[i] = discrepancies[i] * discrepancies[i];
	}

	printf("\nMEDIA DE ACERTOS: %.1f\n\n", average_goals);

	printf("%-14s %-14s %-14s %-14s\n", "JOGADOR", "ACERTOS", "DISCREPANCIA", "VARIACAO");
	for (int i = 0; i < NUM_PLAYERS; i++)
	{
		printf("%-14d %-14d %-14.3f %-14f\n", players[i], goals_scored[i], discrepancies[i], variances[i]);
	}

	return 0;
}
