/* Este programa apresenta uma solução para o exercício 1 da aula 11
Descrição: Lê um número inteiro e calcula o dobro e o cubo deste número
Criado em: 17/05/2008 Por: Edemar Costa Oliveira
*/
#include <stdio.h>
#include <conio.h>

int numero, dobro, cubo;

int main()
{
    printf("\n Informe o número inteiro: ");
    scanf("%d", &numero); 

    dobro = numero * numero;
    cubo = numero * numero * numero; // poderia ser dobro * numero

    printf("\n O dobro deste número é: %d", dobro);
    printf("\n O cubo deste número é: %d", cubo);

    getch();
}
