#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

struct Queue *queueInit() {
    struct Queue *new = malloc(sizeof(struct Queue));
    new->first = NULL;
    new->last = NULL;
    new->size = 0;

    return new;
}

void enqueue(int data, struct Queue *que) {
    if (que->last == NULL) {
        que->last = malloc(sizeof(struct Node));

        que->last->data = data;
        que->last->next = NULL;

        que->first = que->last;
    } else {
        struct Node *temp = que->last;
        que->last = malloc(sizeof(struct Node));

        que->last->data = data;
        temp->next = que->last;
    }

    que->size = que->size + 1;
}

int dequeue(int data, struct Queue *que) {
    struct Node *temp = que->first;
    que->first = que->first->next;

    int result = temp->data;
    free(temp);

    que->size = que->size - 1;

    return result;
}

int queueIsEmpty(struct Queue *que) {
    if (que->last == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int queueSize(struct Queue *que) {
    return que->size;
}

void queueView(struct Queue *que) {
    struct Node *iter = que->first;
    do {
        printf("%d ", iter->data);
        iter = iter->next;
    } while (iter != NULL);
    printf("\n");
}