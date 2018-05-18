#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
	int valor1 = 5, valor2 = 15;
	int *mypointer;
	mypointer = &valor1;
	*mypointer = 10;
	mypointer = &valor2;
	*mypointer = 20;
	cout << "valor1=" << valor1 << "/ valor2=" << valor2 << endl;
	system("pause");
}

