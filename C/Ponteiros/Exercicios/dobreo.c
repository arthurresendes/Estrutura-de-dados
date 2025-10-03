#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dobra(int *a){
    *a =  *a * 2;
}

int main()
{
    int a;
    printf("Digite um valor: ");
    scanf("%d" , &a);
    dobra(&a);
    printf("%d",a);

    return 0;

}