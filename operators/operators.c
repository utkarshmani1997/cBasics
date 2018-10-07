#include <stdio.h>

int main() {
    int x = 10;
    // (10) 1010 << 1 = 10100 (20)
    // if x = 10 and n = 1 ;
    // in general we can represent the output
    // as y = x * 2^n for the leftshift.
    printf("x << 1 = %d\n", x << 1);
    // (10) 1010 >> 1 = 0101
    // if x = 10 and n = 1 ;
    // in general we can represent the output
    // as y = x / 2^n for the leftshift.
    printf("x >> 1 = %d\n", x >> 1);
    return 0;
}
