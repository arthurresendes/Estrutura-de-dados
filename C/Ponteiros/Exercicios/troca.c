#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y ,*ptr,*ptrb;
    x = 5;
    y = 10;
    ptr = &x;
    ptrb = &y;

    int temp = *ptr;
    *ptr = *ptrb;
    *ptrb = temp;
    printf("%d\n%d\n", x,y);


    return 0;
}