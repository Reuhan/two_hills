#include <stdlib.h>
#include <stdio.h>
#include "node.h"
#include "bag.h"

struct Bag *bagInit() {
    struct Bag *new = malloc(sizeof(struct Bag));
    new->first = NULL;
    new->size = 0;

    return new;
}

void add(int data, struct Bag *bag) {
    if (bag->first == NULL) {
        bag->first = malloc(sizeof(struct Node));

        bag->first->data = data;
        bag->first->next = NULL;
    } else {
        struct Node *temp = bag->first;
        bag->first = malloc(sizeof(struct Node));

        bag->first->data = data;
        bag->first->next = temp;
    }

    bag->size = bag->size + 1;
}

int bagIsEmpty(struct Bag *bag) {
    if (bag->first == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int bagSize(struct Bag *bag) {
    return bag->size;
}

void bagView(struct Bag *bag) {
    struct Node *iter = bag->first;
    do {
        printf("%d ", iter->data);
        iter = iter->next;
    } while (iter != NULL);
    printf("\n");
}