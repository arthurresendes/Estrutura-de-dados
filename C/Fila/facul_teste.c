#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int num;
    struct Node *prox;
}Node;

typedef struct Fila{
    Node *inicio;
    Node *fim;
    int tam;
}Fila;


void inicializa(Fila *f){
    f->inicio = NULL;
    f->fim = NULL;
    f->tam = 0;
};

int vazia(Fila *f){
    return f->inicio == NULL;
}

void enqueue(Fila *f, int valor) {
    Node *novo = malloc(sizeof(Node));
    if (!novo) {
        printf("Sem memória disponível!\n");
        exit(1);
    }

    novo->num = valor;
    novo->prox = NULL;

    if (f->inicio == NULL) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }

    f->tam++;
    printf("Elemento %d enfileirado com sucesso!\n", valor);
}

int dequeue(Fila *f) {
    if (f->inicio == NULL) {
        printf("Fila vazia, nada para remover.\n");
        return -1;
    }

    Node *remover = f->inicio;
    int valor = remover->num;
    f->inicio = remover->prox;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(remover);
    f->tam--;

    printf("Elemento %d removido do início da fila.\n", valor);
    return valor;
}


void exibe(Fila *f) {
    if (f->inicio == NULL) {
        printf("Fila vazia.\n");
        return;
    }

    Node *aux = f->inicio;
    int pos = 1;

    printf("\n--- FILA (do início para o fim) ---\n");
    while (aux != NULL) {
        printf("[%d] -> %d\n", pos, aux->num);
        aux = aux->prox;
        pos++;
    }
    printf("------------------------------------\n\n");
}


int main(void) {
    Fila f;
    inicializa(&f);

    int opcao, valor;

    do {
        printf("\n=========== FILA DINÂMICA EM C ===========\n");
        printf("1 - Enfileirar (ENQUEUE)\n");
        printf("2 - Desenfileirar (DEQUEUE)\n");
        printf("3 - Exibir fila\n");
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
                exibe(&f);
                break;
            case 0:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    libera(&f);
    return 0;
}