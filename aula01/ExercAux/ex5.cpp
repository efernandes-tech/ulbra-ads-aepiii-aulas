/* Este programa apresenta uma solução para o exercício 5 da aula 11
Descrição: O custo de um carro novo é composto por:
a. Custo de fábrica + percentagem do distribuidor (28%) + impostos (45%)
b. Leia o custo de fábrica e calcule o valor final para cada carro
Criado em: 29/05/2008 Por: Edemar Costa Oliveira
*/
#include<stdlib.h>
#include<stdio.h>

int main()
{
    system("color f1");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\n");
    printf("\t\xb0 Custo carro  \t\xb0\n");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\n\n");
    
    float custo, valor_total;
    printf("Informe o custo de fabrica do carro: ");
    scanf("%f",&custo);
    printf("\n"); 
    valor_total = (custo*0.28)+(custo*.45)+custo;
    printf("O valor total do carro \x82:\n \t %.2f %s %.2f %s %.2f %s %.2f \n\n",(custo*0.28)," (28%) + ",(custo*.45)," (45%)  + ",custo," = ",valor_total);
    system("pause");    
}
