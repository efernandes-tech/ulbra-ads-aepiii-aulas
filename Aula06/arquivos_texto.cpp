#include <stdio.h>

// Cria e abre arquivo.
int abre_arquivo() {
	FILE *fpin;
	char nome_arquivo[30];
	// Le o nome do arquivo.
	printf("\n Entre com o nome do arquivo: ");
	scanf("%s", nome_arquivo);
	// Abre o arquivo.
	fpin = fopen(nome_arquivo, "wt");
	fclose(fpin);
	return 0;
}

int main() {
	abre_arquivo();
}

