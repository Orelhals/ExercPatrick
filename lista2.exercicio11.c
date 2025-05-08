#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculaPotencia(int base, int expoente) {

    return pow(base, expoente);
}

int main()
{
    int base, expoente, resultado;

    printf("informe o valor da base:\n");
    scanf("%d", &base);

    printf("Informe o valor do expoente:\n");
    scanf("%d", &expoente);

    resultado = calculaPotencia(base, expoente);
    printf("O resultado esperado é: %d", resultado);


    return 0;
}
