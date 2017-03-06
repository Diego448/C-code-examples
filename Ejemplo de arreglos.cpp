#include "stdafx.h"
#include <conio.h>


int contador = 0, x = 0, y = 0;
int _tmain(int argc, _TCHAR* argv[])
{
	//Declaración de arreglo de tamaño 3
	int arreglo[3];

	//Inicialización de valores del arreglo
	for(contador = 0; contador < 3; contador++) {
		arreglo[contador] = contador;
	}

	//Imprimir en pantalla los valores del arreglo
	for(contador = 0; contador < 3; contador++) {
		printf("%d\n", arreglo[contador]);
	}

	int numeros[5][5];

	for (y = 0; y < 5; y++) {
		for (x = 0; x < 5; x++) {
			numeros[y][x] = x;
		}
	}

	for (y = 0; y < 5; y++) {
		for (x = 0; x < 5; x++) {
			printf("%d\t", numeros[y][x]);
		}
		printf("\n");
	}

	getch();
	return 0;
}

