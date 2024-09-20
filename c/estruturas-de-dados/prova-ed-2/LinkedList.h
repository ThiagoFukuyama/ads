
typedef struct Pacient {
	int id;
	int age;
} Pacient;

typedef struct Node {
	Pacient data;
	struct Node *next;	
} Node;

typedef struct LinkedList {
	Node *head;
	int size;
} LinkedList;

LinkedList *create_linked_list();

void preppend(LinkedList *list, Pacient data);

Pacient *remove_first(LinkedList *list);

void print_linked_list(LinkedList *list);

int is_list_empty(LinkedList *list);

void free_linked_list(LinkedList *list);

Pacient *find(LinkedList *list, int id);

float average_age(LinkedList *list);

void print_elders_average_age(LinkedList *list);

void print_children_average_age(LinkedList *list);

