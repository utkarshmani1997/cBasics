/*
 * =====================================================================================
 *
 *       Filename:  insert.c
 *
 *    Description:  Implementation of various insert operation on linklist
 *
 *        Version:  1.0
 *        Created:  Thursday 27 September 2018 12:34:45  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Utkarsh Mani Tripathi
 *   Organization:  cBasics
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include "node.h"

void insert_at_begining() {
    printf("Insert at begining of the list\n");
    node = malloc(sizeof(struct Node));
    if (!check(node)){
        return;
    }
    node->data = rand();
    node->next = header;
    header = node;
}

void insert_at_last() {
    printf("Insert at last of the list\n");
    if (header == NULL) {
        insert_at_begining();
        return;
    }
    ptr = header;
    while(ptr->next != NULL){
      ptr = ptr->next;
    }
    node = malloc(sizeof(struct Node));
    if (!check(node)){
        return;
    }
    ptr->next = node;
    node->data = rand();
    node->next = NULL;
}

void insert_at_any(int x) {
    printf("insert at %d\n", x);
    int count = 0;
    if (x == 0) {
        insert_at_begining();
        return;
    }
    if (x == length){
        insert_at_last();
        return;
    }
    if (x > length) {
        printf("length of list is %d, but trying to access %d\n", length, x);
        return;
    }
    ptr = header;
    while(count < x){
       prev = ptr;
       ptr = ptr->next;
       count++;
    }
    node = malloc(sizeof(struct Node));
    if (!check(node)){
        return;
    }
    prev->next = node;
    node->data = rand();
    node->next = ptr;
}
