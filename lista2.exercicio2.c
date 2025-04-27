/*Faça um programa que calcule e imprima a soma dos n primeiros números naturais
ímpares. O usuário do programa deve fornecer quantos números devem ser somados.*/

#include <stdio.h>

int main() 
{
    int n, i; 
    int soma = 0;

    printf("Digite quantos números ímpares deverão ser somados: ");
    scanf("%d", &n);

    for (i = 1; n > 0; i += 2){
        soma += i;
        n--;
    }

    printf("A soma dos primeiros números ímpares é: %d\n", soma);

    return 0;
}