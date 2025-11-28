#include <stdio.h>
#include <stdlib.h>

// X tem seu valor e endereço de memoria , seu endreço de memoria é encontrado por meio do &, *ptrx é uma variavel que tem seu proprio endereço de memoria e é apontado por meio de = &variavel , no caso o x. Assim por meio do &x ele aponta para o endereço de memoria de x e utilizando o * conseguimos tanto alterar quando mostrar o valor armazenado dentro da memoria de x. Já p **pptrx ele aponta pro endereço de memoria do ponteiro que aponta para o endreço de x , assim usamos ** parfa acessar ou alterar o valor de x

int main(){
    int x , *ptrx, **pptrx;
    x = 10;
    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %x\n", &x);
    ptrx = &x;
    pptrx = &ptrx;

    printf("%d\n", *ptrx);
    *ptrx = 20;
    printf("Mudando x de valor para 20\n");
    printf("%d\n", x);
    printf("Valor endreçado de %d\n" , &ptrx);
    printf("Valor endreçado de x %d\n" , *ptrx);
    printf("%d\n", **pptrx);
    printf("Mudando de valor por meio de **pptrx\n");
    **pptrx = 30;
    printf("%d\n",x);



    return 0;
}