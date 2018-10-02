/*
 * =====================================================================================
 *
 *       Filename:  peek.c
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
#include "stack.h"
// peek print the data in the top of the stack.
void peek() {
    printf("Get the data on the top of the stack\n");
    if (!check(top)) {
        printf("can't peek\n");
        return;
    }
    printf("Top: %p\n", top);
    printf("peek: %d\n", top->data);
}
