// Implemente uma função que receba como parâmetros um vetor de números inteiros v e seu comprimento n, e verifique se os elementos do vetor correspondem aos termos de uma PA(Progressão Aritmética), isto é, se existe um número inteiro k tal que v[i]=v[0]+k*i. Caso os elementos do vetor correspondam aos termos de uma PA, a função deve retornar o valor calculado para k. Por exemplo, se for passado para essa função o vetor {2,10,18,26,34} a função deve retornar o valor 8. Caso o vetor não corresponda a uma PA, a função deve retornar o valor 0. Assuma que o vetor sempre terá pelo menos 3 elementos. Essa função deve ter o seguinte protótipo:
// int testa_PA(int n, int* v)

#include <stdio.h>


int testa_PA(int n, int* v);// protótipo da função

int main() {
    int n;

    printf("Quantos elementos terá o vetor? (mínimo 3): ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Erro: O vetor deve ter pelo menos 3 elementos.\n");
        return 1; // encerra com erro
    }

    int v[n]; 

    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    int resultado = testa_PA(n, v);    // chamada da função para testar se é PA

    // resultado
    if (resultado != 0) {
        printf("O vetor forma uma PA com razão %d.\n", resultado);
    } else {
        printf("O vetor NAO forma uma PA.\n");
    }

    return 0;
}

int testa_PA(int n, int* v) {
    int k = v[1] - v[0];

    for (int i = 2; i < n; i++) {
        if (v[i] != v[0] + k * i) {
            return 0; // não segue a regra da PA
        }
    }

    return k; // se é PA, retorna a razão
}