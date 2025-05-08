#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, z, somatorio = 0, i, count = 0;

    //Escreva um programa em C para ler um valor X e um valor Z (se Z for menor que X
    //deve ser lido um novo valor para Z).

    do {
        printf("informe o valor de X: ");
        scanf("%d", &x);

        printf("informe o valor de Z: ");
        scanf("%d", &z);

    } while (z < x);

    if (z > x){
        for (i = x; somatorio <= z; i++ ) {
            somatorio = somatorio + i;
            count = count + 1;
        }

    }
    printf("%d\n", somatorio);
    printf("A resposta final é: %d ", count);

    return 0;
}
