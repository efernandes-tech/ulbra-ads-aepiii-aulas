/*
Neste exemplo a passagem de parâmetros é ilustrada na chamada soma(v1,v2) de
main. Nesta chamada, os argumentos v1 e v2 são passados por valor e os
parâmetros formais (p1 e p2) da função soma usam cópias dos valores de v1 e v2
respectivamente. Ainda, na função soma o valor de p1 é alterado, mas a variável
v1 de main permanece inalterada.
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int p1, int p2) {
	p1 += p2;
	return p1;
}

int main() {
	int v1 = 3, v2 = 5;
	printf("%d\n", soma(v1,v2));
	system("pause");
}

