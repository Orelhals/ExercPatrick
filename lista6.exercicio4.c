/*
Todo ano um concurso de programação premia os participantes que obtêm a maior
média ponderada em uma bateria de dois testes. Escreva uma função que recebe sete
parâmetros: o inteiro n indicando a quantidade de participantes do concurso, o ponteiro
inscr para o vetor de inteiros que contém as inscrições desses participantes, o ponteiro
t1 para o vetor de reais que contém a nota de cada participante no primeiro teste, o
inteiro p1 que indica o peso dessa nota na média ponderada, o ponteiro t2 para o vetor
de reais que contém a nota de cada participante no segundo teste, o inteiro p2 que
indica o peso dessa nota na média ponderada, e um ponteiro para a variável inteira tam.
A função deve:
● calcular a média ponderada de cada participante;
● criar um novo vetor de inteiros alocado dinamicamente com o tamanho exato
para conter apenas as inscrições dos participantes que obtiveram a maior média (pode
haver empate);
● armazenar no novo vetor as inscrições correspondentes (em qualquer ordem);
● armazenar o tamanho do novo vetor na variável tam; e
● retornar o ponteiro para o novo vetor.
Considere que para uma mesma posição do vetor (mesmo índice), a inscrição e as notas
se referem a um mesmo participante. O protótipo da função é:
int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam);
*/

#include <stdio.h>
#include <stdlib.h>

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam) {
    float *medias = (float *)malloc(n * sizeof(float));

    if (medias == NULL) {
        *tam = 0;
        return NULL;
    }

    float maior_media = -1;
    for (int i = 0; i < n; i++) {
        medias[i] = (t1[i] * p1 + t2[i] * p2) / (p1 + p2);
        if (medias[i] > maior_media) {
            maior_media = medias[i];
        }
    }

    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (medias[i] == maior_media) {
            contador++;
        }
    }

    if (contador == 0) {
        *tam = 0;
        free(medias);
        return NULL;
    }

    int *inscricoes_premiadas = (int *)malloc(contador * sizeof(int));
    if (inscricoes_premiadas == NULL) {
        *tam = 0;
        free(medias);
        return NULL;
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (medias[i] == maior_media) {
            inscricoes_premiadas[j++] = inscr[i];
        }
    }

    *tam = contador;
    free(medias);
    return inscricoes_premiadas;
}

int main() {
    int n;

    printf("Digite o numero de participantes: ");
    scanf("%d", &n);

    int *inscr = (int *)malloc(n * sizeof(int));
    float *t1 = (float *)malloc(n * sizeof(float));
    float *t2 = (float *)malloc(n * sizeof(float));

    if (inscr == NULL || t1 == NULL || t2 == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nDigite a matrícula do participante %d: ", i + 1);
        scanf("%d", &inscr[i]);
        printf("Digite a nota do primeiro teste do participante %d: ", i + 1);
        scanf("%f", &t1[i]);
        printf("Digite a nota do segundo teste do participante %d: ", i + 1);
        scanf("%f", &t2[i]);
    }

    int p1, p2;
    printf("\nDigite o peso da nota do primeiro teste: ");
    scanf("%d", &p1);
    printf("Digite o peso da nota do segundo teste: ");
    scanf("%d", &p2);

    int tam;
    int *premiados_vetor = premiados(n, inscr, t1, p1, t2, p2, &tam);

    if (premiados_vetor != NULL) {
        printf("\nParticipante(s) premiado(s): ");
        for (int i = 0; i < tam; i++) {
            printf("%d ", premiados_vetor[i]);
        }
        printf("\n");
        free(premiados_vetor);  // Liberar a memória alocada
    } else {
        printf("\nNão foi possível encontrar participante(s) premiado(s).\n");
    }

    free(inscr);
    free(t1);
    free(t2);

    return 0;
}