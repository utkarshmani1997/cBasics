#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  char str[] ="Utkarsh/Mani";
  char *token;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  token = strchr(str, '/');
  if (token != NULL) {
          *token = '\0';
  }
  printf("token: %s, str: %s\n", token, str);
  return 0;
}
