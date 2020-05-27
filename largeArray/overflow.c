#include <stdio.h>
#include <stdlib.h>

int main() {

    int a[10], b[100];
    for (int i=0; i < 100; i++)
        a[i] = i;

      for (int i=0; i < 100; i++)
        printf("a=%d, b=%d\n",a[i], b[i]);
   return 0;
}
