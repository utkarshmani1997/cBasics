#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 5

int stack[MAXSIZE], top=-1;

bool is_empty() {
    if (top < 0) {
        return true;
    }
    return false;
}

bool is_full() {
    if (top >= MAXSIZE) {
        return true;
    }
    return false;
}

void push(int data) {
    printf("push: %d\n", data);
    if (is_full()) {
        printf("stack is full\n");
        return;
    }
    top++;
    stack[top] = data;
}

int pop() {
    if (is_empty()) {
        printf("can't pop, stack is empty\n");
        return -1;
    }
    printf("pop: %d\n", stack[top]);
    return stack[top--];
}

void peek() {
    if (is_empty()) {
        printf("can't peek, stack is empty\n");
        return;
    }
    printf("peek: %d\n", stack[top]);
}

void insert_at_bottom(int item) {
    if (is_empty()) {
        push(item);
        return;
    }
    int data = pop();
    insert_at_bottom(item);
    push(data);
}


void sort(int item) {
    if (is_empty()) {
        push(item);
        return;
    }
    int data = pop();
    if (data < item) {
        push(data);
        push(item);
    } else {
        sort(item);
        push(data);
    }
}

void Sort() {
    if (is_empty()) {
        return;
    }
    int item = pop();
    Sort();
    sort(item);
}

void reverse() {
    if (is_empty()) {
        return;
    }
    int item = pop();
    reverse();
    insert_at_bottom(item);
}

int main() {
   int i;
   for (i = 0; i < MAXSIZE; i++) {
       push(rand());
   }
   reverse();
   Sort();
   for (i = 0; i <= MAXSIZE; i++) {
      pop();
   }
   return 0;
}
