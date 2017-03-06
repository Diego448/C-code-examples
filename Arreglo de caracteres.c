// Arreglo de caracteres.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
int conteo_vocales(int a, char b[]);
int _tmain(int argc, _TCHAR* argv[])
{
	int tamaño_cadena;
	char cadena[6];
	printf("Ingresa una cadena de caracteres: ");
	gets(cadena);
	puts(cadena);
	tamaño_cadena = sizeof(cadena);
	printf("El tamano de la cadena es: %d", tamaño_cadena);
	int vocales_num = conteo_vocales(tamaño_cadena, cadena);
	printf("\nLa cadena tiene %d caracteres", vocales_num);
	getch();
	return 0;
}
int conteo_vocales(int a, char b[]){
	int contador = 0;
	for(int i = 0; i < 6; i++){
	if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u'){
		contador = contador + 1;
	}
	}
	return contador;
}
