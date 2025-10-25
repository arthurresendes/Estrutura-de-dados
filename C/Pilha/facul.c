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

int vazia(Pilha *p){
    return p->topo == NULL;
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

int pop(Pilha *p){
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
    return valor; 
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

int ver_topo(Pilha *p){
    if(p->topo == NULL){
        printf("Pilha vazia.\n");
        return -1;
    }else{
        printf("Valor do topo: %d", p->topo->num);
        return p->topo->num;
    }
}

int count_elementos_pilha(Pilha *p){
    return p->tam;
}

int soma(Pilha *p){
    int soma = 0;
    Node *aux = p->topo;

    while(aux != NULL){
        soma+= aux->num;
        aux = aux->prox;
    }

    return soma;
}

int maior(Pilha *p){
    if (p->topo == NULL) return 0;
    int maior = p->topo->num;
    Node *aux = p->topo;

    while(aux != NULL){
        if(aux->num > maior){
            maior = aux->num;
        }
        aux = aux->prox;
    }

    return maior;
}

int menor(Pilha *p){
    if (p->topo == NULL) return 0;
    int menor = p->topo->num;
    Node *aux = p->topo;

    while(aux != NULL){
        if(aux->num < menor){
            menor = aux->num;
        }
        aux = aux->prox;
    }

    return menor;
}



int main(void) {
    Pilha p;
    inicializa(&p);  // Inicializa a pilha

    int opcao, valor;

    do {
        printf("\n=========== PILHA DINÂMICA EM C ===========\n");
        printf("1 - Empilhar (PUSH)\n");
        printf("2 - Desempilhar (POP)\n");
        printf("3 - Exibir pilha\n");
        printf("4 - Zerar pilha\n");
        printf("5 - Ver topo da pilha\n");
        printf("6 - Quantos elementos na pilha\n");
        printf("7 - Soma dos elementos da pilha\n");
        printf("8 - Maior número da pilha\n");
        printf("9 - Menor número da pilha\n");
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
        else if (opcao == 5) {
            ver_topo(&p);
        }
        else if (opcao == 6) {
            printf("Quantidade de elementos: %d\n", count_elementos_pilha(&p));
        }
        else if (opcao == 7) {
            printf("Soma dos elementos: %d\n", soma(&p));
        }
        else if (opcao == 8) {
            printf("Maior elemento: %d\n", maior(&p));
        }
        else if (opcao == 9) {
            printf("Menor elemento: %d\n", menor(&p));
        }
        else if (opcao == 0) {
            printf("Encerrando programa...\n");
        }
        else {
            printf("Opcao invalida!\n");
        }


    } while (opcao != 0);

    libera(&p);
    return 0;
}
