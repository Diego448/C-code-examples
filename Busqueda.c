#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define TAM 4
int busqueda(int a[TAM], int b);
void captura(int a[TAM]);
void binarysearch(int a[TAM], int b);
int main(){
int a[TAM];
int b, sel;
captura(a);
printf("Ingresa el dato a buscar: ");
scanf("%d", &b);
printf("Elige el metodo de busqueda\n1.Secuencial\n2.Binario\n");
scanf("%d", &sel);
switch(sel){
case 1:
	if(busqueda (a, b) == 1){
printf("El dato se encuentra en el arreglo");
}else{
printf("El dato no se encuentra en el arreglo");
}
	break;
case 2:
	binarysearch(a, b);
	break;
default:
	printf("Selecciona una opcion valida");
}
getch();
}
void captura(int a[TAM]){
int i;
for (i = 0; i < TAM; i++){
printf("Ingresa el dato %d: ", i);
scanf("%d", &a[i]);
}
}
int busqueda(int a[TAM], int b){
int i;
for(i = 0; i < TAM; i++){
if(a[i]==b){
return 1;
}else continue;
}
}
int compare(const void * a, const void * b)
{
  if ( *(int*)a <  *(int*)b ) return -1;
  if ( *(int*)a == *(int*)b ) return 0;
  if ( *(int*)a >  *(int*)b ) return 1;
}
void binarysearch(int a[TAM], int b){
	int* value;
	qsort(a, TAM, sizeof(int), compare);
	value = (int*) bsearch(&b, a, TAM, sizeof(int), compare);
	if (value == NULL){
		printf("El elemento no se encuentra en el arreglo");
	}else
		printf("El elemento se encuentra en el arreglo");
}

