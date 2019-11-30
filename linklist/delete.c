/*
 * =====================================================================================
 *
 *       Filename:  delete.c
 *
 *    Description:  Implement delete operation
 *
 *        Version:  1.0
 *        Created:  Friday 28 September 2018 12:21:18  IST
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

void delete_at_begining() {
    printf("delete at begining\n");
    if (header->node == NULL) {
        printf("can't delete, no list available\n");
        return;
    }
    ptr = header->node;
    int len = header->length;
    header->node = ptr->next;
    header->length = len;
    header->length--;
    free(ptr);
}

void delete_at_any(int x) {
    printf("delete at %d\n", x);
    int count = 0;
    if (x == 0) {
        delete_at_begining();
        return;
    }
    if (x > header->length) {
        printf("can't delete, length of list is %d, trying to delete %d\n", header->length, x);
        return;
    }
    ptr = header->node;
    while (count < x) {
        prev = ptr;
        ptr = ptr->next;
        count++;
    }
    prev->next = ptr->next;
    header->length--;
    free(ptr);
}
