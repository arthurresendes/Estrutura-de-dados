#include <stdio.h>

int main(){
    int vet[5] = {1,2,3,4,5};
    int *p;
    p = vet;
    printf("%d", *(p+1));
}
