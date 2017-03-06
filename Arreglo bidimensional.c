#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float getprom(int a);
void print(int a[7][7]);
void getprom2(int b[7][7]);
int main(int argc, char** argv){
   int cal[7][7];
   int temp = 0;
   float result;
   int i, k;
    for(i = 0; i < 6; i++){//Obtiene lso datos de las calificaciones del alumno (sólo enteros): 
        for(k = 0; k < 6; k++){
		printf("Ingresa la calificacion de la materia %d, semestre %d: ", i + 1, k + 1);
        scanf("%d", &cal[i][k]);
        temp += cal[i][k];
		}
    }
	print(cal);
	result = getprom(temp);
	getprom2(cal);
	printf("El promedio total es: %.2f", result);
    getch();
}
float getprom(int cal2){//Obtiene el promedio total de las calificaciones.
    int tot = cal2;
    float prom = tot/36;
    return prom;
}
void print(int a[7][7]){//Imprime en pantalla la matriz de datos que contines las calificaciones de las materias.
	int i, j;
	printf("Calificaciones del alumno\nsem/mat 1\t2\t3\t4\t5\t6\n");
	for(i = 0; i < 6; i++){
		printf("%d\t", i + 1);
		for(j = 0; j < 6; j++){
			printf("%d\t", a[i][j]); 
		}
		printf("\n");
	}
}
void getprom2(int b[7][7]){//Obtiene los promedio inividuales de materia y semestre.
	int i, j;
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			b[i][7] += b[i][j];
			b[7][j] += b[i][j];
		}
	}
	for(i = 0; i < 6; i++){
		printf("\nEl promedio del semestre %d es: %f", i, (float)b[i][7]/6);
		printf("\nEl promedio de la materia %d es: %f", i, (float)b[7][i]/6);
	}
}