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

// extern keyword is used such that the variables or functions
// with this keyword can be accessed across various files.
extern struct Node *node, *ptr, *prev, *header, *tmp;
extern int length;
extern bool check(struct Node *newptr);
extern void traverse();
extern void create_link_list();
extern void reverse_list();
extern void insert_at_begining();
extern void insert_at_last();
extern void insert_at_any(int x);
extern void delete_at_begining();
extern void delete_at_any(int x);
