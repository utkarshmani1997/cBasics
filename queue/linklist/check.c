/*
 * =====================================================================================
 *
 *       Filename:  check.c
 *
 *    Description:  Define check() 
 *
 *        Version:  1.0
 *        Created:  Tuesday 25 September 2018 04:09:52  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Utkarsh Mani Tripathi 
 *   Organization:  cBasics
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "queue.h"
// check verifies if the ptr is NULL or not.
bool check(struct queueNode *newptr){
   if (newptr == NULL) {
      printf("queue is empty\n");
      return false;
   }
   return true;
}
