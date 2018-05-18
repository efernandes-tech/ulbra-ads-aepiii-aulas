#include "trab.h"
int opt;
int i;

int main()
{
        
     do
     {
      printf("%s","\n =================================================");
      printf("%s","\n**** Projeto exemplo em C ***");  
      printf("%s","\n**************** Aula 11 - Alg III ***************");                                                        
      printf("%s","\n==================================================");
      printf("%s","\nEscolha Opcao:\n");
      printf("%s","\n 1 - Media matriz 3x3 ");
      printf("%s","\n 2 - Converter texto para maiusculo");
      printf("%s","\n 3 - Caracter contido no texto");
      printf("%s","\n 4 - contar Pares do vetor de 10 elementos");
      printf("%s","\n 5 - SAIR");
      printf("%s","\n=================================");
      printf("%s","\n\n Informe a opcao desejada:.. ");
    
      scanf("%d",&opt);
           system("cls");
            switch(opt)
            {
                        case 1:
                            matriz();                             
                            break;
                        case 2:
                               maiusculo();
                               break;
                        case 3:
                               contido();
                               break;
						case 4:
                               pares();
                               break;                               
            }
     }
     while(opt!= 5);
    
     getche();
}
