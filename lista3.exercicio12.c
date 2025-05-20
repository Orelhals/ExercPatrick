#include <stdio.h>
#include <stdlib.h>

int main(void){
    char frase[81];
    char cr;
    int i = 0;

    while (i < 80){
        cr = getchar();

        if (cr == '\r'){
            break;
        };

        putchar(cr);

        frase[i] = cr;
        i++;
    };

    frase[i] = '\0';
    
    printf("Essas são as letras separadas: ");
    for (i = 0; i < 80; i++){
        
        if (frase[i] == ' '){
            printf("\n");
        }
        else{
            putchar(frase[i]);
        };
    };


};
