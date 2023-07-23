#include "node.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node *new() {
    struct node *n = malloc(sizeof(struct node));
    n->data = 0;
    n->next = NULL;
    return n;
}

void delete(struct node *ls) {
    struct node *temp = ls;
    while (ls->next != NULL) {
        ls = ls->next;
        free(temp);
        temp = ls;
    };
}

void insert(int32_t data, struct node *ls) {
    struct node *n = malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;

    while (ls->next != NULL) {
        ls = ls->next;
    }

    ls->next = n;
}

void erase(int32_t data, struct node *ls) {
    struct node *temp = ls;
    if (search(data, temp)) {
        while (temp->next != NULL) {
            temp = temp->next;
            if (temp->data == data) {
                ls->next = temp->next;
                free(temp);
                break;
            }
            ls = temp;
        }
    }
}

bool search(int32_t data, struct node *ls) {
    while (ls->next != NULL) {
        ls = ls->next;
        if (ls->data == data) {
            return true;
        }
    }
    return false;
}

void view(struct node *ls) {
    while (ls->next != NULL) {
        ls = ls->next;
        printf("%d ", ls->data);
    }
    printf("\n");
}