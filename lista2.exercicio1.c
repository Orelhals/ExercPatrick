#include <stdio.h>

int verificar_primo(int x) 
{
    int i;

    if (x <= 1){
        return 0;  // não é primo
    }
    
    for (i = 2; i*i <= x; i++){ // não é necessario verificar após a raiz quadrada pois os valores são espelhados (54/6 = 9 e 54/9 = 6)
        if (x % i == 0){
            return 0;  // se encontrar um divisor não é primo
        }
    }
    
    return 1;  // caso não, é primo
}

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (verificar_primo(num)){ //se a função for true (retornar 1) quer dizer q é primo
        printf("Numero primo\n");
    } 
    else{
        printf("Numero nao primo\n");
    }
    
    return 0;
}