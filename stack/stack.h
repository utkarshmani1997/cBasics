/*
 * =====================================================================================
 *
 *       Filename:  stack.h
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

struct stackNode {
   int data;
   struct stackNode *next;
};

// extern keyword is used such that the variables or functions
// with this keyword can be accessed across various files.
extern struct stackNode *node, *ptr, *top;
extern int length;
extern bool check(struct stackNode *newptr);
extern void push(int x);
extern void pop();
extern void peek();
