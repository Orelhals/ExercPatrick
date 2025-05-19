// 1. Escreva um programa em C para ler um vetor X de 10 elementos inteiros. Logo após copie os elementos do vetor X para um vetor Y fazendo com que o 1o. elemento de X seja copiado para o 10o. de Y, o 2o. de X para o 9o. de Y e assim sucessivamente. Após o término da cópia, imprimir o vetor Y.

#include <stdio.h>


int main() {
    int x[10], y[10];
    int i;

    // vetor x
    printf("Digite 10 números inteiros para o vetor x:\n");
    for(i = 0; i < 10; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    // invertendo os elementos de x para y
    for(i = 0; i < 10; i++) {
        y[9 - i] = x[i];
    }

    // vetor y
    printf("\nVetor Y (invertido):\n");
    for(i = 0; i < 10; i++) {
        printf("y[%d]: %d\n", i, y[i]);
    }

    return 0;
}