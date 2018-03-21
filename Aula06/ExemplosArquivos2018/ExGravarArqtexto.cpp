#include <stdio.h>
#include <stdlib.h>

int main() {
	int nota = 10; 
	char Nome[15] = "AlgoritmosIII"; 

   	char nomealuno[15];
   	int notaaluno;

	FILE *fid;
	fid = fopen("teste.arq", "wt"); 
	fprintf(fid, "%s %d" , Nome, nota); 
	
	fclose(fid);

	fid = fopen("teste.arq", "rt");
    printf("\n\n****** conteudo do arquivo *********");
	while (fscanf(fid, "%s %d", nomealuno, &notaaluno) != EOF) {
		printf("\n Nome: %s - Nota: %d \n", nomealuno, notaaluno);
	}

	fclose(fid);

    system("pause");
 }

