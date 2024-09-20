

typedef struct StaticQueue {
	int front;
	int rear;
	int max_size;
	int *items;
} StaticQueue;

StaticQueue *create_static_queue(int max_size);

void enqueue(StaticQueue *queue, int data);

int dequeue(StaticQueue *queue);

void print_static_queue(StaticQueue *queue);

int queue_size(StaticQueue *queue);

int is_empty_queue(StaticQueue *queue);

int is_queue_full(StaticQueue *queue);

void free_static_queue(StaticQueue *queue);

