#include "node.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

node *head = NULL;
node *tail = NULL;

/**
 * 생성자
 */
list constructor() {
    node *new = malloc(sizeof(node));
    new->data = 0;
    new->next = NULL;

    head = new;
    tail = new;

    return new;
}

/**
 * 소멸자
 */
void destructor(list ls) {
    free(ls);
}

void insertHead(int32_t data, list ls) {
    list new = malloc(sizeof(node));
    new->data = data;
    new->next = ls;

    head = new;
}

void insertTail(int32_t data, list ls) {
    list new = malloc(sizeof(node));
    new->data = data;
    new->next = NULL;

    while (ls->next != NULL) {
        ls = ls->next;
    }

    ls->next = new;

    tail = new;
}

/**
 * 삭제
 * @param data 삭제할 값
 * @param ls 삭제할 리스트
 */
void delete(int32_t data, list ls) {
    node *del = ls;
    if (search(data, *del)) {
        while (del->data != data) {
            ls = del;
            del = del->next;
        }

        if (del == head) {
            ls = ls->next;
            del->next = NULL;
            head = ls;
        } else if (del == tail) {
            ls->next = NULL;
            tail = ls;
        } else {
            ls->next = ls->next->next;
        }
        destructor(del);
    }
}

/**
 * 찾고 싶은 값이 있는지 확인한다.
 * @param data 검색할 데이터
 * @param node 데이터를 찾을 리스트
 * @return 검색할 요소가 있으면 true 없으면 false
 */
bool search(int32_t data, node node) {
    while (node.next != NULL) {
        if (node.data == data) {
            return true;
        }
        node = *node.next;
    }
    return false;
}

/**
 * 출력
 * @param ls 출력할 리스트
 */
void view(list ls) {
    do {
        printf("%d ", ls->data);
        ls = ls->next;
    } while (ls != NULL);
    printf("\n");
}

void Head() {
    printf("%d\n", head->data);
}

void Tail() {
    printf("%d\n", tail->data);
}