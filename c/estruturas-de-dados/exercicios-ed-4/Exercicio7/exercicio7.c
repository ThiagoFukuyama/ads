
#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int id;
    char name[50];
    float grade_1;
    float grade_2;
    float grade_3;
    float average;
} Student;

// Copiei e colei o que já tinha feito que nem o mestre Fábio :)
int main()
{
    const int NUM_STUDENTS = 3;

    Student students[NUM_STUDENTS];

    printf("Registrar alunos: \n");
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("\n%do Aluno", i + 1);

        printf("\nMATRICULA: ");
        scanf("%d", &students[i].id);

        printf("NOME: ");
        scanf("%50s", &students[i].name);

        printf("NOTA 1: ");
        scanf("%f", &students[i].grade_1);

        printf("NOTA 2: ");
        scanf("%f", &students[i].grade_2);

        printf("NOTA 3: ");
        scanf("%f", &students[i].grade_3);

        students[i].average = (students[i].grade_1 + students[i].grade_2 + students[i].grade_3) / 3;
    }

    Student *highest_grade_1 = &students[0];
    Student *highest_average = &students[0];
    Student *lowest_average = &students[0];

    for (int i = 1; i < NUM_STUDENTS; i++)
    {
        if (students[i].grade_1 > highest_grade_1->grade_1)
        {
            highest_grade_1 = &students[i];
        }

        if (students[i].average > highest_average->average)
        {
            highest_average = &students[i];
        }

        if (students[i].average < lowest_average->average)
        {
            lowest_average = &students[i];
        }
    }

    printf("\n%-14s %-14s %-14s %-14s %-14s %-14s %-14s\n", "MATRICULA", "NOME", "NOTA 1", "NOTA 2", "NOTA 3", "MEDIA", "SITUACAO");
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        Student *student = &students[i];

        printf("%-14d %-14s %-14.1f %-14.1f %-14.1f %-14.1f %-14s\n",
               student->id,
               student->name,
               student->grade_1,
               student->grade_2,
               student->grade_3,
               student->average,
               student->average >= 6 ? "Aprovado" : "Reprovado");
    }

    printf("\n\nMAIOR NOTA 1 - %.1f\n", highest_grade_1->grade_1);
    printf("MATRICULA: %d\n", highest_grade_1->id);
    printf("NOME: %s\n", highest_grade_1->name);

    printf("\n\nMAIOR MEDIA - %.1f\n", highest_average->average);
    printf("MATRICULA: %d\n", highest_average->id);
    printf("NOME: %s", highest_average->name);

    printf("\n\nMENOR MEDIA - %.1f\n", lowest_average->average);
    printf("MATRICULA: %d\n", lowest_average->id);
    printf("NOME: %s", lowest_average->name);

    return 0;
}
