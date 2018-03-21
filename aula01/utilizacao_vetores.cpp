#include <stdio.h>

int main() {
	int vet[5], i, soma = 0; // Declaração de vetor tamanho 5.
	printf("Digite 5 valores: \n");
	for (i = 0; i < 5; i++) {
		scanf("%i", &vet[i]); // Posição inicial = 0 e final = 4.
		fflush(stdin);
		soma += vet[i];
	}
	printf("Soma dos elementos: %i \n", soma);
	getchar();
}

