#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int valor;
    struct Node *prox;
}Node;

typedef struct  Fila
{
    Node *inicio;
    Node * fim;
    int tam;
}Fila;


void iniciailiza(Fila *f){
    f->inicio = NULL;
    f->fim = NULL;
    f->tam = 0;
}


int vazia(Fila *f){
    return  f->inicio == NULL;
}

void enqueue(Fila *f,int num){
    Node *novo = malloc(sizeof(Node));

    if(!novo){
        exit(1);
    }

    novo->valor = num;
    novo->prox = NULL;
    
    if(vazia(f)){
        f->inicio = novo;
        f->fim = novo;
    }else{
        f->fim->prox = novo;
        f->fim = novo;
    }
    f->tam++;
    printf("Elemento %d enfileirado com sucesso!\n", num);
}

int dequeue(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        return -1;
    }

    Node *remover = f->inicio;
    int valor = remover -> valor;
    f->inicio = remover->prox;
    if (f->inicio == NULL) {
        f->fim = NULL;
    }
    free(remover);

    f->tam--;

    printf("Elemento %d removido do início da fila.\n", valor);
    return valor;
}


void exibir(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        return;
    }


    Node *aux = f->inicio;
    int pos = 1;
    while(aux != NULL){
        printf("[%d] -> %d\n", pos, aux->valor);
        aux = aux->prox;
        pos++;
    }
    printf("------------------------------------\n\n");
}

void libera(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        exit(2);
    }

    Node *aux = f->inicio;
    Node *next;
    while(aux != NULL){
        next = aux->prox;
        free(aux);
        aux = next;
    }

    f->inicio = NULL;
    f->fim = NULL;
    f->tam = 0;
}

int main(void) {
    Fila f;
    iniciailiza(&f);

    int opcao, valor;

    do {
        printf("\n=========== FILA DINÂMICA EM C ===========\n");
        printf("1 - Enfileirar (ENQUEUE)\n");
        printf("2 - Desenfileirar (DEQUEUE)\n");
        printf("3 - Exibir fila\n");
        printf("4 - Libera fila\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1:
                printf("Digite o valor a enfileirar: ");
                scanf("%d", &valor);
                enqueue(&f, valor);
                break;
            case 2:
                dequeue(&f);
                break;
            case 3:
                exibir(&f);
                break;
            case 4:
                libera(&f);
                break;
            case 0:
                printf("Encerrando programa\n");
                break;
            default:
                printf("Opcao invalida\n");
        }

    } while (opcao != 0);

    libera(&f);
    return 0;
}