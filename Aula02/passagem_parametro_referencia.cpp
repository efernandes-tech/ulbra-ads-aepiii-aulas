/*
Neste exemplo a passagem de parâmetro é ilustrada na chamada troca(&a,&b) de
main. Nesta chamada, os endereços dos argumentos a e b, escritos da forma &a e
&b são passados para as variáveis ponteiros x e y. Assim, os valores de a e b são
atualizados de acordo com as modifica-ções em x e y.
*/

#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y) {
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}

int main() {
	int a = 0, b = 5;
	troca(&a, &b);
	printf("%d %d", a, b);
}

