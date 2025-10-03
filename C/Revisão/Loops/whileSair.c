#include <stdio.h>
#include <string.h>

int main(){
    int opcao = 1;
    int maior = 0;

    while(opcao != 0){
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &opcao);
        if (opcao > maior){
            maior = opcao;
        }
        printf("Número registrado!");
    }
    printf("O maior numero foi: %d", maior);
    return 0;
}
