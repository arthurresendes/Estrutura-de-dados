#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
}No;

typedef struct Lista{
    No *inicio;
    No *fim;
    int tamanho;
}Lista;

int main(){
    Lista lista;

    lista.inicio = NULL;
    lista.fim = NULL;
    lista.tamanho = 0;

    No *a1,*a2,*a3;

    a1 = malloc(sizeof(No));
    a1->valor = 5;
    a1->prox = NULL;

    lista.inicio = a1;
    lista.fim = a1;
    lista.tamanho++;

    a2 = malloc(sizeof(No));
    a2->valor = 10;
    a2->prox = NULL;

    lista.fim->prox = a2;
    lista.fim = a2;
    lista.tamanho++;

    a3 = malloc(sizeof(No));
    a3->valor = 15;
    a3->prox = NULL;

    lista.fim->prox = a3;
    lista.fim = a3;
    lista.tamanho++;

    No *atual = lista.inicio;
    while(atual != NULL){
        printf("Valor do No: %d\n" , atual->valor);
        atual = atual->prox;
    }



    return 0;
}