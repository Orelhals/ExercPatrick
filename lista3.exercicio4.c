/*recebe como par�metro um n�mero inteiro n por valor e dois n�meros inteiros max e min por
refer�ncia;*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int divs(int n, int * max, int * min);
int main(void){
    int n,max,min;

    printf("Digite um valor: ");
    scanf("%d",&n);

    divs(n,&max,&min);

    printf("Esse e o valor do mdc do valor %d digitado: %d\n",n,max);
    printf("Esse e o valor do minimo divisor comum do valor %d digitado: %d",n, min);
};

int divs(int n, int * max, int * min){
    bool chave = true;

    if (n % 2 == 0){
        for (int i = 2;i < n; i++){
            if (n % i == 0){
                if (chave){
                    *max = i;
                    *min = i;
                    printf("%d %d",*max,*min);
                    chave = false;
                }
                else{
                    if (i > *max){
                        *max = i;
                    }
                    else if (i < *min){
                        *min = i;
                    };
                };
            }
            else{
                continue;
            }
        };
    }
    else {
      printf("Numero %d � primo",n);
    };
};