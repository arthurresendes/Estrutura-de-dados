#include <stdio.h>
#include <string.h> 

int main(){
    char nome[100];
    int senha;
    printf("Digite financeiro para ser aprovado: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Digite 303010 na senha: ");
    scanf("%d", &senha);
    if (senha == 303010 && strcmp(nome, "financeiro") == 0){
        printf("SEJA BEM-VINDO!");
    }else{
        printf("ACESSO NEGADO!");
    }

    return 0;
}