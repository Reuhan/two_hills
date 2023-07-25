#ifndef TWO_HILLS_BAG_H
#define TWO_HILLS_BAG_H

struct Bag {
    struct Node *first;
    int size;
};

struct Bag *init();

void add(int data, struct Bag *bag);

int isEmpty(struct Bag *bag);

int size(struct Bag *bag);

void view(struct Bag *bag);

#endif //TWO_HILLS_BAG_H
