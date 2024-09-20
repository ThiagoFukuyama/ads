
#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int id;
    char name[100];
    char course[100];
} Student;

void read_string(char buffer[], int size);
void clear_input_buffer();

int main()
{
    const int NUM_STUDENTS = 5;

    Student students[NUM_STUDENTS];

    printf("REGISTRO DE ALUNOS");
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("\n%do Aluno", i + 1);
        printf("\n----------");

        printf("\nNumero de matricula: ");
        scanf("%d", &students[i].id);
        clear_input_buffer();

        printf("Nome: ");
        read_string(students[i].name, 100);

        printf("Curso: ");
        read_string(students[i].course, 100);
    }

    printf("\nALUNOS:\n");
    printf("\n%-4s | %-30s | %-30s", "N.M.", "NOME", "CURSO");
    printf("\n------------------------------------------------");
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("\n%-4d | %-30s | %-30s", students[i].id, students[i].name, students[i].course);
    }

    return 0;
}

void read_string(char buffer[], int size)
{
    fgets(buffer, size, stdin);

    if (buffer[strlen(buffer) - 1] != '\n')
    {
        clear_input_buffer();
        return;
    }

    buffer[strcspn(buffer, "\n")] = '\0';
}

void clear_input_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}
