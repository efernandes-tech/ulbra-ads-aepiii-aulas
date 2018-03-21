/* Este programa apresenta uma solução para o exercício 6 da aula 11
Descrição: Calcular o valor da função :   
f (x,y) = 3x2+ 2y2-xy em um ponto qualquer do plano cartesiano.  
Criado em: 29/05/2008 Por: Edemar Costa Oliveira
*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    float x, y, funcao;
    system("color f1");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\n");
    printf("\t\xb0 3x2+ 2y2-xy  \t\xb0\n");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\n\n");
   
    printf("Digite o valor de X: ");
    scanf("%f",&x);
    printf("Digite o valor de Y: ");    
    scanf("%f",&y);
    funcao = 3 * (x*x) +2 * (y*y) - (x*y);
    printf("O resultado da funcao foi: \n %.2f %s %.2f %s %.2f %s %.2f %s %.2f %s %.2f \n\n",x," x * (x*x) ",(x*x)," + ",y," y * (y*y) ",(y*y)," - x*y ",x*y," = ",funcao);
    system("pause");    
}
