#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 1, quant, proximoTermo = 0, i;

    printf("Insira o número dele elementos de fibonacci que deseja exibir: \n");
    scanf("%d", &quant);
    if (quant <= 0) {
        printf("operação inválida");
        return 0;
    }

    if (quant >= 1) printf("%d ", a);
    if (quant >= 2) printf("%d ", b);


    for (i = 2; i < quant; i++) {
        proximoTermo = a + b;
        printf("%d ", proximoTermo);
        a = b;
        b = proximoTermo;
    }

    printf("\n");
    return 0;
}
