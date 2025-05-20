// O que será impresso na tela pelo seguinte programa:

#include <stdio.h>

int main() {
    int numbers[5];
    int *p;
    int n;

    p = numbers;
    *p = 10;  // numbers[0] = 10
    p++;
    *p = 20;  // numbers[1] = 20
    p = &numbers[2];
    *p = 30;   // numbers[2] = 30
    p = numbers + 3;
    *p = 40;        // numbers[3] = 40
    p = numbers;
    *(p + 4) = 50;     // numbers[4] = 50
    for (n = 0; n < 5; n++){
        printf("%d", numbers[n]);   // saída final: imprime 1020304050, sem espaços ou quebra de linha
    }
}