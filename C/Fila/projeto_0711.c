#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Trabalho Restaurante , numero do chamado + pedido. Arthur Resende Gomes e Arthur Silva Rodrigues

typedef struct Node{
    int numero;
    char pedido[100];
    struct No *prox;
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

int vazio(Fila *f){
    return f->inicio==NULL;
}

int main(){
    Fila f;
    inicializa(&f);




    return 0;
}