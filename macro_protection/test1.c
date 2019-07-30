#include<stdlib.h>
#include<stdio.h>

#ifdef MAIN
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
#endif

#ifdef NEWMAIN
int main() {
        printf("Second one");
}
#endif
