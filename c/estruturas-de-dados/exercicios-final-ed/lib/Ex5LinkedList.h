typedef struct Element
{
    int number;
    int divisorsCount;
} Element;

typedef struct Ex5Node
{
    Element data;
    struct Ex5Node *next;
} Ex5Node;

typedef struct Ex5LinkedList
{
    Ex5Node *head;
    int size;
} Ex5LinkedList;

Ex5LinkedList *createEx5LinkedList();

void printListEx5(Ex5LinkedList *list);

void appendEx5(Ex5LinkedList *list, Element data);

void freeLinkedListEx5(Ex5LinkedList *list);
