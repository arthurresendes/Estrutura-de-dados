#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 5;
    p[1] = 5;
    p[2] = 5;
    p[3] = 5;
    p[4] = 5;
    p[5] = 5;
    for(int i = 0; i < 10;i++){
        printf("%d\n", p[i]);
    }

    free(p);
    return 0;
}