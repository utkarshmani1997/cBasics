#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

int queue[MAXSIZE], rear = -1, front = -1;

void enqueue(int data) {
    printf("enqueue: %d\n", data);
    if (front >= MAXSIZE) {
        printf("queue is full\n");
        return;
    }
    if (rear < 0) {
       rear++;
    }
    front++;
    queue[front] = data;
}

void dequeue() {
    if (rear < 0) {
        printf("can't dequeue, queue is empty\n");
        return;
    }
    printf("dequeue: %d\n", queue[rear]);
    queue[rear] = 0;
    if (rear == front) {
        front = -1;
        rear = front;
        return;
    }
    rear++;
}

void peek() {
    if (front < 0) {
        printf("can't peek, queue is empty\n");
        return;
    }
    printf("peek: %d\n", queue[front]);
}

int main() {
   int i;
   for (i = 0; i < MAXSIZE; i++) {
       enqueue(rand());
   }
   for (i = 0; i <= MAXSIZE; i++) {
       peek();
       dequeue();
   }
   return 0;
}
