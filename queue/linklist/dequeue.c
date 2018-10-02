/*
 * =====================================================================================
 *
 *       Filename:  dequeue.c
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
#include "queue.h"

void dequeue() {
    if (!check(rear)) {
        printf("can't dequeue\n");
        return;
    }
    if (rear == front) {
        front = NULL;
    }
    ptr = rear;
    rear = ptr->next;
    printf("dequeue: %d\n", ptr->data);
    length--;
    free(ptr);
}
