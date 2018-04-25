#include "trab.h"

// Criar um programa que leia uma matriz 3x3 de inteiros e mostre na tela 
// a média aritmética de seus elementos. 
extern int i;

int matriz()
{
  int j, total=0;
  float media;
  int array[3][3];
 //Lê a matriz   
  for(i = 0; i <= 2; i++)
    for(j = 0; j <= 2; j++){
        printf("\n lendo posição %d - %d da matriz ",i+1,j+1);
        scanf("%d",&array[i][j]);
    }
 //Soma seus elementos
 for(i = 0; i <= 2; i++)
    for(j = 0; j <= 2; j++)
        total += array[i][j];
 
   media = total / 9;
   printf("\n A média dos valores da matriz é: %.2f \n",media);

   system("pause");
}


