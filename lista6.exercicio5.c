/* 
Júlio César, o imperador romano, usava a Cifra de César para enviar ordens secretas
aos seus generais. Este código consiste em trocar cada letra de uma mensagem pela
terceira letra seguinte. Ou seja, a letra ‘a’ é substituída por ‘d’, ‘b’ é substituída por ‘e’,
‘c’ é substituída por ‘f’, e assim por diante. As exceções são as três últimas letras do
alfabeto, ‘x’, ‘y’ e ‘z’, que são substituídas, respectivamente, por ‘a’, ‘b’ e ‘c’. Por
exemplo, a palavra “zebra” se transformaria em “cheud”. Escreva uma função que
codifique uma mensagem de acordo com a Cifra de César, aplicando a codificação
apenas às letras da mensagem, maiúsculas ou minúsculas, e preservando os demais
caracteres. Essa função deve receber como parâmetro uma cadeia de caracteres com a
mensagem a ser codificada e retornar o ponteiro para uma nova cadeia de caracteres,
alocada dinamicamente, com a mensagem codificada. A cadeia de caracteres original
não pode ser alterada. A função deve ter o seguinte protótipo:
char* cifra_cesar(char* msg); 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *cifra_cesar(char *msg);

int main(void)
{
    char *mensagem =(char*) malloc(256 * sizeof(char));
    if (mensagem==NULL) { printf("Falta memoria \n"); exit(1); }
      
    printf("digite uma palavra: \n");
    scanf("%s", &mensagem);
    
    char msgCifrada = cifra_cesar(mensagem);

    printf(" %s\n", &msgCifrada);   

    free(mensagem);
    free(msgCifrada);

    return 0;
}

char *cifra_cesar(char *msg)
{   
    int len = strlen(msg);
    char *cifrada = (char*) malloc((len + 1) * sizeof(char));
    if (cifrada==NULL) { printf("Falta memoria \n"); exit(1); }
    
    for (int i = 0; i < len; i++) 
    {
        if (msg[i] >= 'A' && msg[i] <= 'Z') 
        {
            cifrada[i] = ((msg[i] - 'A' + 3) % 26) + 'A'; 
        } 
        else if (msg[i] >= 'a' && msg[i] <= 'z')
        {
            cifrada[i] = ((msg[i] - 'a' + 3) % 26) + 'a'; //(msg[i] - 'a') "zera" a contagem (vai de 0 a 26) e + 'a' retorna ao padrao ASCII
        } 
        else 
        {
            cifrada[i] = msg[i]; // mantém caracteres especiais
        }
    }

    cifrada[len] = '\0'; // adiciona o \0

    return cifrada;
}