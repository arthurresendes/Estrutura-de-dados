#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void enqueue(Fila *f, int num, char pe[100]){
    Node *novo = malloc(sizeof(Node));

    if(!novo){
        exit(1);
    }

    novo->numero = num;
    strcpy(novo->pedido, pe);

    if(vazio(f)){
        f->inicio = novo;
        f->fim = novo;
    }else{
        f->fim->prox = novo;
        f->fim = novo;
    }

    f->tam++;
    printf("Elemento %d enfileirado com sucesso!\n", num);
}

int main(){
    Fila f;
    inicializa(&f);




    return 0;
}