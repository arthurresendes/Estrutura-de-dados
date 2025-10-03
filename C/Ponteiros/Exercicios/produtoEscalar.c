#include <stdio.h>

#define TAMANHO  5

void escalar(int *v1,int *v2 , int n){
    int prod = 0;
    for(int i = 0; i < n;i++){
        prod = v1[i] * v2[i];
    }
    printf("Produto escalar -> %d", prod);
}

int main()
{
    int vetor1[TAMANHO] = {1,2,3,4,5};
    int vetor2[TAMANHO] = {1,2,3,4,5};
    escalar(vetor1,vetor2, TAMANHO);
    return 0;
}