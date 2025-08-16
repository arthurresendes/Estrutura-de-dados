#include <stdio.h>
#include <string.h>

int main(){
    int opcao = 1;
    int soma = 0;

    while(opcao != 0){
        printf("Digite o preço da lista (0 para sair): ");
        scanf("%d", &opcao);
        printf("Número registrado!\n");
        soma += opcao;
    }
    printf("O maior numero foi: %d", soma);
    return 0;
}
