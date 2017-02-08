#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
typedef struct Elemento{
	int valor;
	struct Elemento* anterior;
}ELEMENTO;
ELEMENTO* insertar(ELEMENTO* cola ,int valor){
	ELEMENTO* nuevo;
	nuevo = (ELEMENTO*)malloc(sizeof(ELEMENTO));
	nuevo->anterior = cola;
	nuevo->valor = valor;
	return nuevo;
}
ELEMENTO* eliminar(ELEMENTO* cola){
	cola = cola->anterior;
	return cola;
}
void imprimir(ELEMENTO* actual){
	while(actual->anterior != NULL){
	printf("Valor: %d Direccion: %0xd\n", actual->valor, actual);
	actual = actual->anterior;
	}
	printf("Valor: %d Direccion: %0xd\n", actual->valor, actual);
}
void imprimirInicio(ELEMENTO* actual){
	while(actual->anterior != NULL){
	actual = actual->anterior;
	}
	printf("Valor inicial: %d Direccion: %0xd\n", actual->valor, actual);
}
void imprimirFinal(ELEMENTO* actual){
	printf("Valor final: %d Direccion: %0xd\n", actual->valor, actual);
}
int main(){
	ELEMENTO* elem;
	elem = (ELEMENTO*)malloc(sizeof(ELEMENTO));
	elem->anterior = NULL;
	elem->valor = 1;
	elem = insertar(elem, 2);
	elem = insertar(elem, 3);
	elem = eliminar(elem);
	imprimir(elem);
	imprimirInicio(elem);
	imprimirFinal(elem);
	getch();
}
