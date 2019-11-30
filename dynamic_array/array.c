#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>
#include <stdint.h>

int *age;
int *height;

int main() {
         age = (int *)malloc(sizeof(int)*5);
         height = (int *)malloc(sizeof(int)*5);
         for (int i=0; i <5; i++){
                 *(age+i) = rand();
                 *(height+i) = rand();
         }
         for (int i=0; i <5; i++){
                 printf("age: %d , height: %d \n", *(age+i), *(height+i));
         }

         int *aage, *hheight;
         aage = (int *)realloc(age, 10*sizeof(int));
         hheight = (int *)realloc(height, 10*sizeof(int));
         for (int i=5; i <10; i++){
                 *(aage+i) = rand();
                 *(hheight+i) = rand();
         }

         for (int i=0; i <10; i++){
                 printf("aage: %d , hheight: %d \n", *(aage+i), *(hheight+i));
         }
         free(age);
         free(height);
         free(aage);
         free(hheight);
         return 0;
}
