#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char nome[100];
    int tempo_espera;
    struct Node *prox;
}Node;

typedef struct Fila{
    struct Node * inicio;
    struct Node *fim;
    int tam;
}Fila;

void inicializar(Fila *f){
    f->inicio = NULL;
    f->fim = NULL;
    f->tam = 0;
}

int vazia(Fila *f){
    return (f->tam == 0);
}

void enqueue(Fila *f, char nome[], int tempo_espera){
    Node *novo = malloc(sizeof(Node));
    if (novo == NULL) {
        printf("Erro de alocação de memória!\n");
        return;
    }

    strcpy(novo->nome, nome);
    novo->tempo_espera = tempo_espera;
    novo->prox = NULL;

    if (vazia(f)) {
        f->ini = novo;
    } else {
        f->fim->prox = novo;
    }

    f->fim = novo;
    f->tam++;

    printf("\nCliente %s adicionado à fila (%s - %d min)\n", nome, tipoServico, tempoEspera);
}