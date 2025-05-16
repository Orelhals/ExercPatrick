#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void a(char avaliacao[][20], int *idade, int *contagem, int *m_idade_bom, int i);
void b(char avaliacao[][20], float *diferenca_percentual, int i);
void c(char avaliacao[][20], int *idade, float *media, int i);
void d(char avaliacao[][20], int *idade, float *porcent, int *m_idade_ruim, int i);

int main(void) {
    int idade[100];
    char avaliacao[100][20];
    int i = 0;
    int contagem = 0;
    float diferenca_percentual = 0;
    float media = 0;
    float porcent = 0;
    int m_idade_ruim = 0;
    int m_idade_bom = 0;

    while (i < 100) {
        printf("Digite idade (ou 0 para sair) e avaliação: ");
        scanf("%d", &idade[i]);

        if (idade[i] == 0) break;

        scanf("%s", avaliacao[i]);
        i++;
    }

    a(avaliacao, idade, &contagem, &m_idade_bom, i);
    b(avaliacao, &diferenca_percentual, i);
    c(avaliacao, idade, &media, i);
    d(avaliacao, idade, &porcent, &m_idade_ruim, i);

    printf("\nQuantidade de respostas 'ótimo': %d", contagem);
    printf("\nDiferença percentual entre 'bom' e 'regular': %.2f%%", diferenca_percentual);
    printf("\nMédia de idade das respostas 'ruim': %.2f anos", media);
    printf("\nPorcentagem de 'péssimo': %.2f%%", porcent * 100);
    printf("\nMaior idade entre respostas 'péssimo': %d anos", m_idade_ruim);
    printf("\nDiferença entre maior idade 'ótimo' e maior idade 'péssimo': %d anos\n", (m_idade_bom - m_idade_ruim));

    return 0;
}

void a(char avaliacao[][20], int *idade, int *contagem, int *m_idade_bom, int i) {
    for (int j = 0; j < i; j++) {
        if (strcmp(avaliacao[j], "otimo") == 0) {
            (*contagem)++;
            if (*m_idade_bom == 0 || idade[j] < *m_idade_bom) {
                *m_idade_bom = idade[j];
            }
        }
    }
}

void b(char avaliacao[][20], float *diferenca_percentual, int i) {
    int cont_bom = 0, cont_reg = 0;
    for (int j = 0; j < i; j++) {
        if (strcmp(avaliacao[j], "bom") == 0) cont_bom++;
        else if (strcmp(avaliacao[j], "regular") == 0) cont_reg++;
    }

    if (cont_bom + cont_reg > 0)
        *diferenca_percentual = ((float)(cont_bom - cont_reg) / (cont_bom + cont_reg)) * 100;
    else
        *diferenca_percentual = 0;
}

void c(char avaliacao[][20], int *idade, float *media, int i) {
    int soma = 0, cont = 0;
    for (int j = 0; j < i; j++) {
        if (strcmp(avaliacao[j], "ruim") == 0) {
            soma += idade[j];
            cont++;
        }
    }

    if (cont > 0)
        *media = (float)soma / cont;
    else
        *media = 0;
}

void d(char avaliacao[][20], int *idade, float *porcent, int *m_idade_ruim, int i) {
    int cont = 0;
    for (int j = 0; j < i; j++) {
        if (strcmp(avaliacao[j], "pessimo") == 0) {
            cont++;
            if (*m_idade_ruim == 0 || idade[j] > *m_idade_ruim)
                *m_idade_ruim = idade[j];
        }
    }

    if (i > 0)
        *porcent = (float)cont / i;
    else
        *porcent = 0;
}
