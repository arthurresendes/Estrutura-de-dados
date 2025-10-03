#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao, num1 , num2;
    float res;
    printf("Digite o numero de qual operação quer fazer(1- +, 2 = - , 3 - * , 4 - /): ");
    scanf("%d" , &opcao);
    if(opcao > 4 || opcao < 1){
        printf("Opção invalida!!");
        exit(1);
    }
    printf("Digite num1: ");
    scanf("%d" , &num1);
    printf("Digite num2: ");
    scanf("%d" , &num2);
    if(opcao == 1){
        res = num1 + num2;
        printf("%d + %d -> %.2f", num1,num2,res);
    }else if(opcao == 2){
        res = num1 - num2;
        printf("%d - %d -> %.2f", num1,num2,res);
    }else if(opcao == 3){
        res = num1 * num2;
        printf("%d * %d -> %.2f", num1,num2,res);
    }else if(opcao == 4){
        res = (float) num1 / num2;
        printf("%d / %d -> %.2f", num1,num2,res);
    }else{
        printf("Opção não identificada!!");
    }

    return 0;
}