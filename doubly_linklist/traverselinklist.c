/*
 * =====================================================================================
 *
 *       Filename:  traverselinklist.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 25 September 2018 02:52:57  IST
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
int length;
// traverse print all the data in the link list.
void traverse() {
    length = 0;
    printf("traverse the link list\n");
    node = header;
    if (!check(node)) {
        return;
    }
    printf("Header: %p\n", header);
    while(node != NULL) {
        printf("data: %d\n", node->data);
        node=node->next;
        length++;
    }
}

void reverse() {
    length = 0;
    printf("reverse the link list\n");
    node = tail;
    if (!check(node)) {
        return;
    }
    printf("Tail: %p\n", tail);
    while(node != NULL) {
        printf("data: %d\n", node->data);
        node=node->prev;
        length++;
    }
}
