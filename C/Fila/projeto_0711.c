#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int numero;
    char nome_cliente[100];
    struct No *prox;
}No;

typedef struct Fila{
    No *inicio;
    No *fim;
    int tam;
}Fila;

void inicializa(Fila *f){
    f->inicio = NULL;
    f->fim = NULL;
    f->tam = 0;
};


int main(){
    Fila f;
    inicializa(&f);




    return 0;
}