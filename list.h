#ifndef TWO_HILLS_LIST_H
#define TWO_HILLS_LIST_H

struct List {
    struct Node *first;
    struct Node *last;
    int size;
};

struct List *init();

void firstInsert(int data, struct List *ls);

void firstDelete(struct List *ls);

void lastInsert(int data, struct List *ls);

int isEmpty(struct List *ls);

int size(struct List *ls);

void view(struct List *ls);

#endif
