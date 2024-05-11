#include "queue.h"
#include <stdbool.h>

// Private Node type;
typedef struct node node_t;

// Private Queue Structure
struct queue {
    int capacity;
    int size;
    node_t *head;
    node_t *tail;
    bool is_full;
};


// Private Node Structure
struct node {
    int data;
    node_t *next;
    node_t *prev;
};


// Private Node Constructor
node_t *NewNode(int data) {
    node_t *node = malloc(sizeof(node_t));
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

void DeleteNode(node_t **n) {
    printf("DELETE CALLED\n");
        printf("DB1\n");

    if (*n != NULL) {
        free(*n);
        printf("DB2\n");

        // n = NULL;
        *n = NULL;
    }
    return;
}


// Queue Constructor
queue_t *NewQueue(int capacity) {

    if (capacity < 1) {
        printf("Invalid capacity!\n");
        return 0;
    }

    queue_t *queue = malloc(sizeof(queue_t) * capacity);
    queue->capacity = capacity;
    queue->size = 0;
    queue->head = NULL;
    queue->tail = NULL;
    queue->is_full = false;

    return queue;
}

// Queue Destructor
void DeleteQueue(queue_t **queue) {
    
}


