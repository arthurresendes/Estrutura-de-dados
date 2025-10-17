#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int dado;
    struct pilha *prox;
}Pilha;

Pilha *topo = NULL;

void pop();
void push(int valor);
void listagem();

int main(){
    int opcao = 0,n;
    do
    {
        printf("\n=====Menu====\n");
        printf("1-Listagem\n");
        printf("2-Inserindo\n");
        printf("3-Excluindo\n");
        printf("0-Saindo\n");
        printf(":");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            listagem();
            break;
        case 2:
            printf("Digite um valor numerio inteiro: ");
            scanf("%d", &n);
            push(n);
            break;
        case 3:
            pop();
            break;
        case 0:
            printf("Saindo... \n");
            return 0;
        default:
            printf("Numero invalido\n");
            break;
        }
    } while (opcao != 0);
    return 0;
}


void push(int valor){
    Pilha *novo = malloc(sizeof(Pilha));
    novo->dado = valor;
    novo->prox = topo;
    topo = novo;
    printf("Valor adicionado: %d", valor);
}

void pop(){
    if(topo == NULL){
        printf("Pilha vazia");
    }else{
        Pilha *temporaria;
        temporaria = topo;
        topo = topo->prox;
        printf("\nDesempilhando %d", temporaria->dado);
        free(temporaria);
    }
}

void listagem(){
    if(topo == NULL){
        printf("Pilha vazia!!");
    }else{
        Pilha *atual;
        atual = topo;
        while (atual != NULL){
            printf("%d\n", atual->dado);
            atual = atual->prox;
        }
    }
}