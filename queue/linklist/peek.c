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
#include "queue.h"
// peek print the data in the top of the queue.
void peek() {
    printf("Get the data on the top of the queue\n");
    if (!check(front)) {
        printf("can't peek\n");
        return;
    }
    printf("front: %p\n", front);
    printf("peek: %d\n", front->data);
}
