// Cria arquivo com nome e nota, mostra o conteúdo,
// em seguida adiciona mais elementos ao arquivo e mostra novamente.

#include <stdio.h>
#include <stdlib.h>

FILE *fpin;

// Abre e grava arquivo contendo um nome e uma nota.
int abre_arquivo() {
	char nome[30];
   	int nota;
   	char nome_arquivo[32];

  	// Le o nome do arquivo.
  	printf("\n Entre com o nome do arquivo:");
  	scanf("%s",nome_arquivo);

   	// Abre o arquivo.
   	fpin = fopen(nome_arquivo,"wt");

   	// Le nomes e notas e grava no arquivo.
   	while (nota >= 0) {
		printf("\n Nome da pessoa:");
        scanf("%s",nome);
        printf("\n Nota desta pessoa:");
        scanf("%d", &nota);
	
		if (nota >= 0) {
			fprintf(fpin, "%s %d", nome, nota);
		}
    }

   	fclose(fpin);
   	return 0;
}

void le_arquivo() {
	char nomealuno[15];
   	int notaaluno;

    fpin = fopen("ed.arq", "rt");
   	printf("\n\n****** conteudo do arquivo *********");
   	while (fscanf(fpin, "%s %d", nomealuno, &notaaluno) != EOF) {
		printf("\n Nome: %s - Nota: %d \n", nomealuno, notaaluno);
	}

	fclose(fpin);
}

int main() {
   	abre_arquivo();
   	le_arquivo();
   	system("pause");
}

