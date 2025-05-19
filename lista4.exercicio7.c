// Camel case é a denominação em inglês para a prática de escrever, a partir de palavras compostas ou frases, expressões constituídas pelo agrupamento dessas palavras com a letra inicial maíuscula e as demais minúsculas, unidas sem espaços. Por exemplo, “NotaDaProva” seria o correspondente em camel case à expressão “nota da prova”. Este é um padrão muito utilizado para a criação de nomes de entidades em diversas linguagens de programação, como Java, Ruby e Python. 

// Escreva uma função em C que recebe uma cadeia de caracteres e a transforma em uma cadeia no padrão camel case, ou seja, remove os espaços em branco e converte para maiúsculas as letras iniciais de cada palavra. Por simplificação, considere que a cadeia de entrada contém apenas letras minúsculas (entre ‘a’ e ‘z’ e espaços em branco. Por exemplo, se a cadeia “media da turma” for passada para a função, será transformada na cadeia “MediaDaTurma”. O protótipo da função é:

// void CamelCase (char *s);

// Obs.: uma outra prática é manter a primeira letra minúscula. Por exemplo: “media da turma” será transformada na cadeia “mediaDaTurma”. Escolha qual a forma mais apropriada.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void CamelCase(char *s) {
    int i, j = 0;
    int capitalizeNext = 0;
    char temp[100];

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            capitalizeNext = 1;  // ativa para próxima letra virar maiúscula
        } else {
            if (capitalizeNext) {
                temp[j++] = toupper(s[i]);  // transforma a letra em maiúscula
                capitalizeNext = 0;
            } else {
                temp[j++] = (j == 0) ? s[i] : s[i];  // mantém minúscula
            }
        }
    }

    temp[j] = '\0';           // finaliza a nova string
    strcpy(s, temp);          // copia de volta para a string original
}

// int main() {
//     char s[100];
//     strcpy(s, "media da turma");
//     CamelCase(s);
//     printf("CamelCase: %s\n", s);  // saída: mediaDaTurma

//     return 0;
// }