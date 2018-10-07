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
#include <limits.h>  //INT_MIN

int pop() {
    if (!check(top)) {
        printf("can't pop\n");
        return INT_MIN;
    }
    ptr = top;
    top = ptr->next;
    int tmp = ptr->data;
    printf("pop: %d\n", ptr->data);
    length--;
    free(ptr);
    return tmp;
}
