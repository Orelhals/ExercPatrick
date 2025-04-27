/*Fazer um programa que recebe 3 valores inteiros do usuário e mostra o maior deles, o
menor deles, os valores pares e a média.*/

#include <stdio.h>

int encontrarMaior (int a, int b, int c)
{
    int maior;

    if(a > b && a > c)
    {
        maior = a;
    }

    else if(b > a && b > c)
    {
        maior = b;
    }

    else
    {
        maior = c;
    }
    
    return maior;
}

int encontrarMenor (int a, int b, int c)
{
    int menor;

    if(a < b && a < c)
    {
        menor = a;
    }

    else if(b < a && b < c)
    {
        menor = b;
    }

    else
    {
        menor = c;
    }

    return menor;
}

int main(void)
 {
    int num1;
    int num2;
    int num3;

    printf("digite 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 % 2 == 0)
    {
        printf("%d e par \n", num1);
    }

    if(num2 % 2 == 0)
    {
        printf("%d e par \n", num2);
    }

    if(num3 % 2 == 0)
    {
        printf("%d e par \n", num3);
    }

    else
    {
        printf("não ha numeros pares \n");
    }

    printf("O maior e: %d\n", encontrarMaior(num1, num2, num3));
    printf("O menor e: %d\n", encontrarMenor(num1, num2, num3));
    printf("A media entre eles e: %d\n", (num1 + num2 + num3)/3);

    return 0;
 }