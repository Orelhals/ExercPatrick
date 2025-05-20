#include <stdio.h>

#define TAMANHO 7

void lerVetor(int vetor[])
{
    printf("Digite %d valores inteiros:\n", TAMANHO);

    for (int i = 0; i < TAMANHO; i++) 
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

// Função para listar o conteúdo do vetor com as posições
void listarVetor(int vetor[]) 
{
    printf("\nConteúdo do vetor:\n");
    printf("Posição | Valor\n");

    for (int i = 0; i < TAMANHO; i++) 
    {
        printf("%7d | %5d\n", i, vetor[i]);
    }
    printf("\n");
}

int pesquisarValor(int vetor[], int valor) 
{
    for (int i = 0; i < TAMANHO; i++) 
    {
        if (vetor[i] == valor) {
            return i;
        }
    }
    return -1;
}

void substituirPorSoma(int vetor[]) 
{
    int vetorAuxiliar[TAMANHO];
    
    vetorAuxiliar[0] = vetor[0];
    
    for (int i = 1; i < TAMANHO; i++) 
    {
        vetorAuxiliar[i] = vetorAuxiliar[i-1] + vetor[i];
    }
    
    for (int i = 0; i < TAMANHO; i++) 
    {
        vetor[i] = vetorAuxiliar[i];
    }
}

int main() {
    int vetor[TAMANHO];
    int opcao, valorPesquisa, posicao;
    
    do 
    {
        printf("1. Ler valores para o vetor\n");
        printf("2. Listar conteúdo do vetor\n");
        printf("3. Pesquisar valor no vetor\n");
        printf("4. Substituir valores pela soma acumulada\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                lerVetor(vetor);
                break;
                
            case 2:
                listarVetor(vetor);
                break;
                
            case 3:
                printf("Digite o valor a ser pesquisado: ");
                scanf("%d", &valorPesquisa);
                posicao = pesquisarValor(vetor, valorPesquisa);
                
                if (posicao != -1) 
                {
                    printf("O valor %d encontrado na posição %d.\n", valorPesquisa, posicao);
                } else 
                {
                    printf("O valor %d não encontrado no vetor. Retorno: %d\n", valorPesquisa, posicao);
                }
                break;
                
            case 4:
                substituirPorSoma(vetor);
                printf("Valores substituídos pela soma acumulada \n");
                listarVetor(vetor);
                break;
                
            case 0:
                printf("Programa encerrado.\n");
                break;
                
            default:
                printf("Tente novamente, opcao invalida \n");
        }
        
    } while (opcao != 0);
    
    return 0;
}