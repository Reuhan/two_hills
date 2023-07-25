#ifndef TWO_HILLS_STACK_H
#define TWO_HILLS_STACK_H

#include "node.h"

struct Stack {
    struct Node *first;
    int size;
};

struct Stack *stackInit();

void push(int data, struct Stack *stk);

void pop(struct Stack *stk);

int stackIsEmpty(struct Stack *stk);

int stackSize(struct Stack *stk);

void stackView();

#endif //TWO_HILLS_STACK_H
