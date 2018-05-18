#include "trab.h"

int opt;

int main() {
	system("color 8");

	do {
		escrever("\n=================================================");
		escrever("\n**** Utilizando minha propria biblioteca em C ***");
		escrever("\n**************** Aula 8 - Alg III ***************");
		escrever("\n==================================================");
		escrever("\nEscolha Opcao:\n");
		escrever("\n 1 - Incluir novo");
		escrever("\n 2 - Excluir nome");
		escrever("\n 3 - Alterar nome");
		escrever("\n 4 - Listar todos");
		escrever("\n 5 - SAIR");
		escrever("\n=================================");
		escrever("\n\n Informe a opcao desejada:.. ");

		scanf("%d",&opt);

		switch(opt) {
			case 1:
				insere();
				break;
			case 2:
				deleta();
				break;
			case 3:
				altera_nome();
				break;
			case 4:
				lista_todos();
				break;
		}
	} while(opt!= 5);

	escrever("\n\n Saída solicitada. Pressione uma tecla. ");

	getche();
}

