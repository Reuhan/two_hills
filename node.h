#ifndef TWO_HILLS_NODE_H
#define TWO_HILLS_NODE_H

#include <stdio.h>
#include <stdbool.h>

typedef struct node node;
typedef struct node *list;
typedef struct node *stack;

struct node {
    int32_t data;
    struct node *next;
};

list constructor();

void destructor(list);

void insertHead(int32_t data, list ls);

void insertTail(int32_t data, list ls);

void delete(int32_t, node *);

bool search(int32_t, node);

void view(node *);

#endif //TWO_HILLS_NODE_H