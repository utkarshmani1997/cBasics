#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

int stack[MAXSIZE], top=-1;

void push(int data) {
    printf("push: %d\n", data);
    if (top >= MAXSIZE) {
        printf("stack is full\n");
        return;
    }
    top++;
    stack[top] = data;
}

void pop() {
    if (top < 0) {
        printf("can't pop, stack is empty\n");
        return;
    }
    printf("pop: %d\n", stack[top]);
    stack[top] = 0;
    top--;
}

void peek() {
    if (top < 0) {
        printf("can't peek, stack is empty\n");
        return;
    }
    printf("peek: %d\n", stack[top]);
}

int main() {
   int i;
   for (i = 0; i < MAXSIZE; i++) {
       push(rand());
   }
   for (i = 0; i <= MAXSIZE; i++) {
       peek();
       pop();
   }
   return 0;
}
