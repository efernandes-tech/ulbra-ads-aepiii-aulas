#include "trab.h"

// Criar um programa em C que leia uma string (texto) do teclado e transforme-o para maiúsculo, 
// caracter a caracter. Escrever o string modificado
extern int i;

int maiusculo()
{
  char s1[80];
  
  printf ("Ler string: \n");
  scanf("%s",s1);
  
  for(i=0; i< strlen(s1); i++) {
     putchar(toupper(s1[i]));
   putchar('\n');
  }
  system("pause");
}


