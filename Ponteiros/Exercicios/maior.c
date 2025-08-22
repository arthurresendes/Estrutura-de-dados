#include <stdio.h>

int main()

{
    int a ,b,temp;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Digite n1: ");
    scanf("%d", pa);
    printf("Digite n2: ");
    scanf("%d", pb);
    if(*pa > *pb){
        printf("Valor %d eh o maior" , *pa);
    }else{
        printf("Valor %d eh o maior" , *pb);
    }

    return 0;
}