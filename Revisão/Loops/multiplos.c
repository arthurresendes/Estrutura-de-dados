#include <stdio.h>
#include <string.h>

int main(){
    int soma = 0;

    for(int i = 1; i < 501; i++){
        if(i % 2 == 1 && i % 3 ==0){
            soma += i;
        }
    }
    printf("A soma dos multiplos de 3 e impares foi: %d", soma);
    return 0;
}
