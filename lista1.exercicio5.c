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