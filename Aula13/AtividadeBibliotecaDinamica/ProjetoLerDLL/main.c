#include <stdio.h>
#include <stdlib.h>

int opt;

int main() {
	do {
		system("cls");
		
		printf("%s","\n==============================");
		printf("%s","\n= Projeto Questoes G1 - 2018 =");
		printf("%s","\n= Aula 11 - Alg I I I        =");
		printf("%s","\n==============================");
		printf("%s","\nEscolha Opcao: \n");
		printf("%s","\n1 - Exercicio 1 ");
		printf("%s","\n3 - Exercicio 3 ");
		printf("%s","\n4 - Exercicio 4 ");
		printf("%s","\n5 - Exercicio 5 ");
		printf("%s","\n7 - Exercicio 7 ");
		printf("%s","\n0 - SAIR");
		printf("%s","\n==============================\n");
		printf("%s","\nInforme a opcao desejada: ");

		scanf("%d", &opt);

		switch(opt) {
			case 1: system("cls"); exercicio1(); break;
			case 3: system("cls"); exercicio3(); break;
			case 4: system("cls"); exercicio4(); break;
			case 5: system("cls"); exercicio5(); break;
			case 7: system("cls"); exercicio7(); break;
		}
	} while(opt != 0);
}

