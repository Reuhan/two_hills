#ifndef TWO_HILLS_NODE_H
#define TWO_HILLS_NODE_H
#include <stdio.h>
#include <stdbool.h>

typedef struct node Node;

struct node {
    int32_t data;
    struct node *next;
};

void insert(int32_t, Node*);
bool delete(int32_t, Node*);
bool search(int32_t, Node);
void view(Node);

#endif //TWO_HILLS_NODE_H
