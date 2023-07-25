#ifndef TWO_HILLS_BAG_H
#define TWO_HILLS_BAG_H

#include "node.h"

struct Bag {
    struct Node *first;
};

struct Bag *init();

void add(struct Bag *bag);


#endif //TWO_HILLS_BAG_H
