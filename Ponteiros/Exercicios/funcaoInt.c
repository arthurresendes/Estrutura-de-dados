#include <stdio.h>

void soma(int *a , int b){
    *a = *a + b;
    printf("Valor da soma: %d",*a);
}

int main()
{

    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);
    soma(&A,B);
    return 0;
}
