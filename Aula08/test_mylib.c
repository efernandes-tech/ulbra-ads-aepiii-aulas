#include "mylib.h"

int main() {
	int primeiro, segundo;
	printf("Informe primeiro numero: \n ");
	fflush(stdin);
	scanf("%d", &primeiro);
	fflush(stdin);
	printf("Informe segundo numero: \n ");
	scanf("%d", &segundo);
	printf("Resultado: %d ", soma(primeiro,segundo));
	getch();
}

