#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	Node *next;
} Node;

typedef struct LinkedList {
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
void removeFirst(LinkedList *list);
void removeLast(LinkedList *list);
void insert(LinkedList *list, int data, int index);
void remove(LinkedList *list, int index);
void freeLinkedList(LinkedList *list);
int isListEmpty(LinkedList *list);
void reverseList(LinkedList *list);

int main(int argc, char** argv) {
	LinkedList *glenn = createLinkedList();
	
	if (glenn == NULL) {
		printf("Memory Allocation Failed");
		exit(0);
	}
	
	append(glenn, 5);
	append(glenn, 2);
	append(glenn, 3);
	append(glenn, 38);
	insert(glenn, 10000, 2);
	
	printList(glenn);
	
	reverseList(glenn);
	
	printf("\n");
	printList(glenn);
	
	remove(glenn, 2);
	
	printf("\n");
	printList(glenn);
	
	removeFirst(glenn);
	
	printf("\n");
	printList(glenn);
	
	printf("\n\nSize - %d\n", glenn->size);
	printf("\nPrimeiro - %d", getFirst(glenn));
	printf("\nUltimo - %d\n\n", getLast(glenn));
	
	preppend(glenn, 60);
	preppend(glenn, 80);
	preppend(glenn, 100);
	
	append(glenn, 7);
	append(glenn, 10);
	append(glenn, 22);
	
	printList(glenn);
	
	removeLast(glenn);
	
	printf("\n");
	printList(glenn);
	
	
	insert(glenn, 7000, 1);
	
	printf("\n\n");
	printList(glenn);
	
	
	printf("\n\nSize - %d\n", glenn->size);
	printf("\nPrimeiro - %d", getFirst(glenn));
	printf("\nUltimo - %d\n", getLast(glenn));
	
	printf("\nTerceiro elemento - %d\n", get(glenn, 2));
	
	printList(glenn);
	printf("\n");
	
	while (!isListEmpty(glenn)) {
		int removedData = getFirst(glenn);
		removeFirst(glenn);
		printList(glenn);
		printf("\n%d", glenn->size);
		printf("\n");
	}
	
	printf("\n");
	printList(glenn);
	printf("\n%d", glenn->size);
	
	freeLinkedList(glenn);
	
	return 0;
}

LinkedList *createLinkedList() {
	LinkedList *list = (LinkedList*) malloc(sizeof(LinkedList));
	
	if (list != NULL) {
		list->head = NULL;
		list->size = 0;	
	}
	
	return list;
}

void append(LinkedList *list, int data) {
	if (list == NULL) return;
	
	Node *newNode = (Node*) malloc(sizeof(Node));
	
	if (newNode == NULL) {
		printf("Memory Allocation Failed");
		exit(0);
	}
	
	newNode->data = data;
	newNode->next = NULL;
	
	list->size++;
	
	if (list->head == NULL) {
		list->head = newNode;
		return;
	} 
	
	Node *current = list->head;
	while (current->next != NULL) {
		current = current->next;
	}
	
	current->next = newNode;
}

void preppend(LinkedList *list, int data) {
	if (list == NULL) return;
	
	Node *newNode = (Node*) malloc(sizeof(Node));
	
	if (newNode == NULL) {
		printf("Memory Allocation Failed");
		exit(0);
	}
	
	newNode->data = data;
	
	list->size++;
	
	if (list->head == NULL) {
		newNode->next = NULL;
		list->head = newNode;
		return;
	}
	
	newNode->next = list->head;
	list->head = newNode;
}

void freeLinkedList(LinkedList *list) {
	if (list == NULL) return;
	
	Node *current = list->head;
	while (current != NULL) {
		Node *prev = current;
		current = current->next;
		free(prev);
	}
	
	free(list);
}

int getFirst(LinkedList *list) {
	if (list == NULL) {
		printf("LinkedList is NULL");
		exit(0);
	}
	
	if (list->head == NULL) {
		printf("No elements in the LinkedList");
		exit(0);
	}
	
	return list->head->data;
}

int getLast(LinkedList *list) {
	if (list == NULL) {
		printf("LinkedList is NULL");
		exit(0);
	}
	
	if (list->head == NULL) {
		printf("No elements in the LinkedList");
		exit(0);
	}
	
	Node *current = list->head;
	while (current->next != NULL) {
		current = current->next;
	}
	
	return current->data;
}

int get(LinkedList *list, int index) {
	if (list == NULL) {
		printf("LinkedList is NULL");
		exit(0);
	}
	
	if (list->head == NULL) {
		printf("No elements in the LinkedList");
		exit(0);
	}
	
	if (index <= 0) 
		return getFirst(list);
	
	
	if (index >= list->size) 
		return getLast(list);
		
	Node *current = list->head;
	for (int i = 0; i < index; i++) {
		current = current->next;
	}
	
	return current->data;
}

void removeFirst(LinkedList *list) {
	if (list == NULL) {
		printf("LinkedList is NULL");
		exit(0);
	}
	
	if (list->head == NULL) return;
	
	Node *removed = list->head;
	list->head = list->head->next;
	
	list->size--;
	
	free(removed);
}

void removeLast(LinkedList *list) {
	if (list == NULL) {
		printf("LinkedList is NULL");
		exit(0);
	}
	
	if (list->head == NULL) return;
	
	Node *current = list->head;
	Node *prev = NULL;
	
	while (current->next != NULL) {
		prev = current;
		current = current->next;
	}
	
	Node *removed;
	
	if (prev == NULL) {
		removed = list->head;
		list->head = NULL;
	} else {
		removed = prev->next;
		prev->next = NULL;
	}
	
	list->size--;
	free(removed);
}

void insert(LinkedList *list, int data, int index) {
	if (list == NULL) {
		printf("LinkedList is NULL");
		exit(0);
	}
	
	if (index <= 0) {
		preppend(list, data);
		return;
	}
	
	if (index >= list->size) {
		append(list, data);
		return;
	}
	
	Node *newNode = (Node*) malloc(sizeof(Node));
	
	if (newNode == NULL) {
		printf("Memory Allocation Failed");
		exit(0);
	}
	
	Node *current = list->head;
	for (int i = 0; i < index - 1; i++) {
		current = current->next;
	}
	
	newNode->data = data;
	newNode->next = current->next;
	current->next = newNode;
	
	list->size++;
}

void remove(LinkedList *list, int index) {
	if (list == NULL) return;
	
	if (list->head == NULL) return;
	
	if (index <= 0) {
		removeFirst(list);
		return;
	}
	
	if (index >= list->size) {
		removeLast(list);
	}
	
	Node *current = list->head;
	
	for (int i = 0; i < index - 1; i++) {
		current = current->next;
	}
	
	Node *removed = current->next;
	current->next = removed->next;
	free(removed);
}

void printList(LinkedList *list) {
	if (list == NULL) {
		printf("LinkedList is NULL");
		exit(0);
	}
	
	if (list->head == NULL) {
		printf("{ }");
		return;
	}
	
	printf("{");
	
	Node *current = list->head;
	while (current != NULL) {
		printf("  %d", current->data);
		current = current->next;
	}
	
	printf("  }");
}

int isListEmpty(LinkedList *list) {
	if (list == NULL) return 1;
	
	if (list->head == NULL) return 1;
	
	return 0;
}

void reverseList(LinkedList *list) {
	if (list == NULL) return;
	
	if (list->head == NULL) return;
	
	Node *current = list->head;
	Node *prev = NULL;
	
	while (current != NULL) {
		Node *next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	
	list->head = prev;
}



