#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

char buffer[2048];
int version = 1;
void copy(int, int);

int main(argc, argv)
    int argc;
    char *argv[];
{
    // when you open a file, it returns a integer,
    // commonly known as file descriptors.
    int fdold, fdnew;
    if (argc != 3) {
        printf("need two args for copy\n");
        exit(1);
    }
    fdold = open(argv[1], O_RDONLY);
    if (fdold == -1) {
        printf("cannot open file %s\n", argv[1]);
        exit(1);
    }
    
    fdnew = open(argv[2], 0666); // RW for all
    if (fdnew == -1) {
        printf("cannot open file %s\n", argv[2]);
        exit(1);
    }
    copy(fdold, fdnew);
    exit(1);
    return 0;
}

void copy(old, new)
    int old, new;
{
    int count;
    while((count = read(old, buffer, sizeof(buffer))) > 0) {
        printf("%d\n", count);
        write(new, buffer, count);
    }
}
