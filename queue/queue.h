#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include<stdio.h>
#include <assert.h>

typedef struct node node_t;

// Public Queue Type
typedef struct queue queue_t;

// Queue Constructor
queue_t *NewQueue(int capactity);

// Queue Destructor
void DeleteQueue(queue_t **queue);


void DeleteNode(node_t **node);

// HERE FOR TESTING
typedef struct node node_t;
node_t *NewNode(int data);

#endif
