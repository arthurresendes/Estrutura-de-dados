#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Criar um vetor de inteiros começando com capacidade 2. Perguntar valores ao usuário até ele digitar 0. Dobre o tamanho do vetor sempre que necessário com realloc. Imprimir os valores e liberar a memória.

int main()
{
    int capacida = 2;
    int *p;
    int qtd = 0;
    int opcao;
    p = (int *)malloc(capacida * sizeof(int));
    do{
        if(qtd == capacida){
            capacida *= 2;
            p = (int *)realloc(p, capacida * sizeof(int));
        }
        printf("Armazene um valor: ");
        scanf("%d", &p[qtd]);
        qtd++;
        printf("Deseja sair(0): ");
        scanf("%d", &opcao);
    }while(opcao != 0);

    for(int i = 0; i < qtd; i++){
        printf("%d\n", p[i]);
    }
    return 0;
}