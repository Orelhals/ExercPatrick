/*
Modifique o programa anterior da seguinte forma:
a) Passo igual ao da questão 1.
b) Ao invés de calcular e imprimir na main as repetições, crie uma
função 'repeticao' para fazer esse trabalho. A função deve seguir o
protótipo
void repeticao(int *vet, int tam);
Onde 'vet' e 'tam' foram lidos no passo a).

- Exemplo de execução: idêntico ao anterior.
- Obs.: A impressão é feita dentro da função 'repeticao'.
*/

#include <stdio.h>
#include <stdlib.h>

void repeticao(int *vet, int tam);

int main(void)
{
    int tam;
    int i, j;
    int atual;

    printf("Digite um inteiro: ");
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

    // selection sort
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

    printf("Repetidos: ");
    repeticao(vetor, tam);

    free(vetor);
    return 0;
}

void repeticao(int *vet, int tam)
{
    for(int i = 0; i < tam - 1; i++)
    {
        if(vet[i] == vet[i + 1])
        {
            printf("%d ", vet[i]);
            if(i < tam - 1) printf(", ");

            while(vet[i] == vet[i + 1])
            {
                i++;
            }
        }
    }
}