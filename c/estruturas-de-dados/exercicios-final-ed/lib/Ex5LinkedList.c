#include <stdio.h>
#include <stdlib.h>

#include "Ex5LinkedList.h"

Ex5LinkedList *createEx5LinkedList()
{
    Ex5LinkedList *list = (Ex5LinkedList *)malloc(sizeof(Ex5LinkedList));

    if (list != NULL)
    {
        list->head = NULL;
        list->size = 0;
    }

    return list;
}

void appendEx5(Ex5LinkedList *list, Element data)
{
    if (list == NULL)
        return;

    Ex5Node *newNode = (Ex5Node *)malloc(sizeof(Ex5Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation Failed");
        exit(0);
    }

    newNode->data = data;
    newNode->next = NULL;

    list->size++;

    if (list->head == NULL)
    {
        list->head = newNode;
        return;
    }

    Ex5Node *current = list->head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
}

void freeLinkedListEx5(Ex5LinkedList *list)
{
    if (list == NULL)
        return;

    Ex5Node *current = list->head;
    while (current != NULL)
    {
        Ex5Node *prev = current;
        current = current->next;
        free(prev);
    }

    free(list);
}

void printListEx5(Ex5LinkedList *list)
{
    if (list == NULL)
    {
        printf("LinkedList is NULL");
        exit(0);
    }

    if (list->head == NULL)
    {
        printf("{ }");
        return;
    }

    printf("{");

    Ex5Node *current = list->head;
    while (current != NULL)
    {
        printf("Numero: %d - Quantidade de divisores: %d\n", current->data.number, current->data.divisorsCount);
        current = current->next;
    }

    printf("  }");
}
