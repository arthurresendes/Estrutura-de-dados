#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int x;
    struct Node *prox;
}Node;

typedef struct Pilha{
    Node *topo;
    int tamanho;
}Pilha;

void inicializa(Pilha *p){
    p->topo = NULL;
    p->tamanho = 0;
}

void vazia(Pilha *p){
    return p->topo == NULL;
}

void push(Pilha *p, int valor){
    Node *novo;
    novo = malloc(sizeof(Node));

    if(!novo){
        printf("Sem memória disponível!\n");
        exit(1);
    }
    novo->x = valor;
    novo->prox = NULL;

    p->topo = novo;
    p->tamanho++;
    printf("Elemento %d empilhado com sucesso!\n", valor);
}

int pop(Pilha *p){
    Node *aux = p->topo;
    int valor = aux->x;
    p->topo = aux->prox;
    free(aux->x);
    return valor;
}

void exibir(Pilha *p){
    Node *aux = p->topo;
    int pos = p->tamanho;
    while(aux !=NULL){
        printf("[%d] -> %d\n", pos, aux->x);
        aux = aux->prox;
        pos--;
    }
}

void libera(Pilha *p){
    Node *atual = p->topo;
    Node *proxNode;

    while (atual != NULL) {
        proxNode = atual->prox;
        free(atual);
        atual = proxNode;
    }

    p->topo = NULL;
    p->tamanho = 0;
}

int main(){
    Pilha *p;

    inicializa(&p);
    int opcao, valor;

    do {
        printf("\n=========== PILHA DINÂMICA EM C ===========\n");
        printf("1 - Empilhar (PUSH)\n");
        printf("2 - Desempilhar (POP)\n");
        printf("3 - Exibir pilha\n");
        printf("4 - Zerar pilha\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        if (opcao == 1) {
            printf("Digite o valor a empilhar: ");
            scanf("%d", &valor);
            push(&p, valor);
        }
        else if (opcao == 2) {
            pop(&p);
        }
        else if (opcao == 3) {
            exibe(&p);
        }
        else if (opcao == 4) {
            libera(&p);
            printf("Pilha zerada!\n");
        }
        else if (opcao == 0) {
            printf("Encerrando programa...\n");
        }
        else {
            printf("Opcao invalida!\n");
        }


    } while (opcao != 0);

    return 0;
}