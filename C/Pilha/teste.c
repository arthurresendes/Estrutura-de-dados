#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int valor;
    struct Node *prox;
} Node;

typedef struct Pilha
{
    Node *topo;
    int tam;
} Pilha;

void inicializa(Pilha *p)
{
    p->topo = NULL;
    p->tam = 0;
};

void push(int valor, Pilha *p)
{
    Node *novo = malloc(sizeof(Node));
    if (!novo)
    {
        printf("Sem memória disponível!\n");
        exit(1);
    }

    novo->valor = valor;
    novo->prox = p->topo;
    p->topo = novo;
    p->tam++;
    printf("Elemento %d empilhado com sucesso!\n", valor);
}

int pop(Pilha *p)
{
    if (p->topo == NULL)
    {
        printf("Pilha vazia, nada para remover.\n");
        return -1;
    }
    else
    {
        Node *remover = p->topo;
        int valor = remover->valor;
        p->topo = remover->prox;
        free(remover);
        p->tam--;
        printf("Elemento %d removido do topo.\n", valor);
        return valor;
    }
}


void exibe(Pilha *p){
    if (p->topo == NULL)
    {
        printf("Pilha vazia, nada para remover.\n");
        return;
    }else{
        Node *aux = p->topo;
        int pos = p->tam;
        while(aux != NULL){
            printf("[%d] -> %d\n", pos, aux->valor);
            aux = aux->prox;
        }
    }
}

int main(void)
{
    Pilha p;
    inicializa(&p); // Inicializa a pilha

    int opcao, valor;

    do
    {
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

        if (opcao == 1)
        {
            printf("Digite o valor a empilhar: ");
            scanf("%d", &valor);
            push(&p, valor);
        }
        else if (opcao == 2)
        {
            pop(&p);
        }
        else if (opcao == 3)
        {
            exibe(&p);
        }
        else if (opcao == 4)
        {
            libera(&p);
            printf("Pilha zerada!\n");
        }
        else if (opcao == 5)
        {
            ver_topo(&p);
        }
        else if (opcao == 6)
        {
            printf("Quantidade de elementos: %d\n", count_elementos_pilha(&p));
        }
        else if (opcao == 7)
        {
            printf("Soma dos elementos: %d\n", soma(&p));
        }
        else if (opcao == 8)
        {
            printf("Maior elemento da pilha: %d\n", maior(&p));
        }
        else if (opcao == 9)
        {
            printf("Menor elemento da pilha: %d\n", menor(&p));
        }
        else if (opcao == 0)
        {
            printf("Encerrando programa...\n");
        }
        else
        {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    libera(&p);
    return 0;
}