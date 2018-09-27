/*
 * =====================================================================================
 *
 *       Filename:  reverselinklist.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 25 September 2018 02:49:34  IST
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
// reverse_list reverses the list in one pass.
void reverse_list() {
    printf("reverse the link list\n");
    node = header;
    prev = NULL;
    if (!check(node)){
        return;
    }
    while(node != NULL) {
        tmp=node->next;
        node->next=prev;
        prev=node;
        node=tmp;
    }
    header=prev;
}

