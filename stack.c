#include <stdlib.h>
#include "stack.h"

struct Stack *stackInit() {
    struct Stack *new = malloc(sizeof(struct Stack));
    new->first = NULL;
    new->size = 0;
}

void push(int data, struct Stack *stk) {
    struct Node *temp = stk->first;
    stk->first = malloc(sizeof(struct Node));
    stk->first->data = data;
    stk->first->next = temp;
}

void pop(struct Stack *stk) {
    struct Node *temp = stk->first;
    stk->first = stk->first->next;
    free(temp);
}

int stackIsEmpty(struct Stack *stk) {
    if (stk->first == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int stackSize(struct Stack *stk) {
    return stk->size;
}

void stackView(struct Stack *stk) {

}