#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float getprom(int a);
void print(int a[6][6]);
int main(int argc, char** argv){
   int cal[6][6];
   int temp = 0;
   float result;
   int i, k;
    for(i = 0; i < 6; i++){
        for(k = 0; k < 6; k++){
		printf("Ingresa la calificacion de la materia %d, semestre %d: ", i + 1, k + 1);
        scanf("%d", &cal[i][k]);
        temp += cal[i][k];
		}
    }
	print(cal);
	result = getprom(temp);
	printf("El promedio total es: %.2f", result);
    getch();
}
float getprom(int cal2){
    int tot = cal2;
    float prom = tot/36;
    return prom;
}
void print(int a[6][6]){
	int i, j;
	printf("Calificaciones del alumno\nprom/mat1\t2\t3\t4\t5\t6\n");
	for(i = 0; i < 6; i++){
		printf("%d\t", i + 1);
		for(j = 0; j < 6; j++){
			printf(" %d\t", a[i][j]); 
		}
		printf("\n");
	}
}
