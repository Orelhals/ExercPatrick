#include <stdio.h>
#include <stdlib.h>

int calculaMdc(int x, int y) {
    int i, menor;

    if (x < y) {
        menor = x;
    } else {
        menor = y;
    }

    for (i = menor; i > 1; i--) {
        if (x % i == 0 && y % i == 0) {
            return i;
        }
    }

    return 1;
}

int main() {
    int x, y, mdc;

    printf("Insira dois numeros para saber o maior divisor comum entre eles: \n");
    scanf("%d %d", &x, &y);

    mdc = calculaMdc(x, y);
    printf("%d", mdc);

    return 0;
}
