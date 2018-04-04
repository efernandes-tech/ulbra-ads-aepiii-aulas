/*
5
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define max 10

int main(void) {
	int i, j, soma=0;
	int array[max][max];
	
	// Lê a matriz.
	for(i = 0; i <= max; i++) {
		for(j = 0; j <= max; j++) {
			printf("\n lendo posição %d - %d da matriz ", i, j);
			scanf("%d", &array[i][j]);
			fflush(stdin);
		}
	}

	for(i = 0; i <= max; i++) {
		for(j = 0; j <= max; j++) {
			printf("%d", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// Diagonal principal i = j.
	for(i = 0; i <= max; i++) {
		for(j = 0; j <= (max-(i+1)); j++) {
			soma += array[i][j];
		}
	}
	
	// Mostra soma dos elementos.
	printf("A soma dos elementos da area marcada e : %d \n", soma);

	system("pause");
}

