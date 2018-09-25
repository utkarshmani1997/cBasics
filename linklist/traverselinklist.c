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
#include "traverselinklist.h"
#include "node.h"
#include "check.h"
// traverse print all the data in the link list.
void traverse() {
    printf("traverse the link list\n");
    node = header;
    if (!check(node)) {
        return;
    }
    printf("Header: %p\n", header);
    while(node != NULL) {
        printf("data: %d\n", node->data);
        node=node->next;
    }
}
