#include<stdlib.h>
#include<stdio.h>

int main() {
#ifdef TEST
        printf ("Test mode\n");
#endif
#ifdef DEBUG
        printf ("Debug mode\n");
#endif
        printf ("Hi! This is utkarsh\n");
        return 0;
}
