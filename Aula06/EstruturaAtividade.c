#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>



        
  // Aqui definir variáveis, ponteiros e estruturas utilizadas no programa
                           
         void Menu() {
              printf("       MENU Transporte:\n\n");
              printf("     1 - Incluir\n");
              printf("     2 - Excluir\n");
              printf("     3 - Localizar \n");
              printf("     4 - Listar todos\n");
              printf("     5 - Sair\n");
         }
         
//*******************************************************************
         void Incluir (){
              
      
         }
//*******************************************************************         
         void Excluir(){
     
         }
         
//*******************************************************************
  		void Localizar(){
     
         }

//*******************************************************************
		void Listar(){
     
         }
//*******************************************************************
         int main(){
	// Declarar as variáveis necessárias e alocações de memória
             int resp;
             int codigo = 0;
             do{
                system("cls");
                Menu();
                resp = getch();
                switch (resp){
                       case '1':
                            Incluir();
                            break;
                       case '2': 
			       			// Ler código de produto para passar à função exluir
                            Excluir(codigo);
                            break;
                       case '3': 
                            Localizar();
                            break;
   						case '4': 
                            Listar();
                            break;
                 }
             }	while(resp != '5');

             return 0;
         
         }
         
         
             
