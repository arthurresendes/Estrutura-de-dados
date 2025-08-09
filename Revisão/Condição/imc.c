#include <stdio.h>

int main(){
    float peso , altura,imc;
    printf("Digite o seu peso: ");
    scanf("%f" , &peso);
    printf("Digite a sua altura: ");
    scanf("%f" , &altura);
    imc = peso / (altura * altura);
    if (imc > 30){
        printf("Você esta obeso!!");
    }else{
        printf("Ok..");
    }

    return 0;
}