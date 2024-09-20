#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"

LinkedList *createLinkedList()
{
    LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));

    if (list != NULL)
    {
        list->head = NULL;
        list->size = 0;
    }

    return list;
}

void append(LinkedList *list, int data)
{
    if (list == NULL)
        return;

    Node *newNode = (Node *)malloc(sizeof(Node));

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

    Node *current = list->head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
}

void preppend(LinkedList *list, int data)
{
    if (list == NULL)
        return;

    Node *newNode = (Node *)malloc(sizeof(Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation Failed");
        exit(0);
    }

    newNode->data = data;

    list->size++;

    if (list->head == NULL)
    {
        newNode->next = NULL;
        list->head = newNode;
        return;
    }

    newNode->next = list->head;
    list->head = newNode;
}

void freeLinkedList(LinkedList *list)
{
    if (list == NULL)
        return;

    Node *current = list->head;
    while (current != NULL)
    {
        Node *prev = current;
        current = current->next;
        free(prev);
    }

    free(list);
}

int getFirst(LinkedList *list)
{
    if (isListEmpty(list))
    {
        printf("List is empty");
        exit(0);
    }

    return list->head->data;
}

int getLast(LinkedList *list)
{
    if (isListEmpty(list))
    {
        printf("List is empty");
        exit(0);
    }

    Node *current = list->head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    return current->data;
}

int get(LinkedList *list, int index)
{
    if (isListEmpty(list))
    {
        printf("List is NULL");
        exit(0);
    }

    if (index <= 0)
        return getFirst(list);

    if (index >= list->size)
        return getLast(list);

    Node *current = list->head;
    for (int i = 0; i < index; i++)
    {
        current = current->next;
    }

    return current->data;
}

int removeFirst(LinkedList *list)
{
    if (isListEmpty(list))
    {
        printf("List is empty");
        exit(0);
    }

    Node *removed = list->head;
    list->head = list->head->next;

    list->size--;

    int removedData = removed->data;
    free(removed);

    return removedData;
}

int removeLast(LinkedList *list)
{
    if (isListEmpty(list))
    {
        printf("List is empty");
        exit(0);
    }

    Node *current = list->head;
    Node *prev = NULL;

    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
    }

    Node *removed;

    if (prev == NULL)
    {
        removed = list->head;
        list->head = NULL;
    }
    else
    {
        removed = prev->next;
        prev->next = NULL;
    }

    list->size--;

    int removedData = removed->data;
    free(removed);

    return removedData;
}

void insert(LinkedList *list, int data, int index)
{
    if (list == NULL)
    {
        printf("LinkedList is NULL");
        exit(0);
    }

    if (index <= 0)
    {
        preppend(list, data);
        return;
    }

    if (index >= list->size)
    {
        append(list, data);
        return;
    }

    Node *newNode = (Node *)malloc(sizeof(Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation Failed");
        exit(0);
    }

    Node *current = list->head;
    for (int i = 0; i < index - 1; i++)
    {
        current = current->next;
    }

    newNode->data = data;
    newNode->next = current->next;
    current->next = newNode;

    list->size++;
}

int removeIn(LinkedList *list, int index)
{
    if (isListEmpty(list))
    {
        printf("List is empty");
        exit(0);
    }

    if (index <= 0)
    {
        return removeFirst(list);
    }

    if (index >= list->size)
    {
        return removeLast(list);
    }

    Node *current = list->head;

    for (int i = 0; i < index - 1; i++)
    {
        current = current->next;
    }

    Node *removed = current->next;
    current->next = removed->next;

    int removedData = removed->data;
    free(removed);

    return removedData;
}

void printList(LinkedList *list)
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

    Node *current = list->head;
    while (current != NULL)
    {
        printf("  %d", current->data);
        current = current->next;
    }

    printf("  }");
}

int isListEmpty(LinkedList *list)
{
    if (list == NULL)
    {
        printf("List is NULL");
        exit(0);
    }

    if (list->head == NULL)
        return 1;

    return 0;
}

void reverseList(LinkedList *list)
{
    if (list == NULL)
        return;

    if (list->head == NULL)
        return;

    Node *current = list->head;
    Node *prev = NULL;

    while (current != NULL)
    {
        Node *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    list->head = prev;
}
