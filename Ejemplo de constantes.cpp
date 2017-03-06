#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int entero, caracter, notacionCientifica, notacionCientifica2;
	long int enteroLargo;
	long enteroLargo2;
	float decimal;
	double decimalDoblePrecision;
	
	entero = 45;
	caracter = 'c';
	notacionCientifica = 13e2;
	notacionCientifica2 = 1553-1;
	enteroLargo = 13000l;
	decimal = 1.22f;
	decimalDoblePrecision = 1.23439;
	printf("%d", notacionCientifica);
	getch();
	return 0;
}