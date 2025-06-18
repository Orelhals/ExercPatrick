//imprimir, excluir, incluir e alterar.

struct aluno
{
    char nome[100];
    int matricula;
    int idade;
    struct aluno *prox;
};
typedef struct aluno Aluno;

void imprime(Aluno *lista)
{
    Aluno *p;

    for (p = lista; p != NULL; p = p->prox)
        printf("nome: %s, matricula: %d, idade: %d\n", p->nome, p->matricula, p->idade)
}

Aluno *excluirAluno(Aluno *lista, int matricula) 
{  
    if (lista == NULL){return NULL};

    //primeiro elemento
    if (lista->matricula == matricula) 
    {
        Aluno* temp = lista;
        lista = lista->prox;
        printf("Aluno %s excluído\n", temp->nome);
        free(temp);
        return lista;
    }
    
    Aluno *atual = lista;
    while (atual->prox != NULL && atual->prox->matricula != matricula) 
    {
        atual = atual->prox;
    }
    
    if (atual->prox == NULL) 
    {
        printf("Aluno com matrícula %d não encontrado!\n", matricula);
        return lista;
    }
    
    Aluno *temp = atual->prox;
    atual->prox = temp->prox;
    printf("Aluno %s excluído\n", temp->nome);
    free(temp);

    return lista;
}

Aluno *incluir(Elemento *lista, char nome[], int matricula, int idade)
{
    Elemento *novo = (Elemento*)malloc(sizeof(Elemento));
    if(novo == NULL){printf("Não ha memoria suficiente\n"); exit(1);}

    strcpy(novo->nome, nome);
    novo->matricula = matricula;
    novo->idade = idade;

    novo->prox = lista;

    return novo;
}

void alterarAluno(Aluno *lista, int matricula, char novoNome[], int novaIdade) 
{
    Aluno *p = lista;

    while (p != NULL) 
    {
        if (p->matricula == matricula) 
        {
            strcpy(p->nome, novoNome);
            p->idade = novaIdade;

            return;
        }
        p = p->prox;
    }

    printf("Matricula %d não encontrada\n", matricula);
}