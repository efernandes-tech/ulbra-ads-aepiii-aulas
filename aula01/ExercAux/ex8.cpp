/* Este programa apresenta uma solução para o exercício 8 da aula 11
Descrição: Escreva um programa que leia uma strings de 6 posições e mostre a string invertida na tela. 
Criado em: 29/05/2008 Por: Edemar Costa Oliveira
*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    char string[6];
    system("color f1");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n");
    printf("\t\xb0 Invertendo texto  \xb0\n");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n\n");
   
    printf("Informe um texto de 6 posi\x87oes: ");  gets(string);
    printf("\n Texto invertido : ");
    printf("%c%c%c%c%c%c \n\n",string[5],string[4],string[3],string[2],string[1],string[0]);
    system("pause");    
}
