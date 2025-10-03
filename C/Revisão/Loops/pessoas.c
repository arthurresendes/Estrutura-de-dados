#include <stdio.h>
#include <string.h>

int main(){
    int idade[100] , qtd , maior = 0 , menor = 1000;
    printf("Digite quantas idades quer adicionar: ");
    scanf("%d", &qtd);
    for(int i = 0; i < qtd;i++){
        printf("Digite a idade %d: ", i+1);
        scanf("%d", &idade[i]);
        if (idade[i] > maior){
            maior = idade[i];
        }
        if (idade[i] < menor){
            menor = idade[i];
        }
    }
    for(int i=0;i<qtd;i++){
        printf("Idade %d: %d\n", i+1,idade[i]);
    }
    printf("Maior idade : %d\nMenor idade: %d\n", maior,menor);

    return 0;
}
