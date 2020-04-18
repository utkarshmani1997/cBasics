#include <stdio.h>
#include <stdlib.h>
// for n = 5
// 1
// 11
// 121
// 1221
// 12221
int main() {
	// Write your code here
    int n=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++){
            if (i==0&&j==0){
                printf("%d", 1);
            } else if (j==0||j==i){
                printf("%d",1);
            } else {
                printf("%d",2);
            }
        }
        printf("\n");
    }
}

