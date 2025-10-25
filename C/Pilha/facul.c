#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int num;
    struct Node *prox;
}Node;

typedef struct Pilha{
    Node *topo;
    int tam;
}Pilha;


void inicializa(Pilha *p){
    p->topo = NULL;
    p->tam = 0;
};

void vazia(Pilha *p){
    if (p->topo == NULL){
        printf("Pilha vazia!!");
    }else{
        printf("Pilha não esta vazia");
    }
}

void push(Pilha *p, int valor){
    Node *novo = (Node*)malloc(sizeof(Node));
    if(!novo){
        printf("Sem memória disponível!\n");
        exit(1);
    }

    novo->num = valor;
    novo->prox = p->topo;
    p->topo = novo;
    p->tam++;

    printf("Elemento %d empilhado com sucesso!\n", valor);
}

void pop(Pilha *p){
    if (p->topo == NULL) {
        printf("Pilha vazia, nada para remover.\n");
        return -1;
    }

    Node *remover = p->topo;
    int valor = remover->num;
    p->topo = remover->prox;
    free(remover);
    p->tam--;

    printf("Elemento %d removido do topo.\n", valor);
}


void exibe(Pilha *p) {
    if (p->topo == NULL) {
        printf("Pilha vazia.\n");
        return;
    }

    Node *aux = p->topo;
    printf("\n--- PILHA (do topo para base) ---\n");
    int pos = p->tam;
    while (aux != NULL) {
        printf("[%d] -> %d\n", pos, aux->num);
        aux = aux->prox;
        pos--;
    }
    printf("-------------------------------\n\n");
}

void libera(Pilha *p) {
    Node *atual = p->topo;
    Node *proxNode;

    while (atual != NULL) {
        proxNode = atual->prox;
        free(atual);
        atual = proxNode;
    }

    p->topo = NULL;
    p->tam = 0;
}


int main(void) {
    Pilha p;
    inicia(&p);  // Inicializa a pilha

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

    // Libera memória antes de sair
    libera(&p);
    return 0;
}
