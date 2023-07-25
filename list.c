#include <stdlib.h>
#include <stdio.h>
#include "node.h"
#include "list.h"

struct List *init() {
    struct List *new = malloc(sizeof(struct List));
    new->first = NULL;
    new->last = NULL;
    new->size = 0;

    return new;
}

void firstInsert(int data, struct List *ls) {
    if (ls->first == NULL) {
        ls->first = malloc(sizeof(struct Node));

        ls->first->data = data;
        ls->last = ls->first;
    } else {
        struct Node *temp = ls->first;
        ls->first = malloc(sizeof(struct Node));

        ls->first->data = data;
        ls->first->next = temp;
    }

    ls->size = ls->size + 1;
}

void firstDelete(struct List *ls) {
    struct Node *temp = ls->first;
    ls->first = ls->first->next;
    free(temp);

    ls->size = ls->size - 1;
}

void lastInsert(int data, struct List *ls) {
    if (ls->last == NULL) {
        ls->last = malloc(sizeof(struct Node));

        ls->last->data = data;
        ls->first = ls->last;
    } else {
        struct Node *temp = ls->last;
        ls->last = malloc(sizeof(struct Node));

        ls->last->data = data;
        temp->next = ls->last;
    }

    ls->size = ls->size + 1;
}

int isEmpty(struct List *ls) {
    if (ls->first == NULL && ls->last == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int size(struct List *ls) {
    return ls->size;
}

void view(struct List *ls) {
    struct Node *iter = ls->first;
    do {
        printf("%d ", iter->data);
        iter = iter->next;
    } while (iter != NULL);
    printf("\n");
}