#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char sorteiaLetra() {
    char letraSorteada;

    letraSorteada = 'a' + (rand() % 26);
    return letraSorteada;
}

int main()
{
    char letra, sorteada;

    srand(time(NULL));

    sorteada = sorteiaLetra();

    do {
        printf("Qual seu palpite sobre a letra sorteada?");
        scanf(" %c", &letra);
    } while (letra != sorteada);

    if (letra > sorteada) {
        printf("A letra sorteada é menor do que o seu palpite %c", sorteada);
    } else if (letra < sorteada) {
        printf("A letra sorteada é maior do que o seu palpite %c", sorteada);
    } else {
        printf("Voce acertou a letra sorteada: %c", sorteada);
    }

    return 0;
}
