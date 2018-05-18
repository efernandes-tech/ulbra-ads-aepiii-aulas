#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int soma(int a, int b) {
    if (a < 1) {
        return 0;
    } else {
        return b + soma(a-1,b);
    }
}

// soma(2,2)
// 2 + soma(1,2)
// 2 + 2 + soma(0,2)
// 2 + 2 + 0
