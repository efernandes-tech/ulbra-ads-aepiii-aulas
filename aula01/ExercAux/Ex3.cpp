/* Este programa apresenta uma solução para o exercício 3 da aula 11
Descrição: Encontrar o consumo médio de um veículo, conhecidos a distância 
total e o volume de combustível consumido para percorrer uma distância.
Criado em: 17/05/2008 Por: Edemar Costa Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

float Qtd_Chuva_em_polegadas, Qtd_Chuva_em_mm;

int main()
{
    float consumo,combustivel,distancia;
    system("color f1");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n");
    printf("\t\xb0 C\xa0lculo consumo  \xb0\n");
    printf("\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0");
    printf("\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\n\n");
   
    printf("Dist\x83ncia percorrida (em KM): ");
    scanf("%f",&distancia);
    printf("\n Quantidade de combust\xa1vel gasto para fazer o percurso (em LITROS): ");
    scanf("%f",&combustivel);
    consumo= distancia/combustivel;
    printf("\nEste ve\xa1 culo anda : %.2f %s \n\n",consumo," Km para cada litro de combust\xa1vel.");
    system("pause");    
}
