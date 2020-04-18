#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ans (int n,char* S)
{
    int count[26];
    // notice sizeof here,
    // memset set first n bytes to the given value
    memset(count,0,sizeof(count));
    if (n<26) {
        printf("NO");
        return;
    }

    for (int i=0; i<26; i++) {
        printf("%d", count[i]);
    }
    for (int i=0; i<n; i++) {
        if(((int)*(S+i)>=97)&&((int)*(S+i)<=122)){
            *(S+i)=*(S+i)-32;
        }
        count[(int)*(S+i)-65] +=1;
        printf("%d: %d\n", i, count[i]);
    }
    
    for (int i=0; i<26; i++) {
        if(count[i]==0) {
            printf("NO, i:%d, count: %d", i, count[i]);
            return;
        }
    }
    
    printf("YES");
    return ;
}

int main() {
    int n;
    char s[100];
    scanf("%d", &n);
    scanf("%s", s);
    ans(n,s);
}
