#include <stdio.h>
#include <string.h>

int main(){
    char nome[10][100];
    float nota[10];
    for(int i = 0; i < 10; i++){
        printf("Digite o nome da pessoa %d: ", i +1);
        fgets(nome[i], sizeof(nome[i]),stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
        printf("Digite a nota do aluno %d: " , i + 1);
        scanf("%f" , &nota[i]);
        getchar();
    }
    for (int i = 0; i<10 ; i++){
        printf("Aluno %d : %s , nota : %.2f\n" , i + 1 , nome[i] , nota[i]);
    }
}
