#include <stdio.h>
#include <stdlib.h>

#define LINHA 3
#define COLUNA 3

int main(){
    int i , j, *m;
    m = (int *)malloc(LINHA * COLUNA * sizeof(int));

    for(i = 0; i < LINHA; i++){
        for(j = 0 ; j < COLUNA; j++){
            printf("Preencha o valor [%d][%d]: " , i+1, j+1);
            scanf("%d" ,&m[i * COLUNA * j]);
        }
    }

    printf("\nMatriz:\n");
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("%d ", m[i * COLUNA + j]);
        }
        printf("\n");
    }

    free(m);

    return 0;
}