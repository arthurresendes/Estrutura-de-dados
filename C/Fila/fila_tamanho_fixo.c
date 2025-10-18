#include <stdlib.h>
#include <stdio.h>


int FILA[10];
int inicio = 0;
int fim = 0;

void adicionar(int valor){
    if(inicio== 0){
        FILA[inicio] = valor;
        FILA[fim] = valor;
        inicio++;
    }else{
        if(fim == 10){
            printf("Fila cheia");
        }else{ 
            fim++;
            FILA[fim] = valor;
        }
    }
}

void imprime(){
    for(int i = 0 ; i <= fim; i++){
        printf("%d\n", FILA[i]);
    }
}
int main()
{
    adicionar(10);
    adicionar(20);
    imprime();

    return 0;
}