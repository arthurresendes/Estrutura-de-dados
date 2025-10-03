#include <stdio.h>

#define TAMANHO  5

void soma(int *v, int n){
    int soma = 0;
    for(int i = 0; i < n;i++){
        soma += v[i];
    }
    printf("%d", soma);
}

int main()
{
    int vetor[TAMANHO] = {1,2,3,4,5};
    soma(vetor, TAMANHO);
    return 0;
}