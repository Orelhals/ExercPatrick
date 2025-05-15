#include <stdio.h>
#include <stdlib.h>

int maiores(int n, int * vet, int x);

int main(void){
    int n, x;


    printf("Digite um tamanho para os vetores: ");
    scanf("%d",&n);

    int vet[n];

    for (int i = 0; i <n;i++){
            printf("Agora, Digite numeros para a lista: ");
            int valor; scanf("%d",&valor);
            vet[i] = valor;
            if (i == n - 1){
                x = vet[i];
            };
    };

    int quantidade = maiores(n,vet,x);

    printf("Essa � a quantidade de valores maiores que %d: %d",x,quantidade);
};

int maiores(int n, int * vet, int x){
    int contagem = 0;

    for (int i = 0; i < n; i++){
        if (vet[i] > x){
            contagem += 1;
        }
        else{
            continue;
        }
    }
    return contagem;
};