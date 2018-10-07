/*
 * =====================================================================================
 *
 *       Filename:  sort.c
 *
 *    Description:  sort stack using stack operations
 *
 *        Version:  1.0
 *        Created:  Sunday 07 October 2018 03:14:30  IST
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

void sort(int item){
    if(!check(top)){
        push(item);
        return;
    }
    int data = pop();
    if (data < item){
        push(data);
        push(item);
    } else {
        sort(item);
        push(data);
    }
}

void Sort(){
    if (!check(top)){
        return;
    }
    int data = pop();
    reverse();
    sort(data);
}

