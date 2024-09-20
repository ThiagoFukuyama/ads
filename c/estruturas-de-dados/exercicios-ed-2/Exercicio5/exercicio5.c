
#include <stdio.h>

int main()
{
    const int NUM_STUDENTS = 15;

    float grades1[NUM_STUDENTS];
    float grades2[NUM_STUDENTS];

    float averages[NUM_STUDENTS];
    char *situations[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("\nAluno %d\n--------\n", i + 1);

        printf("Digite a primeira nota: ");
        scanf("%f", &grades1[i]);

        printf("Digite a segunda nota: ");
        scanf("%f", &grades2[i]);

        averages[i] = (grades1[i] + grades2[i]) / 2;
        situations[i] = averages[i] >= 6 ? "APROVADO" : "REPROVADO";
    }

    printf("\nRESULTADOS: \n");

    printf("\n%-9s  |  %-9s  |  %-9s  |  %-9s  |  %-9s\n", "ALUNO", "NOTA 1", "NOTA 2", "MEDIA", "SITUACAO");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("%-8s %d  |  %-8.1f  |  %-8.1f  |  %-8.1f  |  %-8s\n", "Aluno", i + 1, grades1[i], grades2[i], averages[i], situations[i]);
    }

    return 0;
}
