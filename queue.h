//
// Created by 이준영 on 2023/07/25.
//

#ifndef TWO_HILLS_QUEUE_H
#define TWO_HILLS_QUEUE_H

#include "node.h"

struct Queue {
    struct Node *first;
    struct Node *last;
    int size;
};

struct Queue *queueInit();

void enqueue(int data, struct Queue *que);

int dequeue(int data, struct Queue *que);

int queueIsEmpty(struct Queue *que);

int queueSize(struct Queue *que);

void queueView(struct Queue *que);

#endif //TWO_HILLS_QUEUE_H
