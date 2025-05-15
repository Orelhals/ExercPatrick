#include <stdio.h>

int main(void) {
    // a. Declarar variáveis int
    int a = 10, b = 20, c = 30, d = 40;

    // b. Declarar variáveis float
    float e = 1.1, f = 2.2, g = 3.3, h = 4.4;

    // c. Declarar vetor de char
    char v[10] = "exemplo";

    // d. Variável int
    int x = 99;

    // e. Ponteiro para 'a'
    int *ptr = &a;
    printf("O ponteiro 'ptr' foi inicializado com o endereço da variável 'a': %p\n", &a);
    printf("Valor armazenado em 'a' = %d\n", *ptr);

    // f. Incrementar ponteiro
    ptr++; // Agora aponta para o próximo int (geralmente 'b')

    printf("\nApós incrementar o ponteiro (ptr++), ele passou a apontar para o endereço: %p\n", ptr);
    printf("Valor armazenado neste novo endereço (interpretado como int): %d\n", *ptr);

    // Verifica se ptr aponta para alguma outra variável
    if (ptr == &b) {
        printf("O ponteiro agora aponta exatamente para a variável 'b'.\n");
    } else if (ptr == &c) {
        printf("O ponteiro agora aponta exatamente para a variável 'c'.\n");
    } else if (ptr == &d) {
        printf("O ponteiro agora aponta exatamente para a variável 'd'.\n");
    } else if (ptr == &x) {
        printf("O ponteiro agora aponta exatamente para a variável 'x'.\n");
    } else {
        printf("O ponteiro aponta para um endereço que NÃO corresponde diretamente a nenhuma das variáveis 'b', 'c', 'd' ou 'x'.\n");
    }

    return 0;
}
