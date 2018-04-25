#include "trab.h"

// Criar um programa que leia um caracter e um string do teclado, 
// e informe se o caracter está contido no texto lido.
extern int i;

int contido()
{
  char s1[80], s2;
  printf ("Ler string: \n");
  scanf("%s",&s1); fflush(stdin);
  printf ("Ler caracter: \n");
  scanf("%c",&s2);
  
  for(i=0; i< strlen(s1); i++) {
     if (s1[i] == s2)      
         printf("%c está contido na posição %d em %s \n",s2,i,s1);
  }
  system("pause");
}


