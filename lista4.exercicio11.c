#include <stdio.h>

#define TAMANHO 20

void lerVetorInteiros(int vetor[], int tamanho, char nome) 
{
    printf("Digite os %d valores do vetor %c:\n", tamanho, nome);
    
    for (int i = 0; i < tamanho; i++) 
    {
        printf("%c[%d]: ", nome, i);
        scanf("%d", &vetor[i]);
    }
}

void lerVetorOperacoes(char vetor[], int tamanho) 
{
    printf("\nDigite as %d operações (+, -, *, /):\n", tamanho);
    for (int i = 0; i < tamanho; i++) 
    {
        printf("Operação %d: ", i);
        scanf(" %c", &vetor[i]);
        
        while (vetor[i] != '+' && vetor[i] != '-' && vetor[i] != '*' && vetor[i] != '/') 
        {
            printf("Operação inválida! Digite apenas +, -, * ou /: ");
            scanf(" %c", &vetor[i]);
        }
    }
}

void realizarOperacoes(int vetor1[], int vetor2[], char operacoes[], float resultado[], int tamanho) 
{
    for (int i = 0; i < tamanho; i++) 
    {
        switch (operacoes[i]) 
        {
            case '+':
                resultado[i] = vetor1[i] + vetor2[i];
                break;
            case '-':
                resultado[i] = vetor1[i] - vetor2[i];
                break;
            case '*':
                resultado[i] = vetor1[i] * vetor2[i];
                break;
            case '/':
                if (vetor2[i] != 0)
                {
                    resultado[i] = (float)vetor1[i] / vetor2[i];
                } 
                else 
                {
                    resultado[i] = 0;
                    printf("Aviso: Divisão por zero na posição %d. Resultado definido como 0.\n", i);
                }
                break;
        }
    }
}

void exibirResultados(int vetor1[], int vetor2[], char operacoes[], float resultado[], int tamanho) 
{
    printf("\n=== Resultados das Operações ===\n");
    printf("Posição | Vetor A | Operação | Vetor B | Resultado\n");
    printf("--------+---------+----------+---------+----------\n");
    
    for (int i = 0; i < tamanho; i++) 
    {
        printf("%7d | %7d | %8c | %7d | %9.2f\n", i, vetor1[i], operacoes[i], vetor2[i], resultado[i]);
    }
}

int main() {
    int vetorA[TAMANHO], vetorB[TAMANHO];
    char operacoes[TAMANHO];
    float resultado[TAMANHO];
    
    lerVetorInteiros(vetorA, TAMANHO, 'A');
    printf("\n");
    lerVetorInteiros(vetorB, TAMANHO, 'B');

    lerVetorOperacoes(operacoes, TAMANHO);
    
    realizarOperacoes(vetorA, vetorB, operacoes, resultado, TAMANHO);
    
    exibirResultados(vetorA, vetorB, operacoes, resultado, TAMANHO);
    
    return 0;
}