#include <stdio.h>
#include <string.h>

#define MAX_CHARS 50

int main() 
{
    char string[MAX_CHARS + 1];
    int contagem[256] = {0};
    int i;
    
    printf("Digite uma string (max. 50 caracteres): \n");
    fgets(string, MAX_CHARS + 1, stdin);
    
    if (string[strlen(string) - 1] == '\n') 
    {
        string[strlen(string) - 1] = '\0';
    }
    
    for (i = 0; i < strlen(string); i++) 
    {
        contagem[(unsigned char)string[i]]++;
    }
    
    printf("Estatistica dos caracteres:\n");
    
    for (i = 0; i < 256; i++) 
    {
        if (contagem[i] > 0) 
        {
            if (i == 32) //espaço
            {
                printf("' ' = %d\n", contagem[i]);
            } 
            else 
            {
                printf("'%c' = %d\n", i, contagem[i]);
            }
        }
    }
    
    return 0;
}