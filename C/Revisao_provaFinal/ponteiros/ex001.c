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


    return 0;
}