#include <stdio.h>

int main(){
    float salario , imposto;
    printf("Digite o seu salario: ");
    scanf("%f" , &salario);
    if (salario >= 3000){
        imposto = salario * 0.15;
        printf("Preço a ser pago -> %.2f" , imposto);
    }else{
        printf("Zero imposto");
    }
    return 0;
}