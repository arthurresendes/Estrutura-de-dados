#include <stdio.h>

int main()
{
    int en1,en2;
    if(&en1 > &en2){
        printf("Endereço de memoria de n1 é maior %p", &en1);
    }else{
        printf("Endereço de memoria de n2 é maior %p" , &en2);
    }
    return 0;
}