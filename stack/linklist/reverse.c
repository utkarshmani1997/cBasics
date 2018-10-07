/*
 * =====================================================================================
 *
 *       Filename:  reverse.c
 *
 *    Description:  reverse stack using stack operations
 *
 *        Version:  1.0
 *        Created:  Sunday 07 October 2018 02:48:36  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Utkarsh Mani Tripathi
 *   Organization:  cBasics
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "stack.h"
#include <stdio.h>

void insert_at_bottom(int item){
    if(!check(top)){
        push(item);
        return;
    }
    int data = pop();
    insert_at_bottom(item);
    push(data);
}

void reverse(){
    if (!check(top)){
        return;
    }
    int data = pop();
    reverse();
    insert_at_bottom(data);
}

