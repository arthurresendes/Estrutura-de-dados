#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int valor;
    struct Node *prox;
}Node;

typedef struct  Fila
{
    Node *inicio;
    Node * fim;
    int tam;
}Fila;


void iniciailiza(Fila *f){
    f->inicio = NULL;
    f->fim = NULL;
    f->tam = 0;
}


int vazia(Fila *f){
    return  f->inicio == NULL;
}

void enqueue(Fila *f,int num){
    Node *novo = malloc(sizeof(Node));

    if(!novo){
        exit(1);
    }

    novo->valor = num;
    novo->prox = NULL;
    
    if(vazia(f)){
        f->inicio = novo;
        f->fim = novo;
    }else{
        f->fim->prox = novo;
        f->fim = novo;
    }
    f->tam++;
    printf("Elemento %d enfileirado com sucesso!\n", num);
}

int dequeue(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        return -1;
    }

    Node *remover = f->inicio;
    int valor = remover -> valor;
    f->inicio = remover->prox;
    if (f->inicio == NULL) {
        f->fim = NULL;
    }
    free(remover);

    f->tam--;

    printf("Elemento %d removido do início da fila.\n", valor);
    return valor;
}


void exibir(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        return;
    }


    Node *aux = f->inicio;
    int pos = 1;
    while(aux != NULL){
        printf("[%d] -> %d\n", pos, aux->valor);
        aux = aux->prox;
        pos++;
    }
    printf("------------------------------------\n\n");
}

void libera(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        exit(2);
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

int ver_inicio(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        return -1;
    }

    return f->inicio->valor;
}

int ver_fim(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        return -1;
    }

    return f->fim->valor;
}

int count_elementos(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        return -1;
    }

    return f->tam;
}

int soma_elementos(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        return -1;
    }

    int soma = 0;
    Node *aux = f->inicio;
    while(aux != NULL){
        soma += aux->valor;
        aux = aux->prox;
    }

    return soma;
}



int maior(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        return -1;
    }

    Node *aux = f->inicio;
    int maior = f->inicio->valor;

    while(aux != NULL){
        if(aux->valor > maior){
            maior = aux->valor;
        }
        aux = aux->prox;
    }

    return maior;
}

int menor(Fila *f){
    if(vazia(f)){
        printf("Fila vazia");
        return -1;
    }

    Node *aux = f->inicio;
    int menor = f->inicio->valor;

    while(aux != NULL){
        if(aux->valor < menor){
            menor = aux->valor;
        }
        aux = aux->prox;
    }

    return menor;
}

int main(void) {
    Fila f;
    iniciailiza(&f);

    int opcao, valor;

    do {
        printf("\n=========== FILA DINÂMICA EM C ===========\n");
        printf("1 - Enfileirar (ENQUEUE)\n");
        printf("2 - Desenfileirar (DEQUEUE)\n");
        printf("3 - Exibir fila\n");
        printf("4 - Liberar fila\n");
        printf("5 - Ver início da fila\n");
        printf("6 - Ver fim da fila\n");
        printf("7 - Contar elementos\n");
        printf("8 - Somar elementos\n");
        printf("9 - Maior elemento\n");
        printf("10 - menor elemento\n");
        printf("0 - Sair\n");
        printf("==========================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1:
                printf("Digite o valor a enfileirar: ");
                scanf("%d", &valor);
                enqueue(&f, valor);
                break;

            case 2:
                dequeue(&f);
                break;

            case 3:
                exibir(&f);
                break;

            case 4:
                libera(&f);
                break;

            case 5:
                valor = ver_inicio(&f);
                if (valor != -1)
                    printf("Início da fila: %d\n", valor);
                break;

            case 6:
                valor = ver_fim(&f);
                if (valor != -1)
                    printf("Fim da fila: %d\n", valor);
                break;

            case 7:
                valor = count_elementos(&f);
                if (valor != -1)
                    printf("Quantidade de elementos: %d\n", valor);
                break;

            case 8:
                valor = soma_elementos(&f);
                if (valor != -1)
                    printf("Soma dos elementos: %d\n", valor);
                break;

            case 9:
                valor = maior(&f);
                if (valor != -1)
                    printf("Maior elemento: %d\n", valor);
                break;

            case 10:
                valor = menor(&f);
                if (valor != -1)
                    printf("Menor elemento: %d\n", valor);
                break;

            case 0:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    libera(&f); 
    return 0;
}
