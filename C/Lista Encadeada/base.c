#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Criação da estrtura No , que vai ter o numero e um ponteiro para o proximo valor
typedef struct No{
    int num;
    struct No *prox;
}No;

//Estrutura lista que pega do No para apontar para o inicio e o fim e cria um int tamanho
typedef struct Lista{
    No *inicio;
    No *fim;
    int tamanho;
}Lista;

//Funções
int size(Lista* lista);
bool isEmpty(Lista* lista);
int getFirst(Lista* lista);
int getLast(Lista* lista);
void addFirst(Lista*, int valor);
void addLast(Lista *lista, int valor);
void removeFirst(Lista* lista);
void removeLast(Lista* lista);

int main(){
    Lista lista; //Apelido para Lista
    lista.inicio = NULL; //Inicia como Null
    lista.fim = NULL; //Fim como NULL
    lista.tamanho = 0; //Tamanho zerado
    No *p1,*p2,*p3; //Criação de 3 ponteiros para o  No

    p1 = malloc(sizeof(No)); //Alocando o p1
    p1->num = 10; //Definindo valor
    p1->prox = NULL; //Proximo será NULL

    lista.inicio = p1; //Inicio == p1
    lista.fim = p1; //fim == p1
    lista.tamanho++; //Tmanho = 1

    p2 = malloc(sizeof(No));
    p2->num = 20;
    p2->prox = NULL;

    lista.fim->prox = p2; //o proximo será o p2
    lista.fim = p2; //fim p2
    lista.tamanho++;

    p3 = malloc(sizeof(No));
    p3->num = 30;
    p3->prox = NULL;

    lista.fim->prox = p3;
    lista.fim = p3;
    lista.tamanho++;

    No* atual = lista.inicio; //Ler os valores
    while (atual != NULL) {
        printf("Valor do nó: %d\n", atual->num);
        atual = atual->prox; // avança para o próximo nó
    }
    
    addFirst(&lista, 5);
    addLast(&lista, 35);
    atual = lista.inicio; // Reseta pointer
    while (atual != NULL) {
        printf("Valor do nó: %d\n", atual->num);
        atual = atual->prox; // avança para o próximo nó
    }
    printf("Tamanho da lista: %d\n", size(&lista));
    printf("Lista esta vazia ?  %u\n", isEmpty(&lista));
    printf("Valor inicio: %d\n", getFirst(&lista));
    printf("Valor final: %d\n", getLast(&lista));
    removeFirst(&lista);
    removeLast(&lista);
    atual = lista.inicio;
    while (atual != NULL) {
        printf("Valor do nó: %d\n", atual->num);
        atual = atual->prox; // avança para o próximo nó
    }
    return 0;
}

int size(Lista* lista){
    return lista->tamanho; //Return tamanho
}

bool isEmpty(Lista* lista){
    if(lista->tamanho == 0){
        return true;
    }else{
        return false;
    }
}

void addFirst(Lista *lista, int valor){
    No *novo = malloc(sizeof(No));
    novo->num = valor;
    novo->prox = lista->inicio;

    if (lista->fim == NULL) { // lista estava vazia
        lista->fim = novo;
    }

    lista->inicio = novo;
    lista->tamanho++;
}

void addLast(Lista *lista, int valor){
    No *novo = malloc(sizeof(No));
    novo->num = valor;
    novo->prox = NULL;

    if (isEmpty(lista)) {
        lista->inicio = novo;
        lista->fim = novo;
    } else {
        lista->fim->prox = novo;
        lista->fim = novo;
    }
    lista->tamanho++;
}

int getFirst(Lista* lista){
    return lista->inicio->num;
}

int getLast(Lista* lista){
    return lista->fim->num;
}

void removeFirst(Lista* lista) {
    if (isEmpty(lista)) {
        printf("Lista vazia! Nada a remover.\n");
        return;
    }

    No* temp = lista->inicio;
    lista->inicio = lista->inicio->prox;
    free(temp);

    if (lista->inicio == NULL) { 
        lista->fim = NULL;
    }

    lista->tamanho--;
}

void removeLast(Lista* lista) {
    if (isEmpty(lista)) {
        printf("Lista vazia! Nada a remover.\n");
        return;
    }

    if (lista->inicio == lista->fim) { 
        free(lista->inicio);
        lista->inicio = NULL;
        lista->fim = NULL;
    } else {
        No* atual = lista->inicio;
        while (atual->prox != lista->fim) {
            atual = atual->prox;
        }
        free(lista->fim);
        lista->fim = atual;
        lista->fim->prox = NULL;
    }

    lista->tamanho--;
}