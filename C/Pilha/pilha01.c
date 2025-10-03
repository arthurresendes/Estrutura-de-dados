#include <stdlib.h>
#include <stdio.h>

#define TAMANHO 5

typedef struct tipo_pilha{
    int valor[TAMANHO];
    int ini;
    int topo;
}tipo_pilha;

tipo_pilha  pilha;
tipo_pilha pilha2;

void empilha(int val){
    if (pilha.topo == TAMANHO){
        printf("Pilha lotada");
        system("PAUSE");
    }
    else{
        pilha.valor[pilha.topo] = val;
        pilha.topo++;
    }
}

int desempilha(){
    int elemento;
    if(pilha.topo == pilha.ini){
        printf("Pilha NULL.\n");
        system("PAUSE");
    }
    else
    {
        pilha.topo--;
        elemento = pilha.valor[pilha.topo];
        return elemento;
    }
}



int main()
{
    printf("%d \n", pilha.topo);

    int aux;
    printf("### Empilhando Pilha 1 ###\n\n");
    for(int i=1; i<=5; i++){
        aux = i;
        printf("Empilhando o %d.\n", aux);
        empilha(aux);
    }
    printf("%d \n", pilha.topo);
    printf("### Desempilhando Pilha 1 ###\n\n");
    for(int i=1; i<=5; i++){
        aux = desempilha();
        printf("Desempilhou: %d.\n", aux);
    }
    printf("%d \n", pilha.topo);

    return 0;
}
