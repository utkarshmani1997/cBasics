#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "stack.h"
#include <limits.h>  //INT_MIN

struct stackNode *node, *ptr, *top=NULL;

int main() {
    int i, data;
    for (i = 0; i < 5; i++) {
        data = rand();
        push(data);
    }
    printf("length of stack %d\n", length);
    reverse();
    Sort();
    for (i = 0; i < 6; i++) {
        int data = pop();
        if (data == INT_MIN) {
            break;
        }
    }
    printf("length of stack %d\n", length);
    return 0;
}
