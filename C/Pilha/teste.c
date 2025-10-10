#include <stdlib.h>
#include <stdio.h>

typedef struct pilha{
    int valor;
    struct pilha *prox;
}Pilha;

Pilha *topo = NULL;

void push(int numero){
    Pilha *novo = malloc(sizeof(Pilha));
    novo->valor = numero;
    novo->prox = topo;
    topo = novo;
    printf("Valor inserido!!\n");
}

void pop(){
    if(topo == NULL){
        printf("Pilha vazia");
    }else{
        Pilha *temp;
        temp = topo;
        topo = topo->prox;
        printf("Desimpilhando!!\n");
        free(temp);
    }
}

void listagem(){
    Pilha *atual = topo;
    while (atual != NULL){
        printf("Valor: %d\n" , atual->valor);
        atual = atual->prox;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    listagem();
    pop();
    listagem();
    pop();
    listagem();
    return 0;
}
