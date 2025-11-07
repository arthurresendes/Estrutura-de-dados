#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Trabalho Restaurante , numero do chamado + pedido. Arthur Resende Gomes e Arthur Silva Rodrigues

typedef struct Node{
    int numero;
    struct Node *prox;
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

void enqueue(Fila *f, int num){
    Node *novo = malloc(sizeof(Node));

    if(!novo){
        return;
    }

    novo->numero = num;
    novo->prox = NULL;
    if(vazio(f)){
        f->inicio = novo;
        f->fim = novo;
    }else{
        f->fim->prox = novo;
        f->fim=novo;
    }
    f->tam++;
    printf("Numero de pedido %d na fila!\n", num);
}

// FIFO - First in , First Out -> Fila
// LIFO - Last in , First Out -> Pilha

int dequeue(Fila *f){
    if(vazio(f)){
        printf("Fila vazia");
        return -1;
    }

    Node *remover = f->inicio;
    int valor = remover->numero;
    f->inicio = remover->prox;
    if(f->inicio == NULL){
        f->fim = NULL;
    }
    free(remover);

    f->tam--;
    printf("Pedido entregue: %d.\n", valor);
    return valor;

}

void lista_espera(Fila *f){
    if(vazio(f)){
        printf("Fila vazia\n");
        return;
    }

    Node *auxiliar = f->inicio;
    int pos = 1;
    while(auxiliar != NULL){
        printf("[%d] -> %d\n", pos, auxiliar->numero);
        auxiliar = auxiliar->prox;
        pos++;
    }
    printf("------------------------------------\n\n");
}

void mostrar_proximo(Fila *f){
    if(vazio(f)){
        printf("Fila vazia\n");
        return;
    }

    Node *proximo = f->inicio;
    printf("O proximo da fila eh %d\n", proximo->numero);
}

void total(Fila *f){
    if(vazio(f)){
        printf("Fila vazia\n");
        return;
    }

    Node *auxiliar = f->inicio;
    int cont = 0;
    while(auxiliar != NULL){
        cont++;
        auxiliar = auxiliar->prox;
    }
    printf("O total de pessoas na fila eh: %d\n",cont);
}

void limpar(Fila *f){
    if(vazio(f)){
        printf("Fila vazia\n");
        return;
    }

    Node *aux = f->inicio;
    Node *next;
    while(aux != NULL){
        next = aux->prox;
        free(aux);
        aux = next;
    }

    f->inicio = NULL;
    f->fim = NULL;
    f->tam = 0;
}

int main(){
    Fila f;
    inicializa(&f);
    int opcao,valor;

    do {
        printf("=========== MENU FILA BANCÁRIA ===========\n");
        printf("1 - Adicionar cliente à fila\n");
        printf("2 - Entregar pedido\n");
        printf("3 - Exibir fila de espera\n");
        printf("4 - Mostrar o próximo cliente\n");
        printf("5 - Quantidade de clientes na fila\n");
        printf("6 - Zerar fila\n");
        printf("0 - Sair\n");
        printf("========================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor que quer adicionar: ");
                scanf("%d", &valor);
                printf("\nAdicionando cliente à fila\n");
                enqueue(&f,valor);
                break;
            case 2:
                printf("\nAtendendo cliente\n\n");
                dequeue(&f);
                break;
            case 3:
                printf("\nExibindo fila de espera\n\n");
                lista_espera(&f);
                break;
            case 4:
                printf("\nMostrando o próximo cliente\n\n");
                mostrar_proximo(&f);
                break;
            case 5:
                printf("\nMostrando quantidade de clientes na fila\n\n");
                total(&f);
                break;
            case 6:
                printf("\nZerando fila\n\n");
                limpar(&f);
                break;
            case 0:
                printf("\nSaindo do programa...\n\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n\n");
                break;
        }
    } while (opcao != 0);



    return 0;
}