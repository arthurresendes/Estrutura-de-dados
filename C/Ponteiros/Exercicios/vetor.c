#include <stdio.h>

int main()
{
    int vetor[5];
    int *pv[5];
    for(int i = 0; i < 5; i++){
        pv[i] = &vetor[i];
    }
    for(int i = 0; i < 5; i++){
        printf("Digite o valor de %d: ", i+1);
        scanf("%d" , pv[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%d\n", *pv[i]);
    }
    return 0;

}