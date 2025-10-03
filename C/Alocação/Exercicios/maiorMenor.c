#include <stdio.h>
#include <stdlib.h>

int main(){
    int maior = 0, menor = 200000 , qtd , *p;
    printf("Digite o tamanho da alocação: ");
    scanf("%d" , &qtd);
    p = (int *)malloc(qtd * sizeof(int));
    for(int i = 0; i < qtd; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d" , &p[i]);
        if(maior < p[i]){
            maior = p[i];
        }
        if(menor > p[i]){
            menor = p[i];
        }
    }

    printf("Maior valor: %d\nMenor valor: %d", maior,menor);



    return 0;
}