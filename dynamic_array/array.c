#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>
#include <stdint.h>

uint64_t *age;
uint64_t *height;

int main() {
         age = malloc(sizeof(uint64_t)*5);
         height = malloc(sizeof(uint64_t)*5);
         for (int i=0; i <5; i++){
                 *(age+i) = rand();
                 *(height+i) = rand();
         }
         for (int i=0; i <5; i++){
                 printf("age: %lu , height: %lu \n", *(age+i), *(height+i));
         }
         free(age);
         free(height);
         return 0;
}
