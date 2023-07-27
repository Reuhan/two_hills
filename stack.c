#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct Stack *stackInit() {
    struct Stack *new = malloc(sizeof(struct Stack));
    new->first = NULL;
    new->size = 0;
}

void push(int data, struct Stack *stk) {
    if (stk->first == NULL) {
        stk->first = malloc(sizeof(struct Node));

        stk->first->data = data;
        stk->first->next = NULL;
    } else {
        struct Node *temp = stk->first;
        stk->first = malloc(sizeof(struct Node));

        stk->first->data = data;
        stk->first->next = temp;
    }

    stk->size = stk->size + 1;
}

int pop(struct Stack *stk) {
    struct Node *temp = stk->first;
    stk->first = stk->first->next;

    int result = temp->data;
    free(temp);

    stk->size = stk->size - 1;

    return result;
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
    struct Node *iter = stk->first;
    do {
        printf("%d ", iter->data);
        iter = iter->next;
    } while (iter != NULL);
    printf("\n");
}