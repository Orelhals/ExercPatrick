/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char * estado[27] = {"AC","AL","AM","AP","BA","CE","DF","ES","GO","MA","MG","MS","MT","PA","PB","PE","PI","PR","RJ","RN","RO","RR","RS","SC","SE","SP","TO"};

typedef struct assalariados {
    char nome[51];
    char sexo;
    int idade;
    float salario;
    char estado[3];
} Assalariados;

Assalariados * cadastra(char *nome, char sexo, int idade, float salario, char *estado){
    Assalariados * novo = (Assalariados *) malloc (sizeof(Assalariados)); // para colocar informações no struct devemos primeiramente alocar memória para essas informações
    if (novo == NULL){
        printf("Erro ao alocar memoria!");
        exit(1);
    }

    strcpy(novo->nome,nome);
    novo->sexo = sexo;
    novo->idade = idade;
    novo->salario = salario;
    strcpy(novo->estado,estado);

    return novo;
};

void relatorio(Assalariados ** ptr, int numAssalariados);
void imprime(Assalariados ** ptr, int numAssalariados);

int main(void) {
    Assalariados **pessoas;
    int numAssalariados=3;
    pessoas = (Assalariados **) malloc (numAssalariados * sizeof(Assalariados *));

    pessoas[0] = cadastra("Fulano de tal", 'M',45,1500.00, "RJ");
    pessoas[1] = cadastra("Ciclano", 'M',50,2500.00, "RS");
    pessoas[2] = cadastra("Beltrano", 'M',42,500.00, "RS");
    imprime(pessoas, numAssalariados);
    relatorio(pessoas,numAssalariados);

    for (int i = 0; i <numAssalariados;i++){
        free(pessoas[i]);
    }
    free(pessoas);
    return 0;
}

void imprime(Assalariados ** ptr, int numAssalariados){
    for (int i = 0; i < numAssalariados; i++){
        printf("_________________________________________________\n");
        printf("Funcionario numero %d\n",i);
        printf("Nome do funcionario: %s\n",ptr[i]->nome);
        printf("Sexo do funcionario: %c\n",ptr[i]->sexo);
        printf("Idade do funcionario: %d\n",ptr[i]->idade);
        printf("Salario do funcionario: %.2f\n",ptr[i]->salario);
        printf("Estado do funcionario: %s\n",ptr[i]->estado);
    };
};

void relatorio(Assalariados ** ptr, int numAssalariados){
    int numEstados = sizeof(estado) / sizeof(estado[0]);

    int v[27],quantidade = 0;

    for (int i = 0;i < numEstados;i++){
        for (int j = 0; j < numAssalariados; j++){
            if (strcmp(ptr[j]->estado,estado[i])== 0){
                if (ptr[j]->sexo == 'M' && ptr[j]->idade > 40 && ptr[j]->salario > 1000.00){
                    quantidade +=1;
                }
            }
        }
        if (quantidade == 0){
                continue;
        }
        else{
            printf("_________________________________________________\n");
            printf("Estado=%s com %d homens maiores de 40 anos e salário maior que R$ 1000,00\n",estado[i],quantidade);
            quantidade = 0;
        };

    }
};
*/
