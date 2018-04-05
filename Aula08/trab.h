#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int i, pos;

struct tipo_endereco {
	int codigo;
	int numero;
	char nome[50];
	char rua[50];
	char cidade[30];
	char cep[10];
} ficha[10];

char escrever(char texto[500]) {
	printf("%s", texto);
}

// Cadastro de pessoas.
void insere() {
	for(i=0; i<2; ++i) {
		if (ficha[i].codigo==0) {
			printf("\n==============================\n");
			printf("Codigo:..");
			scanf("%d", &ficha[i].codigo);
			fflush(stdin);
			printf("Nome:..");
			scanf("%s", &ficha[i].nome);
			fflush(stdin);
			printf("Rua:..");
			scanf("%s", &ficha[i].rua);
			fflush(stdin);
			printf("numero:..");
			scanf("%d", &ficha[i].numero);
			fflush(stdin);
			printf("cidade:..");
			scanf("%s", ficha[i].cidade);
			printf("cep:..");
			scanf("%s", &ficha[i].cep);
			printf("\n==============================\n");
			printf("\n\nCadastro realizado com sucesso!!!\n\n\a");
			break;
		}
	}
};

// Deleta a pessoa cadastrada através do código.
void deleta() {
	int cod;
	printf("\n\n Informe o codigo a excluir:..");
	scanf("%d", &cod);
	for(i=0; i<2; i++) {
		if (ficha[i].codigo==cod) {
			ficha[i].codigo=0;
			break;
		}
	}
};

// Altera o nome da pessoa, através do codigo.
void altera_nome() {
	char nome[50];
	int codigo=0;
	printf("Digite o codigo do usuario:\n");
	scanf("%d", &codigo);
	for(i=0; i<10; ++i) {
		if (ficha[i].codigo == codigo) {
			fflush(stdin);
			printf("Digite o nome a ser alterado:\n");
			gets(nome);
			strcpy(ficha[i].nome, nome);
		}
	}
};

// Lista todas as pessoas cadastradas.
void lista_todos() {
	for(i=0; i<2; i++) {
		if (ficha[i].codigo!=0) {
			printf("\n=================================");
			printf("\nCodigo:..%d %d\n", ficha[i].codigo,i);
			printf("\nNome:..%s", ficha[i].nome);
			printf("\nRua:..%s", ficha[i].rua);
			printf("\nNumero:..%d", ficha[i].numero);
			printf("\nCidade:..%s", ficha[i].cidade);
			printf("\nCep:..%s", ficha[i].cep);
			printf("\n==================================\n\n");
		}
	}
};

