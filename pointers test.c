#include <stdio.h>
#include <stdlib.h>
int a;
int *b;
int main(int argc, char *argv[])
{
  a = 1;
  b = &a;
  printf("%d", a);
  *b = 48;
  printf("%d", a);
  system("PAUSE");	
  return 0;
}
