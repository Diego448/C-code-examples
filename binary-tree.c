#include <stdio.h>
#include <stdlib.h>
typedef struct arbol{
  int dato;
  struct arbol* ant;
  struct arbol* izq;
  struct arbol* der;
}NODO;
NODO* crear_ramificacion_izq(NODO* nodo_ant, int dato){
    NODO* nuevo_nodo;
    nuevo_nodo = malloc(sizeof(NODO));
    nuevo_nodo -> ant = nodo_ant;
    nuevo_nodo -> dato = dato;
    nodo_ant -> izq = nuevo_nodo;
    nuevo_nodo -> izq = NULL;
    nuevo_nodo -> der = NULL;
    return nuevo_nodo;
}
NODO* crear_ramificacion_der(NODO* nodo_ant, int dato){
    NODO* nuevo_nodo;
    nuevo_nodo = malloc(sizeof(NODO));
    nuevo_nodo -> ant = nodo_ant;
    nuevo_nodo -> dato = dato;
    nuevo_nodo -> izq = NULL;
    nodo_ant -> der = nuevo_nodo;
    nuevo_nodo -> der = NULL;
    return nuevo_nodo;
}
void imprimir_izq(NODO* actual){
    while(actual -> izq != NULL){
        printf("%d", actual -> dato);
        actual = actual -> izq;
    }
    printf("%d", actual -> dato);
}
void imprimir_der(NODO* actual){
    while(actual -> der != NULL){
        printf("%d", actual -> dato);
        actual = actual -> der;
    }
    printf("%d", actual -> dato);
}
int main()
{
    NODO* raiz;
    raiz = malloc(sizeof(NODO));
    raiz -> ant = NULL;
    raiz -> dato = 1;
    raiz -> izq = crear_ramificacion_izq(raiz, 2);
    raiz -> der = crear_ramificacion_der(raiz, 3);
    raiz -> izq -> izq = crear_ramificacion_izq(raiz -> izq, 4);
    printf("\t\t\t\t\t%d\n", raiz -> dato);
    printf("\t\t\t\t%d", raiz -> izq -> dato);
    printf("\t\t%d\n", raiz -> der -> dato);
    printf("\t\t\t%d\n", raiz -> izq -> izq -> dato);
    printf("Arbol de nodos izquierdos\n");
    imprimir_izq(raiz);
    printf("\n");
    puts("Arbol de nodos derechos");
    imprimir_der(raiz);
    return 0;
}
