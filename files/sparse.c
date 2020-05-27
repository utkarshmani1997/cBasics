#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
   int fd = 0;
   char buf[45];
   fd = open("sparsefile", O_RDWR|O_CREAT, 0666);
   if (fd == -1){
      return -1;
   }
   if (ftruncate(fd, 1024) == -1) {
      return -1;
   }
   char *greet = "Hello folks! utkarsh here, a noob programmer\n";
   int len = strlen(greet);
   printf("%d\n", len);
//   for(int i = 0; i < 100; i++) {
      write(fd, greet, len);
      printf("offset: %td, cur: %td\n", lseek(fd, len, SEEK_CUR), SEEK_CUR);
//   }
   lseek(fd, 0, SEEK_SET);

   int llen = 10;
   int count = 0;
   int i;
   count = read(fd, buf, llen);
   for (i = 0; i < count; i++) {
      printf("data: %c\n", buf[i]);
//      printf("offset: %td, count: %td\n", lseek(fd, llen, SEEK_CUR), count);
//      memset(buf, 0, 45);
  }
   close(fd);
   return 0;
}
