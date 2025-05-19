#include <stdio.h>
#include <string.h>

int conta_caractere(char *str, char c) {
    int i, contador = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            contador++;
        }
    }
    return contador;
}

int main() {
    char frase[100];
    char letra;

    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; // Remove o \n no final

    printf("Digite o caractere que deseja contar:\n");
    scanf(" %c", &letra); // O espaço antes do %c ignora o \n pendente

    int total = conta_caractere(frase, letra);

    printf("O caractere '%c' aparece %d vezes na frase.\n", letra, total);

    return 0;
}
