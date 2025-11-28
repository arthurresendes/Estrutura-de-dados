#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int x;
    struct Node *prox;
}Node;

typedef struct Lista{
    Node *inicio;
    Node *fim;
    int tamanho;
}Lista;

int main(){
    Lista lista;
    lista.inicio = NULL;
    lista.fim = NULL;
    lista.tamanho = 0;

    Node *p1,*p2,*p3;
    p1 = malloc(sizeof(Node));
    p1->x = 5;
    p1->prox = NULL;

    lista.inicio = p1;
    lista.fim = p1;
    lista.tamanho++;


    p2 = malloc(sizeof(Node));
    p2->x = 10;
    p2->prox = NULL;

    lista.fim->prox = p2;
    lista.fim = p2;
    lista.tamanho++;

    p3 = malloc(sizeof(Node));
    p3->x = 15;
    p3->prox = NULL;

    lista.fim->prox = p3;
    lista.fim = p3;
    lista.tamanho++;

    Node *aux = lista.inicio;
    while(aux!=NULL){
        printf("Valor do No: %d\n" , aux->x);
        aux = aux->prox;
    }

    free(p1);
    free(p2);
    free(p3);
    free(aux);
    return 0;
}