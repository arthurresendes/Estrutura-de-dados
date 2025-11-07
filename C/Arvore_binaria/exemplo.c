#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *esquer;
    struct No *direi;
}No;

struct No *criarNo(int valor){
    struct No * novoNo = malloc(sizeof(No));


    novoNo->dado = valor;
    novoNo->esquer= NULL;
    novoNo->direi = NULL;
    return novoNo;
}

void inserir(struct No **raiz,int valor){
    if(*raiz == NULL){
        *raiz = criarNo(valor);
        return;
    }

    if(valor < (*raiz)->dado){
        inserir(&((*raiz)->esquer), valor);
    }
    else {
        inserir(&((*raiz)->direi), valor);
    }

}


void percursoPreOrdem(struct No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->dado); // Visita a raiz
        percursoPreOrdem(raiz->esquer); // Percorre a subárvore esquerda
        percursoPreOrdem(raiz->direi); // Percorre a subárvore direita
    }
}

// Função principal para demonstrar o uso
int main() {
    struct No* raiz = NULL;

    // Inserindo elementos na árvore
    inserir(&raiz, 50);
    inserir(&raiz, 30);
    inserir(&raiz, 20);
    inserir(&raiz, 40);
    inserir(&raiz, 70);
    inserir(&raiz, 60);
    inserir(&raiz, 80);

    printf("Percurso em pre-ordem: ");
    percursoPreOrdem(raiz);
    printf("\n");

    return 0;
}