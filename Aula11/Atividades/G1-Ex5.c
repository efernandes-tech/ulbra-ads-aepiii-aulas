#include "biblioteca.h"

void move(int x, int y) {
	int aux;
	aux = x;
	x = y;
	y = aux;
}

int exercicio5() {
	int a=20,b=10;
	move(a, b);
	printf("%d ",a - b);
	printf("%d ",a + b);
	system("pause");
}

