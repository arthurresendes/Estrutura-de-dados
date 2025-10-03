#include <stdio.h>

int main() {
    int num;
    int cont0_25 = 0, cont26_50 = 0, cont51_75 = 0, cont76_100 = 0 , cont_outros = 0;

    while (1) {
        printf("Digite um numero (negativo para sair): ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        } else if (num <= 25) {
            cont0_25++;
        } else if (num <= 50) {
            cont26_50++;
        } else if (num <= 75) {
            cont51_75++;
        } else if (num <= 100) {
            cont76_100++;
        }else if (num <= 10000){
            cont_outros++;
        }else{
            printf("Valor muito alto!!");
        }
    }

    printf("\nQuantidade de numeros em cada intervalo:\n");
    printf("[0-25]: %d\n", cont0_25);
    printf("[26-50]: %d\n", cont26_50);
    printf("[51-75]: %d\n", cont51_75);
    printf("[76-100]: %d\n", cont76_100);
    printf("[100-10000]: %d\n", cont_outros);

    return 0;
}
