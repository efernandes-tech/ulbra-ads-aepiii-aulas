#include <stdio.h>
#include <stdlib.h>

int main() {
	int num = 10; char string[15] = "AlgoritmosIII";

	FILE *fid;

	fid = fopen("Aula6.bin","w+b");
	fwrite("Num: ", sizeof(char), 10, fid); // Escreve texto. 
	fwrite(&num, sizeof(int), 1, fid); // Escreve valor de num fclose(fid).

	fid = fopen("Aula6.bin","rb");

	fread(string, sizeof(char), 10, fid); // Lê string. 
	fread(&num, sizeof(int), 1, fid); // Lê inteiro. 
	fclose(fid);

	printf("\n Nome: %s \n", string);
	printf("\n Num:  %d \n", num);

    system("pause");
 }

