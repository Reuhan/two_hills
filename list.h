#ifndef TWO_HILLS_LIST_H
#define TWO_HILLS_LIST_H

#include "node.h"

struct List {
    struct Node *first;
    struct Node *last;
    int size;
};

struct List *listInit();

void firstInsert(int data, struct List *ls);

void firstDelete(struct List *ls);

void lastInsert(int data, struct List *ls);

int listIsEmpty(struct List *ls);

int listSize(struct List *ls);

void listView(struct List *ls);

#endif
