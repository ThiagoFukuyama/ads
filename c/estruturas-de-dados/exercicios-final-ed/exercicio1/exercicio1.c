#include <stdio.h>
#include <stdlib.h>

#include "Exercicio1.h"

void exercicio1()
{
    LinkedList *list = createLinkedList();

    if (list == NULL)
    {
        printf("Failed to allocate memory");
        exit(0);
    }

    append(list, 45);
    append(list, 3);
    append(list, 87);
    append(list, 200);
    append(list, 12);

    printf("\n");
    printList(list);

    printf("\n\nMAIOR: %d", max(list));
    printf("\n\nMENOR: %d", min(list));
    printf("\n\nSOMA: %d", sum(list));
    printf("\n\nMEDIA: %.1f", average(list));

    freeLinkedList(list);
}

int max(LinkedList *list)
{
    if (isListEmpty(list))
    {
        printf("List is empty");
        exit(0);
    }

    Node *current = list->head;
    int maxValue = INT_MIN;

    while (current != NULL)
    {
        if (current->data > maxValue)
        {
            maxValue = current->data;
        }

        current = current->next;
    }

    return maxValue;
}

int min(LinkedList *list)
{
    if (isListEmpty(list))
    {
        printf("List is empty");
        exit(0);
    }

    Node *current = list->head;
    int minValue = INT_MAX;

    while (current != NULL)
    {
        if (current->data < minValue)
        {
            minValue = current->data;
        }

        current = current->next;
    }

    return minValue;
}

int sum(LinkedList *list)
{
    if (isListEmpty(list))
    {
        printf("List is empty");
        exit(0);
    }

    Node *current = list->head;
    int sum = 0;

    while (current != NULL)
    {
        sum += current->data;
        current = current->next;
    }

    return sum;
}

float average(LinkedList *list)
{
    return sum(list) / (float)list->size;
}
