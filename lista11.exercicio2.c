/*
Considere listas encadeadas que armazenam valores inteiros, nas quais cada elemento é
do tipo Elemento, descrito abaixo:
struct elemento {
int info; /* Valor inteiro armazenado */ /*
struct elemento *prox; /* Ponteiro para o próximo elemento */ /*
};
typedef struct elemento Elemento;
Escreva uma função que cria uma cópia de uma lista encadeada, ou seja, cria uma nova
lista encadeada cujo conteúdo armazenado é idêntico --- tem os mesmos valores e na
mesma ordem --- ao de uma lista original. A função recebe como parâmetro o ponteiro
para o primeiro elemento da lista original (àquela a ser copiada) e retorna um ponteiro
para a nova lista (a cópia). A lista original não deve ser alterada. O protótipo da função é:
Elemento* copia(Elemento* lst);
*/

#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    float info;
    struct elemento *prox;
};
typedef struct elemento Elemento;

Elemento *copia(Elemento *lst)
{
    if(lst == NULL){return NULL;}
    
    Elemento *atual = lst;

    Elemento *inicioNovaLst = NULL;       
    Elemento *fimNovaLst = NULL; 

    while(atual != NULL)
    {
        Elemento *novo = (Elemento*)malloc(sizeof(Elemento));
        if(novo == NULL){printf("Erro ao alocar memória!\n"); exit(1);};

        novo->info = atual->info;
        novo->prox = NULL;

        if (inicioNovaLst == NULL) 
        {
            inicioNovaLst = novo;
            fimNovaLst = novo;
        }
        else 
        {
            fimNovaLst->prox = novo;
            fimNovaLst = novo;
        }

        atual = atual->prox;
    }

    return inicioNovaLst;
}