#include <stdio.h> 
#include <string.h>  
int main(){     
    int num;     
    printf("Qual número quer ver a tabuada: ");     
    scanf("%d", &num);     
    for(int i = 1; i <= 10 ; i++){
        if(i % 2 == 0){
            printf("%d x %d = %d\n", num , i , num *i);  
        }     
    }
    return 0;
}