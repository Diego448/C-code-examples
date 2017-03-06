#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
typedef struct Elemento{
	int dato;
	struct Elemento *siguiente;
}Nodo;
Nodo* crearNodo(int x, Nodo* enlace){
	Nodo* p;
	p = (Nodo*)malloc(sizeof(Nodo));
	p -> dato = x;
	p -> siguiente = enlace;
	return p;
}
Nodo* insertarPrimero(Nodo** cabeza, int entrada){
	Nodo* nuevo;
	nuevo = (Nodo*)malloc(sizeof(Nodo));
	nuevo -> dato = entrada;
	nuevo -> siguiente = *cabeza;
	*cabeza = nuevo;
	return nuevo;
}
void mostrar(Nodo* actual, Nodo* sig){
	Nodo* n;
	do{
		n = actual;
		printf("%d", actual -> dato);
		actual = sig;
		if(actual -> siguiente == NULL)
			printf("%d", actual -> dato);
	}while(actual -> siguiente != NULL);
}
int main(){
	int i;
	Nodo* primero = NULL;
	Nodo* cola = NULL;
	primero = (Nodo*)malloc(sizeof(Nodo));
	cola = (Nodo*)malloc(sizeof(Nodo));
	primero -> dato = 7;
	primero -> siguiente = cola;
	cola -> dato = 3;
	cola -> siguiente = NULL;
	mostrar(primero, cola);
	getch();
}