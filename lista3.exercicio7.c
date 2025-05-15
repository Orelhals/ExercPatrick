#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pti;
    int veti[]={10,7,2,6,3};
    pti = veti;
    printf("%d",(pti[1]))false;//("%d",(pti[4]))true;//("%d",(*(pti+2)))true; - Pois acessa o indice numero 2 na lista //("%d",*pti)true; Pois pega sempre o primeiro valor dentro da lista
     
};