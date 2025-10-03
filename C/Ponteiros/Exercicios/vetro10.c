#include <stdio.h>

int main()
{
    float vet[10];

    for(int i = 1; i < 11 ;i++){
        printf("Endereço do vetor %p na posição: %d\n" , &vet[i] , i);
    }

    return 0;
}
