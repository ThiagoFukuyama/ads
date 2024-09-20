#include <stdio.h>
#include <stdlib.h>

#include "Exercicio3.h"

void exercicio3()
{
    LinkedList *queue = createLinkedList();

    append(queue, 54);
    append(queue, 3);
    append(queue, 55);
    append(queue, 6);
    append(queue, 79);

    printList(queue);

    int oddQuantity = getOddQuantity(queue);

    printf("\n\nQuantidade de impares: %d", oddQuantity);

    freeLinkedList(queue);
}

int getOddQuantity(LinkedList *list)
{
    if (isListEmpty(list))
    {
        printf("List is empty");
        exit(0);
    }

    Node *current = list->head;
    int oddQuantity = 0;

    while (current != NULL)
    {
        if (isOdd(current->data))
        {
            oddQuantity++;
        }

        current = current->next;
    }

    return oddQuantity;
}

int isOdd(int number)
{
    return number % 2 == 1;
}
