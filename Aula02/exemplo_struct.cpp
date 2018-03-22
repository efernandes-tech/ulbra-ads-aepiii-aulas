/*
O programa declara uma variavel ficha do tipo ficha_pessoal e preeche os seus dados.
O exemplo mostra como podemos acessar um elemento de uma estrutura: basta usar o ponto (.).
Assim, para acessar o campo telefone de ficha, escrevemos: ficha.telefone = 4921234;
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct ficha_pessoal {
	char nome[50];
	long int telefone;
	char rua[50];
	int numero;
	char bairro[20];
	char cidade[30];
	char sigla_estado[3];
	long int CEP;
};

int main() {
	struct ficha_pessoal ficha;
	strcpy(ficha.nome, "Luiz Osvaldo Silva");
	ficha.telefone = 4921234;
	strcpy(ficha.rua, "Rua das Flores");
	ficha.numero = 10;
	strcpy(ficha.bairro, "Cidade Velha");
	strcpy(ficha.cidade, "Belo Horizonte");
	strcpy(ficha.sigla_estado, "MG");
	ficha.CEP = 31340230;
	
	printf("%s \n", ficha.nome);
	printf("%d \n", ficha.telefone);
	printf("%s \n", ficha.rua);
	printf("%i \n", ficha.numero);
	printf("%s \n", ficha.bairro);
	printf("%s \n", ficha.cidade);
	printf("%s \n", ficha.sigla_estado);
	printf("%d \n", ficha.CEP);
	
	system("pause");
}

