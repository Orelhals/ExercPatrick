#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortearNumber() {

    int numero;
    numero = 1 + (rand() % 100);
    return numero;
}

int main()
{
    int numeroSorteado, number, count = 0;

    srand(time(NULL));
    numeroSorteado = sortearNumber();

    do {
        printf("Digite o número: ");
        scanf("%d", &number);
        count = count + 1;
        if (number > numeroSorteado) {
            printf("O numero e menor");
        } else if (number < numeroSorteado) {
            printf("O numero e maior");
        } else {
            printf("Parabéns, você acertou e foram %d tentativas!!!", count);
        }
    } while (number != numeroSorteado);


    return 0;
}
