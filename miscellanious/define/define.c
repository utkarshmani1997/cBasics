#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE(x)   (sizeof(x)/sizeof(x[0]))

#define COUNTER(x) \
        do {         \
                x++; \
        } while(0)

int main() {
    int x[10];
    // it's considered as good practice to use macros
    // to calculate the size of array.
    int y = ARRAY_SIZE(x);
    printf("y:%d\n", y);
    COUNTER(y);
    printf("counter:%d\n", y);
    return 0;
}
