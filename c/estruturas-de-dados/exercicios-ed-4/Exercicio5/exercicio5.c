
#include <stdio.h>
#include <string.h>

typedef struct Person
{
    char name[100];
    char address[100];
    int age;
} Person;

void read_string(char buffer[], int size);
void clear_input_buffer();

int main()
{
    Person person;

    printf("Digite o nome: ");
    read_string(person.name, 100);

    printf("Digite a idade: ");
    scanf("%d", &person.age);
    clear_input_buffer();

    printf("Digite o endereco: ");
    read_string(person.address, 100);

    printf("\n%s - %d anos", person.name, person.age);
    printf("\n%s", person.address);

    return 0;
}

// Interessante, daora.
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
