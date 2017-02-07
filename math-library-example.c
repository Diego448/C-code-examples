#include <stdio.h>
#include <math.h>
#include <conio.h>

int arreglo[] = {1, 2, 3};

int main() {
	printf("%.2f\n", sqrt(4.0));
	printf("%+f\n", ceil(-4.7));
	printf("%f\n", exp(4.0));
	printf("%d\n", (int)abs(-5.0));
	printf("%f\n", floor(4.1));
	printf("%f\n", pow(2.0, 3.0));
	printf("%d\n", sizeof(arreglo));
	getch();
	return 0;
}
