#include <stdlib.h>
#include <stdio.h>

int main() {
    int a[2093589], b[2093589];
    printf("%ld\n", sizeof(int));
    for(int i=0; i < 20000; i++)
            a[i] = i;
    for(int i=0; i< 20000; i++)
            printf("%d", a[i]);
   // sleep(120);
}
