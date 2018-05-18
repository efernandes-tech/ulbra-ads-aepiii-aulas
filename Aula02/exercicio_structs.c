/*
- Criar uma estrutura contendo dados cadastrais de uma pessoa:
struct tipo_endereco
{
	char nome[50];
	int idade;
	char rua [50];
    int numero;
    char cidade [30];
};
- Criar um vetor de 10 posições do tipo dessa estrutura.
- No início do programa o vetor estará vazio.
- Fazer o programa em loop (comando de repetição) e um menu com as seguintes opções:
    1- Incluir novo
	2- Excluir da lista
	3- Alterar nome
	4- Listar todos
	5- Sair
- O sistema poderá incluir endereços enquanto houver posição vazia.
- A posição será considerada vazia se a informação codigo for = 0 zero.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int opt, posicao, i;

struct tipo_endereco {
	int codigo;
	char nome [50];
	int idade;
	char rua [50];
	char cidade [30];
};

main (void) {
	struct tipo_endereco ficha[10];
	posicao = 0;
	for (i=0; i<=9; i++) {
		ficha[i].codigo = 0;
	}

	do {
		printf("\n Escolha Opção:");
		printf("\n 1- Incluir novo");
		printf("\n 2- Excluir da lista");
		printf("\n 3- Alterar nome");
		printf("\n 4- Listar todos");
		printf("\n 5- Sair \n");
		scanf("\n %d",&opt);

		if (opt == 1) {
			system("cls");
			for (i=0; i<=9; i++) {
				if (ficha[i].codigo == 0) {
					printf("\n Incluir registro : %d", posicao);
					printf("\n Nome ");
					fflush(stdin);
					gets(ficha[i].nome);
					fflush(stdin);
					printf("\n Idade ");
					fflush(stdin);
					scanf("\n%d", &ficha[i].idade);
					fflush(stdin);
					printf("\n Rua ");
					gets(ficha[i].rua);
					printf("\n Cidade ");
					gets(ficha[i].cidade);
					posicao++;
					ficha[i].codigo = i+1;
					break;
				}
			}
		}

		if (opt == 2) {
			system("cls");
			printf("\n Escolha posição para excluir \n");
			scanf("\n %d", &posicao);
			if (posicao > 0 && posicao < 10) {
				ficha[posicao].codigo = 0;
				printf("\n Posição livre %d ", posicao);
			} else {
				printf("\n Posição errada \n");
			}
		}

		if (opt == 3) {
			system("cls");
			printf("\n Escolha posição para alterar \n");
			scanf("\n %d", &posicao);
			if (posicao > 0 && posicao < 10) {
				printf("\n Alterar nome %s posicao %d", ficha[posicao].nome, posicao);
				printf("\n Novo nome ");
				fflush(stdin);
				gets(ficha[posicao].nome);
				fflush(stdin);
				printf("\n Idade ");
				fflush(stdin);
				scanf("\n%d", &ficha[posicao].idade);
				fflush(stdin);
				printf("\n Rua ");
				gets(ficha[posicao].rua);
				printf("\n Cidade ");
				gets(ficha[posicao].cidade);
			} else {
				printf("\n Posição errada \n");
			}
		}
		
		if (opt == 4) {
			system("cls");
			for (i=0; i<=9; i++) {
				if (ficha[i].codigo != 0) {
					printf(" Registro: %d ", ficha[i].codigo);
					printf("%s -", ficha[i].nome);
					printf("%d -", ficha[i].idade);
					printf("%s -", ficha[i].rua);
					printf("%s \n", ficha[i].cidade);
				}
			}
		}
	} while(opt!= 5);
}

