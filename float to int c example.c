#include <stdio.h>
#include <stdlib.h>
int a;
float hr;
float min;
int hr2;
int min2;
int seg;
int main(int argc, char *argv[])
{
  printf("Introduce la cantidad de segundos ");
  scanf("%d", &a);
  hr = a/3600;
  hr2 = (int)hr;
  printf("%d horas, ", hr2);
  min = a/60;
  min2 = (int)min;
  printf("%d minutos y ", min2);
  seg = a-(hr2*3600)-(min2*60);
  printf("%d segundos.", seg);
  system("PAUSE");	
  return 0;
}
