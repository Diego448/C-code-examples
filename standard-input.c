#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nombre[20];
  printf("Ingresa tu nombre: ");
  scanf("%s", &nombre);
  printf("Hola: %s\n", &nombre);
  system("PAUSE");	
  return 0;
}
