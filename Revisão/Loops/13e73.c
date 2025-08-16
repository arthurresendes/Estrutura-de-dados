#include <stdio.h>

int main(){
    int media, soma =0;
    for(int i = 13 ; i < 74; i++){
        soma += i;
    }
    media = soma / 60;
    printf("A soam dos numeros foi de %d e sua media eh : %d" , soma,media);
    return 0;
}
