/*Implemente a fun��o max_vet, que recebe como par�metro um vetor de n�meros de ponto
flutuante (vet) de tamanho n e retorna o maior n�mero armazenado nesse vetor. Essa fun��o deve
obedecer o prot�tipo: float max_vet (int n, float * vet);
Fa�a tamb�m a fun��o main.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float max_vet (int n, float * vet){
    bool chave = true;
    float max;

    for (int i = 0; i < n; i++){
        if (chave){
            max = vet[i];
            printf("%.2f",max);
            chave = false;
        }
        else{
            if (vet[i] > max){
                max = vet[i];
            }
            else{
                continue;
            };
        };
    };
    return max;
};

int main(void){
    int n;
    float valor,maior;

    printf("Digite um tamanho: ");
    scanf("%d",&n);

    float vet[n];
    for (int i = 0; i <n;i++){
        printf("Digite um valor para colocar na lista: ");
        scanf("%.2f",&valor);
        vet[i] = valor;
        printf("%.2f",vet[i]);
    };
    maior = max_vet(n,vet);

    printf("Esse e o maior numero dentro do vetor: %.2f",maior);
};