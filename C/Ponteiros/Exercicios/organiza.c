#include <stdio.h>

#define TAMANHO  5

void ordena(int *v1, int n){
    int temp;
    for(int i = 0; i < n;i++){
        if(v1[i] > v1[i+1]){
            temp = v1[i];
            v1[i] = v1[i+1];
            v1[i+1] = temp;
        }
    }

    printf("Ordenado:\n");
    for(int i = 0; i < n;i++){
        printf("%d", v1[i]);
    }

}

int main()
{
    int vetor1[TAMANHO] = {1,3,2,7,5};
    ordena(vetor1, TAMANHO);
    return 0;
}