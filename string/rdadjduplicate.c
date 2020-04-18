#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeConsecutiveDuplicates(char *input) {
    // Write your code here
    if (*input=='\0'){
        return;
    }
    if (*input == *(input+1)) {
        for(int i=0; i<strlen(input); i++) {
            *(input+i) = *(input+i+1);
        }
        removeConsecutiveDuplicates(input);
    }

    removeConsecutiveDuplicates(input+1);
    return;
}

int main() {
    char s[1000];
    scanf("%s", s);
    removeConsecutiveDuplicates(s);
    printf("%s", s);
}
