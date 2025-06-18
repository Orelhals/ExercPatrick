#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
    int codigo;
    char nome[81];
};
typedef struct pessoa Pessoa;

Pessoa* busca(int n, Pessoa** vet, int codigo) {
    for (int i = 0; i < n; i++) {
        if (vet[i]->codigo == codigo) {
            return vet[i];
        }
    }
    return NULL; // Não encontrado
}

void cadastre_pessoas(int n, int *v, char v_s[][81]) {
    for (int i = 0; i < n; i++) {
        printf("Digite o codigo da pessoa: ");
        scanf("%d", &v[i]);

        printf("Digite o nome: ");
        scanf(" %80[^\n]", v_s[i]);  // lê até 80 caracteres com espaço
    }
}

int main(void) {
    int n, codigo;

    printf("Digite quantas pessoas voce quer cadastrar: ");
    scanf("%d", &n);

    int v[n];
    char v_s[n][81];
    Pessoa **nova_pessoa = (Pessoa **) malloc(n * sizeof(Pessoa *));

    for (int i = 0; i < n; i++) {
        nova_pessoa[i] = (Pessoa *) malloc(sizeof(Pessoa));
    }

    cadastre_pessoas(n, v, v_s);

    for (int i = 0; i < n; i++) {
        nova_pessoa[i]->codigo = v[i];
        strcpy(nova_pessoa[i]->nome, v_s[i]);
    }

    printf("Caso voce deseje buscar algum funcionario, digite o codigo dele. Caso não, digite 0: ");
    scanf("%d", &codigo);

    if (codigo != 0) {
        Pessoa *resultado = busca(n, nova_pessoa, codigo);
        if (resultado != NULL) {
            printf("Funcionario encontrado: Codigo = %d, Nome = %s\n", resultado->codigo, resultado->nome);
        } else {
            printf("Funcionario com codigo %d nao encontrado.\n", codigo);
        }
    }

    for (int i = 0; i < n; i++) {
        free(nova_pessoa[i]);
    }
    free(nova_pessoa);

    return 0;
}
