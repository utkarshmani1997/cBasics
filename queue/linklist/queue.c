#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "queue.h"

struct queueNode *node, *ptr, *rear=NULL, *front=NULL;

int main() {
    int i, data;
    for (i = 0; i < 5; i++) {
        data = rand();
        enqueue(data);
    }
    printf("length of queue %d\n", length);
    for (i = 0; i < 6; i++) {
        peek();
        dequeue();
    }
    printf("length of queue %d\n", length);
    return 0;
}
