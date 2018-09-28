/*
 * =====================================================================================
 *
 *       Filename:  createdoublylinklist.c
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
#include "node.h"
// create_link_lists create a link list and fills random data.
void create_doubly_link_list() {
    printf("Create a link list of size 5\n");
    int i = 0;
        while(i < 5){
        if (header == NULL) {
           // typecasting is not neccessry in c, its automatically
           // done by the compiler itself. Both of the below ways are
           // valid.
           // node = (struct Node *)malloc(sizeof(struct Node));
            node = malloc(sizeof(struct Node));
            if (!check(node)){
               return;
            }
            node->data = rand();
            header = node;
            node->prev = NULL;
        }
        else {
            // node->next = (struct Node *)malloc(sizeof(struct Node));
            node->next = malloc(sizeof(struct Node));
            if (!check(node->next)){
                return;
            }
            tmp = node;
            node=node->next;
            node->prev = tmp;
            node->data = rand();
        }
            node->next = NULL;
            i++;
    }
        tail = node;
}
