/* Este programa apresenta uma solução para o exercício 10 da aula 11
Descrição: Um cliente deseja construir uma piscina de 18 m3. ( 3 m de lado e 2 m de altura). 
Sabendo-se que a piscina será de azulejos que possuem lados B1, B2 e que custam X reais o m2. 
Fazer um programa C++ capaz de calcular:

a)	A quantidade aproximada de azulejos necessários.
b)	O custo total para cobrir todo o espaço do projeto da piscina.

Criado em: 29/05/2008 Por: Edemar Costa Oliveira
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float Lado1,Lado2,quantidade_azulejos, custo_total,area_azulejos, valor_metro, area_piscina;
    system("color f1");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n");
    printf("\t\xb0 Custos da piscina \xb0\n");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n\n");
    
    printf("\n Informe o valor do metro quadrado do azulejo: ");
    scanf("%f", &valor_metro);
    
    printf("\n Informe as medidas dos lados do azulejo utilizado: \n");
    printf("Lado 1: "); scanf("%f", &Lado1);
    printf("\n Lado 2: "); scanf("%f", &Lado2);
    
    //Área total da piscina fundo x lado x 4 + fundo x fundo 
    area_piscina=((3*2)*4) + 3*3; // 33m2
    
    area_azulejos=(Lado1*Lado2); 
     
    quantidade_azulejos=(area_piscina*10000)/area_azulejos; // 33m2 converte pra área em cm2 antes de dividir
    
    printf("\n Quantidade necessaria de azulejos: %.2f \n", quantidade_azulejos);

    custo_total = area_piscina * valor_metro;
    printf("\n Custo total projeto piscina: %.2f \n\n", custo_total);
    system("pause");
}
