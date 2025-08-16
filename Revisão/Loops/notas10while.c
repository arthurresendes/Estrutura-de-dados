#include <stdio.h>
#include <string.h>

int main(){
    char nome[10][100];
    float nota[10];
    int i = 0;
    int j = 0;
    while(i < 10){
        printf("Digite o nome da pessoa %d: ", i +1);
        fgets(nome[i], sizeof(nome[i]),stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
        printf("Digite a nota do aluno %d: " , i + 1);
        scanf("%f" , &nota[i]);
        getchar();
        i++;
    }
    while(j < 10){
        printf("Aluno %d : %s , nota : %.2f\n" , j + 1 , nome[j] , nota[j]);
        j++;
    }
}
