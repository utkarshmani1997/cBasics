#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "stack.h"

struct stackNode *node, *ptr, *top=NULL;

int main() {
    int i, data;
    for (i = 0; i < 5; i++) {
        data = rand();
        push(data);
    }
    printf("length of stack %d\n", length);
    for (i = 0; i < 6; i++) {
        peek();
        pop();
    }
    printf("length of stack %d\n", length);
    return 0;
}
