#include <stdio.h>

int main() {
	int m[10][20]; // Matriz 10 linhas e 20 colunas.
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("Digite o elemento [%d][%d]: \n", i, j);
			scanf("%d", &m[i][j]);
			fflush(stdin);
		}
	}
	getchar();
}

