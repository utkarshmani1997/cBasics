#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main ()
{
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC_RAW, &start);
    sleep(5);
    clock_gettime(CLOCK_MONOTONIC_RAW, &end);

    double diff =  (end.tv_sec - start.tv_sec);
    printf("diff: %f, start: %lld, end: %lld\n", (double)delta_us, (long long)start.tv_sec, (long long)end.tv_sec);
    return 0;
}
