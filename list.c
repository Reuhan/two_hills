#include "node.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void insert(int32_t data, Node *n) {
    Node new;
    new.data = data;
    new.next = NULL;

    while (n->next != NULL) {
        n = n->next;
    }
    n->next = &new;
}


bool delete(int32_t data, Node *n) {
    if (search(data, *n)) {
        while (n->next->data != data) {
            n = n->next;
        }
        n->next = n->next->next;
    }
    return false;
}

bool search(int32_t data, Node node) {
    while (node.next != NULL) {
        if (node.data == data) {
            return true;
        }
        node = *node.next;
    }
    return false;
}

void view(Node list) {
    while (list.next != NULL) {
        printf("%d ", list.data);
        list = *list.next;
    }
}