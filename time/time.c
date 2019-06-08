#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <inttypes.h>

int main ()
{
    struct timespec start, end;
    time_t now;
    char buff[255];
    FILE *fp;
    uint64_t diff;

    // time since 1 jan 1970 in seconds
    now = time(NULL);
    clock_gettime(CLOCK_MONOTONIC_RAW, &start);

    fp = fopen("/tmp/test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
    clock_gettime(CLOCK_MONOTONIC_RAW, &end);

    // get the difference in nanoseconds
    diff = (end.tv_sec - start.tv_sec)*1000000000 + (end.tv_nsec - start.tv_nsec);
    printf("diff: %"PRIu64", start: %lld, end: %lld, now: %lld\n", diff, (long long)start.tv_sec, (long long)end.tv_sec, (long long)now);

    clock_gettime(CLOCK_MONOTONIC_RAW, &start);

    fp = fopen("/tmp/test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff );

    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff );

    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff );
    fclose(fp);
    clock_gettime(CLOCK_MONOTONIC_RAW, &end);

    // get the difference in nanoseconds
    diff = (end.tv_sec - start.tv_sec)*1000000000 + (end.tv_nsec - start.tv_nsec);
    printf("diff: %"PRIu64", start: %lld, end: %lld, now: %lld\n", diff, (long long)start.tv_sec, (long long)end.tv_sec, (long long)now);
    return 0;
}
