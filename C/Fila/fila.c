#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int dado;
    struct No *prox;
}NO;

typedef struct FILA{
    NO* inicio;
    NO *fim;
}FILA;

void enfilerar(int dado , FILA * f){
    NO *ptr = (NO*)malloc(sizeof(NO));
    if(ptr == NULL){
        printf("Erro na alocação!!\n");
        return;
    }else{
        ptr->dado = dado;
        ptr->prox = NULL;
        if(f->inicio == NULL){
            f->inicio = ptr;
        }

        f->fim = ptr;
    }
}