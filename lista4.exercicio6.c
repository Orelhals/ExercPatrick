// A cadeia que representa a parte local de um endereço de e-mail Hotmail válido (aquela parte que vem à esquerda do “@”) tem no máximo 64 caracteres e pode conter apenas letras (‘a’ a ‘z’) e números (‘0’ a ‘9’), e os caracteres ponto (‘.’), hífen (‘-’) e sublinhado (‘_’). Quaisquer outros caracteres especiais ou letras acentuadas não são permitidos. Além disso, a cadeia deve conter no mínimo duas letras ou números, seu primeiro caractere tem que ser necessariamente uma letra, e o caractere ponto (“.”) não pode aparecer em sequência ou ser o último da cadeia. Por exemplo, “jsilva”, “t.o.n.y-99_”, “x-__7-” são strings válidas, enquanto “3marias”, “_peter”, “bia.”, “abc...z” são incorretas.

// Escreva uma função em C que receba como parâmetros a cadeia s, representando a parte local de um endereço de e-mail, e retorne 1 se a cadeia for válida de acordo com as condições descritas, ou 0, se for inválida. 
// A função deve ter o seguinte protótipo: int valida_mail(char *s);


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int valida_mail(char *s) {
    int i, len = strlen(s);
    int letras_ou_numeros = 0;

    // comprimento máximo de 64
    if (len == 0 || len > 64) return 0;

    // primeiro caractere deve ser letra
    if (!isalpha(s[0])) return 0;

    for (i = 0; i < len; i++) {
        char c = s[i];

        // apenas letras, números, '.', '-', '_'
        if (!(isalpha(c) || isdigit(c) || c == '.' || c == '-' || c == '_')) {
            return 0;
        }

        // contar letras ou números
        if (isalpha(c) || isdigit(c)) {
            letras_ou_numeros++;
        }

        // ponto não pode estar em sequência
        if (c == '.' && i > 0 && s[i - 1] == '.') {
            return 0;
        }
    }

    // não pode terminar com ponto
    if (s[len - 1] == '.') return 0;

    // no mínimo duas letras ou números
    if (letras_ou_numeros < 2) return 0;

    return 1; // string válida
}