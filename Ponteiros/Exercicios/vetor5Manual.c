#include <stdio.h>


int main()
{
    int vet[] = {1,2,3,4,5};
    int *p;
    p = vet;
    printf("%d\n" , *p);
    printf("%d\n" , *(p + 1));
    printf("%d\n" , *(p + 2));
    printf("%d\n" , *(p + 3));
    printf("%d\n" , *(p + 4));


    
    return 0;
}
