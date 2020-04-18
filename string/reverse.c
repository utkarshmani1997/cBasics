/*
 * =====================================================================================
 *
 *       Filename:  reverse.c
 *
 *    Description:  reverse the string using recursion 
 *
 *        Version:  1.0
 *        Created:  Saturday 03 November 2018 05:00:59  IST
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

void reverse()
{
    char c;
    scanf("%c", &c);

    // keep reading the characters from stdin till it reaches
    // end of line.
    if( c != '\n')
    {
        // Basically this will go into the stack and will
        // start poping the characters once it reaches exit
        // condition.
        reverse();
        printf("%c",c);
    }
}

int main()
{
    printf("Enter a sentence: ");
    reverse();
    printf("\n");
    return 0;
}
