typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct LinkedList
{
    Node *head;
    int size;
} LinkedList;

LinkedList *createLinkedList();

void printList(LinkedList *list);

int getFirst(LinkedList *list);

int getLast(LinkedList *list);

int get(LinkedList *list, int index);

void preppend(LinkedList *list, int data);

void append(LinkedList *list, int data);

int removeFirst(LinkedList *list);

int removeLast(LinkedList *list);

void insert(LinkedList *list, int data, int index);

int removeIn(LinkedList *list, int index);

void freeLinkedList(LinkedList *list);

int isListEmpty(LinkedList *list);

void reverseList(LinkedList *list);
