/*
 * =====================================================================================
 *
 *       Filename:  enqueue.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 25 September 2018 02:55:02  IST
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
int length=0;
// enqueue is used to push the data into queue
void enqueue(int random) {
    printf("enqueue %d to queue\n", random);
    if (front == NULL) {
        node = malloc(sizeof(struct queueNode));
        if (!check(node)){
            return;
        }
        rear = node;
    }
    else {
        node->next = malloc(sizeof(struct queueNode));
        if (!check(node)){
            return;
        }
        node = node->next;
    }
    node->data = random;
    node->next = NULL;
    front = node;
    length++;
}
