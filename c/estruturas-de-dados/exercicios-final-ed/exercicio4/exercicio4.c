
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Exercicio4.h"

void exercicio4()
{
    srand(time(NULL));

    LinkedList *list1 = createLinkedList();
    LinkedList *list2 = createLinkedList();

    if (list1 == NULL || list2 == NULL)
    {
        printf("Failed to allocate memory");
        exit(0);
    }

    fillListRand(list1, 50);
    fillListRand(list2, 50);

    printList(list1);
    printf("\n");
    printList(list2);

    LinkedList *intersectionList = intersection(list1, list2);

    printf("\n\nInterseccao: \n");
    printList(intersectionList);

    freeLinkedList(list1);
    freeLinkedList(list2);
    freeLinkedList(intersectionList);
}

LinkedList *intersection(LinkedList *list1, LinkedList *list2)
{
    if (list1 == NULL || list2 == NULL)
    {
        printf("One of the lists are NULL");
        exit(0);
    }

    LinkedList *intersectionList = createLinkedList();

    if (intersectionList == NULL)
    {
        printf("Failed to allocate memory");
        exit(0);
    }

    Node *i = list1->head;
    while (i != NULL)
    {

        Node *j = list2->head;
        while (j != NULL)
        {

            if (i->data == j->data)
            {
                append(intersectionList, j->data);
            }

            j = j->next;
        }

        i = i->next;
    }

    return intersectionList;
}

void fillListRand(LinkedList *list, int size)
{
    for (int i = 0; i < size; i++)
    {
        preppend(list, rand() % 101);
    }
}
