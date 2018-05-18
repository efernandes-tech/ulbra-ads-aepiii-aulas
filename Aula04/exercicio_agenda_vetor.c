//  Agenda utilizando ponteiros e structs simulando um vetor alocado dinâmicamente.
//================================================================================
// Exercício 2 da aula 3: Cada posição do vetor deverá armazenar:
// Horário: composto de hora, minutos e segundos.
// Data: composto de dia, mês e ano.
// Compromisso: composto de uma data, horário e texto que descreve o compromisso.
//===============================================================================
// A solução abaixo resolve o exercício, porém só tem informação de horário.
// Complete com as demais informações solicitadas no exercício.
// Fazer o cadastro de 3 compromissos completos e depois mostrar.

#include <stdio.h>
#include <stdlib.h>

struct agenda {
	int hora;
	int minutos;
	int segundos;
};

int main() {
	// Declara um ponteiro do tipo agenda.
	struct agenda *alunos;
	int n, i;

	// Aloca memória para o vetor do tipo agenda na quantidade solicitada.
	alunos = (agenda *) malloc(sizeof(agenda) * n);

	printf("\n Informe a quantidade de cadastros : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("\n Informe a agenda : %d \n hora/minuto/segundo : ", i+1);
		scanf("%d", &alunos[i].hora);
		scanf("%d", &alunos[i].minutos);
		scanf("%d", &alunos[i].segundos);
	}

	printf("\n Foram cadastrados :");
	for (i = 0; i < n; i++) {
		printf("%d ", alunos[i].hora);
		printf("%d ", alunos[i].minutos);
		printf("%d ", alunos[i].segundos);
	}

	// free(alunos);
	return(0);
}

