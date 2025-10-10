#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int dado; //Valor a ser passado
    struct pilha *prox;//Ponteiro que aponta para a propria estrtura chamada de prox(proximo)
}celula;

celula *top = NULL; //top inicializa como NULL

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
    printf("\n====EMPILHANDO=====\n");
    celula *novo = malloc(sizeof(celula)); //Alocando memoria para os valores
    novo->dado = valor; //vai receber o parametro valor como dado
    novo->prox = top; //proximo vai ser igual ao top
    top = novo; // e o top vai ser igual o novo que no caso é a alocação
    printf("Valor adicionado: %d", valor);
}

void pop(){
    printf("\n===Desempilhando===\n");
    if(top == NULL){
        printf("Pilha vazia");
    }else{
        celula *temp; //variavel temporaria
        temp = top; // temporaria vai ser igual ao topo
        top = top->prox; // aponta pro proximo elemento inserido anteriormente
        printf("\nDesempilhando %d", temp->dado);
        free(temp);//liberacao do ultimo elemento alocado em memoria
    }
}

void listagem(){
    celula *temp;
    temp = top;
    printf("Pilha: ");
    while(temp !=NULL){
        printf("\n%d", temp->dado);
        temp = temp->prox;
    }
}