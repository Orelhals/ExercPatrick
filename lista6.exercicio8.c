/*
Modifique novamente o seu programa da seguinte forma:
a) Passo igual aos das questões 1 e 2.
b) A sua função repeticao não mais imprimirá o resultado, mas sim a
main. Para isso, será necessário que a sua função 'repeticao' siga o
seguinte protótipo:
int *repeticao(int *vet, int tam, int *n);
A sua função 'repeticao' agora alocará um novo vetor de inteiros
dinamicamente que deverá ser preenchido com os valores que se repetem.
O tamanho desse vetor deve ser gravado na variável n, que referencia
uma variável na main (crie uma variável na main para isso). A função
'repeticao' retornará para a main este novo vetor resposta.
c) Imprima na main o vetor retornado pela função 'repeticao'.

- Exemplo de execução do programa:
> Entradas:
tam = 9
vet = |1|5|8|4|4|5|0|8|8|
> Valores contidos nas variáveis após a execução da função 'repeticao'
(não devem ser exibidos):
n = 3
resposta = |5|8|4|
> Saída:
5, 8, 4
*/

#include <stdio.h>
#include <stdlib.h>

int *repeticao(int *vet, int tam, int *n)
{
    int i;
    *n = 0;

    int *numRepeticoes = (int*) malloc(tam * sizeof(int));
    if (numRepeticoes == NULL) { printf("Falta memoria \n"); exit(1); };

    for(i = 0; i < tam - 1; i++)
    {
        if(vet[i] == vet[i + 1])
        {
            numRepeticoes[*n] = vet[i];
            (*n)++;

            while(i < tam - 1 && vet[i] == vet[i + 1])
            {
                i++;
            }
        }
    }

    return numRepeticoes;
}

int main(void)
{
    int tam;
    int i, j;
    int atual;
    int numRep = 0;

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

    for(i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("NULL\n");

    printf("Repetidos: ");

    int *repetidos = repeticao(vetor, tam, &numRep);

    for(i = 0; i < numRep; i++)
    {     
        printf("%d ", repetidos[i]);
        if(i < numRep - 1) printf(", ");
    }
    
    free(vetor);
    free(repetidos);

    return 0;
}