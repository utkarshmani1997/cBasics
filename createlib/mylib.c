#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "mylib.h"

int myprintf(char *myname, const char *format, ...) {

        va_list arg;
        int done;
        va_start(arg, format);
        printf("%s:", myname);
        char *args = va_arg(arg, char*);
        done = printf(format, args);
        va_end(arg);
        return done;
}
