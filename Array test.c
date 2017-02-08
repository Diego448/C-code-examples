#include <stdio.h>
#include <stdlib.h>
int a[2];
int i, j;
int main(int argc, char *argv[])
{
  for (i=0; i<3; i++)
  {
      printf("Ingresa un valor: ");
      scanf("%d", &a[i]);
  }
  for (i=0; i<3; i++)
  {
      printf("%d", a[i]);
  }
  system("PAUSE");	
  return 0;
}
