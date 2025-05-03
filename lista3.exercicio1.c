#include <stdio.h>

#define PI 3.14159265

void calc_circulo(float r, float *circunferencia, float *area)
{
    *circunferencia = 2 * PI * r;
    *area = PI * r * r;
}

int main() 
{
    float raio, circ, a;

    printf("Digite o raio: ");
    scanf("%.2f", &raio);

    calc_circulo(raio, &circ, &a);

    printf("Circunferência: %.2f\n", circ);
    printf("Área: %.2f\n", a);

    return 0;
}
