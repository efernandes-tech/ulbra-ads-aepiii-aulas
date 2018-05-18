#include <stdio.h>

int main() {
	int x, y, *px, *py;
	
	px = &x;
	py = &y;
	
	printf("Insira um valor em x \n");
	scanf("%d", &x);
	
	printf("Insira um valor em y \n");
	scanf("%d", py);
	
	*px = x + (*py); // Aqui a variavel "x" recebe "x+y".
	*py = *px; // Aqui a variavel "y" recebe "x".
}

