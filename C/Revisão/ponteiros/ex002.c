#include <stdio.h>
#include <stdlib.h>

int main(){
    int cap = 2 , qtd = 0 , *p;
    p = (int *)malloc(cap * sizeof(int));
    for(int i = 0; i < cap + 1 ; i++){
        if(qtd == cap){
            cap = cap * 2;
            p = (int *)realloc(p, cap * sizeof(int));
        }
        p[i] = 5;
        qtd++;
    }
    return 0;
}
