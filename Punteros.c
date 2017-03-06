#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
int *a, *b, *c, *d;
int e = 4, f = 7, g = 9, h = 2;
a = &e;
b = &f;
c = &g;
d = &h;
printf("Valor de a: %d Direccion en memoria de a: %0xd\n", *a, a);
printf("Valor de b: %d Direccion en memoria de b: %0xd\n", *b, b);
printf("Valor de c: %d Direccion en memoria de c: %0xd\n", *c, c);
printf("Valor de d: %d Direccion en memoria de d: %0xd\n", *d, d);
getch();
}