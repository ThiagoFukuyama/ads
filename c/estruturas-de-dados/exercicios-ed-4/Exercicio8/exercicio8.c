
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Subject
{
    int id;
    int workload;
} Subject;

typedef struct Exam
{
    float p1;
    float p2;
    float average;
    Subject subject;
} Exam;

typedef struct Student
{
    int id;
    int age;
    Exam exams[5];
} Student;

int main()
{
    srand(time(NULL));

    const int NUM_STUDENTS = 5;
    const int NUM_SUBJECTS = 5;

    Student students[NUM_STUDENTS];

    Subject subjects[] = {
        {1, 100},
        {2, 150},
        {3, 100},
        {4, 100},
        {5, 150}};

    float class_averages_sum[] = {0, 0, 0, 0, 0};
    float class_averages[5];

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        students[i].id = rand() % 501;
        students[i].age = rand() % 71;

        for (int j = 0; j < NUM_SUBJECTS; j++)
        {
            Exam exam;
            exam.subject = subjects[j];
            exam.p1 = rand() % 11;
            exam.p2 = rand() % 11;
            exam.average = (exam.p1 + exam.p2) / 2;

            class_averages_sum[j] += exam.average;

            students[i].exams[j] = exam;
        }
    }

    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        class_averages[i] = class_averages_sum[i] / NUM_STUDENTS;
    }

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        Student *student = &students[i];

        printf("Aluno: %-14d Idade: %d", student->id, student->age);
        printf("\n-------------------------------------------\n");
        printf("Disciplinas");
        printf("\n-------------------------------------------\n");

        printf("%-6s %-8s %-6s %-6s %-6s", "Cod", "c. hor", "p1", "p2", "media");
        for (int j = 0; j < NUM_SUBJECTS; j++)
        {
            Exam *exam = &student->exams[j];
            Subject *subject = &exam->subject;

            printf("\n%-6d %-8d %-6.1f %-6.1f %-6.1f", subject->id, subject->workload, exam->p1, exam->p2, exam->average);
        }
        printf("\n-------------------------------------------\n\n");
    }

    printf("MEDIAs GERAis DA SALA POR DISCIPLINA:");
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        printf("\nDisciplina - %-10d Media Geral - %.1f", subjects[i].id, class_averages[i]);
    }

    return 0;
}
