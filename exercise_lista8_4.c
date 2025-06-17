/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 4
#define MAXNOME 31


void atribui(char **nomes, int indice, char *nome){
    strcpy(nomes[indice],nome); // recebe o nome pelo parametro *nome e depois passa para o char ** nomes.
};
char * get_sobrenome(char *nome){
    char *recebe_sobrenome = (char *) malloc(MAXNOME); // aloca espaço suficiente
    bool chave = false;
    int j = 0; // índice para a nova string

    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == ' ') {
            chave = true;
        } else if (chave) {
            recebe_sobrenome[j++] = nome[i];
        }
    }

    recebe_sobrenome[j] = '\0'; // finaliza string corretamente
    return recebe_sobrenome;
}


int main()  {
    int i;
    char **nomes;
    char *sobrenome;
    nomes = (char **) malloc(MAX*sizeof(char *));

    for ( i=0 ; i<MAX ; i++) {
        nomes[i] = (char *) malloc(sizeof(char)*MAXNOME);
    }

    atribui(nomes,0,"Fulano Silva"); atribui(nomes,1,"Maria do Carmo");
    atribui(nomes,2,"Beltrano Belmonte"); atribui(nomes,3,"Pedro dos Santos");

    for (i=0 ; i<MAX ; i++) {
        sobrenome = get_sobrenome(nomes[i]);
        printf("\n%s ", sobrenome);
        printf(" %d",strlen(sobrenome)>5?i:0); // 2o printf -> O resultado seria 1
    }

    printf("\n%c", nomes[0][3]); // 3o printf -> O resultado seria a, pois pega o primeiro nome nomes[0] e a terceira letra nomes[0][3], sendo assim a letra a
}
*/
