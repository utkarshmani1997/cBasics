#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  char str[] ="Utkarsh/Mani";
  char newStr[256];
  strcpy(newStr, str);
  char *token;
  char *rest = newStr;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  token = strtok_r(rest, "/", &rest);
  printf("token: %s, rest: %s, str: %s\n", token, rest, str);
  return 0;
}
