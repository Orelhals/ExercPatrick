/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef struct data{
    int dia,mes,ano;
} Data;

typedef struct local{
    char ender[81];
    int sala;
} Local;

typedef struct notas{
    float geral;
    float especifica;
} Notas;

typedef struct candidato{
    int inscri;
    char nome[81];

    Data nasc;
    Local *loc;
    Notas nt;
} Candidato; // typedef "Main"
void lendo_candidatos(int n, Candidato* candidatos,bool chave);// typedef deve ser no comeco do codigo, sempre
void printar_candidatos(int n, Candidato* candidatos);
void mudar_candidato(int n, Candidato* candidatos);
void mudar_candidato_sala(int n, Candidato* candidatos);
int main(void){
    int n,op;
    bool chave = true;
    Candidato* candidatos;

    printf("Digite o número de candidatos: ");
    scanf("%d", &n);
    getchar(); // Limpa o '\n' do buffer após scanf

    candidatos = (Candidato*) malloc(n * sizeof(Candidato));
    if (candidatos == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    lendo_candidatos(n, candidatos,chave);

    while (chave){
    printf("__________________________________________________________________\n");
    printf("Caso queira ler dados dos candidatos escreva 1 ou se quiser imprimir, escreva 2. Além disso, caso queira mudar algum dado de candidato, escreva 3 e para encerrar essas opcoes escreva 4: ");
    scanf("%d",&op);

    switch (op){
        case 1: lendo_candidatos(n, candidatos, chave);
        case 2: printar_candidatos(n,candidatos);
        case 3: mudar_dado(n,candidatos);
        case 4: mudar_dado_sala(n,candidatos);
        case 5: printf("Ate a próxima!"); chave = false;
    };

    };



    // Liberação correta da memória
    for (int i = 0; i < n; i++) {
        free(candidatos[i].loc);
    }
    free(candidatos);

    return 0;
}

void lendo_candidatos(int n,Candidato* candidatos, bool chave){

    for (int i = 0; i < n; i++){
        printf("__________________________________________________________________\n");
        printf("Esse é o candidato de numero %d\n",i+1);
        printf("Digite seu numero de inscricao: ");
        scanf("%d",&candidatos[i].inscri);
        getchar();

        printf("Digite seu nome: ");
        fgets(candidatos[i].nome,sizeof(candidatos[i].nome),stdin);
        candidatos[i].nome[strcspn(candidatos[i].nome, "\n")] = '\0'; // Dentro do nome colocado pelo o usuario, procuramos onde está o char que queremos e o que colocar no lugar. Colocamos \0 pra indicar o final da frase

        printf("Digite sua data de nascimento: ");
        scanf("%d %d %d",&candidatos[i].nasc.dia,&candidatos[i].nasc.mes,&candidatos[i].nasc.ano);
        getchar();

        // Alocar memória para o ponteiro loc
        candidatos[i].loc = malloc(sizeof(Local));
        if (candidatos[i].loc == NULL) {
            printf("Erro ao alocar memória para local!\n");
            exit(1);
        }

        printf("Digite o endereço: ");
        fgets(candidatos[i].loc->ender, sizeof(candidatos[i].loc->ender), stdin);
        candidatos[i].loc->ender[strcspn(candidatos[i].loc->ender, "\n")] = '\0';

        printf("Digite o número da sala: ");
        scanf("%d", &candidatos[i].loc->sala);
        getchar(); // limpa o \n

        printf("Digite suas notas gerais e especificas, em sequencia: ");
        scanf("%f %f",&candidatos[i].nt.geral, &candidatos[i].nt.especifica);
        getchar

    }

};

void printar_candidatos(int n,Candidato* candidatos){
    for (int i = 0; i < n; i++){
        printf("%d\n",candidatos[i].inscri);
        printf("%s\n",candidatos[i].nome);
        printf("%d %d %d\n",candidatos[i].nasc.dia,candidatos[i].nasc.mes,candidatos[i].nasc.ano);
        printf("%s\n",candidatos[i].loc->ender);
        printf("%d\n",candidatos[i].loc->sala);
        printf("%f\n",candidatos[i].nt.geral);
        printf("%f\n",candidatos[i].nt.especifica);
        printf("__________________________________________________________________");
    };
};
void mudar_candidato(int n, Candidato* candidatos){
    int num;
    printf("Qual o candidato que deseja mudar o endereco de prova? Candidato: ");
    scanf("%d",&num)
    candidatos[num-1].loc->ender = fgets(candidatos[num-1].loc->ender,sizeof(candidatos[i].loc->ender),stdin);
    candidatos[num-1].loc->ender[strcspn(candidatos[num-1].loc->ender,"\n")] = '0';
};
void mudar_candidato_sala(int n, Candidato* candidatos){
    int num;
    printf("Qual o candidato que deseja mudar a sala da prova? Candidato: ");
    scanf("%d",&num)
    candidatos[num-1].loc->sala = fgets(candidatos[num-1].loc->sala,sizeof(candidatos[i].loc->sala),stdin);
    candidatos[num-1].loc->sala[strcspn(candidatos[num-1].loc->sala,"\n")] = '0';
};
*/
