#include <stdio.h>

#define TAMANHO  5

void soma(int *v, int n){
    int contaI = 0;
    int contaP = 0;
    for(int i = 0; i < n;i++){
        if(v[i] %2 == 0){
            contaP++;
        }else{
            contaI++;
        }
    }
    printf("Par -> %d\n", contaP);
    printf("Impar -> %d\n", contaI);
}

int main()
{
    int vetor[TAMANHO] = {1,2,3,4,5};
    soma(vetor, TAMANHO);
    return 0;
}