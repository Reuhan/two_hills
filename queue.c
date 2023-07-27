#include <stdlib.h>
#include "queue.h"

struct Queue *queueInit() {
    struct Queue *new = malloc(sizeof(struct Queue));
    new->first = NULL;
    new->last = NULL;
    new->size = 0;

    return new;
}

void enqueue(int data, struct Queue *que) {

}

int dequeue(int data, struct Queue *que) {

}

int queueIsEmpty(struct Queue *que) {

}

int queueSize(struct Queue *que) {

}

void queueView(struct Queue *que) {

}