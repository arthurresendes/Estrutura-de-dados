#include <stdio.h>
#include <string.h> 

int main(){
    int placa;
    printf("Digite o ultimo numero da placa: ");
    scanf("%d", &placa);
    if(placa == 1 || placa == 2){
        printf("Seu rodizio eh segunda");
    }else if(placa == 3 || placa == 4){
        printf("Seu rodizio eh terça");
    }else if(placa == 5 || placa == 6){
        printf("Seu rodizio eh quarta");
    }else if(placa == 7 || placa == 8){
        printf("Seu rodizio eh quinta");
    }else if(placa == 0 || placa == 0){
        printf("Seu rodizio eh sexta");
    }else{
        printf("Número invalido");
    }

    return 0;
}