#include "list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct node node_t;
struct node {
	int data;
	node_t *next;
};

struct list {
	int size;
	node_t *head;
	node_t *tail;
	node_t *cursor;
};

node_t *newNode(int data) {
	node_t *new_node = malloc(sizeof(node_t));
	new_node->data = data;
	new_node->next = NULL;

	return new_node;
}

list_t *list_new() {
	list_t *l = malloc(sizeof(list_t));

	l->size = 0;
	l->head = NULL;
	l->tail = NULL;
	l->cursor = NULL;

	return l;
}


void node_delete(node_t **n) {
	free(*n);
	*n = NULL;
	n = NULL;

	return;
}


void list_delete(list_t **l) {
	move_front(*l);

	while((*l)->cursor != NULL) {
		printf("DEBUG: %d\n", get_cursor(*l));
		(*l)->head = (*l)->cursor->next;
		node_delete(&((*l)->cursor));
		(*l)->cursor = (*l)->head;
	}

	free(*l);
	*l = NULL;
	l = NULL;

	return;
}

int list_append(list_t *l, int data) {
	node_t *n = newNode(data);

	if (l->size == 0) {
		l->head = n;
		l->tail = n;
		l->size = 1;

		return 0;
	} else {
		l->tail->next = n;
		l->tail = l->tail->next;
		l->size++;
		return 0;
	}


	return 1;
}


int get_head(list_t *l) {
	node_t *head = l->head;

	return head->data;
}

void move_front(list_t *l) {
	l->cursor = l->head;

	return;
}

void move_next(list_t *l) {
	l->cursor = l->cursor->next;
	return;
}

int get_cursor(list_t *l) {
	return l->cursor->data;
}
