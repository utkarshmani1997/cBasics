/*
 * =====================================================================================
 *
 *       Filename:  pop.c
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
#include "stack.h"

void pop() {
    if (!check(top)) {
        printf("can't pop\n");
        return;
    }
    ptr = top;
    top = ptr->next;
    printf("pop: %d\n", ptr->data);
    length--;
    free(ptr);
}
