#include "dll.h"

int res(int x, int y) {
	if (x < y)
		return(x);
	return( res(x - y, y) );
}

DLLIMPORT int exercicio7() {
	int numerador;
	int divisor;
	printf("Numerador: ");
	scanf("%d",&numerador);
	printf("Divisor: ");
	scanf("%d",&divisor);
	printf("Resto : %d \n",res(numerador,divisor));
	system("pause");
}

