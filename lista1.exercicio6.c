#include <stdio.h>
#include <math.h>


float calcularRaizes(float x, float y, float z, float *x1, float *x2)
{
    float delta = (y * y) - (4 * x * z);

    if (delta < 0)
    {
        printf("Não possui raízes reais.\n");
        *x1 = 0; 
        *x2 = 0;
    } 
    else
    {
        *x1 = (-y + sqrt(delta)) / (2 * x);
        *x2 = (-y - sqrt(delta)) / (2 * x);
    }
}

int main (void)
{

    float a, b, c;
    float raiz1, raiz2;

    printf("Digite a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    calcularRaizes(a, b, c, &raiz1, &raiz2);

    printf("Raiz 1 é: %.2f\n", raiz1);
    printf("Raiz 2 é: %.2f\n", raiz2);

    return 0;
}