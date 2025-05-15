#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i=5, *p;
    p = &i;//se colocar apenas o p, vai apontar para o lugar da memoria que est� o valor
    printf("%x %d %d \n", *p, *p+2, 3**p);
};
