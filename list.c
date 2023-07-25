#include <stdlib.h>
#include <stdio.h>
#include "node.h"
#include "list.h"

struct List *listInit() {
    struct List *new = malloc(sizeof(struct List));
    new->first = NULL;
    new->last = NULL;

    return new;
}

void firstInsert(int data, struct List *ls) {
    if (ls->first == NULL) {
        ls->first = malloc(sizeof(struct Node));

        ls->first->data = data;
        ls->first->next = NULL;

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
        ls->last->next = NULL;

        ls->first = ls->last;
    } else {
        struct Node *temp = ls->last;
        ls->last = malloc(sizeof(struct Node));

        ls->last->data = data;
        temp->next = ls->last;
    }
}

int listIsEmpty(struct List *ls) {
    if (ls->first == NULL && ls->last == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int listSize(struct List *ls) {
    return ls->size;
}

void listView(struct List *ls) {
    struct Node *iter = ls->first;
    do {
        printf("%d ", iter->data);
        iter = iter->next;
    } while (iter->next != NULL);
    printf("\n");
}