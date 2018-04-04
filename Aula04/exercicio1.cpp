/*
1. Escrever uma sequência de números na vertical.
- Implementar e testar para os valores 10 e 25
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void esc_numero1(int num) {
	if (num > 0) {
		esc_numero1(num-1);
		printf("%d ",num);
	}
}

void esc_numero2(int num) {
	if (num > 0) {
		printf("%d ",num);
		esc_numero2(num-1);
	}
}

int main() {
	int numero=0;
	printf("Introduza o numero inicial (>0) \n");
	scanf("%d",&numero);
	esc_numero1(numero);
	printf("\n");
	esc_numero2(numero);
	printf("\n");
	system("pause");
}

