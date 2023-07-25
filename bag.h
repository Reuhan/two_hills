#ifndef TWO_HILLS_BAG_H
#define TWO_HILLS_BAG_H

struct Bag {
    struct Node *first;
    int size;
};

struct Bag *bagInit();

void add(int data, struct Bag *bag);

int bagIsEmpty(struct Bag *bag);

int bagSize(struct Bag *bag);

void bagView(struct Bag *bag);

#endif //TWO_HILLS_BAG_H
