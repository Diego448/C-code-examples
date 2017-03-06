#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
typedef int tipo;
typedef struct Elemento{
	tipo dato;
	struct Elemento* enlace;
}ELEMENTO;
ELEMENTO* crearElemento(ELEMENTO* actual, int datoNuevo){
	ELEMENTO* nuevo;
	nuevo = (ELEMENTO*)malloc(sizeof(ELEMENTO));
	nuevo->dato = datoNuevo;
	nuevo->enlace = actual;
	return nuevo;
}
void mostrar(ELEMENTO* actual){
	ELEMENTO* auxiliar;
	auxiliar = (ELEMENTO*)malloc(sizeof(ELEMENTO));
	auxiliar = actual;
	while(auxiliar->enlace!=NULL){
	printf("%d\n", auxiliar->dato);
	auxiliar = auxiliar->enlace;
	}
	if(auxiliar->enlace==NULL)
		printf("%d", auxiliar->dato);
}
int main(){
	ELEMENTO* elem;
	elem = (ELEMENTO*)malloc(sizeof(ELEMENTO));
	elem->dato = 0;
	elem->enlace = NULL;
	elem = crearElemento(elem, 1);
	elem = crearElemento(elem, 2);
	mostrar(elem);
	getch();
}