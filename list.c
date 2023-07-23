#include "node.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * 생성자
 */
list constructor(list ls) {
    node *new = malloc(sizeof(node));
    new->data = 0;
    new->next = NULL;

    ls->head = new;
    ls->tail = new;

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
    new->next = ls->head;

    ls->head = new;
}

void insertTail(int32_t data, list ls) {
    list new = malloc(sizeof(node));
    new->data = data;
    new->next = NULL;

    ls->tail = new;
}

/**
 * 삭제
 * @param data 삭제할 값
 * @param ls 삭제할 리스트
 */
void delete(int32_t data, list ls) {
    node *del = ls;
    if (search(data, del)) {
        while (del->data != data) {
            ls = del;
            del = del->next;
        }

        if (del == ls->head) {
            ls = ls->next;
            ls->head = ls;
        } else if (del == ls->tail) {
            ls->next = NULL;
            ls->tail = ls;
        } else {
            ls->next = ls->next->next;
        }

        destructor(del);
    }
}

/**
 * 찾고 싶은 값이 있는지 확인한다.
 * @param data 검색할 데이터
 * @param ls 데이터를 찾을 리스트
 * @return 검색할 요소가 있으면 true 없으면 false
 */
bool search(int32_t data, list ls) {
    while (ls->next != NULL) {
        if (ls->data == data) {
            return true;
        }
        ls = ls->next;
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

void head(list ls) {
    printf("%d\n", ls->head);
}

void tail(list ls) {
    printf("%d\n", ls->tail);
}