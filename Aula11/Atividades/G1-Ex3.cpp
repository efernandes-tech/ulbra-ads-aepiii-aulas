#include "biblioteca.h"

void mostra(int *dados) 
{ 
	for (int i=0; i <10;i++)
		printf("\%d ", dados[i]);
} 

int exercicio3() 
{
	int vetor[10]; 
	for (int i=0; i<10;i++) {
		printf("Digite: ");
		scanf("%d",&vetor[i]);
	}
 	mostra (vetor);        
	system("PAUSE"); 
}

