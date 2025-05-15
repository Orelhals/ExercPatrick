#include <stdio.h>
#include <stdlib.h>

float media(int n, float *v);
int main(void){
    int n;//tamanho do vetor

    printf("Digite a quantidade de notas que recebeu no semestere: ");
    scanf("%d",&n);

    float v[n];

    for (int i = 0; i <n; i++){
        printf("Digite sua nota");
        scanf("%f",&v[i]);
    };


     float total = media(n,v);

     printf("O valor da sua media no semestre: %.2f",total);
};

float media(int n, float *v){
    float valor_media;

    for (int i = 0; i <n; i++){
        valor_media += v[i];
    };    

    float media = valor_media / n;

    return media;
};