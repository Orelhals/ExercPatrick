/*Defina as variáveis a, b e c (tipo de dado) para obter todas as possíveis respostas para
os valores de ‘c’:
Suponha que:
a = 3
b = a / 2
c = b + 3.1
Valores possíveis para ‘c’?
1. c = 4.6
2. c = 4.1
3. c = 4*/

#include <stdio.h>

int main(void)
{
    int a = 3;
    float b = a / 2;
    float c = b + 3.1;

    printf("%.1f", c);

    return 0;
}

//4.6 -> a ordem é: int float float
//4.1 -> a ordem é: int int float
//4   -> a ordem é: int int int com printf("%d", c)