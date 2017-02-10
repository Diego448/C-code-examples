#include <stdio.h>
#include <stdlib.h>
FILE *a;
char c;
int main(int argc, char *argv[])
{
  a = fopen("D:/Hola.txt", "r");
  while(c!=EOF)
  {
  c = fgetc(a);
  printf("%c", c);
  }
  system("PAUSE");	
  return 0;
}
