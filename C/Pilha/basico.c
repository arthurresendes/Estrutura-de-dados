#include <stdlib.h>
#include <stdio.h>

#define TAMANHO 10
int topo = 0;
int pilha[TAMANHO] = {0};

void listagem(){
    printf("\n Topo da pilha: %d\n", topo);
    for(int i = 0; i < topo;i++){
        printf("Pilha %d: %d\n",i,pilha[i]);
    }
}

void push(){
    int val;
    if(topo < TAMANHO){
        printf("Digite um valor númerico:\n");
        scanf("%d", &val);
        pilha[topo] = val;
        topo++;
        listagem();
    }else{
        printf("Pilha cheia!!");
    }
}

void pop(){
    if(topo > 0){
        topo--;
        pilha[topo] = 0;
        listagem();
    }else{
        printf("Pilha vazia!!");
    }
}

void clearPilha(){
    if(topo == 0){
        printf("Pilha ja esta vazia");
    }else{
        for(int i = 0; i < topo;i++){
            pilha[i] = 0;
        }
        listagem();
    }
}

int main()
{
    int opcao = 0;
    do
    {
        printf("\n============Menu==========\n");
        printf("[1] Inserir elementos\n");
        printf("[2] Remover elementos\n");
        printf("[3] Listar elementos\n");
        printf("[4] Limpar elementos\n");
        printf("[-1] Para sair\n");
        printf("=========================\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            listagem();
            break;
        case 4:
            clearPilha();
            break;
        case -1:
            printf("Saindo... \n");
            return 0;
        default:
            printf("Opcao invalida , digite novamente!\n");
            break;
        }
    } while (opcao != -1);
    return 0;
}
