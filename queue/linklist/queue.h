/*
 * =====================================================================================
 *
 *       Filename:  queue.h
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

struct queueNode {
   int data;
   struct queueNode *next;
};

// extern keyword is used such that the variables or functions
// with this keyword can be accessed across various files.
extern struct queueNode *node, *ptr, *front, *rear;
extern int length;
extern bool check(struct queueNode *newptr);
extern void enqueue(int x);
extern void dequeue();
extern void peek();
