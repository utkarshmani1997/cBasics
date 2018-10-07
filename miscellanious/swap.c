/*
 * =====================================================================================
 *
 *       Filename:  swap.c
 *
 *    Description:  swap the two numbers without temp variable
 *
 *        Version:  1.0
 *        Created:  Sunday 07 October 2018 06:16:52  IST
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

int main() {
    int a = 10, b = 15;
    printf("a, b = %d, %d\n", a, b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("after swap a, b = %d, %d\n", a, b);
}
