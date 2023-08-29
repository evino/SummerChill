#pragma once
#include <stdlib.h>

typedef struct list list_t;


list_t *list_new();

void list_delete(list_t **l);

int list_append(list_t *l, int data);

int get_head(list_t *l);

void move_front(list_t *l);

void move_next(list_t *l);

int get_cursor(list_t *l);

