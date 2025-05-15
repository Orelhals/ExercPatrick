#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inverte(unsigned int num,unsigned int * answer);

int main(void){
    unsigned int num,resposta;

    printf("Digite um numero ai: ");
    scanf("%u",&num);

    inverte(num,&resposta);

    printf("Esse e o numero invertido %u",resposta);
};

int inverte(unsigned int num,unsigned int * answer ){
    char lista_original[20],lista_invertida[20];
    unsigned int resultado;

    sprintf(lista_original,"%u",num);

    int len = strlen(lista_original);

    for (int i = 0; i <len; i++){
        lista_invertida[i] = lista_original[len - 1 - i];
    };

    sscanf(lista_invertida,"%u",&resultado);
    *answer = resultado;
};