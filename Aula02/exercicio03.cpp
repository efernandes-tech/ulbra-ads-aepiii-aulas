/*
3 - Fazer um programa que leia e mostre um vetor de 20 elementos inteiros e , a seguir,
conte quantos valores pares existem no vetor.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
	int s1[20];
	int i, contpar=0;

	for(i=0; i < 20; i++) {
		printf("Lendo posicao %i vetor: \n", i);
		scanf("\n %d", &s1[i]);
		if (s1[i]%2) {
			contpar++;
		}
	}
	printf("quantidade de pars %i : \n", contpar);
	system("pause");
}

