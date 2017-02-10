#include <stdio.h>
#include <stdlib.h>
int array[2];
int i, j;
int main(int argc, char *argv[])
{
  for (i=0; i<3; i++)
  {
      printf("Ingresa un valor: ");
      scanf("%d", &array[i]);
  }
  for (i=0; i<3; i++)
  {
      printf("%d", array[i]);
  }
  system("PAUSE");	
  return 0;
}
