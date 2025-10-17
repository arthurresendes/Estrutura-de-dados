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
        }else{
            f->fim->prox = ptr;
        }

        f->fim = ptr;
    }
}

void desenfilera(FILA *f){
    NO *ptr = f->inicio;
    int dado;
    if(ptr != NULL){
        printf("%d\n", ptr->dado);
        f->inicio = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        if(f->inicio == NULL){
            f->fim = NULL;
        }
    }else{
        printf("Sem dados na fila!!\n");
        return;
    }
}

void imprime_fila(FILA *f){
    NO *ptr = f->inicio;
    if(ptr == NULL){
        printf("Sem dados na fila!!");
        return;
    }else{
        while(ptr != NULL){
            printf("%d\n", ptr->dado);
            ptr = ptr->prox;
        }
    }
}