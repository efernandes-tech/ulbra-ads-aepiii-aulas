#include <stdio.h>
#include <conio.h>

int fatorial(int);

int main() {
	int n=6;
	
	printf("O fatorial de %d eh %d", n, fatorial(n));
}

int fatorial(int valor) {
	if (valor == 0) {
		return(1);
	} else {
		return(valor * fatorial(valor-1));
	}
}

