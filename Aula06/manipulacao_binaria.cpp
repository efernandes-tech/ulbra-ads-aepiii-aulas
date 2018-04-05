#include<stdio.h>
#include<conio.c>
#include<string.h>

void cadastrar();
void relatorio();

struct pessoas {
	int idade;
	char nome[80], cpf[15];
} reg;

FILE *arq;
int teste;
char resp;

main() {
	char op;
	do {
		clrscr();
		gotoxy(10,3);
		printf("      Menu      ");
		gotoxy(10,4);
		printf("================");
		gotoxy(10,6);
		printf(" 1 - Cadastrar");
		gotoxy(10,7);
		printf(" 2 - Relatorio");
		gotoxy(10,8);
		printf(" 3 - Sair");
		gotoxy(10,12);
		printf(" Opcao: ");
		gotoxy(18,12);
		op=getche();
		switch(op) {
			case '1':
				cadastrar();
				break;
			case '2':
				relatorio();
				break;
			case '3':
				clrscr();
				gotoxy(10,10);
				printf("O programa foi encerrado.");
				gotoxy(10,12);
				printf("Tecle algo para sair...");
				getch();
				break;
			default:
				gotoxy(10,15);
				printf("Opcao invalida.");
				gotoxy(10,17);
				printf("Tecle algo para continuar...");
				getch();

		}
	} while(op!='3');
}

void cadastrar() {
	resp='S';

	arq=fopen("pessoas.txt","ab");

	if(arq) {
		while(resp=='S' || resp=='s') {
			clrscr();
			gotoxy(10,3);
			printf("Cadastro de Pessoa");
			gotoxy(10,5);
			printf("==========================================================");
			gotoxy(10,7);
			printf("Nome.........................: ");
			fflush(stdin);
			fgets(reg.nome,80,stdin);
			gotoxy(10,9);
			printf("Idade........................: ");
			scanf("%i",&reg.idade);
			gotoxy(10,11);
			printf("CPF..........................: ");
			fflush(stdin);
			fgets(reg.cpf,15,stdin);

			teste=fwrite(&reg,sizeof(struct pessoas),1,arq);

			if(teste) {
				gotoxy(10,13);
				printf("Registro gravado com sucesso!");
			}

			gotoxy(10,16);
			printf("Deseja continuar? S/N ");
			resp=getche();
		}
		fclose(arq);
	}
}

void relatorio() {
	int linha=9,total=0;

	arq=fopen("pessoas.txt","rb");

	clrscr();
	if(arq) {
		gotoxy(10,3);
		printf("Relatorio com a listagem geral de pessoas");
		gotoxy(10,5);
		printf("=========================================================");
		gotoxy(10,7);
		printf("Nome                         Idade      CPF");

		while(!feof(arq)) {
			teste=fread(&reg,sizeof(struct pessoas),1,arq);

			if(teste) {
				gotoxy(10,linha);
				puts(reg.nome);
				gotoxy(40,linha);
				printf("%i",reg.idade);
				gotoxy(50,linha);
				puts(reg.cpf);

				total++;

				if(linha<17)
					linha++;
				else {
					gotoxy(10,22);
					printf("Tecle ENTER p/ continuar exibindo os registros.");
					getch();
					gotoxy(10,9);
					delline();
					gotoxy(10,17);
					insline();
				}
			}
		}
		gotoxy(10,22);
		printf("Relatorio concluido, total de pessoas resgistrados: %i",total);
		gotoxy(10,23);
		printf("Tecle algo para voltar ao menu...");
		getch();
		fclose(arq);
	} else {
		gotoxy(10,8);
		printf("Arquivo vazio.");
		gotoxy(10,10);
		printf("Tecle algo para voltar ao menu...");
		getch();
	}
}

