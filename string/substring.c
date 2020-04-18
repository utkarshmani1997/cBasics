#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void twoSubstrings(char* s)
{
    int flagab = 0;
    int flagba = 0;
    //char ab[] = "AB";
    //char ba[] = "BA";
    // Write your code here
    int len = strlen(s);
    for (int i = 0; i<len; i++) {
        if (*(s+i)!='\0'){
            if ((*(s+i)=='A' && *(s+i+1)=='B')) {
                flagab = 1;
            } else if (*(s+i)=='B' && *(s+i+1)=='A'){
                flagba = 1;
            }
        }
    }
    if (flagab == 1 && flagba == 1) {
        printf("yes");
    } else {
        printf("no");
    }
}

int main() {
    char s[10000];
    scanf("%s",s);
    twoSubstrings(s);
    return 0;
}
