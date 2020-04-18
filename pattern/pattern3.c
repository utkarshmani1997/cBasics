#include <stdio.h>
#include <stdlib.h>
// for n = 4
// 1234
// 123
// 12
// 1
int main() {
	// Write your code here
    int n=0;
    scanf("%d", &n);
    for (int i=n; i>0; i--) {
        for (int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}

