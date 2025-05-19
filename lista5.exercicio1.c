#include <stdio.h>
#include <ctype.h>

// Função que conta o número de vogais e atualiza o valor por referência
void conta_vogais(char *str, int *quantidade) {
    int i = 0;
    *quantidade = 0;

    while (str[i] != '\0') {
        char c = tolower(str[i]); // Considera maiúsculas e minúsculas
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            (*quantidade)++;
        }
        i++;
    }
}

int main() {
    char texto[100];
    int total_vogais;

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);  // Lê uma linha com espaços

    conta_vogais(texto, &total_vogais);

    printf("Número de vogais: %d\n", total_vogais);

    return 0;
}
