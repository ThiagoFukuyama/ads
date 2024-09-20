
#include <stdio.h>
#include <stdlib.h>

#include "Exercicio5.h"

void exercicio5()
{
    LinkedList *queue = createLinkedList();
    Ex5LinkedList *list = createEx5LinkedList();

    int number;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite o %do numero: ", i);
        scanf("%d", &number);

        append(queue, number);

        Element el = {number, countDivisors(number)};

        appendEx5(list, el);
    }

    printf("\n\n");
    printList(queue);

    printf("\n");
    printListEx5(list);

    freeLinkedList(queue);
    freeLinkedListEx5(list);
}

int countDivisors(int number)
{
    int divisorCount = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            divisorCount++;
        }
    }

    return divisorCount;
}
