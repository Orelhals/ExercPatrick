#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiraParte, segundaParte, number, soma;

    printf("Lista de numeros que fazem parte deste formato: \n");

    for (number = 1000; number <= 9999; number++) {
        primeiraParte = number / 100;
        segundaParte = number % 100;

        soma = primeiraParte + segundaParte;

        if (soma*soma == number) {
            printf("%d \n", number);
        }


    }

    return 0;
}
