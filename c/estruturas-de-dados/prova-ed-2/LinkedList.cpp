
#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"


LinkedList *create_linked_list() {
	LinkedList *list = (LinkedList*) malloc(sizeof(LinkedList));
	
	if (list != NULL) {
		list->head = NULL;
		list->size = 0;
	}
	
	return list;
}


void preppend(LinkedList *list, Pacient data) {
	if (list == NULL) {
		printf("\nERROR: LinkedList is NULL (in preppend())");
		return exit(0);
	}
	
	Node *newNode = (Node*) malloc(sizeof(Node));
	
	if (newNode == NULL) {
		printf("\nERROR: failed to allocate memory (in preppend())");
		return exit(0);
	}
	
	newNode->data = data;
	
	newNode->next = list->head;
	list->head = newNode;
	
	list->size++;
}


Pacient *remove_first(LinkedList *list) {
	if (list == NULL) {
		printf("\nERROR: LinkedList is NULL (in remove_first())");
		exit(0);
	}
	
	if (is_list_empty(list)) return NULL;
	
	Node *removed_node = list->head;
	Pacient *removed_data = &removed_node->data;
	
	list->head = list->head->next;
	free(removed_node);
	
	list->size--;
	
	return removed_data;
}


void print_linked_list(LinkedList *list) {
	if (list == NULL) {
		printf("\nERROR: LinkedList is NULL (in print_linked_list())");
		return exit(0);
	}
	
	if (is_list_empty(list)) {
		printf("\n{}");
		return;
	}
	
	Node *current = list->head;
	
	printf("\n{");
	while (current != NULL) {
		printf("\n Codigo - %-5d  |  Idade - %-3d", current->data.id, current->data.age);
		current = current->next;
	}
	printf("\n}");
}


int is_list_empty(LinkedList *list) {
	if (list == NULL) {
		printf("\nERROR: LinkedList is NULL (in is_list_empty())");
		exit(0);
	}
	
	return list->head == NULL;
}


void free_linked_list(LinkedList *list) {
	Node *current = list->head;
	
	while (current != NULL) {
		Node *removed_node = current;
		current = current->next;
		free(removed_node);
	}
	
	free(list);
}





Pacient *find(LinkedList *list, int id) {
	if (list == NULL) {
		printf("\nERROR: LinkedList is NULL (in find())");
		exit(0);
	}
	
	Node *current = list->head;
	
	while (current != NULL) {
		if (current->data.id == id) return &current->data;
		current = current->next;
	}
	
	return NULL;
}


float average_age(LinkedList *list) {
	if (list == NULL) {
		printf("\nERROR: LinkedList is NULL (in average_age())");
		exit(0);
	}
	
	if (is_list_empty(list)) return 0;
	
	int age_sum = 0;
	
	Node *current = list->head;
	while (current != NULL) {
		age_sum += current->data.age;
		current = current->next;
	}
	
	float average_age = age_sum / (float)list->size;
	
	return average_age;
}


void print_elders_average_age(LinkedList *list) {
	if (list == NULL) {
		printf("\nERROR: LinkedList is NULL (in print_elders_average_age())");
		return exit(0);;
	}
	
	int age_sum = 0;
	int elder_count = 0;
	
	Node *current = list->head;
	while (current != NULL) {
		if (current->data.age >= 60) {
			age_sum += current->data.age;
			elder_count++;
		}
		
		current = current->next;
	}
	
	float average_elder_age = age_sum / (float)elder_count;
	if (age_sum == 0) average_elder_age = 0;
	
	printf("\nQuantidade de idosos: %d", elder_count);
	printf("\nIdade media dos idosos: %.1f", average_elder_age);
}


void print_children_average_age(LinkedList *list) {
	if (list == NULL) {
		printf("\nERROR: LinkedList is NULL (in print_children_average_age())");
		return exit(0);;
	}
	
	int age_sum = 0;
	int children_count = 0;
	
	Node *current = list->head;
	while (current != NULL) {
		if (current->data.age <= 12) {
			age_sum += current->data.age;
			children_count++;
		}
		
		current = current->next;
	}
	
	float average_children_age = age_sum / (float)children_count;
	if (age_sum == 0) average_children_age = 0;
		
	printf("\nQuantidade de criancas: %d", children_count);
	printf("\nIdade media das criancas: %.1f", average_children_age);
}























