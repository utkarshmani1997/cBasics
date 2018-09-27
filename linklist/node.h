/*
 * =====================================================================================
 *
 *       Filename:  node.h
 *
 *    Description:  This file keeps all the functions used by linklist and
 *                  the variables associated with it.
 *
 *        Version:  1.0
 *        Created:  Tuesday 25 September 2018 02:43:24  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Utkarsh Mani Tripathi
 *   Organization:  cBasics
 *
 * =====================================================================================
 */
#include <stdbool.h>

struct Node {
   int data;
   struct Node *next;
};

extern struct Node *node, *ptr, *prev, *header, *tmp;
extern bool check(struct Node *newptr);
extern void traverse();
extern void create_link_list();
extern void reverse_list();
