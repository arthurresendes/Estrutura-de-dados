#include <stdio.h>
#include <stdlib.h>


int main(){
    int qtd , *p;
    printf("Digite o tamanho da alocação: ");
    scanf("%d" , &qtd);
    p = (int *)malloc(qtd  * sizeof(int));
    int total = 5 + qtd;
    p = (int *)realloc(p, total * sizeof(int));

    if(p == NULL){
        printf("Erro ao alocar!");
    }

    for(int i = 0; i < total ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d" , &p[i]);
    }
    for(int i = 0; i < total; i++){
        printf("%d = %d\n", i+1, p[i]);
    }

    free(p);
    return 0;
}