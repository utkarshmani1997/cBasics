#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE(x)   (sizeof(x)/sizeof(x[0]))

int main() {
    int x[10];
    // it's considered as good practice to use macros
    // to calculate the size of array.
    int y = ARRAY_SIZE(x);
    printf("y:%d", y);
    return 0;
}
