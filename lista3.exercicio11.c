#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Funções
void verificacao(int quantidade, int *idade, int *altura, int *verificacaoM, int *verificacaoH, char *sexo);
void variancia(int quantidade, int * altura, float media, float * variacao);
void leitura_dados(int quantidade, int *idade, int *altura,float * media, char *sexo);

int main(void) {
    int quantidade;
    int verificacaoM, verificacaoH;
    float media = 0;
    float variacao = 0;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &quantidade);

    int idade[quantidade], altura[quantidade];
    char sexo[quantidade];

    leitura_dados(quantidade, idade, altura,&media,sexo);
    variancia(quantidade,altura,media,&variacao);
    verificacao(quantidade, idade, altura, &verificacaoM, &verificacaoH, sexo);

    printf("%f %f",media,variacao);

    printf("O numero da variacao entre todos: %f",variacao);
    printf("\nO número de mulheres com idade entre 20 e 35 anos: %d\n", verificacaoM);
    printf("O número de homens com altura maior que 1,80m: %d\n", verificacaoH);
    
    return 0;
}

void leitura_dados(int quantidade, int *idade, int *altura,float * media, char *sexo) {
    
    for (int i = 0; i < quantidade; i++) {
        printf("\nDigite a idade, altura (em cm) e o sexo (M para mulher, H para homem) da pessoa %d:\n", i + 1);
        // espaço antes de %c para ignorar o enter anterior
        scanf("%d %d %c", &idade[i], &altura[i], &sexo[i]);

        *media += altura[i];
    }

    *media = *media / quantidade;
}

void variancia(int quantidade, int * altura, float media, float * variacao){
    for (int i = 0;i < quantidade; i++){
        printf("%d %.1f\n",altura[i],media);
        *variacao += pow((altura[i] - media),2);
        printf("%.1f\n",pow((altura[i] - media),2));     
    };
    *variacao = *variacao / quantidade; 
};

void verificacao(int quantidade, int *idade, int *altura, int *verificacaoM, int *verificacaoH, char *sexo) {
    *verificacaoM = 0;
    *verificacaoH = 0;
    for (int i = 0; i < quantidade; i++) {
        if (sexo[i] == 'M' || sexo[i] == 'm') {
            if (idade[i] >= 20 && idade[i] <= 35) {
                (*verificacaoM)++;
            }
        } else if (sexo[i] == 'H' || sexo[i] == 'h') {
            if (altura[i] > 180) {
                (*verificacaoH)++;
            }
        }
    }
}
