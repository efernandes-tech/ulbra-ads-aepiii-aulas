#include "dll.h"

int calcula(int x, int y) {
	printf("%d  %d \n",x,y);
	if (y == 1)
		return(x+y);
	else
		return(y + calcula(x, y-1));
}

DLLIMPORT int exercicio4() {
	printf("\n %d \n",calcula(6,8));
	system("pause");
}

