#include <stdlib.h>
#include <stdio.h>
#include "node.h"
#include "list.h"

struct List *init() {
    struct List *new = malloc(sizeof(struct List));
    new->first = NULL;
    new->last = NULL;

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
}

void firstDelete(struct List *ls) {
    struct Node *temp = ls->first;
    ls->first = ls->first->next;
    free(temp);
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
}

void view(struct List *ls) {
    struct Node *iter = ls->first;
    do {
        printf("%d ", iter->data);
        iter = iter->next;
    } while (iter != NULL);
    printf("\n");
}