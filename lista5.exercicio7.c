#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[100];
    char *preposicoes[] = {"de", "do", "da", "dos", "das", "e"};
    int i, ignorar;

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o \n do final, se existir
    nome[strcspn(nome, "\n")] = '\0';

    char *palavra = strtok(nome, " ");

    while (palavra != NULL) {
        ignorar = 0;
        // Verifica se a palavra é uma preposição
        for (i = 0; i < sizeof(preposicoes) / sizeof(preposicoes[0]); i++) {
            if (strcmp(palavra, preposicoes[i]) == 0) {
                ignorar = 1;
                break;
            }
        }

        // Se não for preposição, imprime a inicial maiúscula com ponto
        if (!ignorar) {
            printf("%c.", toupper(palavra[0]));
        }

        palavra = strtok(NULL, " ");
    }

    printf("\n");
    return 0;
}
