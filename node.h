#ifndef TWO_HILLS_NODE_H
#define TWO_HILLS_NODE_H

#include <stdio.h>
#include <stdbool.h>

struct node {
    int32_t data;
    struct node *next;
};

struct node *new();

void delete(struct node *);

void insert(int32_t, struct node *);

void erase(int32_t, struct node *);

bool search(int32_t, struct node *);

void view(struct node *);

#endif //TWO_HILLS_NODE_H
