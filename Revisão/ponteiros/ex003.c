#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *proximo;
}No;

typedef struct Lista{
    No *inicio;
    No *fim;
    int tamanho;
}Lista;

int main(){
    Lista lista;

    lista.inicio = 0;
    lista.fim=0;
    lista.tamanho = 0;

    No *p1,*p2,*p3;

    p1 = malloc(sizeof(No));
    p1->valor = 5;
    p1->proximo = NULL;

    lista.inicio = p1;
    lista.fim = p1;
    lista.tamanho++;

    p2 = malloc(sizeof(No));
    p2->valor = 15;
    p2->proximo = NULL;

    lista.fim->proximo = p2;
    lista.fim = p2;
    lista.tamanho++;

    p3 = malloc(sizeof(No));
    p3->valor = 25;
    p3->proximo = NULL;

    lista.fim->proximo = p3;
    lista.fim = p3;
    lista.tamanho++;

    No *atual;
    atual = lista.inicio;
    while(atual != NULL){
        printf("%d\n", atual->valor);
        atual = atual->proximo;
    }


    return 0;
}
