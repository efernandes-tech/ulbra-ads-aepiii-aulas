/*
1 - Criar um programa em C que leia uma string (texto) do teclado e transforme-o para
maiúsculo, caracter a caracter. Escrever o string modificado.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
	char s1[80];
	int i;
	printf("Ler string: \n");
	gets(s1);

	for(i=0; i < strlen(s1); i++) {
		putchar(toupper(s1[i]));
		putchar('\n');
	}
	system("pause");
}

