#include <stdio.h>

int main(){
    int vet[5] = {1,2,3,4,5};
    int *p;
    p = vet;
    printf("%d", *(p+1)); // Acessa o vet[1] com valor de 2
    return 0;
}
