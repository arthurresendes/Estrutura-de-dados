#include <stdio.h>
#include <stdlib.h>


int main(){
    int qtd , *p , soma = 0;
    printf("Digite o tamanho da alocação: ");
    scanf("%d" , &qtd);
    p = (int *)calloc(qtd ,sizeof(int));

    for(int i = 0; i < qtd ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d" , &p[i]);
        soma += p[i];
    }

    printf("A soma dos numero alocados eh: %d", soma);
    

    free(p);
    return 0;
}