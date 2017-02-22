#include <stdio.h>
#include <conio.h>
#include <math.h>
#define LIMITE 10

int seleccion = 0, i, continuar = 1;

int main() {
	//Aplicacion de instruccion continue
	/*
	printf("Aplicacion de instruccion continue");
	while(continuar) {
		printf(":");
		scanf("%d", &seleccion);
		printf("\n");

		for(i = 0; i < LIMITE; i++) {
			if(i == seleccion) 
				continue;
			printf("%d\n", i);
		}
		printf("Desea continuar la ejecucion del programa (1.Si, 0.No):");	
		scanf("%d", &continuar);
		if(continuar != 1 || continuar != 0)
			continuar = 0;
	}
	*/

	/*
	printf("Aplicacion de instruccion break\n");
	continuar = 1;
	//Aplicacion de instruccion break
	while(continuar) {
		printf(":");
		scanf("%d", &seleccion);
		printf("\n");

		for(i = 0; i < LIMITE; i++) {
			if(i == seleccion) 
				break;
			printf("%d\n", i);
		}
		printf("Desea continuar la ejecucion del programa (1.Si, 0.No):");
		scanf("%d", &continuar);
		if(continuar != 1 || continuar != 0)
			continuar = 0;		
	}
	*/

	/*
	//Aplicacion de estructuras
	struct Persona {
		char nombre[10] ;
		int edad;
	}persona1;

	scanf("%s", &persona1.nombre);
	scanf("%d", &persona1.edad);
	printf("%s", persona1.nombre);

	typedef Persona tipoNuevo;
	tipoNuevo ejemplo;
	ejemplo.edad = 10;
	printf("%d", ejemplo.edad);
	*/

	//Aplicacion de math.h
	double numero1, numero2, resultado;
	resultado = pow(2.0, 4.0);
	printf("%f\n", resultado);
	printf("%.2f\n", resultado);
	printf("%x\n", (int)resultado);
	printf("%o\n", (int)resultado);
	getch();
	return 0;
}