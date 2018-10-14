#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main ()
{
    struct timespec start, end;
    time_t now;
    // time since 1 jan 1970 in seconds
    now = time(NULL);
    clock_gettime(CLOCK_MONOTONIC_RAW, &start);
    sleep(5);
    clock_gettime(CLOCK_MONOTONIC_RAW, &end);

    // get the difference in nanoseconds
    double diff = (end.tv_sec - start.tv_sec)*1000000000 + (end.tv_nsec - start.tv_nsec);
    printf("diff: %f, start: %lld, end: %lld, now: %lld\n", (double)diff, (long long)start.tv_sec, (long long)end.tv_sec, (long long)now);
    return 0;
}
