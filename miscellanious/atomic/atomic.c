#include <stdio.h>
#include <pthread.h>

_Atomic int acnt;
int cnt;

int f(void* vargp)
{
    for(int n = 0; n < 1000; n++) {
        cnt++;
        acnt++;
    }
    return 0;
}

int main(void)
{
    pthread_t thread_id[10];
    for(int n = 0; n < 10; ++n)
        pthread_create(&thread_id[n], NULL, f, NULL);
    for(int n = 0; n < 10; ++n)
        pthread_join(thread_id[n], NULL);

    printf("The atomic counter is %d\n", acnt);
    printf("The non-atomic counter is %d\n", cnt);
}
