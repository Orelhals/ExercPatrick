/*
Escreva uma função em C que receba como parâmetro uma cadeia de caracteres,
contendo apenas letras entre 'A' e 'Z' ou 'a' e 'z' e espaços em branco, e retorne uma
nova cadeia -- alocada dinamicamente --, contendo uma cópia da cadeia original, mas
sem espaços em branco no início ou no final, isto é, sem qualquer caractere ' ' (espaço)
localizado antes da primeira letra ou depois da última letra da cadeia. Por simplificação,
considere que a cadeia de entrada possui no mínimo uma letra (entre 'A' e 'Z' ou 'a' e
'z'). Por exemplo, se a cadeia “ nota do aluno ” (com três espaços em branco no início
e dois no final) for passada para a função, a cadeia retornada deve ser “nota do aluno”,
sem nenhum espaço no início ou no final. Se não for possível alocar dinamicamente a
nova cadeia, a função deve retornar NULL. O protótipo da função é:
char *compactar(char *s);
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *compactar(char *s) {
  if (s == NULL) {
    return NULL;
  }

  int start = 0, end = strlen(s) - 1;

  while (s[start] == ' ' && start <= end) {
    start++;
  }

  while (s[end] == ' ' && end >= start) {
    end--;
  }

  if (start > end) {
    return NULL;
  }

  int len = end - start + 1;

  char *new_str = (char *)malloc((len + 1) * sizeof(char));
  if (new_str == NULL) {
    return NULL;
  }

  for (int i = 0; i < len; i++) {
    new_str[i] = s[start + i];
  }

  new_str[len] = '\0';

  return new_str;
}

int main() {
  char *s = (char *)malloc(100 * sizeof(char));

  if (s == NULL) {
    printf("Erro ao alocar memória para a string.\n");
    return 1;
  }

  printf("Digite os caracteres (apenas letras e espaços): ");
  scanf("%99[^\n]", s);

  char *compactada = compactar(s);

  if (compactada != NULL) {
    printf("Sequência compactada: '%s'\n", compactada);
    free(compactada);
  } else {
    printf("Não foi possível alocar a nova string ou a string estava vazia.\n");
  }

  free(s);
  return 0;
}