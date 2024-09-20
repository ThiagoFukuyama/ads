#include <stdio.h>

#include "Exercicio2.h"

void exercicio2()
{
    LinkedList *queue = createLinkedList();

    append(queue, 97);
    append(queue, 80);
    append(queue, 13);
    append(queue, 17);
    append(queue, 47);

    printf("\n");
    printList(queue);

    int removedValue = removeFirst(queue);

    printf("\n\nRemovido o primeiro: %d", removedValue);

    printf("\n");
    printList(queue);

    freeLinkedList(queue);
}
