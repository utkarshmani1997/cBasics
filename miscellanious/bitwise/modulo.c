#include <stdlib.h>
#include <stdio.h>

int main() {
    int remain = 0;
    int value1 = 1301081862;
    int value2 = 505675776;
    int diviser = 4096;

    for (int i = 0; i < 100000000; i++) {
        remain = value1 & (diviser-1);
    }
    return 0;
}
