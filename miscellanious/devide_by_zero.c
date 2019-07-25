#include <stdio.h>
#include <stdlib.h>

int main() {

        int i = 0;
        int j = 10;
        for (i = 0; i <= 10; i++) {

                /*  devide by zero is undefined behaviour
                 *  we should always check the denominator
                 *  defore doing devide operation in c
                 */
                printf("%d\n", i/j);
                j--;
        }
        return 0;
}
