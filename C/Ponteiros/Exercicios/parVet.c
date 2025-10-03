#include <stdio.h>


int main()
{
    int vet[] = {1,2,3,4,5};
    int *p;
    p = vet;
    for(int i = 0; i < 5; i++){
        if(*(p + i) % 2  == 0){
            printf("%d\n" , *(p + i));
        }
    }


    return 0;
}
