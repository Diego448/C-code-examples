#include <stdio.h>
#include <conio.h>

void inicializarArreglo(int, int[]);
int arregloA[] = {1, 2, 3}; 
int main() {
	inicializarArreglo(4, arregloA);
	getch();
	return 0;
}
void inicializarArreglo(int valorInicial, int arreglo[]) {
	int tamaņoDeArreglo = sizeof arreglo;
	printf("%d\n", tamaņoDeArreglo);
	for(int i = 0; i < tamaņoDeArreglo; i++){
		arreglo[i] = valorInicial++;
		printf("%d\n", arreglo[i]);
	}
}
