#include <stdlib.h>
#include "stack.h"

struct Stack *stackInit() {
    struct Stack *new = malloc(sizeof(struct Stack));
    new->first = NULL;
    new->size = 0;
}

void push(int data, struct Stack *stk) {
    struct Stack* temp = stk;

}

void pop(struct Stack *stk) {

}

int stackIsEmpty(struct Stack *stk) {

}

int stackSize(struct Stack *stk) {

}

void stackView() {

}