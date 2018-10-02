/*
 * =====================================================================================
 *
 *       Filename:  push.c
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
#include "stack.h"
int length=0;
// push is used to push the data into stack
void push(int random) {
    printf("Push %d to stack\n", random);
    node = malloc(sizeof(struct stackNode));
    if (!check(node)){
        return;
    }
    node->data = random;
    node->next=top;
    top = node;
    length++;
}
