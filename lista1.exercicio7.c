#include <stdio.h>
#include <math.h>

int main (void)
{
    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    printf("Arredondado para cima: %.2f\n", ceil(num));
    printf("Arredondado para baixo: %.2f\n", floor(num));

    return 0;
}