#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(argc, argv)
    int argc;
    char *argv[];
{
    if (fork() == 0)
        // executes the copy binary (non blocking)
        // run `man execl` for more details.
        execl("copy", "copy", argv[1], argv[2], NULL);
    // wait for the child process to complete the execution
    // run `man wait` for more details. 
    wait((int *)0);
    printf("fork done\n");
    return 0;
}
