// Inicialize um vetor de inteiros aleatoriamente e percorra o vetor usando dois ponteiros : um começando do início do vetor e outro do final até se encontrarem no meio. Obs : O vetor deve conter um número par de elementos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10  // deve ser PAR

int main() {
    int v[TAM];
    int *p1, *p2;
    int i;

    // gerador de números aleatórios
    srand(time(NULL));

    // preencher o vetor com valores aleatórios
    for (i = 0; i < TAM; i++) {
        v[i] = rand() % 100;  // valores entre 0 e 99
    }

    printf("Vetor:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n\n");

    p1 = v;              // início do vetor
    p2 = v + TAM - 1;    // final do vetor

    printf("Percorrendo com dois ponteiros:\n");
    while (p1 < p2) {
        printf("Inicio: %d\tFim: %d\n", *p1, *p2);
        p1++;
        p2--;
    }

    return 0;
}