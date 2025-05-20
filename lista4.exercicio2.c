//  Escreva um programa em C para ler um vetor R (de 5 elementos) e um vetor S (de 10 elementos). Gere um vetor X que possua os elementos comuns a R e a S. Considere que pode existir repetição de elementos no mesmo vetor. Nesta situação somente uma ocorrência do elemento comum aos dois deve ser copiada para o vetor X. Após o término da cópia, escrever o vetor X.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int R[5], S[10], X[5]; // X pode ter no máx 5 elementos
    int i, j, k = 0;
    bool existe;

    printf("Digite 5 números inteiros para R:\n");
    for(i = 0; i < 5; i++) {
        printf("R[%d]: ", i);
        scanf("%d", &R[i]);
    }

    printf("\nDigite 10 números inteiros para S:\n");
    for(i = 0; i < 10; i++) {
        printf("S[%d]: ", i);
        scanf("%d", &S[i]);
    }

    // elementos comuns em R e S
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 10; j++) {
            if(R[i] == S[j]) {
                // confere se o elemento já está em X
                existe = false;
                for(int m = 0; m < k; m++) {
                    if(X[m] == R[i]) {
                        existe = true;
                        break;
                    }
                }
                // se não, adiciona ao vetor X
                if(!existe) {
                    X[k] = R[i];
                    k++;
                }
                break;
            }
        }
    }

    printf("\nVetor X (elementos comuns entre R e S):\n");
    for(i = 0; i < k; i++) {
        printf("X[%d]: %d\n", i, X[i]);
    }

    return 0;
}