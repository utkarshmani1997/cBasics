#include<stdio.h>
#include<stdlib.h>

struct X {

        int *y;
        int z;
        struct X *x;
};

void func1(struct X x) {

        int z = 5;
        x.y = &z;
        x.z = z;
        x.x = &x;
        z = 100;
}

void func2(struct X *x) {

        int z = 5;
        x->y = &z;
        x->z = z;
        x->x = x;
        z = 100;
}

int main() {

        struct X x;
//        func1(x);
        /* size of struct X will be:
         * 4 for int y + 4 for padding on 64 bit architecture
         * 4 for int z +    ||
         * 8 for struct
         */
        printf("%lu %lu %lu %lu\n", sizeof(x), sizeof(*x.y), sizeof(x.z), sizeof(*x.x));
        printf("%p %p %p %p\n", &x.y, &x.z, &x.x->y, &x.x->z);
        printf("%d %d %d %d\n", *(x.y), x.z, *x.x->y, x.x->z);
        printf("%d %d %d\n", *(x.y), x.z, x.x->z);

        func2(&x);
        printf("%d %d %d %d\n", *(x.y), x.z, *(x.x->y), x.x->z);

        *x.y = 500;
        printf("%d %d %d %d\n", *(x.y), x.z, *(x.x->y), x.x->z);

        struct X *w = malloc(sizeof(struct X));
        func2(w);
        printf("%d %d %d %d\n", *(w->y), w->z, *(w->x->y), w->x->z);

        return 0;
}
