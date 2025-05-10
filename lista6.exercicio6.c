/*
Faça um programa que informe quais são os números que se repetem em
um vetor. O programa deve seguir os seguintes passos:
a) Leia um inteiro do usuário e aloque um vetor de inteiros
dinamicamente com este tamanho. Depois, preencha todo o vetor de
inteiros com valores entre 0 e 9.
b) Imprima na tela os valores que se repetem no vetor.

- Exemplo de execução do programa:
> Entradas:
tam = 9
vet = |1|5|8|4|4|5|0|8|8|
> Saída:
5, 8, 4
- Obs.: Faça tudo na main.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tam;
    int i, j;
    int atual;

    printf("digite um inteiro: ");
    scanf("%d", &tam);

    int *vetor = (int*) malloc(tam * sizeof(int));

    if (vetor == NULL) { printf("Falta memoria \n"); exit(1); };

    for(i = 0; i < tam; i++)
    {
        vetor[i] = rand() % 10; 

    }

    for(i = 0; i < tam; i++)
    {
        printf("%d->", vetor[i]);
    }
    printf("NULL\n \n");

    // vetor = [1, 5, 8, 4, 4, 5, 0, 8, 8]
    // vetor = [0,1,4,4,5,5,8,8,8]

    int index_min;
    int temp;

    // selection sort, O(n^2)
    for(i = 0; i < tam - 1; i++)
    {
        index_min = i;

        for(j = i +1; j < tam; j++)
        {
            // procura o minimo
            if(vetor[j] < vetor[index_min])
            {
                index_min = j;
            }
        }
        // swap do menor valor com o valor atual analisado, selection sort
        temp = vetor[i];
        vetor[i] = vetor[index_min];
        vetor[index_min] = temp;
    }

    for(i = 0; i < tam - 1; i++)
    {

        if(vetor[i] == vetor[i + 1])
        {
            printf("%d ", vetor[i]);

            while(vetor[i] == vetor[i + 1])
            {
                i++;
            }
        }
    }

    return 0;
}