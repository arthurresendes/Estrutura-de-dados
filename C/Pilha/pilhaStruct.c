#include <stdio.h>
#include <stdlib.h>

#define TAMPILHA 10

typedef struct pilha
{
    int topo;
    int valor;
    int pilha[TAMPILHA];
} pilha;

pilha p;

void listagem()
{
    for (int i = p.topo-1; i >= 0; i--)
    {
        printf("Pilha %d: %d\n", i, p.pilha[i]);
    }
}

void insercao()
{
    if (p.topo < TAMPILHA)
    {
        printf("Digite um valor numerio inteiro: ");
        scanf("%d", &p.valor);
        p.pilha[p.topo] = p.valor;
        p.topo++;
    }
    else
    {
        printf("Tamanho limitado!!");
    }
}

void excluindo()
{
    if (p.topo > 0)
    {
        p.topo--;
        p.pilha[p.topo] = 0;
        printf("Valor excluido\n");
    }
    else
    {
        printf("Pilha vazia!!\n");
    }
}

int main()
{
    int opcao = 0;
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
            insercao();
            break;
        case 3:
            excluindo();
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