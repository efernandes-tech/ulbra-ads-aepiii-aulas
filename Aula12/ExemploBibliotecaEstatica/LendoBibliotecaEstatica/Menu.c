#include "Rotinas.h"

int main() {
	system("color 8");

	do {
		printf("\n=================================================");
		printf("\n**** Utilizando biblioteca estatica em C ***");
		printf("\n**************** Aula 12 - Alg III ***************");
		printf("\n==================================================");
		printf("\nEscolha Opcao:\n");
		printf("\n 1 - Rotina 1");
		printf("\n 2 - Rotina 2");
		printf("\n 3 - SAIR");
		printf("\n=================================");
		printf("\n\n Informe a opcao desejada:.. ");

		scanf("%d",&opt);

		switch(opt) {
			case 1:
				leInt();
				break;
			case 2:
				mostraInt(5);
				break;
		}
	} while(opt!= 3);

	getche();
}
