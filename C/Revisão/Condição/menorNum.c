#include <stdio.h>
#include <string.h> 

int main(){
    float nota1,nota2,nota3;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    if(nota1 < nota2 && nota1 < nota3){
        printf("Menor numero eh -> %f" , nota1);
    }else if(nota2 < nota1 && nota2 < nota3){
        printf("Menor numero eh -> %f" , nota2);
    }else if(nota3 < nota1 && nota3 < nota2){
        printf("Menor numero eh -> %f" , nota3);
    }else{
        printf("Número invalido ou dois número são iguais");
    }

    return 0;
}