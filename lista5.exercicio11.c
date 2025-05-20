#include <stdio.h>
#include <string.h>

int main() {
    char str[21]; // 20 caracteres + 1 para o '\0'
    int i;

    printf("Digite uma string de no máximo 20 caracteres:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove o \n do final da string, se existir

    printf("String invertida: ");
    for (i = strlen(str) - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
