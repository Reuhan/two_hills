#ifndef TWO_HILLS_LIST_H
#define TWO_HILLS_LIST_H

struct List {
    struct Node *first;
    struct Node *last;
};

void firstInsert(struct List *ls);

void firstDelete(struct List *ls);

void lastInsert(struct List *ls);

void view(struct List *ls);

#endif
