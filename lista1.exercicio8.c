/*Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$ 10,
R$ 5, R$ 2 e R$ 1, escreva um programa que capture um valor inteiro em reais (R$) e
determine o menor número de notas para se obter o montante fornecido. A função deve
ter o seguinte protótipo:
int total_de_notas(int valor);*/

#include <stdio.h>

int total_de_notas(int dinheiro)
{
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int total = 0   ;
    int i;

    for (i = 0; i < 7; i++)
    {
        total += dinheiro / notas[i]; //verifica quantas notas "cabem" e soma ao total
        dinheiro = dinheiro % notas[i]; //atualiza o valor introduzido reduzindo o numero de notas que "cabem" do total e retorna o loop para proxima nota
    }

    return total;
}

int main (void)
{
    int dinheiro;

    printf("Digite um valor em reais: ");
    scanf("%d", &dinheiro);

    printf("Total de notas necessárias: %d\n", total_de_notas(dinheiro));
}