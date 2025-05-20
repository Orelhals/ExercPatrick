/*
O cadastro de uma turma de n alunos é representado por um vetor de inteiros,
contendo a matrícula de cada aluno, e um vetor de reais, contendo a nota final de cada
aluno, de tal modo que para uma mesma posição do vetor (mesmo índice), a matrícula e
a nota se referem a um mesmo estudante. Considere que um aluno está aprovado se
tem nota final maior ou igual a 5,0. Escreva uma função que recebe como parâmetros o
inteiro n, o ponteiro mat para o vetor de matrículas, o ponteiro notas para o vetor de
notas e um ponteiro para a variável inteira tam. A função deve contar o número de
alunos aprovados, criar um novo vetor de inteiros alocado dinamicamente com o

tamanho exato para conter apenas a matrícula desses alunos, e armazenar no novo
vetor as matrículas correspondentes. Finalmente, a função deverá armazenar o
tamanho do novo vetor na variável tam e retornar o ponteiro para seu primeiro
elemento. O protótipo da função é
int *aprovados(int n, int *mat, float *notas, int *tam);
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
  scanf("99[^\n]", s);

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