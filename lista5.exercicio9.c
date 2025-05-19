#include <stdio.h>
#include <string.h>

int main() {
    char nome[100], endereco[100], telefone[30];
    char resultado[300];

    // Lê o nome
    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove o \n do final

    // Lê o endereço
    printf("Digite o endereço: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    // Lê o telefone
    printf("Digite o telefone: ");
    fgets(telefone, sizeof(telefone), stdin);
    telefone[strcspn(telefone, "\n")] = '\0';

    // Concatena as informações
    strcpy(resultado, "Nome: ");
    strcat(resultado, nome);
    strcat(resultado, " | Endereço: ");
    strcat(resultado, endereco);
    strcat(resultado, " | Telefone: ");
    strcat(resultado, telefone);

    // Exibe a string final
    printf("\nInformações concatenadas:\n%s\n", resultado);

    return 0;
}
