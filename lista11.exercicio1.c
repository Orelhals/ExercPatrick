/*
Considere uma lista encadeada que armazena valores reais, na qual cada elemento é do
tipo Elemento, descrito abaixo:
struct elemento {
float info; /* Valor real armazenado */ /*
struct elemento *prox; /* Ponteiro para o próximo elemento */ /*
};
typedef struct elemento Elemento;
Escreva uma função que recebe como parâmetros o ponteiro lst, para o primeiro elemento
da lista, e os valores min e max, e remove e libera todos os elementos desta lista que
armazenam valores menores que min ou maiores que max. A função deve retornar o
ponteiro para o início da lista, que pode ter sido modificado, e tem o seguinte protótipo:
Elemento* filtra(Elemento *lst, float min, float max);
*/

#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    float info;
    struct elemento *prox;
};
typedef struct elemento Elemento;

Elemento *filtra(Elemento *lst, float min, float max)
{
    Elemento *atual = lst;
    Elemento *anterior = NULL;

    while (atual != NULL) 
    {
        if (atual->info < min || atual->info > max) 
        {
            Elemento *remover = atual; //variável criada para dar free mais pra frente

            if (anterior == NULL) 
            {
                lst = atual->prox;
                atual = lst;
            } 
            else 
            {
                anterior->prox = atual->prox;
                atual = atual->prox;
            }

            free(remover);
        } 
        else 
        {
            // Elemento dentro do intervalo, avança ponteiros
            anterior = atual;
            atual = atual->prox;
        }
    }

    return lst;
}
