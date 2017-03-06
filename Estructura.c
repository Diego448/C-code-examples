#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(){
	struct client{
		int a;
		float b;
		char c;
	}one={23, 2.27, 'a'};
	printf("a: %d, b: %f, c: %c", one.a, one.b, one.c);
	getch();
}