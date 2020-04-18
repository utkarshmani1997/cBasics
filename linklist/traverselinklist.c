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
// traverse print all the data in the link list.
void traverse() {
    printf("traverse the link list\n");
    node = header->node;
    if (!check(node)) {
        return;
    }
    printf("Header: %p, Length: %d\n", header, header->length);
    while(node != NULL) {
/*        if (node->visited) {
                printf("loop detected");
                return;
        }
*/        printf("data: %d\n", node->data);
 //       node->visited=true;
        node=node->next;
    }
}
