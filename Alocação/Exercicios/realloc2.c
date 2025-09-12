#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, capacida = 2, cont = 0 , opcao;
    p = (int *)malloc(capacida * sizeof(int));
    do{
        if(capacida == cont){
            capacida = capacida * 2;
            p = (int *)realloc(p, capacida * sizeof(int));
        }
        printf("Digite um numero: ");
        scanf("%d", &p[cont]);
        cont++;
        printf("Deseja sair (0-sim): ");
        scanf("%d", &opcao);
    }while(opcao != 0);
    
    for(int i = 0; i < cont; i++){
        printf("Valor %d: %d\n", i+1,p[i]);
    }
    free(p);
    return 0;
}