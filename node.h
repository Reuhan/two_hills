#ifndef TWO_HILLS_NODE_H
#define TWO_HILLS_NODE_H

#include <stdio.h>
#include <stdbool.h>

typedef struct node node;
typedef struct node *list;
typedef struct node *stack;

struct node {
    int32_t data;
    node *next;
    node *head;
    node *tail;
};

list constructor();

void destructor(list);

void insertHead(int32_t data, list);

void insertTail(int32_t data, list);

void delete(int32_t, list);

bool search(int32_t, list);

void view(list);

#endif //TWO_HILLS_NODE_H
