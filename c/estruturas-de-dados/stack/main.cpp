#include <iostream>
#include <stdlib.h>


typedef struct Stack {
	int *items;
	int top;
	int size;
} Stack;

Stack *create_stack(int size);
void stack_push(Stack *stack, int item);
int stack_pop(Stack *stack);
int stack_peek(Stack *stack);
int stack_current_size(Stack *stack);
int stack_is_empty(Stack *stack);
void print_stack(Stack *stack);
void free_stack(Stack *stack);

int main(int argc, char** argv) {
	Stack *stack = create_stack(10);
	
	if (stack == NULL) {
		printf("Erro ao alocar memoria");
		exit(1);
	}
	
	for (int i = 0; i < stack->size; i++) {
		stack_push(stack, (i + 1) * 100);
	}
	
	printf("\nTamanho atual - %d\n", stack_current_size(stack));
	print_stack(stack);
	
	int popped = stack_pop(stack);
	int peeked = stack_peek(stack);
	
	printf("\nRetirado - %d", popped);
	printf("\nUltimo - %d", peeked);
	printf("\nTamanho atual - %d\n", stack_current_size(stack));
	printf("%s\n\n", stack_is_empty(stack) ? "Esta vazio" : "Ainda tem elementos");
	
	print_stack(stack);
	
	printf("\nRetirando elementos: ");
	while (!stack_is_empty(stack)) {
		int popped = stack_pop(stack);
		printf("\n%d", popped);
	}
	
	printf("\n\n%s\n", stack_is_empty(stack) ? "Esta vazio" : "Ainda tem elementos");
	print_stack(stack);

	stack_push(stack, 87);
	print_stack(stack);	
	
	
	free_stack(stack);
	
	return 0;
}

Stack *create_stack(int size) {
	Stack *stack = (Stack*) malloc(sizeof(Stack));
	
	if (stack == NULL) {
		return NULL;
	}
	
	int *items = (int*) malloc(sizeof(int) * size);
	
	if (items == NULL) {
		free(stack);
		return NULL;
	}
	
	stack->top = 0;
	stack->items = items;
	stack->size = size;
	
	return stack;
}

void stack_push(Stack *stack, int item) {
	if (stack == NULL || stack->items == NULL) return;
	
	if (stack->top >= stack->size) {
		printf("Stack Overflow Error");
		exit(1);
	}
	
	stack->items[stack->top] = item;
	stack->top++;
}

int stack_pop(Stack *stack) {
	if (stack->top <= 0) {
		printf("Stack Underflow Error");
		exit(1);
	}
	
	int item_to_pop = stack->items[stack->top - 1];
	stack->items[stack->top - 1] = 0;
	stack->top--;
	
	return item_to_pop;
}

int stack_peek(Stack *stack) {
	return stack->items[stack->top - 1];
}

int stack_current_size(Stack *stack) {
	return stack->top;
}

int stack_is_empty(Stack *stack) {
	return stack->top == 0;
}

void print_stack(Stack *stack) {
	if (stack == NULL || stack->items == NULL) return;
	
	int size = stack_current_size(stack) - 1;
	
	if (stack->top <= 0) {
		printf("[]");
		return;
	}
	
	for (int i = size; i >= 0; i--) {
		printf("%d\n", stack->items[i]);
	} 
}

void free_stack(Stack *stack) {
	free(stack->items);
	free(stack);
}

