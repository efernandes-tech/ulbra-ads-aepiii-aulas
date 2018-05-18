/* Este programa apresenta uma solução para o exercício 9 da aula 11
Descrição: Fazer um programa para calcular a média aritmética entre 3 notas de um aluno. 
A média deve prever valores com até 2 casas decimais.
Criado em: 29/05/2008 Por: Edemar Costa Oliveira
*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main()
{
    float nota1, nota2, nota3, media;
    system("color f1");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n");
    printf("\t\xb0 M\x82 dia de notas \xb0\n");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n\n");
    
    printf("Digite a nota 1: ");
    scanf("%f",&nota1);
    printf("Digite a nota 2: ");    
    scanf("%f",&nota2);
    printf("Digite a nota 3: ");    
    scanf("%f",&nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("A media do aluno \x82: %.2f \n",media);
    system("pause");    
}
