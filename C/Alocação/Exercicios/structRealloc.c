#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int idade;
}Funcionario;

int main(){
    Funcionario *p;
    int capacida = 2, cont = 0 , opcao;
    p = (Funcionario *)malloc(capacida * sizeof(Funcionario));
    do{
        if(capacida == cont){
            capacida = capacida * 2;
            p = (Funcionario *)realloc(p, capacida * sizeof(Funcionario));
        }
        printf("Digite a idade: ");
        scanf("%d", &p[cont].idade);
        cont++;
        printf("Deseja sair (0-sim): ");
        scanf("%d", &opcao);
    }while(opcao != 0);
    
    for(int i = 0; i < cont; i++){
        printf("Idade %d: %d\n", i+1,p[i].idade);
    }
    free(p);
    return 0;
}