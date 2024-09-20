
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "StaticQueue.h"


StaticQueue *create_static_queue(int max_size) {
	StaticQueue *queue = (StaticQueue*) malloc(sizeof(StaticQueue));
	
	if (queue != NULL) {		
		queue->front = -1;
		queue->rear = -1;
		queue->max_size = max_size;
		
		int *queue_items = (int*) malloc(sizeof(int) * max_size);
		
		if (queue_items == NULL) {
			printf("\nERROR: Failed to allocate memory (in create_static_queue())");
			exit(0);
		}
		
		queue->items = queue_items;
	}
	
	return queue;
}


void enqueue(StaticQueue *queue, int data) {
	if (queue == NULL) {
		printf("\nERROR: Queue is NULL (in enqueue())");
		return exit(0);
	}
	
	if (is_empty_queue(queue)) {
		queue->front = 0;
		queue->rear = 0;
	}
	
	queue->items[queue->rear] = data;
	queue->rear = (queue->rear + 1) % queue->max_size;
}

int dequeue(StaticQueue *queue) {
	if (queue == NULL) {
		printf("\nERROR: Queue is NULL (in dequeue())");
	 	exit(0);
	}
	
	if (is_empty_queue(queue)) {
		printf("\nERROR: Can't dequeue from an empty Queue (in dequeue())");
	 	exit(0);
	}
	
	int removed_data = queue->items[queue->front];
	queue->front = (queue->front + 1) % queue->max_size;
	
	if (queue->front == queue->rear) {
		queue->front = -1;
		queue->rear = -1;
	}
	
	return removed_data;
}

void print_static_queue(StaticQueue *queue) {
	if (queue == NULL) {
		printf("\nERROR: Queue is NULL (in print_static_queue())");
	 	return exit(0);
	}
	
	if (is_empty_queue(queue)) {
		printf("\n{}");
		return;
	}
	
	int i = queue->front;
	
	printf("\n{");
	while (i != queue->rear) {
		printf(" %d", queue->items[i]);
		i = (i + 1) % queue->max_size;
	}
	printf(" }");
}

int queue_size(StaticQueue *queue) {
	if (queue == NULL) {
		printf("\nERROR: Queue is NULL (in queue_size())");
	 	exit(0);
	}
	
	return abs(queue->rear - queue->front);
}

int is_empty_queue(StaticQueue *queue) {
	if (queue == NULL) {
		printf("\nERROR: Queue is NULL (in is_empty_queue())");
	 	exit(0);
	}
	
	return queue->front == -1 && queue->rear == -1;
}

int is_queue_full(StaticQueue *queue) {
	return (queue->rear + 1) % queue->max_size == queue->front; //Não esta certo eu acho
}

void free_static_queue(StaticQueue *queue) {
	free(queue->items);
	free(queue);
}
/*0 
[1][2][3][4][5]
            4*/


