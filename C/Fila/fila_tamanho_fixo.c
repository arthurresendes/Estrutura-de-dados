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
    printf("Fila atualizada: \n");
    for(int i = 0 ; i <= fim; i++){
        printf("%d\n", FILA[i]);
    }
}

void desenfilerar(){
    if(inicio == 0){
        printf("Fila vazia");
    }else{
        fim--;
        FILA[0] = FILA[1];
        FILA[1] = FILA[2];
    }
}
int main()
{
    adicionar(10);
    adicionar(20);
    adicionar(30);
    imprime();
    desenfilerar();
    imprime();

    return 0;
}