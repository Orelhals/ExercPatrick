/*
Ler o texto: www.ic.uff.br/~acopetti/progii/algoritmosFuncoesRecursivas.pdf
*/

#include <stdio.h>

char lerVetRecur(char vet[], int i)
{
    if(vet[i] == '\0') 
    {
        return 0;
    }
    else
    {
        printf("%c", vet[i]);
        return lerVetRecur(vet, i + 1);
    }
}


int main (void)
{
    char vetor[] = "www.ic.uff.br/~acopetti/progii/algoritmosFuncoesRecursivas.pdf";

    printf("Texto: %c \n", lerVetRecur(vetor, 0));

    return 0;
}