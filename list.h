//
// Created by 이준영 on 2023/07/24.
//

#ifndef TWO_HILLS_LIST_H
#define TWO_HILLS_LIST_H

#include "node.h"
#include <stdbool.h>

struct List {
    struct Node *head;
    struct Node *tail;
};

void insert(int, struct Node *);

void delete(int, struct Node *);

void view(struct Node *);

#endif //TWO_HILLS_LIST_H
