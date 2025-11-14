#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char nome[100];
    int tempo_espera;
    struct Node *prox;
}Node;

typedef struct Fila{
    struct Node * inicio;
    struct Node *fim;
    int tam;
}Fila;

void inicializar(Fila *f){
    f->inicio = NULL;
    f->fim = NULL;
    f->tam = 0;
}

int vazia(Fila *f){
    return (f->tam == 0);
}

void enqueue(Fila *f, char nome[], int tempo_espera){
    Node *novo = malloc(sizeof(Node));
    if (novo == NULL) {
        printf("Erro de alocação de memória!\n");
        return;
    }

    strcpy(novo->nome, nome);
    novo->tempo_espera = tempo_espera;
    novo->prox = NULL;

    if (vazia(f)) {
        f->inicio = novo;
    } else {
        f->fim->prox = novo;
    }

    f->fim = novo;
    f->tam++;

    printf("\nCliente %s adicionado à fila (%d min)\n", nome, tempo_espera);
}

void dequeue(Fila *f) {
    if (vazia(f)) {
        printf("\n️ Fila vazia! Nenhum cliente para atender.\n");
        return;
    }

    Node *aux = f->inicio;
    printf("\n Atendendo cliente: %s\n", aux->nome);

    f->inicio = aux->prox;
    free(aux);
    f->tam--;

    if (f->inicio == NULL)
        f->fim = NULL;
}

// Exibe todos os clientes na fila
void exibe(Fila *f) {
    if (vazia(f)) {
        printf("\nFila vazia.\n");
        return;
    }

    Node *aux = f->inicio;
    printf("\n=========== FILA DE ESPERA ===========\n");
    while (aux != NULL) {
        printf(" Nome: %s | Tempo: %d min\n",
               aux->nome, aux->tempo_espera);
        aux = aux->prox;
    }
    printf("======================================\n");
}

// Mostra o próximo cliente
void proximoCliente(Fila *f) {
    if (vazia(f)) {
        printf("\nNenhum cliente aguardando.\n");
        return;
    }
    printf("\n Próximo cliente: %s\n", f->inicio->nome);
}

// Exibe quantidade
void quantidade(Fila *f) {
    printf("\n Total de clientes na fila: %d\n", f->tam);
}

// Zera a fila
void zerarFila(Fila *f) {
    while (!vazia(f)) {
        dequeue(f);
    }
    printf("\n Fila completamente esvaziada!\n");
}


int main() {
    Fila fila;
    inicializar(&fila);

    int opcao;
    char nome[50];
    int tempoEspera;

    do {
        printf("\n=========== MENU FILA BANCÁRIA ===========\n");
        printf("1 - Adicionar cliente à fila\n");
        printf("2 - Atender cliente\n");
        printf("3 - Exibir fila de espera\n");
        printf("4 - Mostrar o próximo cliente\n");
        printf("5 - Quantidade de clientes na fila\n");
        printf("6 - Zerar fila\n");
        printf("0 - Sair\n");
        printf("==========================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer

        switch (opcao) {
            case 1:
                printf("\nNome do cliente: ");
                fgets(nome, 50, stdin);
                nome[strcspn(nome, "\n")] = '\0'; // remove '\n'


                printf("Tempo estimado (min): ");
                scanf("%d", &tempoEspera);

                enqueue(&fila, nome, tempoEspera);
                break;

            case 2:
                dequeue(&fila);
                break;

            case 3:
                exibe(&fila);
                break;

            case 4:
                proximoCliente(&fila);
                break;

            case 5:
                quantidade(&fila);
                break;

            case 6:
                zerarFila(&fila);
                break;

            case 0:
                printf("\nEncerrando o sistema...\n");
                zerarFila(&fila);
                break;

            default:
                printf("\n️ Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
