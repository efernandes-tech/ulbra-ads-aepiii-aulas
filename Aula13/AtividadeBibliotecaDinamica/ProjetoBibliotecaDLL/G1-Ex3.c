#include "dll.h"

void mostra(int *dados) 
{ 
    int i;
	for (i=0; i <10;i++) {
		printf("\%d ", dados[i]);
    }
} 

DLLIMPORT int exercicio3() 
{
	int vetor[10], i; 
	for (i=0; i<10;i++) {
		printf("Digite: ");
		scanf("%d",&vetor[i]);
	}
 	mostra(vetor);        
	system("PAUSE"); 
}

