#include "biblioteca.h"

int exercicio1() {
	int x,y, *p1, *p2;
	p1= &x;
	p2=p1;
	*p2=3;
	*p2=*p2+x;
	p2=&y;
	*p2=4;
	*p2=*p2+1;
	printf("%d %d",*p1,*p2);
	getch();
	system("pause");
}

