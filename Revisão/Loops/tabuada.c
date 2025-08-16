#include <stdio.h>
#include <string.h>

int main(){
    int num , inicio , fim;
    printf("Qual número quer ver a tabuada: ");
    scanf("%d", &num);
    printf("Qual número inicia a tabuada: ");
    scanf("%d", &inicio);
    printf("Qual número finaliza a tabuada: ");
    scanf("%d", &fim);
    for(int i = inicio; i <= fim ; i++){
        printf("%d x %d = %d\n", num , i , num *i);
    }
}
