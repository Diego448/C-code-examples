#include <stdio.h>
#include <stdlib.h>
int num, a;
int d = 0;
int main(int argc, char *argv[])
{
  printf("Ingresa un numero: ");
  scanf("%d", &num);
  for (a=2; a<num; a++)
  {
  if (num%a==0)
  {
   d = 1;
  }
  }
  if (d==1)
  {
   printf("\nEl numero no es primo");
  }
  else
  {
   printf("\nEl numero es primo");
  }
  system("PAUSE");	
  return 0;
}
