// Faça um programa que receba uma string do usuário (máx. 20 caracteres) e um caracter qualquer. O programa deve remover todas as ocorrências do caracter da string e mostrar o resultado.

#include <stdio.h>
#include <string.h>
int main()
 {
    char string[21];
    char caractere;
    int i, j;
    
    printf("Digite uma frase: ");
    fgets(string, sizeof(string), stdin);
    
    if (string[strlen(string) - 1] == '\n')
    {
        string[strlen(string) - 1] = '\0';
    }

    printf("Digite o caractere que deseja remover: ");
    scanf(" %c", &caractere);

    for (i = 0, j = 0; string[i] != '\0'; i++)
    {
        if (string[i] != caractere) 
        {
            string[j] = string[i];
            j++;
        }
    }

    string[j] = '\0';

    printf("Resultado: %s\n", string);
    
    return 0;
}