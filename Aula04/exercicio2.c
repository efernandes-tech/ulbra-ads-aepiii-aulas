/*
2. Cálculo do resto da divisão de dois números.
- Considere a seguinte função que calcula o resto da divisão de dois números, através
da sucessiva subtração ao 1º número do valor do 2º número.
- Método Recursivo.
- Implementar, testar e fazer o método interativo e a sequência temporal para os
valores: 20/3 e 12/4
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int res(int x, int y) {
	if (x < y) {
		return(x);
	}
	return(res(x - y, y));
}

int main() {
	int numerador;
	int divisor;
	printf("Numerador: ");
	scanf("%d", &numerador);
	printf("Divisor: ");
	scanf("%d", &divisor);
	printf("%d \n", res(numerador, divisor));
	system("pause");
}

