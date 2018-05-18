#include "trab.h"
 
// Fazer um programa que leia e mostre um vetor de 10 elementos inteiros e , 
// a seguir, conte quantos valores pares existem no vetor.
extern int i;

int pares()
{
  int s1[10];
  int contpar=0;
    
  for(i=0; i< 10; i++) {
     printf ("Lendo posicao %i vetor: \n",i);  
     scanf ("%d",&s1[i]);    
     if (s1[i]%2)      
         contpar++;
  }
  printf ("quantidade de pars %i : \n",contpar);  
  system("pause");
}



