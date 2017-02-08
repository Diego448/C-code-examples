#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
typedef struct Elemento{
	int valor;
	struct Elemento* siguiente;
}ELEMENTO;
ELEMENTO* insertarPila(ELEMENTO* actual ,int valor){
	ELEMENTO* nuevo;
	nuevo = (ELEMENTO*)malloc(sizeof(ELEMENTO));
	nuevo->siguiente = actual;
	nuevo->valor = valor;
	return nuevo;
}
ELEMENTO* eliminar(ELEMENTO* tope){
	tope = tope->siguiente;
	return tope;
}
void imprimir(ELEMENTO* actual){
	while(actual->siguiente != NULL){
	printf("%d\n", actual->valor);
	actual = actual->siguiente;
	}
	printf("%d", actual->valor);
}
void imprimirFinal(ELEMENTO* actual){
	while(actual->siguiente != NULL){
	actual = actual->siguiente;
	}
	printf("Valor inicial: %d\nDireccion: %0xd\n", actual->valor, actual);
}
void imprimirInicio(ELEMENTO* actual){
	printf("Valor final: %d\nDireccion: %0xd\n", actual->valor, actual);
}
int main(){
	ELEMENTO* elem;
	elem = (ELEMENTO*)malloc(sizeof(ELEMENTO));
	elem->siguiente = NULL;
	elem->valor = 1;
	elem = insertarPila(elem, 2);
	elem = insertarPila(elem, 3);
	elem = eliminar(elem);
	imprimir(elem);
	imprimirInicio(elem);
	imprimirFinal(elem);
	getch();
}