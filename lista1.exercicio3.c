#include <stdio.h>

int main (void)
{
    float dig1, dig2, resultado;

    char op;
    
    printf("Digite a operacao que deseja fazer (+, -, *, /): \n");
    scanf( " %c" , &op);

    printf("Digite dois numeros que deseja operar: \n");
    scanf( "%f %f" , &dig1, &dig2);
    
    switch(op)
    {
        case '+': 
            resultado = dig1 + dig2;
            printf("%.2f", resultado);
            break;

        case '-': 
            resultado = dig1 - dig2;
            printf("%.2f", resultado);
            break;

        case '/': 
            resultado = dig1 / dig2;
            printf("%.2f", resultado);
            break;

        case '*': 
            resultado = dig1 * dig2;
            printf("%.2f", resultado);
            break;
    }    

    return 0;
}