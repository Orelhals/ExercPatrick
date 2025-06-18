/*
Faça uma função recursiva para imprimir a soma dos números ímpares de um vetor.
*/

#include <stdio.h>

int somaVetImpar(int vet[], int i, int tam)
{
    if(i >= tam) 
    {
        return 0;
    }

    if(vet[i] % 2 != 0) //impar
    {
        return vet[i] + somaVetImpar(vet, i + 1, tam);
    }
    else //par
    {
        return somaVetImpar(vet, i + 1, tam);
    }
}


int main (void)
{
    int tamanho = 8;
    int vetor[tamanho] = {1, 3, 5, 9, 3, 2 , 5, 8};

    printf("A soma totaliza: %d", somaVetImpar(vetor, 0, tamanho));

    return 0;
}