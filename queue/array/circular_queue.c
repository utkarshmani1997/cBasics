#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

int queue[MAXSIZE], rear = -1, front = -1;

void enqueue(int data) {
    if (((front == MAXSIZE - 1) && (rear == 0)) || (front == rear - 1)){
        printf("queue is full\n");
        return;
    }
    if ((front == MAXSIZE - 1) && (rear > 0)){
        front = -1;
    }
    if (rear < 0) {
       rear++;
    }
    printf("enqueue: %d\n", data);
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
    if (rear == MAXSIZE - 1) {
        rear = -1;
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
   for (i = 0; i < 3; i++) {
        peek();
        dequeue();
   }
   for (i = 0; i < MAXSIZE; i++) {
        peek();
        enqueue(rand());
   }
   enqueue(rand());
   dequeue();
   dequeue();
   dequeue();

   return 0;
}
