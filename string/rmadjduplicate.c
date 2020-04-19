#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// iterative solution O(n^2) in worst case when all the 
// elements are same.
void removeConsecutiveDuplicates(char *input) {
    // Write your code here
    if (*input=='\0'){
        return;
    }
    if (*input == *(input+1)) {
        for(int i=0; i<strlen(input); i++) {
            *(input+i) = *(input+i+1);
        }
        // check updated string
        removeConsecutiveDuplicates(input);
    }

    // check remaining, if consecutive chars are not same.
    removeConsecutiveDuplicates(input+1);
    return;
}

// O(n), replace the consecutive with next not matching char
void removeConsecutiveDuplicatesIterative(char *input) {
    int len = strlen(input);

    if (len < 2) {
        return;
    }

    int j = 0;
    for (int i=1; i<=len; i++) {
        if (*(input+j)!=*(input+i)) {
            j++;
            *(input+j) = *(input+i);
        }
    }
}

int main() {
    char s[1000];
    scanf("%s", s);
//    removeConsecutiveDuplicates(s);
    removeConsecutiveDuplicatesIterative(s);
    printf("%s", s);
}
