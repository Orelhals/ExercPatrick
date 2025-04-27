/*Um funcionário da UFF precisa validar as notas de 3 provas fornecidas por um
professor e indicar: a média, se está aprovado/reprovado e se tem direito de realizar a VS.
Inicialmente, faça um programa que recebe como entrada as 3 notas e mostre os
resultados solicitados. Posteriormente, coloque o código de cálculo da média em uma
função. Em um passo seguinte, realize os controles necessários para não receber notas
inválidas.*/

#include <stdio.h>

float calcularMedia(float x, float y, float z)
{
    return (x + y + z) / 3;
}

int main (void)
{
    float prova1, prova2, prova3, media;
    
    printf("Digite a nota das 3 provas: \n");
    scanf( "%f %f %f" , &prova1, &prova2, &prova3);

    media = calcularMedia(prova1, prova2, prova3);

    if(media >= 4 && media < 6)
    {
        printf("Legivel para fazer VS");
    }

    else if(media >= 6)
    {
        printf("Aprovado");
    }

    else
    {
        printf("Reprovado");
    }

    return 0;
}