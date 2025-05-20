#include <stdio.h>

#define CAPACIDADE 20

int main() 
{
    int idade[CAPACIDADE];
    int opiniao[CAPACIDADE];
    int i;
    
    const int OTIMO = 1;
    const int BOM = 2;
    const int REGULAR = 3;
    const int RUIM = 4;
    const int PESSIMO = 5;
    
    int qtdOtimo = 0;
    int qtdBom = 0;
    int qtdRegular = 0;
    int qtdRuim = 0;
    int qtdPessimo = 0;
    
    int somaIdadeRuim = 0;
    int maiorIdadeOtimo = 0;
    int maiorIdadeRuim = 0;
    int maiorIdadePessimo = 0;
    
    printf("=== Pesquisa de Opinião do Cinema ===\n");
    printf("Para cada espectador, informe:\n");
    printf("Opinião: 1-Ótimo, 2-Bom, 3-Regular, 4-Ruim, 5-Péssimo\n\n");
    
    for (i = 0; i < CAPACIDADE; i++) 
    {
        printf("Espectador %d:\n", i + 1);
        
        printf("Idade: ");
        scanf("%d", &idade[i]);
        
        printf("Opinião (1-Ótimo, 2-Bom, 3-Regular, 4-Ruim, 5-Péssimo): ");
        scanf("%d", &opiniao[i]);
        
        while (opiniao[i] < 1 || opiniao[i] > 5) 
        {
            printf("Opinião inválida! Digite novamente (1-5): ");
            scanf("%d", &opiniao[i]);
        }
        
        printf("\n");
    }
    
    for (i = 0; i < CAPACIDADE; i++) 
    {
        switch (opiniao[i]) 
        {
            case OTIMO:
                qtdOtimo++;
                if (idade[i] > maiorIdadeOtimo) 
                {
                    maiorIdadeOtimo = idade[i];
                }
                break;
                
            case BOM:
                qtdBom++;
                break;
                
            case REGULAR:
                qtdRegular++;
                break;
                
            case RUIM:
                qtdRuim++;
                somaIdadeRuim += idade[i];
                if (idade[i] > maiorIdadeRuim) 
                {
                    maiorIdadeRuim = idade[i];
                }
                break;
                
            case PESSIMO:
                qtdPessimo++;
                if (idade[i] > maiorIdadePessimo) 
                {
                    maiorIdadePessimo = idade[i];
                }
                break;
        }
    }
    
    float diferencaPercentual = 0;
    if (qtdRegular > 0) 
    {
        diferencaPercentual = ((float)(qtdBom - qtdRegular) / qtdRegular) * 100;
    }
    
    float mediaIdadeRuim = 0;
    if (qtdRuim > 0) 
    {
        mediaIdadeRuim = (float)somaIdadeRuim / qtdRuim;
    }
    
    float percentualPessimo = ((float)qtdPessimo / CAPACIDADE) * 100;
    
    int diferencaIdade = maiorIdadeOtimo - maiorIdadeRuim;

    printf("a. Quantidade de respostas 'Ótimo': %d\n", qtdOtimo);
    printf("b. Diferença percentual entre respostas 'Bom' e 'Regular': %.2f%%\n", diferencaPercentual);
    printf("c. Média de idade das pessoas que responderam 'Ruim': %.1f anos\n", mediaIdadeRuim);
    printf("d. Porcentagem de respostas 'Péssimo': %.2f%% e maior idade que utilizou esta opção: %d anos\n", percentualPessimo, maiorIdadePessimo);
    printf("e. Diferença de idade entre a maior idade que respondeu 'Ótimo' (%d) e a maior idade que respondeu 'Ruim' (%d): %d anos\n", maiorIdadeOtimo, maiorIdadeRuim, diferencaIdade);
    
    return 0;
}