#include <stdio.h>

int main(){
    int num;
    printf("Digite o número 5 para aprovação: ");
    scanf("%d" , &num);
    if (num == 5){
        printf("Número correto!!");
    }else{
        printf("Número não foi digitado corretamente!!");
    }
    return 0;
}