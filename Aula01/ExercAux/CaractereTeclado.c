/* Lê caractere do teclado e mostra o valor
Criado em: 29/05/2008 Por: Edemar Costa Oliveira
*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    char letra;
    system("color f1");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n");
    printf("\t\xb0 Caracter ASCII  \xb0\n");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n\n");
   
    printf("Digite um caracter: ");
    //scanf("%c", &letra);
    letra = getch();
    printf("C\xA2 digo ASCII corresponde % d \n\n", letra);
    if (letra==27)
    	printf("Foi o esc....");
    system("pause");    
}
