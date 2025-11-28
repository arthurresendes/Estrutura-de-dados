#include <stdio.h>
#include <stdlib.h>


int main(){
    int x, *ptr , **pptr;
    x = 10;
    ptr = &x;
    pptr = &ptr;
    printf("Valor de x: %d\n", x);
    printf("Valor de x por ponteiro: %d\n", *ptr);
    printf("Valor de x por ponteiro do ponteiro: %d\n", **pptr);
    printf("Digite um novo valor para x: ");
    scanf("%d", ptr);
    printf("Valor de x: %d\n", x);
    printf("Valor de x por ponteiro: %d\n", *ptr);
    printf("Valor de x por ponteiro do ponteiro: %d\n", **pptr);
    printf("Digite um novo valor para x: ");
    scanf("%d", *pptr);
    printf("Valor de x: %d\n", x);
    printf("Valor de x por ponteiro: %d\n", *ptr);
    printf("Valor de x por ponteiro do ponteiro: %d\n", **pptr);


    // Ponteiros com vetor
    int v[] = {5, 10, 15, 3, 10, 76, 5, 13, 33, 45};
    int *pt;
    pt = v;
    printf("%d\n", *(pt + 0));
    return 0;
}