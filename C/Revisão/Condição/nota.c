#include <stdio.h>
#include <string.h> 

int main(){
    float nota1,nota2,nota3,media;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    media = (nota1+ nota2 + nota3) /3;
    if(media >= 7.0){
        printf("Aprovado!!");
    }else{
        printf("Reprovado");
    }

    return 0;
}